#!/bin/bash -ex
# Copyright (c) 2017 BCMI LABS SA
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

ARDUINO_PREPROCESSOR_VERSION=`cat Config.hpp | grep VERSION | sed 's/[^"]*"\([^"]*\)".*/\1/'`

OUTPUT_VERSION=${ARDUINO_PREPROCESSOR_VERSION}

#
# Clean up workspace
# ------------------
#

rm -rf objdir arduino-preprocessor
mkdir objdir

#
# Detect OS and download LLVM
# ---------------------------
#

export OS=`uname -o || uname`
export TARGET_OS=$OS

function fetch_llvm {
  fetched=`basename $1`
  if [ ! -f "$fetched" ]; then
    wget "$1"
  fi
  if [ ! -f "$fetched.asc" ]; then
    wget "$1.asc"
  fi
  keyfile=$(mktemp --suffix=.gpg)
  gpg2 --yes -o "$keyfile" --dearmor "arduino_sources_gpg_pubkey.asc"
  gpg2 --status-fd 1 --no-default-keyring --keyring "$keyfile" --trust-model always --verify "$fetched.asc"
  rm "$keyfile"

  rm -rf clang
  mkdir clang
  tar xfv $fetched -C clang --strip-components=1
}

#if [[ $CROSS_COMPILE == "mingw" ]] ; then
#
#  export CC="i686-w64-mingw32-gcc"
#  export CXX="i686-w64-mingw32-g++"
#  export CROSS_COMPILE_HOST="i686-w64-mingw32"
#  export TARGET_OS="Windows"
#  OUTPUT_TAG=i686-w64-mingw32
#
if [[ $OS == "GNU/Linux" ]] ; then

  export MACHINE=`uname -m`
  if [[ $MACHINE == "x86_64" ]] ; then
    fetch_llvm https://github.com/cmaglie/llvm-clang-build-scripts/releases/download/4.0.0/llvm-clang-4.0.0-ubuntu-14.04.5-x86_64.tar.xz
    OUTPUT_TAG=x86_64-pc-linux-gnu
#  elif [[ $MACHINE == "i686" ]] ; then
#    OUTPUT_TAG=i686-pc-linux-gnu
#  elif [[ $MACHINE == "armv7l" ]] ; then
#    OUTPUT_TAG=armhf-pc-linux-gnu
  else
    echo Linux Machine not supported: $MACHINE
    exit 1
  fi
  CXXFLAGS=""
  CXX=clang/bin/clang++

elif [[ $OS == "Msys" || $OS == "Cygwin" ]] ; then

  OUTPUT_TAG=i686-pc-cygwin
  CXXFLAGS="-Wno-strict-aliasing"
  CXX=g++

  # This is a workaround for building with clang.exe (keeping here, just in case...)
  #GCC_VER=$(ls /usr/lib/gcc/$OUTPUT_TAG/)
  #GCC_INCLUDE="/usr/lib/gcc/$OUTPUT_TAG/$GCC_VER/include"
  #mkdir -p include/bits
  #cp $GCC_INCLUDE/c++/$OUTPUT_TAG/bits/c++config.h include/bits
  #sed -i "s/^#define _GLIBCXX_USE_FLOAT128 1$/\/\/#define _GLIBCXX_USE_FLOAT128 1/" include/bits/c++config.h
  #CXXFLAGS="-Iinclude -I$GCC_INCLUDE/c++ -I$GCC_INCLUDE/c++/$OUTPUT_TAG -I$GCC_INCLUDE/c++/backward -I$GCC_INCLUDE"

#elif [[ $OS == "Darwin" ]] ; then
#
#  export PATH=/opt/local/libexec/gnubin/:/opt/local/bin:$PATH
#  export CC="gcc -arch i386 -mmacosx-version-min=10.5"
#  export CXX="g++ -arch i386 -mmacosx-version-min=10.5"
#  OUTPUT_TAG=i386-apple-darwin11

else

  echo OS Not supported: $OS
  exit 2

fi

#
# Build arduino-preprocessor
# --------------------------
#

CXXFLAGS="`clang/bin/llvm-config --cxxflags` $CXXFLAGS"
LDFLAGS="`clang/bin/llvm-config --ldflags` -static-libstdc++"
LLVMLIBS=`clang/bin/llvm-config --libs --system-libs`
CLANGLIBS=`ls clang/lib/libclang*.a | sed s/.*libclang/-lclang/ | sed s/.a$//`
SOURCES="main.cpp ArduinoDiagnosticConsumer.cpp CommandLine.cpp IdentifiersList.cpp CodeCompletion.cpp"
$CXX $SOURCES -o objdir/arduino-preprocessor $CXXFLAGS $LDFLAGS -Wl,--start-group $LLVMLIBS $CLANGLIBS -Wl,--end-group
strip objdir/*

rm -f arduino-preprocessor-${OUTPUT_VERSION}-${OUTPUT_TAG}.tar.bz2
mv objdir arduino-preprocessor
tar -cjvf arduino-preprocessor-${OUTPUT_VERSION}-${OUTPUT_TAG}.tar.bz2 arduino-preprocessor

