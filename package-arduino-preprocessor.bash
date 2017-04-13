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

# TODO: Fetch this from somewhere in the source code
ARDUINO_PREPROCESSOR_VERSION=0.0.1

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
  wget -N "$1"
  wget -N "$1.sig"
  fetched=`basename $1`
  keyfile=$(mktemp --suffix=.gpg)
  gpg2 --yes -o "$keyfile" --dearmor "hans-gpg-key.asc"
  gpg2 --status-fd 1 --no-default-keyring --keyring "$keyfile" --trust-model always --verify "$fetched.sig"
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
    #fetch_llvm http://releases.llvm.org/4.0.0/clang+llvm-4.0.0-x86_64-linux-gnu-ubuntu-16.04.tar.xz
    OUTPUT_TAG=x86_64-pc-linux-gnu
#  elif [[ $MACHINE == "i686" ]] ; then
#    OUTPUT_TAG=i686-pc-linux-gnu
#  elif [[ $MACHINE == "armv7l" ]] ; then
#    OUTPUT_TAG=armhf-pc-linux-gnu
  else
    echo Linux Machine not supported: $MACHINE
    exit 1
  fi

#elif [[ $OS == "Msys" || $OS == "Cygwin" ]] ; then
#
#  export PATH=$PATH:/c/MinGW/bin/:/c/cygwin/bin/
#  export CC="mingw32-gcc -m32"
#  export CXX="mingw32-g++ -m32"
#  export CFLAGS="-DWIN32 -D__USE_MINGW_ACCESS"
#  export CXXFLAGS="-DWIN32"
#  export LDFLAGS="-DWIN32"
#  export MAKE_JOBS=1
#  OUTPUT_TAG=i686-mingw32
#
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

CXX=clang/bin/clang++
CXXFLAGS=`clang/bin/llvm-config --cxxflags`
LDFLAGS=`clang/bin/llvm-config --ldflags`
LLVMLIBS=`clang/bin/llvm-config --libs --system-libs`
CLANGLIBS=`ls clang/lib/libclang*.a | sed s/.*libclang/-lclang/ | sed s/.a$//`
SOURCES="main.cpp CommandLine.cpp"
$CXX $SOURCES -o objdir/arduino-preprocessor $CXXFLAGS $LDFLAGS -Wl,--start-group $LLVMLIBS $CLANGLIBS -Wl,--end-group

rm -f arduino-preprocessor-${OUTPUT_VERSION}-${OUTPUT_TAG}.tar.bz2
mv objdir arduino-preprocessor
tar -cjvf arduino-preprocessor-${OUTPUT_VERSION}-${OUTPUT_TAG}.tar.bz2 arduino-preprocessor

