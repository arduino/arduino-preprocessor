// Blink.ino compiled for SAMD

# 1 "/tmp/arduino_build_506352/sketch/Blink.ino.cpp"
# 1 "/home/megabug/Code/arduino/build//"
# 1 "<command-line>"
# 1 "/tmp/arduino_build_506352/sketch/Blink.ino.cpp"
# 1 "/home/megabug/Code/arduino/build/linux/work/examples/01.Basics/Blink/Blink.ino"
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2014 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stdbool.h" 1 3 4
/* Copyright (C) 1998-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.16  Boolean type and values  <stdbool.h>
 */
# 39 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stdbool.h" 3 4
/* Supporting <stdbool.h> in C++ is a GCC extension.  */







/* Signal that all the definitions are present.  */
# 24 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stdint.h" 1 3 4
# 9 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stdint.h" 3 4
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 1 3 4
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 1 3 4
/*
 *  $Id$
 */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */





extern "C" {


/* Macro to test version of GCC.  Returns 0 for non-GCC or too old GCC. */
# 37 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 3 4
/* Version with trailing underscores for BSD compatibility. */


/* RTEMS adheres to POSIX -- 1003.1b with some features from annexes.  */
# 93 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 3 4
/* XMK loosely adheres to POSIX -- 1003.1 */
# 207 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 3 4
/* Per the permission given in POSIX.1-2008 section 2.2.1, define
 * _POSIX_C_SOURCE if _XOPEN_SOURCE is defined and _POSIX_C_SOURCE is not.
 * (_XOPEN_SOURCE indicates that XSI extensions are desired by an application.)
 * This permission is first granted in 2008, but use it for older ones, also.
 * Allow for _XOPEN_SOURCE to be empty (from the earliest form of it, before it
 * was required to have specific values).
 */
# 227 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 3 4
}
# 9 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 2 3 4

/*
 * Guess on types by examining *_MIN / *_MAX defines.
 */

/* GCC >= 3.3.0 has __<val>__ implicitly defined. */
# 23 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
extern "C" {



typedef signed char __int8_t;
typedef unsigned char __uint8_t;
# 37 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int16_t;
typedef short unsigned int __uint16_t;
# 55 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;
typedef long unsigned int __uint32_t;
# 77 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;
typedef long long unsigned int __uint64_t;
# 104 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;
typedef unsigned char __uint_least8_t;
# 126 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;
typedef short unsigned int __uint_least16_t;
# 144 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;
typedef long unsigned int __uint_least32_t;
# 158 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;
typedef long long unsigned int __uint_least64_t;
# 168 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef int __intptr_t;
typedef unsigned int __uintptr_t;
# 181 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 3 4
}
# 13 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 2 3 4


extern "C" {



/* gcc > 3.2 implicitly defines the values we are interested */






/* Check if "long long" is 64bit wide */
/* Modern GCCs provide __LONG_LONG_MAX__, SUSv3 wants LLONG_MAX */





/* Check if "long" is 64bit or 32bit wide */







typedef __int8_t int8_t ;
typedef __uint8_t uint8_t ;




typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int16_t int16_t ;
typedef __uint16_t uint16_t ;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int32_t int32_t ;
typedef __uint32_t uint32_t ;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int64_t int64_t ;
typedef __uint64_t uint64_t ;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;



/*
 * Fastest minimum-width integer types
 *
 * Assume int to be the fastest type for all types with a width 
 * less than __INT_MAX__ rsp. INT_MAX
 */

  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
# 105 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
# 115 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 125 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;







/*
 * Fall back to [u]int_least<N>_t for [u]int_fast<N>_t types
 * not having been defined, yet.
 * Leave undefined, if [u]int_least<N>_t should not be available.
 */
# 171 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
/* Greatest-width integer types */
/* Modern GCCs provide __INTMAX_TYPE__ */

  typedef long long int intmax_t;






/* Modern GCCs provide __UINTMAX_TYPE__ */

  typedef long long unsigned int uintmax_t;






typedef __intptr_t intptr_t;
typedef __uintptr_t uintptr_t;
# 215 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
/* Limits of Specified-Width Integer Types */
# 407 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
/* This must match size_t in stddef.h, currently long unsigned int */






/* This must match sig_atomic_t in <signal.h> (currently int) */



/* This must match ptrdiff_t  in <stddef.h> (currently long int) */
# 433 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
/* wint_t is unsigned int on almost all GCC targets.  */
# 445 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
/** Macros for minimum-width integer constant expressions */
# 498 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
/** Macros for greatest-width integer constant expression */
# 514 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdint.h" 3 4
}
# 10 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stdint.h" 2 3 4
# 25 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/ieeefp.h" 1 3



/* This file can define macros to choose variations of the IEEE float
   format:

   _FLT_LARGEST_EXPONENT_IS_NORMAL

	Defined if the float format uses the largest exponent for finite
	numbers rather than NaN and infinity representations.  Such a
	format cannot represent NaNs or infinities at all, but it's FLT_MAX
	is twice the IEEE value.

   _FLT_NO_DENORMALS

	Defined if the float format does not support IEEE denormals.  Every
	float with a zero exponent is taken to be a zero representation.
 
   ??? At the moment, there are no equivalent macros above for doubles and
   the macros are not fully supported by --enable-newlib-hw-fp.

   __IEEE_BIG_ENDIAN

        Defined if the float format is big endian.  This is mutually exclusive
        with __IEEE_LITTLE_ENDIAN.

   __IEEE_LITTLE_ENDIAN
 
        Defined if the float format is little endian.  This is mutually exclusive
        with __IEEE_BIG_ENDIAN.

   Note that one of __IEEE_BIG_ENDIAN or __IEEE_LITTLE_ENDIAN must be specified for a
   platform or error will occur.

   __IEEE_BYTES_LITTLE_ENDIAN

        This flag is used in conjunction with __IEEE_BIG_ENDIAN to describe a situation 
	whereby multiple words of an IEEE floating point are in big endian order, but the
	words themselves are little endian with respect to the bytes.

   _DOUBLE_IS_32BITS 

        This is used on platforms that support double by using the 32-bit IEEE
        float type.

   _FLOAT_ARG

        This represents what type a float arg is passed as.  It is used when the type is
        not promoted to double.
	
*/


/* ARM traditionally used big-endian words; and within those words the
   byte ordering was big or little endian depending upon the target.
   Modern floating-point formats are naturally ordered; in this case
   __VFP_FP__ will be defined, even if soft-float.  */
# 217 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/ieeefp.h" 3
/* necv70 was __IEEE_LITTLE_ENDIAN. */
# 11 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/newlib.h" 1 3
/* newlib.h.  Generated from newlib.hin by configure.  */
/* newlib.hin.  Manually edited from the output of autoheader to
   remove all PACKAGE_ macros which will collide with any user
   package using newlib header files and having its own package name,
   version, etc...  */




/* EL/IX level */
/* #undef _ELIX_LEVEL */

/* Newlib version */


/* C99 formats support (such as %a, %zu, ...) in IO functions like
 * printf/scanf enabled */
/* #undef _WANT_IO_C99_FORMATS */

/* long long type support in IO functions like printf/scanf enabled */


/* Register application finalization function using atexit. */


/* long double type support in IO functions like printf/scanf enabled */
/* #undef _WANT_IO_LONG_DOUBLE */

/* Positional argument support in printf functions enabled.  */
/* #undef _WANT_IO_POS_ARGS */

/* Optional reentrant struct support.  Used mostly on platforms with
   very restricted storage.  */
/* #undef _WANT_REENT_SMALL */

/* Multibyte supported */
/* #undef _MB_CAPABLE */

/* MB_LEN_MAX */


/* ICONV enabled */
/* #undef _ICONV_ENABLED */

/* Enable ICONV external CCS files loading capabilities */
/* #undef _ICONV_ENABLE_EXTERNAL_CCS */

/* Define if the linker supports .preinit_array/.init_array/.fini_array
 * sections.  */


/* True if atexit() may dynamically allocate space for cleanup
   functions.  */


/* True if long double supported.  */


/* Define if compiler supports -fno-tree-loop-distribute-patterns. */


/* True if long double supported and it is equal to double.  */


/* Define if ivo supported in streamio.  */


/* Define if fseek functions support seek optimization.  */


/* Define if wide char orientation is supported.  */


/* Define if unbuffered stream file optimization is supported.  */


/* Define if lite version of exit supported.  */
/* #undef _LITE_EXIT */

/* Define if declare atexit data as global.  */
/* #undef _REENT_GLOBAL_ATEXIT */

/*
 * Iconv encodings enabled ("to" direction)
 */
/* #undef _ICONV_TO_ENCODING_BIG5 */
/* #undef _ICONV_TO_ENCODING_CP775 */
/* #undef _ICONV_TO_ENCODING_CP850 */
/* #undef _ICONV_TO_ENCODING_CP852 */
/* #undef _ICONV_TO_ENCODING_CP855 */
/* #undef _ICONV_TO_ENCODING_CP866 */
/* #undef _ICONV_TO_ENCODING_EUC_JP */
/* #undef _ICONV_TO_ENCODING_EUC_TW */
/* #undef _ICONV_TO_ENCODING_EUC_KR */
/* #undef _ICONV_TO_ENCODING_ISO_8859_1 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_10 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_11 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_13 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_14 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_15 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_2 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_3 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_4 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_5 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_6 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_7 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_8 */
/* #undef _ICONV_TO_ENCODING_ISO_8859_9 */
/* #undef _ICONV_TO_ENCODING_ISO_IR_111 */
/* #undef _ICONV_TO_ENCODING_KOI8_R */
/* #undef _ICONV_TO_ENCODING_KOI8_RU */
/* #undef _ICONV_TO_ENCODING_KOI8_U */
/* #undef _ICONV_TO_ENCODING_KOI8_UNI */
/* #undef _ICONV_TO_ENCODING_UCS_2 */
/* #undef _ICONV_TO_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_2BE */
/* #undef _ICONV_TO_ENCODING_UCS_2LE */
/* #undef _ICONV_TO_ENCODING_UCS_4 */
/* #undef _ICONV_TO_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_TO_ENCODING_UCS_4BE */
/* #undef _ICONV_TO_ENCODING_UCS_4LE */
/* #undef _ICONV_TO_ENCODING_US_ASCII */
/* #undef _ICONV_TO_ENCODING_UTF_16 */
/* #undef _ICONV_TO_ENCODING_UTF_16BE */
/* #undef _ICONV_TO_ENCODING_UTF_16LE */
/* #undef _ICONV_TO_ENCODING_UTF_8 */
/* #undef _ICONV_TO_ENCODING_WIN_1250 */
/* #undef _ICONV_TO_ENCODING_WIN_1251 */
/* #undef _ICONV_TO_ENCODING_WIN_1252 */
/* #undef _ICONV_TO_ENCODING_WIN_1253 */
/* #undef _ICONV_TO_ENCODING_WIN_1254 */
/* #undef _ICONV_TO_ENCODING_WIN_1255 */
/* #undef _ICONV_TO_ENCODING_WIN_1256 */
/* #undef _ICONV_TO_ENCODING_WIN_1257 */
/* #undef _ICONV_TO_ENCODING_WIN_1258 */

/*
 * Iconv encodings enabled ("from" direction)
 */
/* #undef _ICONV_FROM_ENCODING_BIG5 */
/* #undef _ICONV_FROM_ENCODING_CP775 */
/* #undef _ICONV_FROM_ENCODING_CP850 */
/* #undef _ICONV_FROM_ENCODING_CP852 */
/* #undef _ICONV_FROM_ENCODING_CP855 */
/* #undef _ICONV_FROM_ENCODING_CP866 */
/* #undef _ICONV_FROM_ENCODING_EUC_JP */
/* #undef _ICONV_FROM_ENCODING_EUC_TW */
/* #undef _ICONV_FROM_ENCODING_EUC_KR */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_1 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_10 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_11 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_13 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_14 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_15 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_2 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_3 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_4 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_5 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_6 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_7 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_8 */
/* #undef _ICONV_FROM_ENCODING_ISO_8859_9 */
/* #undef _ICONV_FROM_ENCODING_ISO_IR_111 */
/* #undef _ICONV_FROM_ENCODING_KOI8_R */
/* #undef _ICONV_FROM_ENCODING_KOI8_RU */
/* #undef _ICONV_FROM_ENCODING_KOI8_U */
/* #undef _ICONV_FROM_ENCODING_KOI8_UNI */
/* #undef _ICONV_FROM_ENCODING_UCS_2 */
/* #undef _ICONV_FROM_ENCODING_UCS_2_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_2BE */
/* #undef _ICONV_FROM_ENCODING_UCS_2LE */
/* #undef _ICONV_FROM_ENCODING_UCS_4 */
/* #undef _ICONV_FROM_ENCODING_UCS_4_INTERNAL */
/* #undef _ICONV_FROM_ENCODING_UCS_4BE */
/* #undef _ICONV_FROM_ENCODING_UCS_4LE */
/* #undef _ICONV_FROM_ENCODING_US_ASCII */
/* #undef _ICONV_FROM_ENCODING_UTF_16 */
/* #undef _ICONV_FROM_ENCODING_UTF_16BE */
/* #undef _ICONV_FROM_ENCODING_UTF_16LE */
/* #undef _ICONV_FROM_ENCODING_UTF_8 */
/* #undef _ICONV_FROM_ENCODING_WIN_1250 */
/* #undef _ICONV_FROM_ENCODING_WIN_1251 */
/* #undef _ICONV_FROM_ENCODING_WIN_1252 */
/* #undef _ICONV_FROM_ENCODING_WIN_1253 */
/* #undef _ICONV_FROM_ENCODING_WIN_1254 */
/* #undef _ICONV_FROM_ENCODING_WIN_1255 */
/* #undef _ICONV_FROM_ENCODING_WIN_1256 */
/* #undef _ICONV_FROM_ENCODING_WIN_1257 */
/* #undef _ICONV_FROM_ENCODING_WIN_1258 */
# 16 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 1 3



# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 5 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 6 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 2 3





/* exceptions first */







/* 16 bit integer machines */
# 112 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 3
/* For the PowerPC eabi, force the _impure_ptr to be in .sdata */
# 122 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 3
/* Configure small REENT structure for Xilinx MicroBlaze platforms */
# 184 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 3
/* This block should be kept in sync with GCC's limits.h.  The point
   of having these definitions here is to not include limits.h, which
   would pollute the user namespace, while still using types of the
   the correct widths when deciding how to define __int32_t and
   __int64_t.  */
# 209 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 3
/* End of block that should be kept in sync with GCC's limits.h.  */
# 247 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 3
/* Define return type of read/write routines.  In POSIX, the return type
   for read()/write() is "ssize_t" but legacy newlib code has been using
   "int" for some time.  If not specified, "int" is defaulted.  */



/* Define `count' parameter of read/write routines.  In POSIX, the `count'
   parameter is "size_t" but legacy newlib code has been using "int" for some
   time.  If not specified, "int" is defaulted.  */
# 266 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/config.h" 3
/* See if small reent asked for at configuration time and
   is not chosen by the platform by default.  */






/* If _MB_EXTENDED_CHARSETS_ALL is set, we want all of the extended
   charsets.  The extended charsets add a few functions and a couple
   of tables of a few K each. */
# 17 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 2 3

/* First try to figure out whether we really are in an ANSI C environment.  */
/* FIXME: This probably needs some work.  Perhaps sys/config.h can be
   prevailed upon to give us a clue.  */





/*  ISO C++.  */
# 102 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 3
/* Support gcc's __attribute__ facility.  */







/*  The traditional meaning of 'extern inline' for GCC is not
  to emit the function body unless the address is explicitly
  taken.  However this behaviour is changing to match the C99
  standard, which uses 'extern inline' to indicate that the
  function body *must* be emitted.  Likewise, a function declared
  without either 'extern' or 'static' defaults to extern linkage
  (C99 6.2.2p5), and the compiler may choose whether to use the
  inline version or call the extern linkage version (6.7.4p6).
  If we are using GCC, but do not have the new behaviour, we need
  to use extern inline; if we are using a new GCC with the
  C99-compatible behaviour, or a non-GCC compiler (which we will
  have to hope is C99, since there is no other way to achieve the
  effect of omitting the function if it isn't referenced) we use
  'static inline', which c99 defines to mean more-or-less the same
  as the Gnu C 'extern inline'.  */




/* We're using GCC in C99 mode, or an unknown compiler which
  we just have to hope obeys the C99 semantics of inline.  */
# 12 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 2 3




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 162 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 212 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
typedef unsigned int size_t;
# 238 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 279 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */
# 306 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* FreeBSD 5 can't be handled well using "traditional" logic above
   since it no longer defines _BSD_RUNE_T_ yet still desires to export
   rune_t in some cases... */
# 358 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* A null pointer constant.  */
# 17 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 2 3

# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */



extern "C" {



# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 14 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */





/* snaroff@next.com says the NeXT needs this.  */




/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 147 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 157 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */






/* Type whose alignment is supported in every context and is at least
   as great as that of any standard type not using alignment
   specifiers.  */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 15 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/_types.h" 1 3
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  This file lives in the `sys' directory so targets can provide
   their own if desired (or they can put target dependant conditionals here).
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_types.h" 1 3
/*
 *  $Id$
 */



# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 1 3
/*
 *  $Id$
 */
# 8 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_types.h" 2 3
# 13 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/_types.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/lock.h" 1 3



/* dummy lock routines for single-threaded aps */

typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;

# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 10 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/lock.h" 2 3
# 14 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/_types.h" 2 3


typedef long _off_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



__extension__ typedef long long _off64_t;


/*
 * We need fpos_t for the following, but it doesn't have a leading "_",
 * so we use _fpos_t instead.
 */

typedef long _fpos_t; /* XXX must match off_t in <sys/types.h> */
    /* (and must be `long' for now) */
# 51 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/_types.h" 3
/* If __SIZE_TYPE__ is defined (gcc) we define ssize_t based on size_t.
   We simply change "unsigned" to "signed" for this single definition
   to make sure ssize_t and size_t only differ by their signedness. */

typedef signed int _ssize_t;
# 67 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/_types.h" 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 353 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
typedef unsigned int wint_t;




/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 68 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/_types.h" 2 3


/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value; /* Value so far.  */
} _mbstate_t;



typedef _LOCK_RECURSIVE_T _flock_t;



/* Iconv descriptor type */
typedef void *_iconv_t;
# 16 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 38 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
struct _reent;

/*
 * If _REENT_SMALL is defined, we make struct _reent as small as possible,
 * by having nearly everything possible allocated at first use.
 */

struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};

/* needed by reentrant structure */
struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};

/*
 * atexit() support.
 */



struct _on_exit_args {
 void * _fnargs[32 /* must be at least 32 to guarantee ANSI conformance */]; /* user fn args */
 void * _dso_handle[32 /* must be at least 32 to guarantee ANSI conformance */];
 /* Bitmask is set if user function takes arguments.  */
 __ULong _fntypes; /* type of exit routine -
				   Must have at least _ATEXIT_SIZE bits */
 /* Bitmask is set if function was registered via __cxa_atexit.  */
 __ULong _is_cxa;
};
# 91 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next; /* next in list */
 int _ind; /* next index in this table */
 /* Some entries may already have been called, and will be NULL.  */
 void (*_fns[32 /* must be at least 32 to guarantee ANSI conformance */])(void); /* the table itself */
        struct _on_exit_args _on_exit_args;
};
# 108 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
/*
 * Stdio buffers.
 *
 * This and __FILE are defined here because we need them for struct _reent,
 * but we don't want stdio.h included when stdlib.h is.
 */

struct __sbuf {
 unsigned char *_base;
 int _size;
};

/*
 * Stdio state variables.
 *
 * The following always hold:
 *
 *	if (_flags&(__SLBF|__SWR)) == (__SLBF|__SWR),
 *		_lbfsize is -_bf._size, else _lbfsize is 0
 *	if _flags&__SRD, _w is 0
 *	if _flags&__SWR, _r is 0
 *
 * This ensures that the getc and putc macros (or inline functions) never
 * try to write or read from a file that is in `read' or `write' mode.
 * (Moreover, they can, and do, automatically switch from read mode to
 * write mode, and back, on "r+" and "w+" files.)
 *
 * _lbfsize is used only to make the inline line-buffered output stream
 * code as compact as possible.
 *
 * _ub, _up, and _ur are used when ungetc() pushes back more characters
 * than fit in the current _bf, or when ungetc() pushes back a character
 * that does not match the previous one in _bf.  When this happens,
 * _ub._base becomes non-nil (i.e., a stream has ungetc() data iff
 * _ub._base!=NULL) and _up and _ur save the current values of _p and _r.
 */
# 179 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p; /* current position in (some) buffer */
  int _r; /* read space left for getc() */
  int _w; /* write space left for putc() */
  short _flags; /* flags, below; this FILE is free if 0 */
  short _file; /* fileno, if Unix descriptor, else -1 */
  struct __sbuf _bf; /* the buffer (at least 1 byte, if !NULL) */
  int _lbfsize; /* 0 or -_bf._size, for inline putc */





  /* operations */
  void * _cookie; /* cookie passed to io functions */

  int (* _read) (struct _reent *, void *, char *, int)
                                          ;
  int (* _write) (struct _reent *, void *, const char *, int)

                                   ;
  _fpos_t (* _seek) (struct _reent *, void *, _fpos_t, int);
  int (* _close) (struct _reent *, void *);

  /* separate buffer for long sequences of ungetc() */
  struct __sbuf _ub; /* ungetc buffer */
  unsigned char *_up; /* saved _p when _p is doing ungetc data */
  int _ur; /* saved _r when _r is counting ungetc data */

  /* tricks to meet minimum requirements even when malloc() fails */
  unsigned char _ubuf[3]; /* guarantee an ungetc() buffer */
  unsigned char _nbuf[1]; /* guarantee a getc() buffer */

  /* separate buffer for fgetline() when line crosses buffer boundary */
  struct __sbuf _lb; /* buffer for fgetline() */

  /* Unix stdio files get aligned to block boundaries on fseek() */
  int _blksize; /* stat.st_blksize (may be != _bf._size) */
  _off_t _offset; /* current lseek offset */


  struct _reent *_data; /* Here for binary compatibility? Remove? */



  _flock_t _lock; /* for thread-safety locking */

  _mbstate_t _mbstate; /* for wide char stdio functions. */
  int _flags2; /* for future use */
};
# 285 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

/*
 * rand48 family support
 *
 * Copyright (c) 1993 Martin Birgmeier
 * All rights reserved.
 *
 * You may redistribute unmodified or modified versions of this source
 * code provided that the above copyright notice and this and the
 * following conditions are retained.
 *
 * This software is provided ``as is'', and comes with no warranties
 * of any kind. I shall in no event be liable for anything that happens
 * to anyone/anything when using this software.
 */







struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};

/* How big the some arrays are.  */




/*
 * struct _reent
 *
 * This structure contains *all* globals needed by the library.
 * It's raison d'etre is to facilitate threads by making all library routines
 * reentrant.  IE: All state information is contained here.
 */
# 569 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno; /* local copy of errno */

  /* FILE is a big struct and may change over time.  To try to achieve binary
     compatibility with future versions, put stdin,stdout,stderr here.
     These are pointers into member __sf defined below.  */
  __FILE *_stdin, *_stdout, *_stderr;

  int _inc; /* used by tmpnam */
  char _emergency[25];

  int _current_category; /* used by setlocale */
  const char *_current_locale;

  int __sdidinit; /* 1 means stdio has been init'd */

  void (* __cleanup) (struct _reent *);

  /* used by mprec routines */
  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;

  /* used by some fp conversion routines */
  int _cvtlen; /* should be size_t */
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;
  /* Two next two fields were once used by malloc.  They are no longer
     used. They are used to preserve the space used before so as to
     allow addition of new reent fields and keep binary compatibility.   */
      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;


  /* atexit stuff */
  struct _atexit *_atexit; /* points to head of LIFO stack */
  struct _atexit _atexit0; /* one guaranteed table, required by ANSI */


  /* signal info */
  void (**(_sig_func))(int);

  /* These are here last so that __FILE can grow without changing the offsets
     of the above members (on the off chance that future binary compatibility
     would be broken otherwise).  */
  struct _glue __sglue; /* root of glue chain */
  __FILE __sf[3]; /* first three file descriptors */
};
# 748 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
/* This value is used in stdlib/misc.c.  reent/reent.c has to know it
   as well to make sure the freelist is correctly free'd.  Therefore
   we define it here, rather than in stdlib/misc.c, as before. */


/*
 * All references to struct _reent are via this pointer.
 * Internally, newlib routines that need to reference it should use _REENT.
 */





extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);

/* #define _REENT_ONLY define this to get only reentrant routines */
# 788 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 3
}
# 19 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/stdlib.h" 1 3



/* place holder so platforms may add stdlib.h extensions */
# 20 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 2 3

# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/alloca.h" 1 3
/* libc/include/alloca.h - Allocate memory on stack */

/* Written 2000 by Werner Almesberger */
/* Rearranged for general inclusion by stdlib.h.
   2001, Corinna Vinschen <vinschen@redhat.com> */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 11 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/alloca.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 12 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/alloca.h" 2 3
# 22 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 2 3






extern "C" {

typedef struct
{
  int quot; /* quotient */
  int rem; /* remainder */
} div_t;

typedef struct
{
  long quot; /* quotient */
  long rem; /* remainder */
} ldiv_t;




typedef struct
{
  long long int quot; /* quotient */
  long long int rem; /* remainder */
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((noreturn));
int abs (int);
int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar)



                                ;
void * calloc (size_t __nmemb, size_t __size) __attribute__ ((nothrow));
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((noreturn));
void free (void *) __attribute__ ((nothrow));
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg; /* getsubopt(3) external variable */
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size) __attribute__ ((nothrow));
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *__restrict, const char *__restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *__restrict, const char *__restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *__restrict, const char *__restrict, size_t, _mbstate_t *);
size_t wcstombs (char *__restrict, const wchar_t *__restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *__restrict, const wchar_t *__restrict, size_t, _mbstate_t *);


char * mkdtemp (char *);
int mkostemp (char *, int);
int mkostemps (char *, int, int);
int mkstemp (char *);
int mkstemps (char *, int);
char * mktemp (char *) __attribute__ ((__warning__ ("the use of `mktemp' is dangerous; use `mkstemp' instead")));

char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__warning__ ("the use of `mktemp' is dangerous; use `mkstemp' instead")));

void qsort (void * __base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void * realloc (void * __r, size_t __size) __attribute__ ((nothrow));

void * reallocf (void * __r, size_t __size);
char * realpath (const char *__restrict path, char *__restrict resolved_path);

void srand (unsigned __seed);
double strtod (const char *__restrict __n, char **__restrict __end_PTR);
double _strtod_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR);

float strtof (const char *__restrict __n, char **__restrict __end_PTR);


/* the following strtodf interface is deprecated...use strtof instead */




long strtol (const char *__restrict __n, char **__restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long strtoul (const char *__restrict __n, char **__restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *__restrict __n, char **__restrict __end_PTR, int __base);

int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);
int on_exit (void (*__func)(int, void *),void * __arg);
void _Exit (int __status) __attribute__ ((noreturn));
int putenv (char *__string);
int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);
int setenv (const char *__string, const char *__value, int __overwrite);
int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);

char * gcvt (double,int,char *);
char * gcvtf (float,int,char *);
char * fcvt (double,int,int *,int *);
char * fcvtf (float,int,int *,int *);
char * ecvt (double,int,int *,int *);
char * ecvtbuf (double, int, int*, int*, char *);
char * fcvtbuf (double, int, int*, int*, char *);
char * ecvtf (float,int,int *,int *);
char * dtoa (double, int, int, int *, int*, char**);
int rand_r (unsigned *__seed);

double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);
long long atoll (const char *__nptr);
long long _atoll_r (struct _reent *, const char *__nptr);
long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);


long long strtoll (const char *__restrict __n, char **__restrict __end_PTR, int __base);


long long _strtoll_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);


unsigned long long strtoull (const char *__restrict __n, char **__restrict __end_PTR, int __base);


unsigned long long _strtoull_r (struct _reent *, const char *__restrict __n, char **__restrict __end_PTR, int __base);


void cfree (void *);
int unsetenv (const char *__string);
int _unsetenv_r (struct _reent *, const char *__string);
# 221 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 3
char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) __attribute__ ((nothrow));
void * _calloc_r (struct _reent *, size_t, size_t) __attribute__ ((nothrow));
void _free_r (struct _reent *, void *) __attribute__ ((nothrow));
void * _realloc_r (struct _reent *, void *, size_t) __attribute__ ((nothrow));
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);

/* On platforms where long double equals double.  */


extern long double strtold (const char *__restrict, char **__restrict);



}
# 26 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 1 3
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 11 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 12 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 1 3 4
/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/home/cmaglie/toolchain/gcc-arm-none-eabi-4_8-2014q1-20140314/install-native/arm-none-eabi/usr/include/sys/cdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/* libc/sys/linux/sys/cdefs.h - Helper macros for K&R vs. ANSI C compat. */

/* Written 2000 by Werner Almesberger */

/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Berkeley Software Design, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)cdefs.h	8.8 (Berkeley) 1/9/95
 * $FreeBSD$
 */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_default_types.h" 1 3 4
/*
 *  $Id$
 */
# 53 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 2 3 4
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 1 3 4
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 54 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 2 3 4
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 55 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 2 3 4
# 78 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Testing against Clang-specific extensions.
 */
# 103 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * This code has been put in place to help reduce the addition of
 * compiler specific defines in FreeBSD code.  It helps to aid in
 * having a compiler-agnostic source tree.
 */
# 141 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Compiler memory barriers, specific to gcc and clang.
 */
# 155 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/* XXX: if __GNUC__ >= 2: not tested everywhere originally, where replaced */
# 169 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * The __CONCAT macro is used to concatenate parts of symbol names, e.g.
 * with "#define OLD(foo) __CONCAT(old,foo)", OLD(foo) produces oldfoo.
 * The __CONCAT macro is a bit tricky to use if it must work in non-ANSI
 * mode -- there must be no spaces between its arguments, and for nested
 * __CONCAT's, all the __CONCAT's must be at the left.  __CONCAT can also
 * concatenate double-quoted strings produced by the __STRING macro, but
 * this only works with ANSI C.
 *
 * __XSTRING is like __STRING, but it expands any macros in its argument
 * first.  It is only available with ANSI C.
 */
# 226 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Compiler-dependent macros to help declare dead (non-returning) and
 * pure (no side effects) functions, and unused variables.  They are
 * null except for versions of gcc that are known to support the features
 * properly (old versions of gcc-2 supported the dead and pure features
 * in a different (wrong) way).  If we do not provide an implementation
 * for a given compiler, let the compile fail if it is told to use
 * a feature that we cannot live without.
 */
# 278 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Keywords added in C11.
 */
# 301 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * No native support for _Atomic(). Place object in structure to prevent
 * most forms of direct non-atomic access.
 */
# 330 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/* XXX: Change this to test against C++11 when clang in base supports it. */
# 341 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Emulation of C11 _Generic().  Unlike the previously defined C11
 * keywords, it is not possible to implement this using exactly the same
 * syntax.  Therefore implement something similar under the name
 * __generic().  Unlike _Generic(), this macro can only distinguish
 * between a single type, so it requires nested invocations to
 * distinguish multiple cases.
 */
# 397 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/* XXX: should use `#if __STDC_VERSION__ < 199901'. */




/*
 * GCC 2.95 provides `__restrict' as an extension to C90 to support the
 * C99-specific `restrict' type qualifier.  We happen to use `__restrict' as
 * a way to define the `restrict' type qualifier without disturbing older
 * software that is unaware of C99 keywords.
 */
# 416 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * GNU C version 2.96 adds explicit branch prediction so that
 * the CPU back-end can hint the processor and also so that
 * code blocks can be reordered such that the predicted path
 * sees a more linear flow, thus improving cache behavior, etc.
 *
 * The following two macros provide us with a way to utilize this
 * compiler feature.  Use __predict_true() if you expect the expression
 * to evaluate to true, and __predict_false() if you expect the
 * expression to evaluate to false.
 *
 * A few notes about usage:
 *
 *	* Generally, __predict_false() error condition checks (unless
 *	  you have some _strong_ reason to do otherwise, in which case
 *	  document it), and/or __predict_true() `no-error' condition
 *	  checks, assuming you want to optimize for the no-error case.
 *
 *	* Other than that, if you don't know the likelihood of a test
 *	  succeeding from empirical or other `hard' evidence, don't
 *	  make predictions.
 *
 *	* These are meant to be used in places that are run `a lot'.
 *	  It is wasteful to make predictions in code that is run
 *	  seldomly (e.g. at subsystem initialization time) as the
 *	  basic block reordering that this affects can often generate
 *	  larger code.
 */
# 464 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Given the pointer x to the member m of the struct s, return
 * a pointer to the containing structure.  When using GCC, we first
 * assign pointer x to a local variable, to check that its type is
 * compatible with member m.
 */
# 480 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Compiler-dependent macros to declare that functions take printf-like
 * or scanf-like arguments.  They are null except for versions of gcc
 * that are known to support the features properly (old versions of gcc-2
 * didn't permit keeping the keywords out of the application namespace).
 */
# 504 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/* Compiler-dependent macros that rely on FreeBSD-specific extensions. */
# 595 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*-
 * The following definitions are an extension of the behavior originally
 * implemented in <sys/_posix.h>, but with a different level of granularity.
 * POSIX.1 requires that the macros we test be defined before any standard
 * header file is included.
 *
 * Here's a quick run-down of the versions:
 *  defined(_POSIX_SOURCE)		1003.1-1988
 *  _POSIX_C_SOURCE == 1		1003.1-1990
 *  _POSIX_C_SOURCE == 2		1003.2-1992 C Language Binding Option
 *  _POSIX_C_SOURCE == 199309		1003.1b-1993
 *  _POSIX_C_SOURCE == 199506		1003.1c-1995, 1003.1i-1995,
 *					and the omnibus ISO/IEC 9945-1: 1996
 *  _POSIX_C_SOURCE == 200112		1003.1-2001
 *  _POSIX_C_SOURCE == 200809		1003.1-2008
 *
 * In addition, the X/Open Portability Guide, which is now the Single UNIX
 * Specification, defines a feature-test macro which indicates the version of
 * that specification, and which subsumes _POSIX_C_SOURCE.
 *
 * Our macros begin with two underscores to avoid namespace screwage.
 */

/* Deal with IEEE Std. 1003.1-1990, in which _POSIX_C_SOURCE == 1. */





/* Deal with IEEE Std. 1003.2-1992, in which _POSIX_C_SOURCE == 2. */





/* Deal with various X/Open Portability Guides and Single UNIX Spec. */
# 647 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*
 * Deal with all versions of POSIX.  The ordering relative to the tests above is
 * important.
 */
# 678 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include-fixed/sys/cdefs.h" 3 4
/*-
 * Deal with _ANSI_SOURCE:
 * If it is defined, and no other compilation environment is explicitly
 * requested, then define our internal feature-test macros to zero.  This
 * makes no difference to the preprocessor (undefined symbols in preprocessing
 * expressions are defined to have value zero), but makes it more convenient for
 * a test program to print out the values.
 *
 * If a program mistakenly defines _ANSI_SOURCE and some other macro such as
 * _POSIX_C_SOURCE, we will assume that it wants the broader compilation
 * environment (and in fact we will never get here).
 */
# 13 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 14 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 2 3



# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 18 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 2 3

extern "C" {

void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void * , const void * , size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *, const char *);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *, const char *);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *, const char *, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *, const char *, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);


char *strtok (char *, const char *);


size_t strxfrm (char *, const char *, size_t);


char *strtok_r (char *, const char *, char **);

int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
int ffs (int);
char *index (const char *, int);
void * memccpy (void * , const void * , int, size_t);
void * mempcpy (void *, const void *, size_t);
void * memmem (const void *, size_t, const void *, size_t);
void * memrchr (const void *, int, size_t);
void * rawmemchr (const void *, int);
char *rindex (const char *, int);
char *stpcpy (char *, const char *);
char *stpncpy (char *, const char *, size_t);
int strcasecmp (const char *, const char *);
char *strcasestr (const char *, const char *);
char *strchrnul (const char *, int);


char *strdup (const char *);


char *_strdup_r (struct _reent *, const char *);


char *strndup (const char *, size_t);


char *_strndup_r (struct _reent *, const char *, size_t);
/* There are two common strerror_r variants.  If you request
   _GNU_SOURCE, you get the GNU version; otherwise you get the POSIX
   version.  POSIX requires that #undef strerror_r will still let you
   invoke the underlying function, but that requires gcc support.  */




int strerror_r (int, char *, size_t) __asm__ ("" /* stringify without expanding x */ /* expand x, then stringify */ "__xpg_strerror_r");





size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
int strncasecmp (const char *, const char *, size_t);
size_t strnlen (const char *, size_t);
char *strsep (char **, const char *);
char *strlwr (char *);
char *strupr (char *);

char *strsignal (int __signo);





/* Recursive version of strerror.  */
char * _strerror_r (struct _reent *, int, int, int *);
# 124 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 3
/* These function names are used on Windows and perhaps other systems.  */
# 140 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/string.h" 1 3
/* This is a dummy <sys/string.h> used as a placeholder for
   systems that need to have a special header file.  */
# 141 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 2 3

}
# 27 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 1 3




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 6 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 7 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 8 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 2 3

extern "C" {

/* __dmath, __fmath, and __ldmath are only here for backwards compatibility
 * in case any code used them.  They are no longer used by Newlib, itself,
 * other than legacy.  */
union __dmath
{
  double d;
  __ULong i[2];
};

union __fmath
{
  float f;
  __ULong i[1];
};


union __ldmath
{
  long double ld;
  __ULong i[4];
};


/* Natural log of 2 */



 /* gcc >= 3.3 implicitly defines builtins for HUGE_VALx values.  */
# 105 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
/* Reentrant ANSI C functions.  */


extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);


/* Non reentrant ANSI C functions.  */



extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);





/* ISO C99 types and macros. */

/* FIXME:  FLT_EVAL_METHOD should somehow be gotten from float.h (which is hard,
 * considering that the standard says the includes it defines should not
 * include other includes that it defines) and that value used.  (This can be
 * solved, but autoconf has a bug which makes the solution more difficult, so
 * it has been skipped for now.)  */






    typedef float float_t;
    typedef double double_t;
# 198 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
extern int __isinff (float x);
extern int __isinfd (double x);
extern int __isnanf (float x);
extern int __isnand (double x);
extern int __fpclassifyf (float x);
extern int __fpclassifyd (double x);
extern int __signbitf (float x);
extern int __signbitd (double x);
# 217 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
/* Note: isinf and isnan were once functions in newlib that took double
 *       arguments.  C99 specifies that these names are reserved for macros
 *       supporting multiple floating point types.  Thus, they are
 *       now defined as macros.  Implementations of the old functions
 *       taking double arguments still exist for compatibility purposes
 *       (prototypes for them are in <ieeefp.h>).  */
# 256 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
/* Non ANSI double precision functions.  */

extern double infinity (void);
extern double nan (const char *);
extern int finite (double);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);





extern double hypot (double, double);




/* Single precision versions of ANSI functions.  */

extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);


/* Other single precision functions.  */

extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern int finitef (float);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);


/* On platforms where long double equals double.  */

/* Reentrant ANSI C functions.  */

extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double value, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);

/* Non reentrant ANSI C functions.  */


extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);


extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);

extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
# 463 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
extern double drem (double, double);
extern void sincos (double, double *, double *);
extern double gamma_r (double, int *);
extern double lgamma_r (double, int *);

extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);

extern float dremf (float, float);
extern void sincosf (float, float *, float *);
extern float gammaf_r (float, int *);
extern float lgammaf_r (float, int *);

extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);

/* GNU extensions */

extern double exp10 (double);


extern double pow10 (double);


extern float exp10f (float);


extern float pow10f (float);






/* The gamma functions use a global variable, signgam.  */


extern int *__signgam (void);




/* The exception structure passed to the matherr routine.  */
/* We have a problem when using C++ since `exception' is a reserved
   name in C++.  */

struct __exception



{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};


extern int matherr (struct __exception *e);




/* Values for the type field of struct exception.  */
# 545 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
/* Useful constants.  */
# 572 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
/* Global control over fdlibm error handling.  */

enum __fdlibm_version
{
  __fdlibm_ieee = -1,
  __fdlibm_svid,
  __fdlibm_xopen,
  __fdlibm_posix
};




extern enum __fdlibm_version __fdlib_version;
# 594 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/math.h" 3
}
# 28 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2

typedef bool boolean;
typedef uint8_t byte;
typedef uint16_t word;

// some libraries and sketches depend on this AVR stuff,
// assuming Arduino.h or WProgram.h automatically includes it...
//
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/avr/pgmspace.h" 1
/*
  pgmspace.h - Definitions for compatibility with AVR pgmspace macros

  Copyright (c) 2015 Arduino LLC

  Based on work of Paul Stoffregen on Teensy 3 (http://pjrc.com)

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 17 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 2 3


# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 20 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 2 3

/* Don't use __STDINT_EXP test since GCC's stdint.h provides different
   macros than newlib's stdint.h. */
# 32 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 3
/* 8-bit types */
# 78 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 3
/* 16-bit types */
# 124 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 3
/* 32-bit types */
# 175 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 3
/* 64-bit types */
# 229 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 3
/* max-bit types */
# 254 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 3
/* ptr types */
# 280 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 3
typedef struct {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;


extern "C" {


extern intmax_t imaxabs(intmax_t j);
extern imaxdiv_t imaxdiv(intmax_t numer, intmax_t denomer);
extern intmax_t strtoimax(const char *, char **, int);
extern uintmax_t strtoumax(const char *, char **, int);
extern intmax_t wcstoimax(const wchar_t *, wchar_t **, int);
extern uintmax_t wcstoumax(const wchar_t *, wchar_t **, int);


}
# 31 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/avr/pgmspace.h" 2







typedef void prog_void;
typedef char prog_char;
typedef unsigned char prog_uchar;
typedef int8_t prog_int8_t;
typedef uint8_t prog_uint8_t;
typedef int16_t prog_int16_t;
typedef uint16_t prog_uint16_t;
typedef int32_t prog_int32_t;
typedef uint32_t prog_uint32_t;
typedef int64_t prog_int64_t;
typedef uint64_t prog_uint64_t;

typedef const void* int_farptr_t;
typedef const void* uint_farptr_t;
# 37 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/avr/interrupt.h" 1
/*
  Copyright (c) 2015 Arduino LCC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/*
  Empty file.
  This file is here to allow compatibility with sketches (made for AVR)
  that includes <AVR/interrupt.h>
*/
# 38 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/avr/io.h" 1
/*
  io.h - Definitions for compatibility with AVR io macros

  Copyright (c) 2016 Arduino LLC

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE
*/
# 39 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/binary.h" 1
/*
  binary.h - Definitions for binary constants
  Copyright (c) 2006 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 41 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/itoa.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       


extern "C"{


//extern void itoa( int n, char s[] ) ;

extern char* itoa( int value, char *string, int radix ) ;
extern char* ltoa( long value, char *string, int radix ) ;
extern char* utoa( unsigned int value, char *string, int radix ) ;
extern char* ultoa( unsigned long value, char *string, int radix ) ;


} // extern "C"
# 42 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2


extern "C"{


// Include Atmel headers
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h" 1
/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2015, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following condition is met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */





/*
 * ----------------------------------------------------------------------------
 * SAMG family
 * ----------------------------------------------------------------------------
 */

/* SAMG55 series */






/* Entire SAMG55 series */


/* SAMG54 series */
# 60 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAMG54 series */




/* Entire SAMG family */


/*
 * ----------------------------------------------------------------------------
 * SAMD family
 * ----------------------------------------------------------------------------
 */

/* SAMD10 series */
# 89 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAMD10 series */


/* SAMD11 series */







/* Entire SAMD11 series */


/* SAMD21 series */
# 160 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAMD21 series */


/* Entire SAMD family */


/*
 * ----------------------------------------------------------------------------
 * SAML family
 * ----------------------------------------------------------------------------
 */

/* SAML21 series */
# 203 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAML21A series */


/* Entire SAML21B series */


/* Entire SAMD family */


/*
 * ----------------------------------------------------------------------------
 * SAMS family
 * ----------------------------------------------------------------------------
 */

/* SAMS70 series */
# 240 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAMS70 series */


/* Entire SAMS family */


/*
 * ----------------------------------------------------------------------------
 * SAME family
 * ----------------------------------------------------------------------------
 */

/* SAME70 series */
# 274 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAME70 series */


/* Entire SAME family */


/*
 * ----------------------------------------------------------------------------
 * SAM3 family
 * ----------------------------------------------------------------------------
 */

/* SAM3U series */
# 299 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAM3U series */


/* SAM3XA series */
# 318 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAM3XA series */


/* Entire SAM3 family */


/*
 * ----------------------------------------------------------------------------
 * SAMR family
 * ----------------------------------------------------------------------------
 */

/* SAMR21 series */
# 349 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAMR21 series */


/* Entire SAMR family */


/*
 * ----------------------------------------------------------------------------
 * SAM4 family
 * ----------------------------------------------------------------------------
 */

/* SAM4N series */
# 371 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAM4N series */


/* SAM4S series */
# 405 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAM4S series */


/* SAM4E series */
# 417 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAM4E series */


/* SAM4C series */
# 441 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
/* Entire SAM4C series */


/* Entire SAM4 family */


/*
 * ----------------------------------------------------------------------------
 * Whole SAM product line
 * ----------------------------------------------------------------------------
 */



/*
 * ----------------------------------------------------------------------------
 * Header inclusion
 * ----------------------------------------------------------------------------
 */
# 470 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h"
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd.h" 1
/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2015, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following condition is met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */
# 105 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd.h"
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21.h" 1
/**
 * \file
 *
 * \brief Top header file for SAMD21
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/**
 * \defgroup SAMD21_definitions SAMD21 Device Definitions
 * \brief SAMD21 CMSIS Definitions.
 */
# 69 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21.h"
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 1
/**
 * \file
 *
 * \brief Header file for SAMD21G18A
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/**
 * \ingroup SAMD21_definitions
 * \addtogroup SAMD21G18A_definitions SAMD21G18A definitions
 * This file defines all structures and symbols for SAMD21G18A:
 *   - registers and bitfields
 *   - peripheral base address
 *   - peripheral ID
 *   - PIO definitions
*/
/*@{*/


 extern "C" {
# 69 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h"
typedef volatile uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile uint8_t RoReg8; /**< Read only  8-bit register (volatile const unsigned int) */

typedef volatile uint32_t WoReg; /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile uint32_t WoReg8; /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile uint32_t RwReg; /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile uint8_t RwReg8; /**< Read-Write  8-bit register (volatile unsigned int) */







/* ************************************************************************** */
/**  CMSIS DEFINITIONS FOR SAMD21G18A */
/* ************************************************************************** */
/** \defgroup SAMD21G18A_cmsis CMSIS Definitions */
/*@{*/

/** Interrupt Number Definition */
typedef enum IRQn
{
  /******  Cortex-M0+ Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn = -14,/**<  2 Non Maskable Interrupt                 */
  HardFault_IRQn = -13,/**<  3 Cortex-M0+ Hard Fault Interrupt        */
  SVCall_IRQn = -5, /**< 11 Cortex-M0+ SV Call Interrupt           */
  PendSV_IRQn = -2, /**< 14 Cortex-M0+ Pend SV Interrupt           */
  SysTick_IRQn = -1, /**< 15 Cortex-M0+ System Tick Interrupt       */
  /******  SAMD21G18A-specific Interrupt Numbers ***********************/
  PM_IRQn = 0, /**<  0 SAMD21G18A Power Manager (PM) */
  SYSCTRL_IRQn = 1, /**<  1 SAMD21G18A System Control (SYSCTRL) */
  WDT_IRQn = 2, /**<  2 SAMD21G18A Watchdog Timer (WDT) */
  RTC_IRQn = 3, /**<  3 SAMD21G18A Real-Time Counter (RTC) */
  EIC_IRQn = 4, /**<  4 SAMD21G18A External Interrupt Controller (EIC) */
  NVMCTRL_IRQn = 5, /**<  5 SAMD21G18A Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn = 6, /**<  6 SAMD21G18A Direct Memory Access Controller (DMAC) */
  USB_IRQn = 7, /**<  7 SAMD21G18A Universal Serial Bus (USB) */
  EVSYS_IRQn = 8, /**<  8 SAMD21G18A Event System Interface (EVSYS) */
  SERCOM0_IRQn = 9, /**<  9 SAMD21G18A Serial Communication Interface 0 (SERCOM0) */
  SERCOM1_IRQn = 10, /**< 10 SAMD21G18A Serial Communication Interface 1 (SERCOM1) */
  SERCOM2_IRQn = 11, /**< 11 SAMD21G18A Serial Communication Interface 2 (SERCOM2) */
  SERCOM3_IRQn = 12, /**< 12 SAMD21G18A Serial Communication Interface 3 (SERCOM3) */
  SERCOM4_IRQn = 13, /**< 13 SAMD21G18A Serial Communication Interface 4 (SERCOM4) */
  SERCOM5_IRQn = 14, /**< 14 SAMD21G18A Serial Communication Interface 5 (SERCOM5) */
  TCC0_IRQn = 15, /**< 15 SAMD21G18A Timer Counter Control 0 (TCC0) */
  TCC1_IRQn = 16, /**< 16 SAMD21G18A Timer Counter Control 1 (TCC1) */
  TCC2_IRQn = 17, /**< 17 SAMD21G18A Timer Counter Control 2 (TCC2) */
  TC3_IRQn = 18, /**< 18 SAMD21G18A Basic Timer Counter 3 (TC3) */
  TC4_IRQn = 19, /**< 19 SAMD21G18A Basic Timer Counter 4 (TC4) */
  TC5_IRQn = 20, /**< 20 SAMD21G18A Basic Timer Counter 5 (TC5) */
  ADC_IRQn = 23, /**< 23 SAMD21G18A Analog Digital Converter (ADC) */
  AC_IRQn = 24, /**< 24 SAMD21G18A Analog Comparators (AC) */
  DAC_IRQn = 25, /**< 25 SAMD21G18A Digital Analog Converter (DAC) */
  PTC_IRQn = 26, /**< 26 SAMD21G18A Peripheral Touch Controller (PTC) */
  I2S_IRQn = 27, /**< 27 SAMD21G18A Inter-IC Sound Interface (I2S) */

  PERIPH_COUNT_IRQn = 28 /**< Number of peripheral IDs */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;

  /* Cortex-M handlers */
  void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pfnReservedM12;
  void* pfnReservedM11;
  void* pfnReservedM10;
  void* pfnReservedM9;
  void* pfnReservedM8;
  void* pfnReservedM7;
  void* pfnReservedM6;
  void* pfnSVC_Handler;
  void* pfnReservedM4;
  void* pfnReservedM3;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;

  /* Peripheral handlers */
  void* pfnPM_Handler; /*  0 Power Manager */
  void* pfnSYSCTRL_Handler; /*  1 System Control */
  void* pfnWDT_Handler; /*  2 Watchdog Timer */
  void* pfnRTC_Handler; /*  3 Real-Time Counter */
  void* pfnEIC_Handler; /*  4 External Interrupt Controller */
  void* pfnNVMCTRL_Handler; /*  5 Non-Volatile Memory Controller */
  void* pfnDMAC_Handler; /*  6 Direct Memory Access Controller */
  void* pfnUSB_Handler; /*  7 Universal Serial Bus */
  void* pfnEVSYS_Handler; /*  8 Event System Interface */
  void* pfnSERCOM0_Handler; /*  9 Serial Communication Interface 0 */
  void* pfnSERCOM1_Handler; /* 10 Serial Communication Interface 1 */
  void* pfnSERCOM2_Handler; /* 11 Serial Communication Interface 2 */
  void* pfnSERCOM3_Handler; /* 12 Serial Communication Interface 3 */
  void* pfnSERCOM4_Handler; /* 13 Serial Communication Interface 4 */
  void* pfnSERCOM5_Handler; /* 14 Serial Communication Interface 5 */
  void* pfnTCC0_Handler; /* 15 Timer Counter Control 0 */
  void* pfnTCC1_Handler; /* 16 Timer Counter Control 1 */
  void* pfnTCC2_Handler; /* 17 Timer Counter Control 2 */
  void* pfnTC3_Handler; /* 18 Basic Timer Counter 3 */
  void* pfnTC4_Handler; /* 19 Basic Timer Counter 4 */
  void* pfnTC5_Handler; /* 20 Basic Timer Counter 5 */
  void* pfnReserved21;
  void* pfnReserved22;
  void* pfnADC_Handler; /* 23 Analog Digital Converter */
  void* pfnAC_Handler; /* 24 Analog Comparators */
  void* pfnDAC_Handler; /* 25 Digital Analog Converter */
  void* pfnPTC_Handler; /* 26 Peripheral Touch Controller */
  void* pfnI2S_Handler; /* 27 Inter-IC Sound Interface */
  void* pfnReserved28;
} DeviceVectors;

/* Cortex-M0+ processor handlers */
void Reset_Handler ( void );
void NMI_Handler ( void );
void HardFault_Handler ( void );
void SVC_Handler ( void );
void PendSV_Handler ( void );
void SysTick_Handler ( void );

/* Peripherals handlers */
void PM_Handler ( void );
void SYSCTRL_Handler ( void );
void WDT_Handler ( void );
void RTC_Handler ( void );
void EIC_Handler ( void );
void NVMCTRL_Handler ( void );
void DMAC_Handler ( void );
void USB_Handler ( void );
void EVSYS_Handler ( void );
void SERCOM0_Handler ( void );
void SERCOM1_Handler ( void );
void SERCOM2_Handler ( void );
void SERCOM3_Handler ( void );
void SERCOM4_Handler ( void );
void SERCOM5_Handler ( void );
void TCC0_Handler ( void );
void TCC1_Handler ( void );
void TCC2_Handler ( void );
void TC3_Handler ( void );
void TC4_Handler ( void );
void TC5_Handler ( void );
void ADC_Handler ( void );
void AC_Handler ( void );
void DAC_Handler ( void );
void PTC_Handler ( void );
void I2S_Handler ( void );

/*
 * \brief Configuration of the Cortex-M0+ Processor and Core Peripherals
 */
# 233 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h"
/**
 * \brief CMSIS includes
 */

# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h" 1
/**************************************************************************//**

 * @file     core_cm0plus.h

 * @brief    CMSIS Cortex-M0+ Core Peripheral Access Layer Header File

 * @version  V4.30

 * @date     20. October 2015

 ******************************************************************************/
# 7 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* Copyright (c) 2009 - 2015 ARM LIMITED



   All rights reserved.

   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:

   - Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in the

     documentation and/or other materials provided with the distribution.

   - Neither the name of ARM nor the names of its contributors may be used

     to endorse or promote products derived from this software without

     specific prior written permission.

   *

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE

   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

   POSSIBILITY OF SUCH DAMAGE.

   ---------------------------------------------------------------------------*/
# 47 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
 extern "C" {


/**

  \page CMSIS_MISRA_Exceptions  MISRA-C:2004 Compliance Exceptions

  CMSIS violates the following MISRA-C:2004 rules:



   \li Required Rule 8.5, object/function definition in header file.<br>

     Function definitions in header files are used to allow 'inlining'.



   \li Required Rule 18.4, declaration of union type or object of union type: '{...}'.<br>

     Unions are used for effective representation of core registers.



   \li Advisory Rule 19.7, Function-like macro defined.<br>

     Function-like macros are used to allow more efficient code.

 */
# 65 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/*******************************************************************************

 *                 CMSIS definitions

 ******************************************************************************/
# 68 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \ingroup Cortex-M0+

  @{

 */
# 73 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/*  CMSIS CM0+ definitions */
# 121 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/** __FPU_USED indicates whether an FPU is used or not.

    This core does not support an FPU at all

*/
# 163 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmInstr.h" 1
/**************************************************************************//**

 * @file     core_cmInstr.h

 * @brief    CMSIS Cortex-M Core Instruction Access Header File

 * @version  V4.30

 * @date     20. October 2015

 ******************************************************************************/
# 7 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmInstr.h"
/* Copyright (c) 2009 - 2015 ARM LIMITED



   All rights reserved.

   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:

   - Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in the

     documentation and/or other materials provided with the distribution.

   - Neither the name of ARM nor the names of its contributors may be used

     to endorse or promote products derived from this software without

     specific prior written permission.

   *

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE

   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

   POSSIBILITY OF SUCH DAMAGE.

   ---------------------------------------------------------------------------*/
# 45 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmInstr.h"
/* ##########################  Core Instruction Access  ######################### */
/** \defgroup CMSIS_Core_InstructionInterface CMSIS Core Instruction Interface

  Access to dedicated instructions

  @{

*/
# 51 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmInstr.h"
/*------------------ RealView Compiler -----------------*/
# 61 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmInstr.h"
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h" 1
/**************************************************************************//**

 * @file     cmsis_gcc.h

 * @brief    CMSIS Cortex-M Core Function/Instruction Header File

 * @version  V4.30

 * @date     20. October 2015

 ******************************************************************************/
# 7 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/* Copyright (c) 2009 - 2015 ARM LIMITED



   All rights reserved.

   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:

   - Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in the

     documentation and/or other materials provided with the distribution.

   - Neither the name of ARM nor the names of its contributors may be used

     to endorse or promote products derived from this software without

     specific prior written permission.

   *

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE

   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

   POSSIBILITY OF SUCH DAMAGE.

   ---------------------------------------------------------------------------*/
# 38 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/* ignore some GCC warnings */

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"



/* ###########################  Core Function Access  ########################### */
/** \ingroup  CMSIS_Core_FunctionInterface

    \defgroup CMSIS_Core_RegAccFunctions CMSIS Core Register Access Functions

  @{

 */
# 53 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/**

  \brief   Enable IRQ Interrupts

  \details Enables IRQ interrupts by clearing the I-bit in the CPSR.

           Can only be executed in Privileged modes.

 */
# 58 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __enable_irq(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("cpsie i" : : : "memory");
}


/**

  \brief   Disable IRQ Interrupts

  \details Disables IRQ interrupts by setting the I-bit in the CPSR.

  Can only be executed in Privileged modes.

 */
# 69 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __disable_irq(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("cpsid i" : : : "memory");
}


/**

  \brief   Get Control Register

  \details Returns the content of the Control Register.

  \return               Control Register value

 */
# 80 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}


/**

  \brief   Set Control Register

  \details Writes the given value to the Control Register.

  \param [in]    control  Control Register value to set

 */
# 94 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_CONTROL(uint32_t control)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("MSR control, %0" : : "r" (control) : "memory");
}


/**

  \brief   Get IPSR Register

  \details Returns the content of the IPSR Register.

  \return               IPSR Register value

 */
# 105 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}


/**

  \brief   Get APSR Register

  \details Returns the content of the APSR Register.

  \return               APSR Register value

 */
# 119 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}


/**

  \brief   Get xPSR Register

  \details Returns the content of the xPSR Register.



    \return               xPSR Register value

 */
# 134 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}


/**

  \brief   Get Process Stack Pointer

  \details Returns the current value of the Process Stack Pointer (PSP).

  \return               PSP Register value

 */
# 148 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_PSP(void)
{
  register uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("MRS %0, psp\n" : "=r" (result) );
  return(result);
}


/**

  \brief   Set Process Stack Pointer

  \details Assigns the given value to the Process Stack Pointer (PSP).

  \param [in]    topOfProcStack  Process Stack Pointer value to set

 */
# 162 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("MSR psp, %0\n" : : "r" (topOfProcStack) : "sp");
}


/**

  \brief   Get Main Stack Pointer

  \details Returns the current value of the Main Stack Pointer (MSP).

  \return               MSP Register value

 */
# 173 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_MSP(void)
{
  register uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("MRS %0, msp\n" : "=r" (result) );
  return(result);
}


/**

  \brief   Set Main Stack Pointer

  \details Assigns the given value to the Main Stack Pointer (MSP).



    \param [in]    topOfMainStack  Main Stack Pointer value to set

 */
# 188 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("MSR msp, %0\n" : : "r" (topOfMainStack) : "sp");
}


/**

  \brief   Get Priority Mask

  \details Returns the current state of the priority mask bit from the Priority Mask Register.

  \return               Priority Mask value

 */
# 199 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}


/**

  \brief   Set Priority Mask

  \details Assigns the given value to the Priority Mask Register.

  \param [in]    priMask  Priority Mask

 */
# 213 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 349 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/*@} end of CMSIS_Core_RegAccFunctions */


/* ##########################  Core Instruction Access  ######################### */
/** \defgroup CMSIS_Core_InstructionInterface CMSIS Core Instruction Interface

  Access to dedicated instructions

  @{

*/
# 358 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/* Define macros for porting to both thumb1 and thumb2.

 * For thumb1, use low register (r0-r7), specified by constraint "l"

 * Otherwise, use general registers, specified by constraint "r" */






/**

  \brief   No Operation

  \details No Operation does nothing. This instruction can be used for code alignment purposes.

 */
# 373 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __NOP(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("nop");
}


/**

  \brief   Wait For Interrupt

  \details Wait For Interrupt is a hint instruction that suspends execution until one of a number of events occurs.

 */
# 383 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __WFI(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("wfi");
}


/**

  \brief   Wait For Event

  \details Wait For Event is a hint instruction that permits the processor to enter

    a low-power state until one of a number of events occurs.

 */
# 394 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __WFE(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("wfe");
}


/**

  \brief   Send Event

  \details Send Event is a hint instruction. It causes an event to be signaled to the CPU.

 */
# 404 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __SEV(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("sev");
}


/**

  \brief   Instruction Synchronization Barrier

  \details Instruction Synchronization Barrier flushes the pipeline in the processor,

           so that all instructions following the ISB are fetched from cache or memory,

           after the instruction has been completed.

 */
# 416 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("isb 0xF":::"memory");
}


/**

  \brief   Data Synchronization Barrier

  \details Acts as a special kind of Data Memory Barrier.

           It completes when all explicit memory accesses before this instruction complete.

 */
# 427 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("dsb 0xF":::"memory");
}


/**

  \brief   Data Memory Barrier

  \details Ensures the apparent order of the explicit memory operations before

           and after the instruction, without ensuring their completion.

 */
# 438 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm /*!< asm keyword for GNU Compiler */ volatile ("dmb 0xF":::"memory");
}


/**

  \brief   Reverse byte order (32 bit)

  \details Reverses the byte order in integer value.

  \param [in]    value  Value to reverse

  \return               Reversed value

 */
# 450 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}


/**

  \brief   Reverse byte order (16 bit)

  \details Reverses the byte order in two unsigned short values.

  \param [in]    value  Value to reverse

  \return               Reversed value

 */
# 469 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm /*!< asm keyword for GNU Compiler */ volatile ("rev16 %0, %1" : "=l" (result) : "l" (value) );
  return(result);
}


/**

  \brief   Reverse byte order in signed short value

  \details Reverses the byte order in a signed short value with sign extension to integer.

  \param [in]    value  Value to reverse

  \return               Reversed value

 */
# 484 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}


/**

  \brief   Rotate Right in unsigned value (32 bit)

  \details Rotate Right (immediate) provides the value of the contents of a register rotated by a variable number of bits.

  \param [in]    value  Value to rotate

  \param [in]    value  Number of Bits to rotate

  \return               Rotated value

 */
# 504 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32U - op2));
}


/**

  \brief   Breakpoint

  \details Causes the processor to enter Debug state.

           Debug tools can use this to investigate system state when the instruction at a particular address is reached.

  \param [in]    value  is ignored by the processor.

                 If required, a debugger can use it to store additional information about the breakpoint.

 */
# 520 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/**

  \brief   Reverse bit order of value

  \details Reverses the bit order of the given value.

  \param [in]    value  Value to reverse

  \return               Reversed value

 */
# 526 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




  int32_t s = 4 /*sizeof(v)*/ * 8 - 1; /* extra shift needed at end */

  result = value; /* r will be reversed bits of v; first get LSB of v */
  for (value >>= 1U; value; value >>= 1U)
  {
    result <<= 1U;
    result |= value & 1U;
    s--;
  }
  result <<= s; /* shift when v's highest bits are zero */

  return(result);
}


/**

  \brief   Count leading zeros

  \details Counts the number of leading zeros of a data value.

  \param [in]  value  Value to count the leading zeros

  \return             number of leading zeros in value

 */
# 821 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/*@}*/ /* end of group CMSIS_Core_InstructionInterface */


/* ###################  Compiler specific Intrinsics  ########################### */
/** \defgroup CMSIS_SIMD_intrinsics CMSIS SIMD Intrinsics

  Access to dedicated SIMD instructions

  @{

*/
# 1366 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/*@} end of group CMSIS_SIMD_intrinsics */



#pragma GCC diagnostic pop
# 62 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmInstr.h" 2

/*------------------ ICC Compiler ----------------------*/
# 85 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmInstr.h"
/*@}*/ /* end of group CMSIS_Core_InstructionInterface */
# 164 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmFunc.h" 1
/**************************************************************************//**

 * @file     core_cmFunc.h

 * @brief    CMSIS Cortex-M Core Function Access Header File

 * @version  V4.30

 * @date     20. October 2015

 ******************************************************************************/
# 7 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmFunc.h"
/* Copyright (c) 2009 - 2015 ARM LIMITED



   All rights reserved.

   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:

   - Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in the

     documentation and/or other materials provided with the distribution.

   - Neither the name of ARM nor the names of its contributors may be used

     to endorse or promote products derived from this software without

     specific prior written permission.

   *

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE

   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

   POSSIBILITY OF SUCH DAMAGE.

   ---------------------------------------------------------------------------*/
# 45 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmFunc.h"
/* ###########################  Core Function Access  ########################### */
/** \ingroup  CMSIS_Core_FunctionInterface

    \defgroup CMSIS_Core_RegAccFunctions CMSIS Core Register Access Functions

  @{

*/
# 51 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmFunc.h"
/*------------------ RealView Compiler -----------------*/
# 61 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmFunc.h"
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h" 1
/**************************************************************************//**

 * @file     cmsis_gcc.h

 * @brief    CMSIS Cortex-M Core Function/Instruction Header File

 * @version  V4.30

 * @date     20. October 2015

 ******************************************************************************/
# 7 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/cmsis_gcc.h"
/* Copyright (c) 2009 - 2015 ARM LIMITED



   All rights reserved.

   Redistribution and use in source and binary forms, with or without

   modification, are permitted provided that the following conditions are met:

   - Redistributions of source code must retain the above copyright

     notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright

     notice, this list of conditions and the following disclaimer in the

     documentation and/or other materials provided with the distribution.

   - Neither the name of ARM nor the names of its contributors may be used

     to endorse or promote products derived from this software without

     specific prior written permission.

   *

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"

   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE

   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE

   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE

   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR

   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF

   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS

   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN

   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)

   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE

   POSSIBILITY OF SUCH DAMAGE.

   ---------------------------------------------------------------------------*/
# 62 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmFunc.h" 2

/*------------------ ICC Compiler ----------------------*/
# 85 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cmFunc.h"
/*@} end of CMSIS_Core_RegAccFunctions */
# 165 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h" 2


}
# 178 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
 extern "C" {


/* check device defines and use defaults */
# 209 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* IO definitions (access restrictions to peripheral registers) */
/**

    \defgroup CMSIS_glob_defs CMSIS Global Defines



    <strong>IO Type Qualifiers</strong> are used

    \li to specify the access to peripheral variables.

    \li for automatic generation of peripheral register debug information.

*/


/* following defines should be used for structure members */




/*@} end of group Cortex-M0+ */



/*******************************************************************************

 *                 Register Abstraction

  Core Register contain:

  - Core Register

  - Core NVIC Register

  - Core SCB Register

  - Core SysTick Register

  - Core MPU Register

 ******************************************************************************/
# 243 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \defgroup CMSIS_core_register Defines and Type Definitions

  \brief Type definitions and defines for Cortex-M processor based devices.

*/
# 248 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \ingroup    CMSIS_core_register

  \defgroup   CMSIS_CORE  Status and Control Registers

  \brief      Core Register type definitions.

  @{

 */
# 255 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief  Union type to access the Application Program Status Register (APSR).

 */
# 258 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:28; /*!< bit:  0..27  Reserved */
    uint32_t V:1; /*!< bit:     28  Overflow condition code flag */
    uint32_t C:1; /*!< bit:     29  Carry condition code flag */
    uint32_t Z:1; /*!< bit:     30  Zero condition code flag */
    uint32_t N:1; /*!< bit:     31  Negative condition code flag */
  } b; /*!< Structure used for bit  access */
  uint32_t w; /*!< Type      used for word access */
} APSR_Type;

/* APSR Register Definitions */
# 285 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief  Union type to access the Interrupt Program Status Register (IPSR).

 */
# 288 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t ISR:9; /*!< bit:  0.. 8  Exception number */
    uint32_t _reserved0:23; /*!< bit:  9..31  Reserved */
  } b; /*!< Structure used for bit  access */
  uint32_t w; /*!< Type      used for word access */
} IPSR_Type;

/* IPSR Register Definitions */




/**

  \brief  Union type to access the Special-Purpose Program Status Registers (xPSR).

 */
# 306 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t ISR:9; /*!< bit:  0.. 8  Exception number */
    uint32_t _reserved0:15; /*!< bit:  9..23  Reserved */
    uint32_t T:1; /*!< bit:     24  Thumb bit        (read 0) */
    uint32_t _reserved1:3; /*!< bit: 25..27  Reserved */
    uint32_t V:1; /*!< bit:     28  Overflow condition code flag */
    uint32_t C:1; /*!< bit:     29  Carry condition code flag */
    uint32_t Z:1; /*!< bit:     30  Zero condition code flag */
    uint32_t N:1; /*!< bit:     31  Negative condition code flag */
  } b; /*!< Structure used for bit  access */
  uint32_t w; /*!< Type      used for word access */
} xPSR_Type;

/* xPSR Register Definitions */
# 342 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief  Union type to access the Control Registers (CONTROL).

 */
# 345 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1; /*!< bit:      0  Execution privilege in Thread mode */
    uint32_t SPSEL:1; /*!< bit:      1  Stack to be used */
    uint32_t _reserved1:30; /*!< bit:  2..31  Reserved */
  } b; /*!< Structure used for bit  access */
  uint32_t w; /*!< Type      used for word access */
} CONTROL_Type;

/* CONTROL Register Definitions */






/*@} end of group CMSIS_CORE */


/**

  \ingroup    CMSIS_core_register

  \defgroup   CMSIS_NVIC  Nested Vectored Interrupt Controller (NVIC)

  \brief      Type definitions for the NVIC Registers

  @{

 */
# 373 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief  Structure type to access the Nested Vectored Interrupt Controller (NVIC).

 */
# 376 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
typedef struct
{
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t ISER[1U]; /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
        uint32_t RESERVED0[31U];
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t ICER[1U]; /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
        uint32_t RSERVED1[31U];
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t ISPR[1U]; /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
        uint32_t RESERVED2[31U];
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t ICPR[1U]; /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
        uint32_t RESERVED3[31U];
        uint32_t RESERVED4[64U];
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t IP[8U]; /*!< Offset: 0x300 (R/W)  Interrupt Priority Register */
} NVIC_Type;

/*@} end of group CMSIS_NVIC */


/**

  \ingroup  CMSIS_core_register

  \defgroup CMSIS_SCB     System Control Block (SCB)

  \brief    Type definitions for the System Control Block Registers

  @{

 */
# 400 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief  Structure type to access the System Control Block (SCB).

 */
# 403 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
typedef struct
{
  volatile const /*! Defines 'read only' structure member permissions */ uint32_t CPUID; /*!< Offset: 0x000 (R/ )  CPUID Base Register */
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t ICSR; /*!< Offset: 0x004 (R/W)  Interrupt Control and State Register */

  volatile /*! Defines 'read / write' structure member permissions */ uint32_t VTOR; /*!< Offset: 0x008 (R/W)  Vector Table Offset Register */



  volatile /*! Defines 'read / write' structure member permissions */ uint32_t AIRCR; /*!< Offset: 0x00C (R/W)  Application Interrupt and Reset Control Register */
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t SCR; /*!< Offset: 0x010 (R/W)  System Control Register */
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t CCR; /*!< Offset: 0x014 (R/W)  Configuration Control Register */
        uint32_t RESERVED1;
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t SHP[2U]; /*!< Offset: 0x01C (R/W)  System Handlers Priority Registers. [0] is RESERVED */
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t SHCSR; /*!< Offset: 0x024 (R/W)  System Handler Control and State Register */
} SCB_Type;

/* SCB CPUID Register Definitions */
# 436 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* SCB Interrupt Control State Register Definitions */
# 465 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* SCB Interrupt Control State Register Definitions */




/* SCB Application Interrupt and Reset Control Register Definitions */
# 486 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* SCB System Control Register Definitions */
# 496 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* SCB Configuration Control Register Definitions */






/* SCB System Handler Control and State Register Definitions */



/*@} end of group CMSIS_SCB */


/**

  \ingroup  CMSIS_core_register

  \defgroup CMSIS_SysTick     System Tick Timer (SysTick)

  \brief    Type definitions for the System Timer Registers.

  @{

 */
# 517 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief  Structure type to access the System Timer (SysTick).

 */
# 520 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
typedef struct
{
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t CTRL; /*!< Offset: 0x000 (R/W)  SysTick Control and Status Register */
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t LOAD; /*!< Offset: 0x004 (R/W)  SysTick Reload Value Register */
  volatile /*! Defines 'read / write' structure member permissions */ uint32_t VAL; /*!< Offset: 0x008 (R/W)  SysTick Current Value Register */
  volatile const /*! Defines 'read only' structure member permissions */ uint32_t CALIB; /*!< Offset: 0x00C (R/ )  SysTick Calibration Register */
} SysTick_Type;

/* SysTick Control / Status Register Definitions */
# 541 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* SysTick Reload Register Definitions */



/* SysTick Current Register Definitions */



/* SysTick Calibration Register Definitions */
# 559 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/*@} end of group CMSIS_SysTick */
# 650 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \ingroup  CMSIS_core_register

  \defgroup CMSIS_CoreDebug       Core Debug Registers (CoreDebug)

  \brief    Cortex-M0+ Core Debug Registers (DCB registers, SHCSR, and DFSR) are only accessible over DAP and not via processor.

            Therefore they are not covered by the Cortex-M0+ header file.

  @{

 */
# 657 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/*@} end of group CMSIS_CoreDebug */


/**

  \ingroup    CMSIS_core_register

  \defgroup   CMSIS_core_bitfield     Core register bit field macros

  \brief      Macros for use with bit field definitions (xxx_Pos, xxx_Msk).

  @{

 */
# 667 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief   Mask and shift a bit field value for use in a register bit range.

  \param[in] field  Name of the register bit field.

  \param[in] value  Value of the bit field.

  \return           Masked and shifted value.

*/
# 675 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief     Mask and shift a register value to extract a bit filed value.

  \param[in] field  Name of the register bit field.

  \param[in] value  Value of register.

  \return           Masked and shifted bit field value.

*/
# 683 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/*@} end of group CMSIS_core_bitfield */


/**

  \ingroup    CMSIS_core_register

  \defgroup   CMSIS_core_base     Core Definitions

  \brief      Definitions for base addresses, unions, and structures.

  @{

 */
# 693 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* Memory mapping of Cortex-M0+ Hardware */
# 708 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/*@} */



/*******************************************************************************

 *                Hardware Abstraction Layer

  Core Function Interface contains:

  - Core NVIC Functions

  - Core SysTick Functions

  - Core Register Access Functions

 ******************************************************************************/
# 719 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \defgroup CMSIS_Core_FunctionInterface Functions and Instructions Reference

*/

/* ##########################   NVIC functions  #################################### */
/**

  \ingroup  CMSIS_Core_FunctionInterface

  \defgroup CMSIS_Core_NVICFunctions NVIC Functions

  \brief    Functions that manage interrupts and exceptions via the NVIC.

  @{

 */
# 733 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/* Interrupt Priorities are WORD accessible only under ARMv6M                   */
/* The following MACROS handle generation of the register offset and byte masks */





/**

  \brief   Enable External Interrupt

  \details Enables a device-specific interrupt in the NVIC interrupt controller.

  \param [in]      IRQn  External interrupt number. Value cannot be negative.

 */
# 745 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline void NVIC_EnableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->ISER[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}


/**

  \brief   Disable External Interrupt

  \details Disables a device-specific interrupt in the NVIC interrupt controller.

  \param [in]      IRQn  External interrupt number. Value cannot be negative.

 */
# 756 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline void NVIC_DisableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->ICER[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}


/**

  \brief   Get Pending Interrupt

  \details Reads the pending register in the NVIC and returns the pending bit for the specified interrupt.

  \param [in]      IRQn  Interrupt number.

  \return             0  Interrupt status is not pending.

  \return             1  Interrupt status is pending.

 */
# 769 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->ISPR[0U] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}


/**

  \brief   Set Pending Interrupt

  \details Sets the pending bit of an external interrupt.

  \param [in]      IRQn  Interrupt number. Value cannot be negative.

 */
# 780 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline void NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->ISPR[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}


/**

  \brief   Clear Pending Interrupt

  \details Clears the pending bit of an external interrupt.

  \param [in]      IRQn  External interrupt number. Value cannot be negative.

 */
# 791 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->ICPR[0U] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}


/**

  \brief   Set Interrupt Priority

  \details Sets the priority of an interrupt.

  \note    The priority cannot be set for every core interrupt.

  \param [in]      IRQn  Interrupt number.

  \param [in]  priority  Priority to set.

 */
# 804 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) < 0)
  {
    ((SCB_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0D00UL) /*!< System Control Block Base Address */ ) /*!< SCB configuration struct */->SHP[( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >> 2UL) )] = ((uint32_t)(((SCB_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0D00UL) /*!< System Control Block Base Address */ ) /*!< SCB configuration struct */->SHP[( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >> 2UL) )] & ~(0xFFUL << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL))) |
       (((priority << (8U - 2 /*!< Number of bits used for Priority Levels */)) & (uint32_t)0xFFUL) << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL)));
  }
  else
  {
    ((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->IP[( (((uint32_t)(int32_t)(IRQn)) >> 2UL) )] = ((uint32_t)(((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->IP[( (((uint32_t)(int32_t)(IRQn)) >> 2UL) )] & ~(0xFFUL << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL))) |
       (((priority << (8U - 2 /*!< Number of bits used for Priority Levels */)) & (uint32_t)0xFFUL) << ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL)));
  }
}


/**

  \brief   Get Interrupt Priority

  \details Reads the priority of an interrupt.

           The interrupt number can be positive to specify an external (device specific) interrupt,

           or negative to specify an internal (core) interrupt.

  \param [in]   IRQn  Interrupt number.

  \return             Interrupt Priority.

                      Value is aligned automatically to the implemented priority bits of the microcontroller.

 */
# 828 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline uint32_t NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) < 0)
  {
    return((uint32_t)(((((SCB_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0D00UL) /*!< System Control Block Base Address */ ) /*!< SCB configuration struct */->SHP[( (((((uint32_t)(int32_t)(IRQn)) & 0x0FUL)-8UL) >> 2UL) )] >> ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL) ) & (uint32_t)0xFFUL) >> (8U - 2 /*!< Number of bits used for Priority Levels */)));
  }
  else
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0100UL) /*!< NVIC Base Address */ ) /*!< NVIC configuration struct */->IP[ ( (((uint32_t)(int32_t)(IRQn)) >> 2UL) )] >> ( ((((uint32_t)(int32_t)(IRQn)) ) & 0x03UL) * 8UL) ) & (uint32_t)0xFFUL) >> (8U - 2 /*!< Number of bits used for Priority Levels */)));
  }
}


/**

  \brief   System Reset

  \details Initiates a system reset request to reset the MCU.

 */
# 846 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline void NVIC_SystemReset(void)
{
  __DSB(); /* Ensure all outstanding memory accesses included

                                                                       buffered write are completed before reset */
# 850 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
  ((SCB_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0D00UL) /*!< System Control Block Base Address */ ) /*!< SCB configuration struct */->AIRCR = ((0x5FAUL << 16U /*!< SCB AIRCR: VECTKEY Position */) |
                 (1UL << 2U /*!< SCB AIRCR: SYSRESETREQ Position */) /*!< SCB AIRCR: SYSRESETREQ Mask */);
  __DSB(); /* Ensure completion of memory access */

  for(;;) /* wait until reset */
  {
    __NOP();
  }
}

/*@} end of CMSIS_Core_NVICFunctions */



/* ##################################    SysTick function  ############################################ */
/**

  \ingroup  CMSIS_Core_FunctionInterface

  \defgroup CMSIS_Core_SysTickFunctions SysTick Functions

  \brief    Functions that configure the System.

  @{

 */
# 874 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
/**

  \brief   System Tick Configuration

  \details Initializes the System Timer and its interrupt, and starts the System Tick Timer.

           Counter is in free running mode to generate periodic interrupts.

  \param [in]  ticks  Number of ticks between two interrupts.

  \return          0  Function succeeded.

  \return          1  Function failed.

  \note    When the variable <b>__Vendor_SysTickConfig</b> is set to 1, then the

           function <b>SysTick_Config</b> is not included. In this case, the file <b><i>device</i>.h</b>

           must contain a vendor-specific implementation of this function.

 */
# 885 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS/4.5.0/CMSIS/Include/core_cm0plus.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL /*<< SysTick_LOAD_RELOAD_Pos*/) /*!< SysTick LOAD: RELOAD Mask */)
  {
    return (1UL); /* Reload value impossible */
  }

  ((SysTick_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0010UL) /*!< SysTick Base Address */ ) /*!< SysTick configuration struct */->LOAD = (uint32_t)(ticks - 1UL); /* set reload register */
  NVIC_SetPriority (SysTick_IRQn, (1UL << 2 /*!< Number of bits used for Priority Levels */) - 1UL); /* set Priority for Systick Interrupt */
  ((SysTick_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0010UL) /*!< SysTick Base Address */ ) /*!< SysTick configuration struct */->VAL = 0UL; /* Load the SysTick Counter Value */
  ((SysTick_Type *) ((0xE000E000UL) /*!< System Control Space Base Address */ + 0x0010UL) /*!< SysTick Base Address */ ) /*!< SysTick configuration struct */->CTRL = (1UL << 2U /*!< SysTick CTRL: CLKSOURCE Position */) /*!< SysTick CTRL: CLKSOURCE Mask */ |
                   (1UL << 1U /*!< SysTick CTRL: TICKINT Position */) /*!< SysTick CTRL: TICKINT Mask */ |
                   (1UL /*<< SysTick_CTRL_ENABLE_Pos*/) /*!< SysTick CTRL: ENABLE Mask */; /* Enable SysTick IRQ and SysTick Timer */
  return (0UL); /* Function successful */
}



/*@} end of CMSIS_Core_SysTickFunctions */





}
# 238 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/system_samd21.h" 1
/**
 * \file
 *
 * \brief Low-level initialization functions called upon chip startup
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */





extern "C" {




extern uint32_t SystemCoreClock; /*!< System Clock Frequency (Core Clock)  */

void SystemInit(void);
void SystemCoreClockUpdate(void);


}
# 240 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2


/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAMD21G18A */
/* ************************************************************************** */
/** \defgroup SAMD21G18A_api Peripheral Software API */
/*@{*/

# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h" 1
/**
 * \file
 *
 * \brief Component description for AC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR AC */
/* ========================================================================== */
/** \addtogroup SAMD21_AC Analog Comparators */
/*@{*/




/* -------- AC_CTRLA : (AC Offset: 0x00) (R/W  8) Control A -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint8_t RUNSTDBY:1; /*!< bit:      2  Run in Standby                     */
    uint8_t :4; /*!< bit:  3.. 6  Reserved                           */
    uint8_t LPMUX:1; /*!< bit:      7  Low-Power Mux                      */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_CTRLA_Type;
# 84 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_CTRLB : (AC Offset: 0x01) ( /W  8) Control B -------- */

typedef union {
  struct {
    uint8_t START0:1; /*!< bit:      0  Comparator 0 Start Comparison      */
    uint8_t START1:1; /*!< bit:      1  Comparator 1 Start Comparison      */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t START:2; /*!< bit:  0.. 1  Comparator x Start Comparison      */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_CTRLB_Type;
# 112 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_EVCTRL : (AC Offset: 0x02) (R/W 16) Event Control -------- */

typedef union {
  struct {
    uint16_t COMPEO0:1; /*!< bit:      0  Comparator 0 Event Output Enable   */
    uint16_t COMPEO1:1; /*!< bit:      1  Comparator 1 Event Output Enable   */
    uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint16_t WINEO0:1; /*!< bit:      4  Window 0 Event Output Enable       */
    uint16_t :3; /*!< bit:  5.. 7  Reserved                           */
    uint16_t COMPEI0:1; /*!< bit:      8  Comparator 0 Event Input           */
    uint16_t COMPEI1:1; /*!< bit:      9  Comparator 1 Event Input           */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t COMPEO:2; /*!< bit:  0.. 1  Comparator x Event Output Enable   */
    uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint16_t WINEO:1; /*!< bit:      4  Window x Event Output Enable       */
    uint16_t :3; /*!< bit:  5.. 7  Reserved                           */
    uint16_t COMPEI:2; /*!< bit:  8.. 9  Comparator x Event Input           */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} AC_EVCTRL_Type;
# 161 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_INTENCLR : (AC Offset: 0x04) (R/W  8) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t COMP0:1; /*!< bit:      0  Comparator 0 Interrupt Enable      */
    uint8_t COMP1:1; /*!< bit:      1  Comparator 1 Interrupt Enable      */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t WIN0:1; /*!< bit:      4  Window 0 Interrupt Enable          */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t COMP:2; /*!< bit:  0.. 1  Comparator x Interrupt Enable      */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t WIN:1; /*!< bit:      4  Window x Interrupt Enable          */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_INTENCLR_Type;
# 198 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_INTENSET : (AC Offset: 0x05) (R/W  8) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t COMP0:1; /*!< bit:      0  Comparator 0 Interrupt Enable      */
    uint8_t COMP1:1; /*!< bit:      1  Comparator 1 Interrupt Enable      */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t WIN0:1; /*!< bit:      4  Window 0 Interrupt Enable          */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t COMP:2; /*!< bit:  0.. 1  Comparator x Interrupt Enable      */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t WIN:1; /*!< bit:      4  Window x Interrupt Enable          */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_INTENSET_Type;
# 235 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_INTFLAG : (AC Offset: 0x06) (R/W  8) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t COMP0:1; /*!< bit:      0  Comparator 0                       */
    volatile /*!< Defines 'read only' permissions */ uint8_t COMP1:1; /*!< bit:      1  Comparator 1                       */
    volatile /*!< Defines 'read only' permissions */ uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t WIN0:1; /*!< bit:      4  Window 0                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t COMP:2; /*!< bit:  0.. 1  Comparator x                       */
    volatile /*!< Defines 'read only' permissions */ uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t WIN:1; /*!< bit:      4  Window x                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_INTFLAG_Type;
# 272 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_STATUSA : (AC Offset: 0x08) (R/   8) Status A -------- */

typedef union {
  struct {
    uint8_t STATE0:1; /*!< bit:      0  Comparator 0 Current State         */
    uint8_t STATE1:1; /*!< bit:      1  Comparator 1 Current State         */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t WSTATE0:2; /*!< bit:  4.. 5  Window 0 Current State             */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t STATE:2; /*!< bit:  0.. 1  Comparator x Current State         */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_STATUSA_Type;
# 311 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_STATUSB : (AC Offset: 0x09) (R/   8) Status B -------- */

typedef union {
  struct {
    uint8_t READY0:1; /*!< bit:      0  Comparator 0 Ready                 */
    uint8_t READY1:1; /*!< bit:      1  Comparator 1 Ready                 */
    uint8_t :5; /*!< bit:  2.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy               */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t READY:2; /*!< bit:  0.. 1  Comparator x Ready                 */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_STATUSB_Type;
# 342 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_STATUSC : (AC Offset: 0x0A) (R/   8) Status C -------- */

typedef union {
  struct {
    uint8_t STATE0:1; /*!< bit:      0  Comparator 0 Current State         */
    uint8_t STATE1:1; /*!< bit:      1  Comparator 1 Current State         */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t WSTATE0:2; /*!< bit:  4.. 5  Window 0 Current State             */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t STATE:2; /*!< bit:  0.. 1  Comparator x Current State         */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_STATUSC_Type;
# 381 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_WINCTRL : (AC Offset: 0x0C) (R/W  8) Window Control -------- */

typedef union {
  struct {
    uint8_t WEN0:1; /*!< bit:      0  Window 0 Mode Enable               */
    uint8_t WINTSEL0:2; /*!< bit:  1.. 2  Window 0 Interrupt Selection       */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_WINCTRL_Type;
# 411 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_COMPCTRL : (AC Offset: 0x10) (R/W 32) Comparator Control n -------- */

typedef union {
  struct {
    uint32_t ENABLE:1; /*!< bit:      0  Enable                             */
    uint32_t SINGLE:1; /*!< bit:      1  Single-Shot Mode                   */
    uint32_t SPEED:2; /*!< bit:  2.. 3  Speed Selection                    */
    uint32_t :1; /*!< bit:      4  Reserved                           */
    uint32_t INTSEL:2; /*!< bit:  5.. 6  Interrupt Selection                */
    uint32_t :1; /*!< bit:      7  Reserved                           */
    uint32_t MUXNEG:3; /*!< bit:  8..10  Negative Input Mux Selection       */
    uint32_t :1; /*!< bit:     11  Reserved                           */
    uint32_t MUXPOS:2; /*!< bit: 12..13  Positive Input Mux Selection       */
    uint32_t :1; /*!< bit:     14  Reserved                           */
    uint32_t SWAP:1; /*!< bit:     15  Swap Inputs and Invert             */
    uint32_t OUT:2; /*!< bit: 16..17  Output                             */
    uint32_t :1; /*!< bit:     18  Reserved                           */
    uint32_t HYST:1; /*!< bit:     19  Hysteresis Enable                  */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t FLEN:3; /*!< bit: 24..26  Filter Length                      */
    uint32_t :5; /*!< bit: 27..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} AC_COMPCTRL_Type;
# 516 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/* -------- AC_SCALER : (AC Offset: 0x20) (R/W  8) Scaler n -------- */

typedef union {
  struct {
    uint8_t VALUE:6; /*!< bit:  0.. 5  Scaler Value                       */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} AC_SCALER_Type;
# 535 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/ac.h"
/** \brief AC hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ AC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W  8) Control A */
  volatile /*!< Defines 'write only' permissions */ AC_CTRLB_Type CTRLB; /**< \brief Offset: 0x01 ( /W  8) Control B */
  volatile /*!< Defines 'read / write' permissions */ AC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x02 (R/W 16) Event Control */
  volatile /*!< Defines 'read / write' permissions */ AC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x04 (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ AC_INTENSET_Type INTENSET; /**< \brief Offset: 0x05 (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ AC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x06 (R/W  8) Interrupt Flag Status and Clear */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read only' permissions */ AC_STATUSA_Type STATUSA; /**< \brief Offset: 0x08 (R/   8) Status A */
  volatile /*!< Defines 'read only' permissions */ AC_STATUSB_Type STATUSB; /**< \brief Offset: 0x09 (R/   8) Status B */
  volatile /*!< Defines 'read only' permissions */ AC_STATUSC_Type STATUSC; /**< \brief Offset: 0x0A (R/   8) Status C */
       RoReg8 Reserved2[0x1];
  volatile /*!< Defines 'read / write' permissions */ AC_WINCTRL_Type WINCTRL; /**< \brief Offset: 0x0C (R/W  8) Window Control */
       RoReg8 Reserved3[0x3];
  volatile /*!< Defines 'read / write' permissions */ AC_COMPCTRL_Type COMPCTRL[2]; /**< \brief Offset: 0x10 (R/W 32) Comparator Control n */
       RoReg8 Reserved4[0x8];
  volatile /*!< Defines 'read / write' permissions */ AC_SCALER_Type SCALER[2]; /**< \brief Offset: 0x20 (R/W  8) Scaler n */
} Ac;


/*@}*/
# 251 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h" 1
/**
 * \file
 *
 * \brief Component description for ADC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ADC */
/* ========================================================================== */
/** \addtogroup SAMD21_ADC Analog Digital Converter */
/*@{*/




/* -------- ADC_CTRLA : (ADC Offset: 0x00) (R/W  8) Control A -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint8_t RUNSTDBY:1; /*!< bit:      2  Run in Standby                     */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_CTRLA_Type;
# 80 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_REFCTRL : (ADC Offset: 0x01) (R/W  8) Reference Control -------- */

typedef union {
  struct {
    uint8_t REFSEL:4; /*!< bit:  0.. 3  Reference Selection                */
    uint8_t :3; /*!< bit:  4.. 6  Reserved                           */
    uint8_t REFCOMP:1; /*!< bit:      7  Reference Buffer Offset Compensation Enable */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_REFCTRL_Type;
# 112 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_AVGCTRL : (ADC Offset: 0x02) (R/W  8) Average Control -------- */

typedef union {
  struct {
    uint8_t SAMPLENUM:4; /*!< bit:  0.. 3  Number of Samples to be Collected  */
    uint8_t ADJRES:3; /*!< bit:  4.. 6  Adjusting Result / Division Coefficient */
    uint8_t :1; /*!< bit:      7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_AVGCTRL_Type;
# 157 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_SAMPCTRL : (ADC Offset: 0x03) (R/W  8) Sampling Time Control -------- */

typedef union {
  struct {
    uint8_t SAMPLEN:6; /*!< bit:  0.. 5  Sampling Time Length               */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_SAMPCTRL_Type;
# 176 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_CTRLB : (ADC Offset: 0x04) (R/W 16) Control B -------- */

typedef union {
  struct {
    uint16_t DIFFMODE:1; /*!< bit:      0  Differential Mode                  */
    uint16_t LEFTADJ:1; /*!< bit:      1  Left-Adjusted Result               */
    uint16_t FREERUN:1; /*!< bit:      2  Free Running Mode                  */
    uint16_t CORREN:1; /*!< bit:      3  Digital Correction Logic Enabled   */
    uint16_t RESSEL:2; /*!< bit:  4.. 5  Conversion Result Resolution       */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t PRESCALER:3; /*!< bit:  8..10  Prescaler Configuration            */
    uint16_t :5; /*!< bit: 11..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} ADC_CTRLB_Type;
# 236 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_WINCTRL : (ADC Offset: 0x08) (R/W  8) Window Monitor Control -------- */

typedef union {
  struct {
    uint8_t WINMODE:3; /*!< bit:  0.. 2  Window Monitor Mode                */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_WINCTRL_Type;
# 265 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_SWTRIG : (ADC Offset: 0x0C) (R/W  8) Software Trigger -------- */

typedef union {
  struct {
    uint8_t FLUSH:1; /*!< bit:      0  ADC Conversion Flush               */
    uint8_t START:1; /*!< bit:      1  ADC Start Conversion               */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_SWTRIG_Type;
# 286 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_INPUTCTRL : (ADC Offset: 0x10) (R/W 32) Input Control -------- */

typedef union {
  struct {
    uint32_t MUXPOS:5; /*!< bit:  0.. 4  Positive Mux Input Selection       */
    uint32_t :3; /*!< bit:  5.. 7  Reserved                           */
    uint32_t MUXNEG:5; /*!< bit:  8..12  Negative Mux Input Selection       */
    uint32_t :3; /*!< bit: 13..15  Reserved                           */
    uint32_t INPUTSCAN:4; /*!< bit: 16..19  Number of Input Channels Included in Scan */
    uint32_t INPUTOFFSET:4; /*!< bit: 20..23  Positive Mux Setting Offset        */
    uint32_t GAIN:4; /*!< bit: 24..27  Gain Factor Selection              */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} ADC_INPUTCTRL_Type;
# 405 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_EVCTRL : (ADC Offset: 0x14) (R/W  8) Event Control -------- */

typedef union {
  struct {
    uint8_t STARTEI:1; /*!< bit:      0  Start Conversion Event In          */
    uint8_t SYNCEI:1; /*!< bit:      1  Synchronization Event In           */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t RESRDYEO:1; /*!< bit:      4  Result Ready Event Out             */
    uint8_t WINMONEO:1; /*!< bit:      5  Window Monitor Event Out           */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_EVCTRL_Type;
# 433 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_INTENCLR : (ADC Offset: 0x16) (R/W  8) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t RESRDY:1; /*!< bit:      0  Result Ready Interrupt Enable      */
    uint8_t OVERRUN:1; /*!< bit:      1  Overrun Interrupt Enable           */
    uint8_t WINMON:1; /*!< bit:      2  Window Monitor Interrupt Enable    */
    uint8_t SYNCRDY:1; /*!< bit:      3  Synchronization Ready Interrupt Enable */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_INTENCLR_Type;
# 460 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_INTENSET : (ADC Offset: 0x17) (R/W  8) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t RESRDY:1; /*!< bit:      0  Result Ready Interrupt Enable      */
    uint8_t OVERRUN:1; /*!< bit:      1  Overrun Interrupt Enable           */
    uint8_t WINMON:1; /*!< bit:      2  Window Monitor Interrupt Enable    */
    uint8_t SYNCRDY:1; /*!< bit:      3  Synchronization Ready Interrupt Enable */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_INTENSET_Type;
# 487 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_INTFLAG : (ADC Offset: 0x18) (R/W  8) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t RESRDY:1; /*!< bit:      0  Result Ready                       */
    volatile /*!< Defines 'read only' permissions */ uint8_t OVERRUN:1; /*!< bit:      1  Overrun                            */
    volatile /*!< Defines 'read only' permissions */ uint8_t WINMON:1; /*!< bit:      2  Window Monitor                     */
    volatile /*!< Defines 'read only' permissions */ uint8_t SYNCRDY:1; /*!< bit:      3  Synchronization Ready              */
    volatile /*!< Defines 'read only' permissions */ uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_INTFLAG_Type;
# 514 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_STATUS : (ADC Offset: 0x19) (R/   8) Status -------- */

typedef union {
  struct {
    uint8_t :7; /*!< bit:  0.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy               */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_STATUS_Type;
# 532 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_RESULT : (ADC Offset: 0x1A) (R/  16) Result -------- */

typedef union {
  struct {
    uint16_t RESULT:16; /*!< bit:  0..15  Result Conversion Value            */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} ADC_RESULT_Type;
# 550 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_WINLT : (ADC Offset: 0x1C) (R/W 16) Window Monitor Lower Threshold -------- */

typedef union {
  struct {
    uint16_t WINLT:16; /*!< bit:  0..15  Window Lower Threshold             */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} ADC_WINLT_Type;
# 568 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_WINUT : (ADC Offset: 0x20) (R/W 16) Window Monitor Upper Threshold -------- */

typedef union {
  struct {
    uint16_t WINUT:16; /*!< bit:  0..15  Window Upper Threshold             */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} ADC_WINUT_Type;
# 586 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_GAINCORR : (ADC Offset: 0x24) (R/W 16) Gain Correction -------- */

typedef union {
  struct {
    uint16_t GAINCORR:12; /*!< bit:  0..11  Gain Correction Value              */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} ADC_GAINCORR_Type;
# 605 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_OFFSETCORR : (ADC Offset: 0x26) (R/W 16) Offset Correction -------- */

typedef union {
  struct {
    uint16_t OFFSETCORR:12; /*!< bit:  0..11  Offset Correction Value            */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} ADC_OFFSETCORR_Type;
# 624 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_CALIB : (ADC Offset: 0x28) (R/W 16) Calibration -------- */

typedef union {
  struct {
    uint16_t LINEARITY_CAL:8; /*!< bit:  0.. 7  Linearity Calibration Value        */
    uint16_t BIAS_CAL:3; /*!< bit:  8..10  Bias Calibration Value             */
    uint16_t :5; /*!< bit: 11..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} ADC_CALIB_Type;
# 647 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/* -------- ADC_DBGCTRL : (ADC Offset: 0x2A) (R/W  8) Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGRUN:1; /*!< bit:      0  Debug Run                          */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} ADC_DBGCTRL_Type;
# 665 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/adc.h"
/** \brief ADC hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ ADC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W  8) Control A */
  volatile /*!< Defines 'read / write' permissions */ ADC_REFCTRL_Type REFCTRL; /**< \brief Offset: 0x01 (R/W  8) Reference Control */
  volatile /*!< Defines 'read / write' permissions */ ADC_AVGCTRL_Type AVGCTRL; /**< \brief Offset: 0x02 (R/W  8) Average Control */
  volatile /*!< Defines 'read / write' permissions */ ADC_SAMPCTRL_Type SAMPCTRL; /**< \brief Offset: 0x03 (R/W  8) Sampling Time Control */
  volatile /*!< Defines 'read / write' permissions */ ADC_CTRLB_Type CTRLB; /**< \brief Offset: 0x04 (R/W 16) Control B */
       RoReg8 Reserved1[0x2];
  volatile /*!< Defines 'read / write' permissions */ ADC_WINCTRL_Type WINCTRL; /**< \brief Offset: 0x08 (R/W  8) Window Monitor Control */
       RoReg8 Reserved2[0x3];
  volatile /*!< Defines 'read / write' permissions */ ADC_SWTRIG_Type SWTRIG; /**< \brief Offset: 0x0C (R/W  8) Software Trigger */
       RoReg8 Reserved3[0x3];
  volatile /*!< Defines 'read / write' permissions */ ADC_INPUTCTRL_Type INPUTCTRL; /**< \brief Offset: 0x10 (R/W 32) Input Control */
  volatile /*!< Defines 'read / write' permissions */ ADC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x14 (R/W  8) Event Control */
       RoReg8 Reserved4[0x1];
  volatile /*!< Defines 'read / write' permissions */ ADC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x16 (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ ADC_INTENSET_Type INTENSET; /**< \brief Offset: 0x17 (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ ADC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x18 (R/W  8) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ ADC_STATUS_Type STATUS; /**< \brief Offset: 0x19 (R/   8) Status */
  volatile /*!< Defines 'read only' permissions */ ADC_RESULT_Type RESULT; /**< \brief Offset: 0x1A (R/  16) Result */
  volatile /*!< Defines 'read / write' permissions */ ADC_WINLT_Type WINLT; /**< \brief Offset: 0x1C (R/W 16) Window Monitor Lower Threshold */
       RoReg8 Reserved5[0x2];
  volatile /*!< Defines 'read / write' permissions */ ADC_WINUT_Type WINUT; /**< \brief Offset: 0x20 (R/W 16) Window Monitor Upper Threshold */
       RoReg8 Reserved6[0x2];
  volatile /*!< Defines 'read / write' permissions */ ADC_GAINCORR_Type GAINCORR; /**< \brief Offset: 0x24 (R/W 16) Gain Correction */
  volatile /*!< Defines 'read / write' permissions */ ADC_OFFSETCORR_Type OFFSETCORR; /**< \brief Offset: 0x26 (R/W 16) Offset Correction */
  volatile /*!< Defines 'read / write' permissions */ ADC_CALIB_Type CALIB; /**< \brief Offset: 0x28 (R/W 16) Calibration */
  volatile /*!< Defines 'read / write' permissions */ ADC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x2A (R/W  8) Debug Control */
} Adc;


/*@}*/
# 252 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h" 1
/**
 * \file
 *
 * \brief Component description for DAC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DAC */
/* ========================================================================== */
/** \addtogroup SAMD21_DAC Digital Analog Converter */
/*@{*/




/* -------- DAC_CTRLA : (DAC Offset: 0x0) (R/W  8) Control A -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint8_t RUNSTDBY:1; /*!< bit:      2  Run in Standby                     */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DAC_CTRLA_Type;
# 80 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_CTRLB : (DAC Offset: 0x1) (R/W  8) Control B -------- */

typedef union {
  struct {
    uint8_t EOEN:1; /*!< bit:      0  External Output Enable             */
    uint8_t IOEN:1; /*!< bit:      1  Internal Output Enable             */
    uint8_t LEFTADJ:1; /*!< bit:      2  Left Adjusted Data                 */
    uint8_t VPD:1; /*!< bit:      3  Voltage Pump Disable               */
    uint8_t BDWP:1; /*!< bit:      4  Bypass DATABUF Write Protection    */
    uint8_t :1; /*!< bit:      5  Reserved                           */
    uint8_t REFSEL:2; /*!< bit:  6.. 7  Reference Selection                */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DAC_CTRLB_Type;
# 120 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_EVCTRL : (DAC Offset: 0x2) (R/W  8) Event Control -------- */

typedef union {
  struct {
    uint8_t STARTEI:1; /*!< bit:      0  Start Conversion Event Input       */
    uint8_t EMPTYEO:1; /*!< bit:      1  Data Buffer Empty Event Output     */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DAC_EVCTRL_Type;
# 141 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_INTENCLR : (DAC Offset: 0x4) (R/W  8) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t UNDERRUN:1; /*!< bit:      0  Underrun Interrupt Enable          */
    uint8_t EMPTY:1; /*!< bit:      1  Data Buffer Empty Interrupt Enable */
    uint8_t SYNCRDY:1; /*!< bit:      2  Synchronization Ready Interrupt Enable */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DAC_INTENCLR_Type;
# 165 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_INTENSET : (DAC Offset: 0x5) (R/W  8) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t UNDERRUN:1; /*!< bit:      0  Underrun Interrupt Enable          */
    uint8_t EMPTY:1; /*!< bit:      1  Data Buffer Empty Interrupt Enable */
    uint8_t SYNCRDY:1; /*!< bit:      2  Synchronization Ready Interrupt Enable */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DAC_INTENSET_Type;
# 189 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_INTFLAG : (DAC Offset: 0x6) (R/W  8) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t UNDERRUN:1; /*!< bit:      0  Underrun                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t EMPTY:1; /*!< bit:      1  Data Buffer Empty                  */
    volatile /*!< Defines 'read only' permissions */ uint8_t SYNCRDY:1; /*!< bit:      2  Synchronization Ready              */
    volatile /*!< Defines 'read only' permissions */ uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DAC_INTFLAG_Type;
# 213 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_STATUS : (DAC Offset: 0x7) (R/   8) Status -------- */

typedef union {
  struct {
    uint8_t :7; /*!< bit:  0.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy Status        */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DAC_STATUS_Type;
# 231 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_DATA : (DAC Offset: 0x8) (R/W 16) Data -------- */

typedef union {
  struct {
    uint16_t DATA:16; /*!< bit:  0..15  Data value to be converted         */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} DAC_DATA_Type;
# 249 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/* -------- DAC_DATABUF : (DAC Offset: 0xC) (R/W 16) Data Buffer -------- */

typedef union {
  struct {
    uint16_t DATABUF:16; /*!< bit:  0..15  Data Buffer                        */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} DAC_DATABUF_Type;
# 267 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dac.h"
/** \brief DAC hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ DAC_CTRLA_Type CTRLA; /**< \brief Offset: 0x0 (R/W  8) Control A */
  volatile /*!< Defines 'read / write' permissions */ DAC_CTRLB_Type CTRLB; /**< \brief Offset: 0x1 (R/W  8) Control B */
  volatile /*!< Defines 'read / write' permissions */ DAC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x2 (R/W  8) Event Control */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ DAC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x4 (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ DAC_INTENSET_Type INTENSET; /**< \brief Offset: 0x5 (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ DAC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x6 (R/W  8) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ DAC_STATUS_Type STATUS; /**< \brief Offset: 0x7 (R/   8) Status */
  volatile /*!< Defines 'read / write' permissions */ DAC_DATA_Type DATA; /**< \brief Offset: 0x8 (R/W 16) Data */
       RoReg8 Reserved2[0x2];
  volatile /*!< Defines 'read / write' permissions */ DAC_DATABUF_Type DATABUF; /**< \brief Offset: 0xC (R/W 16) Data Buffer */
} Dac;


/*@}*/
# 253 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h" 1
/**
 * \file
 *
 * \brief Component description for DMAC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DMAC */
/* ========================================================================== */
/** \addtogroup SAMD21_DMAC Direct Memory Access Controller */
/*@{*/




/* -------- DMAC_CTRL : (DMAC Offset: 0x00) (R/W 16) Control -------- */

typedef union {
  struct {
    uint16_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint16_t DMAENABLE:1; /*!< bit:      1  DMA Enable                         */
    uint16_t CRCENABLE:1; /*!< bit:      2  CRC Enable                         */
    uint16_t :5; /*!< bit:  3.. 7  Reserved                           */
    uint16_t LVLEN0:1; /*!< bit:      8  Priority Level 0 Enable            */
    uint16_t LVLEN1:1; /*!< bit:      9  Priority Level 1 Enable            */
    uint16_t LVLEN2:1; /*!< bit:     10  Priority Level 2 Enable            */
    uint16_t LVLEN3:1; /*!< bit:     11  Priority Level 3 Enable            */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t :8; /*!< bit:  0.. 7  Reserved                           */
    uint16_t LVLEN:4; /*!< bit:  8..11  Priority Level x Enable            */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} DMAC_CTRL_Type;
# 101 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CRCCTRL : (DMAC Offset: 0x02) (R/W 16) CRC Control -------- */

typedef union {
  struct {
    uint16_t CRCBEATSIZE:2; /*!< bit:  0.. 1  CRC Beat Size                      */
    uint16_t CRCPOLY:2; /*!< bit:  2.. 3  CRC Polynomial Type                */
    uint16_t :4; /*!< bit:  4.. 7  Reserved                           */
    uint16_t CRCSRC:6; /*!< bit:  8..13  CRC Input Source                   */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} DMAC_CRCCTRL_Type;
# 143 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CRCDATAIN : (DMAC Offset: 0x04) (R/W 32) CRC Data Input -------- */

typedef union {
  struct {
    uint32_t CRCDATAIN:32; /*!< bit:  0..31  CRC Data Input                     */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_CRCDATAIN_Type;
# 161 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CRCCHKSUM : (DMAC Offset: 0x08) (R/W 32) CRC Checksum -------- */

typedef union {
  struct {
    uint32_t CRCCHKSUM:32; /*!< bit:  0..31  CRC Checksum                       */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_CRCCHKSUM_Type;
# 179 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CRCSTATUS : (DMAC Offset: 0x0C) (R/W  8) CRC Status -------- */

typedef union {
  struct {
    uint8_t CRCBUSY:1; /*!< bit:      0  CRC Module Busy                    */
    uint8_t CRCZERO:1; /*!< bit:      1  CRC Zero                           */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_CRCSTATUS_Type;
# 200 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_DBGCTRL : (DMAC Offset: 0x0D) (R/W  8) Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGRUN:1; /*!< bit:      0  Debug Run                          */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_DBGCTRL_Type;
# 218 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_QOSCTRL : (DMAC Offset: 0x0E) (R/W  8) QOS Control -------- */

typedef union {
  struct {
    uint8_t WRBQOS:2; /*!< bit:  0.. 1  Write-Back Quality of Service      */
    uint8_t FQOS:2; /*!< bit:  2.. 3  Fetch Quality of Service           */
    uint8_t DQOS:2; /*!< bit:  4.. 5  Data Transfer Quality of Service   */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_QOSCTRL_Type;
# 269 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_SWTRIGCTRL : (DMAC Offset: 0x10) (R/W 32) Software Trigger Control -------- */

typedef union {
  struct {
    uint32_t SWTRIG0:1; /*!< bit:      0  Channel 0 Software Trigger         */
    uint32_t SWTRIG1:1; /*!< bit:      1  Channel 1 Software Trigger         */
    uint32_t SWTRIG2:1; /*!< bit:      2  Channel 2 Software Trigger         */
    uint32_t SWTRIG3:1; /*!< bit:      3  Channel 3 Software Trigger         */
    uint32_t SWTRIG4:1; /*!< bit:      4  Channel 4 Software Trigger         */
    uint32_t SWTRIG5:1; /*!< bit:      5  Channel 5 Software Trigger         */
    uint32_t SWTRIG6:1; /*!< bit:      6  Channel 6 Software Trigger         */
    uint32_t SWTRIG7:1; /*!< bit:      7  Channel 7 Software Trigger         */
    uint32_t SWTRIG8:1; /*!< bit:      8  Channel 8 Software Trigger         */
    uint32_t SWTRIG9:1; /*!< bit:      9  Channel 9 Software Trigger         */
    uint32_t SWTRIG10:1; /*!< bit:     10  Channel 10 Software Trigger        */
    uint32_t SWTRIG11:1; /*!< bit:     11  Channel 11 Software Trigger        */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t SWTRIG:12; /*!< bit:  0..11  Channel x Software Trigger         */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_SWTRIGCTRL_Type;
# 327 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_PRICTRL0 : (DMAC Offset: 0x14) (R/W 32) Priority Control 0 -------- */

typedef union {
  struct {
    uint32_t LVLPRI0:4; /*!< bit:  0.. 3  Level 0 Channel Priority Number    */
    uint32_t :3; /*!< bit:  4.. 6  Reserved                           */
    uint32_t RRLVLEN0:1; /*!< bit:      7  Level 0 Round-Robin Scheduling Enable */
    uint32_t LVLPRI1:4; /*!< bit:  8..11  Level 1 Channel Priority Number    */
    uint32_t :3; /*!< bit: 12..14  Reserved                           */
    uint32_t RRLVLEN1:1; /*!< bit:     15  Level 1 Round-Robin Scheduling Enable */
    uint32_t LVLPRI2:4; /*!< bit: 16..19  Level 2 Channel Priority Number    */
    uint32_t :3; /*!< bit: 20..22  Reserved                           */
    uint32_t RRLVLEN2:1; /*!< bit:     23  Level 2 Round-Robin Scheduling Enable */
    uint32_t LVLPRI3:4; /*!< bit: 24..27  Level 3 Channel Priority Number    */
    uint32_t :3; /*!< bit: 28..30  Reserved                           */
    uint32_t RRLVLEN3:1; /*!< bit:     31  Level 3 Round-Robin Scheduling Enable */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_PRICTRL0_Type;
# 373 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_INTPEND : (DMAC Offset: 0x20) (R/W 16) Interrupt Pending -------- */

typedef union {
  struct {
    uint16_t ID:4; /*!< bit:  0.. 3  Channel ID                         */
    uint16_t :4; /*!< bit:  4.. 7  Reserved                           */
    uint16_t TERR:1; /*!< bit:      8  Transfer Error                     */
    uint16_t TCMPL:1; /*!< bit:      9  Transfer Complete                  */
    uint16_t SUSP:1; /*!< bit:     10  Channel Suspend                    */
    uint16_t :2; /*!< bit: 11..12  Reserved                           */
    uint16_t FERR:1; /*!< bit:     13  Fetch Error                        */
    uint16_t BUSY:1; /*!< bit:     14  Busy                               */
    uint16_t PEND:1; /*!< bit:     15  Pending                            */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} DMAC_INTPEND_Type;
# 411 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_INTSTATUS : (DMAC Offset: 0x24) (R/  32) Interrupt Status -------- */

typedef union {
  struct {
    uint32_t CHINT0:1; /*!< bit:      0  Channel 0 Pending Interrupt        */
    uint32_t CHINT1:1; /*!< bit:      1  Channel 1 Pending Interrupt        */
    uint32_t CHINT2:1; /*!< bit:      2  Channel 2 Pending Interrupt        */
    uint32_t CHINT3:1; /*!< bit:      3  Channel 3 Pending Interrupt        */
    uint32_t CHINT4:1; /*!< bit:      4  Channel 4 Pending Interrupt        */
    uint32_t CHINT5:1; /*!< bit:      5  Channel 5 Pending Interrupt        */
    uint32_t CHINT6:1; /*!< bit:      6  Channel 6 Pending Interrupt        */
    uint32_t CHINT7:1; /*!< bit:      7  Channel 7 Pending Interrupt        */
    uint32_t CHINT8:1; /*!< bit:      8  Channel 8 Pending Interrupt        */
    uint32_t CHINT9:1; /*!< bit:      9  Channel 9 Pending Interrupt        */
    uint32_t CHINT10:1; /*!< bit:     10  Channel 10 Pending Interrupt       */
    uint32_t CHINT11:1; /*!< bit:     11  Channel 11 Pending Interrupt       */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t CHINT:12; /*!< bit:  0..11  Channel x Pending Interrupt        */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_INTSTATUS_Type;
# 469 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_BUSYCH : (DMAC Offset: 0x28) (R/  32) Busy Channels -------- */

typedef union {
  struct {
    uint32_t BUSYCH0:1; /*!< bit:      0  Busy Channel 0                     */
    uint32_t BUSYCH1:1; /*!< bit:      1  Busy Channel 1                     */
    uint32_t BUSYCH2:1; /*!< bit:      2  Busy Channel 2                     */
    uint32_t BUSYCH3:1; /*!< bit:      3  Busy Channel 3                     */
    uint32_t BUSYCH4:1; /*!< bit:      4  Busy Channel 4                     */
    uint32_t BUSYCH5:1; /*!< bit:      5  Busy Channel 5                     */
    uint32_t BUSYCH6:1; /*!< bit:      6  Busy Channel 6                     */
    uint32_t BUSYCH7:1; /*!< bit:      7  Busy Channel 7                     */
    uint32_t BUSYCH8:1; /*!< bit:      8  Busy Channel 8                     */
    uint32_t BUSYCH9:1; /*!< bit:      9  Busy Channel 9                     */
    uint32_t BUSYCH10:1; /*!< bit:     10  Busy Channel 10                    */
    uint32_t BUSYCH11:1; /*!< bit:     11  Busy Channel 11                    */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t BUSYCH:12; /*!< bit:  0..11  Busy Channel x                     */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_BUSYCH_Type;
# 527 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_PENDCH : (DMAC Offset: 0x2C) (R/  32) Pending Channels -------- */

typedef union {
  struct {
    uint32_t PENDCH0:1; /*!< bit:      0  Pending Channel 0                  */
    uint32_t PENDCH1:1; /*!< bit:      1  Pending Channel 1                  */
    uint32_t PENDCH2:1; /*!< bit:      2  Pending Channel 2                  */
    uint32_t PENDCH3:1; /*!< bit:      3  Pending Channel 3                  */
    uint32_t PENDCH4:1; /*!< bit:      4  Pending Channel 4                  */
    uint32_t PENDCH5:1; /*!< bit:      5  Pending Channel 5                  */
    uint32_t PENDCH6:1; /*!< bit:      6  Pending Channel 6                  */
    uint32_t PENDCH7:1; /*!< bit:      7  Pending Channel 7                  */
    uint32_t PENDCH8:1; /*!< bit:      8  Pending Channel 8                  */
    uint32_t PENDCH9:1; /*!< bit:      9  Pending Channel 9                  */
    uint32_t PENDCH10:1; /*!< bit:     10  Pending Channel 10                 */
    uint32_t PENDCH11:1; /*!< bit:     11  Pending Channel 11                 */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t PENDCH:12; /*!< bit:  0..11  Pending Channel x                  */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_PENDCH_Type;
# 585 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_ACTIVE : (DMAC Offset: 0x30) (R/  32) Active Channel and Levels -------- */

typedef union {
  struct {
    uint32_t LVLEX0:1; /*!< bit:      0  Level 0 Channel Trigger Request Executing */
    uint32_t LVLEX1:1; /*!< bit:      1  Level 1 Channel Trigger Request Executing */
    uint32_t LVLEX2:1; /*!< bit:      2  Level 2 Channel Trigger Request Executing */
    uint32_t LVLEX3:1; /*!< bit:      3  Level 3 Channel Trigger Request Executing */
    uint32_t :4; /*!< bit:  4.. 7  Reserved                           */
    uint32_t ID:5; /*!< bit:  8..12  Active Channel ID                  */
    uint32_t :2; /*!< bit: 13..14  Reserved                           */
    uint32_t ABUSY:1; /*!< bit:     15  Active Channel Busy                */
    uint32_t BTCNT:16; /*!< bit: 16..31  Active Channel Block Transfer Count */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t LVLEX:4; /*!< bit:  0.. 3  Level x Channel Trigger Request Executing */
    uint32_t :28; /*!< bit:  4..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_ACTIVE_Type;
# 631 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_BASEADDR : (DMAC Offset: 0x34) (R/W 32) Descriptor Memory Section Base Address -------- */

typedef union {
  struct {
    uint32_t BASEADDR:32; /*!< bit:  0..31  Descriptor Memory Base Address     */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_BASEADDR_Type;
# 649 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_WRBADDR : (DMAC Offset: 0x38) (R/W 32) Write-Back Memory Section Base Address -------- */

typedef union {
  struct {
    uint32_t WRBADDR:32; /*!< bit:  0..31  Write-Back Memory Base Address     */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_WRBADDR_Type;
# 667 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CHID : (DMAC Offset: 0x3F) (R/W  8) Channel ID -------- */

typedef union {
  struct {
    uint8_t ID:4; /*!< bit:  0.. 3  Channel ID                         */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_CHID_Type;
# 686 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CHCTRLA : (DMAC Offset: 0x40) (R/W  8) Channel Control A -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Channel Software Reset             */
    uint8_t ENABLE:1; /*!< bit:      1  Channel Enable                     */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_CHCTRLA_Type;
# 707 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CHCTRLB : (DMAC Offset: 0x44) (R/W 32) Channel Control B -------- */

typedef union {
  struct {
    uint32_t EVACT:3; /*!< bit:  0.. 2  Event Input Action                 */
    uint32_t EVIE:1; /*!< bit:      3  Channel Event Input Enable         */
    uint32_t EVOE:1; /*!< bit:      4  Channel Event Output Enable        */
    uint32_t LVL:2; /*!< bit:  5.. 6  Channel Arbitration Level          */
    uint32_t :1; /*!< bit:      7  Reserved                           */
    uint32_t TRIGSRC:6; /*!< bit:  8..13  Trigger Source                     */
    uint32_t :8; /*!< bit: 14..21  Reserved                           */
    uint32_t TRIGACT:2; /*!< bit: 22..23  Trigger Action                     */
    uint32_t CMD:2; /*!< bit: 24..25  Software Command                   */
    uint32_t :6; /*!< bit: 26..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_CHCTRLB_Type;
# 786 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CHINTENCLR : (DMAC Offset: 0x4C) (R/W  8) Channel Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t TERR:1; /*!< bit:      0  Channel Transfer Error Interrupt Enable */
    uint8_t TCMPL:1; /*!< bit:      1  Channel Transfer Complete Interrupt Enable */
    uint8_t SUSP:1; /*!< bit:      2  Channel Suspend Interrupt Enable   */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_CHINTENCLR_Type;
# 810 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CHINTENSET : (DMAC Offset: 0x4D) (R/W  8) Channel Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t TERR:1; /*!< bit:      0  Channel Transfer Error Interrupt Enable */
    uint8_t TCMPL:1; /*!< bit:      1  Channel Transfer Complete Interrupt Enable */
    uint8_t SUSP:1; /*!< bit:      2  Channel Suspend Interrupt Enable   */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_CHINTENSET_Type;
# 834 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CHINTFLAG : (DMAC Offset: 0x4E) (R/W  8) Channel Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t TERR:1; /*!< bit:      0  Channel Transfer Error             */
    volatile /*!< Defines 'read only' permissions */ uint8_t TCMPL:1; /*!< bit:      1  Channel Transfer Complete          */
    volatile /*!< Defines 'read only' permissions */ uint8_t SUSP:1; /*!< bit:      2  Channel Suspend                    */
    volatile /*!< Defines 'read only' permissions */ uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_CHINTFLAG_Type;
# 858 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_CHSTATUS : (DMAC Offset: 0x4F) (R/   8) Channel Status -------- */

typedef union {
  struct {
    uint8_t PEND:1; /*!< bit:      0  Channel Pending                    */
    uint8_t BUSY:1; /*!< bit:      1  Channel Busy                       */
    uint8_t FERR:1; /*!< bit:      2  Channel Fetch Error                */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DMAC_CHSTATUS_Type;
# 882 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_BTCTRL : (DMAC Offset: 0x00) (R/W 16) Block Transfer Control -------- */

typedef union {
  struct {
    uint16_t VALID:1; /*!< bit:      0  Descriptor Valid                   */
    uint16_t EVOSEL:2; /*!< bit:  1.. 2  Event Output Selection             */
    uint16_t BLOCKACT:2; /*!< bit:  3.. 4  Block Action                       */
    uint16_t :3; /*!< bit:  5.. 7  Reserved                           */
    uint16_t BEATSIZE:2; /*!< bit:  8.. 9  Beat Size                          */
    uint16_t SRCINC:1; /*!< bit:     10  Source Address Increment Enable    */
    uint16_t DSTINC:1; /*!< bit:     11  Destination Address Increment Enable */
    uint16_t STEPSEL:1; /*!< bit:     12  Step Selection                     */
    uint16_t STEPSIZE:3; /*!< bit: 13..15  Address Increment Step Size        */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} DMAC_BTCTRL_Type;
# 965 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_BTCNT : (DMAC Offset: 0x02) (R/W 16) Block Transfer Count -------- */

typedef union {
  struct {
    uint16_t BTCNT:16; /*!< bit:  0..15  Block Transfer Count               */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} DMAC_BTCNT_Type;
# 982 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_SRCADDR : (DMAC Offset: 0x04) (R/W 32) Block Transfer Source Address -------- */

typedef union {
  struct {
    uint32_t SRCADDR:32; /*!< bit:  0..31  Transfer Source Address            */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_SRCADDR_Type;
# 999 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_DSTADDR : (DMAC Offset: 0x08) (R/W 32) Block Transfer Destination Address -------- */

typedef union {
  struct {
    uint32_t DSTADDR:32; /*!< bit:  0..31  Transfer Destination Address       */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_DSTADDR_Type;
# 1016 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/* -------- DMAC_DESCADDR : (DMAC Offset: 0x0C) (R/W 32) Next Descriptor Address -------- */

typedef union {
  struct {
    uint32_t DESCADDR:32; /*!< bit:  0..31  Next Descriptor Address            */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DMAC_DESCADDR_Type;
# 1033 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dmac.h"
/** \brief DMAC APB hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ DMAC_CTRL_Type CTRL; /**< \brief Offset: 0x00 (R/W 16) Control */
  volatile /*!< Defines 'read / write' permissions */ DMAC_CRCCTRL_Type CRCCTRL; /**< \brief Offset: 0x02 (R/W 16) CRC Control */
  volatile /*!< Defines 'read / write' permissions */ DMAC_CRCDATAIN_Type CRCDATAIN; /**< \brief Offset: 0x04 (R/W 32) CRC Data Input */
  volatile /*!< Defines 'read / write' permissions */ DMAC_CRCCHKSUM_Type CRCCHKSUM; /**< \brief Offset: 0x08 (R/W 32) CRC Checksum */
  volatile /*!< Defines 'read / write' permissions */ DMAC_CRCSTATUS_Type CRCSTATUS; /**< \brief Offset: 0x0C (R/W  8) CRC Status */
  volatile /*!< Defines 'read / write' permissions */ DMAC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x0D (R/W  8) Debug Control */
  volatile /*!< Defines 'read / write' permissions */ DMAC_QOSCTRL_Type QOSCTRL; /**< \brief Offset: 0x0E (R/W  8) QOS Control */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ DMAC_SWTRIGCTRL_Type SWTRIGCTRL; /**< \brief Offset: 0x10 (R/W 32) Software Trigger Control */
  volatile /*!< Defines 'read / write' permissions */ DMAC_PRICTRL0_Type PRICTRL0; /**< \brief Offset: 0x14 (R/W 32) Priority Control 0 */
       RoReg8 Reserved2[0x8];
  volatile /*!< Defines 'read / write' permissions */ DMAC_INTPEND_Type INTPEND; /**< \brief Offset: 0x20 (R/W 16) Interrupt Pending */
       RoReg8 Reserved3[0x2];
  volatile /*!< Defines 'read only' permissions */ DMAC_INTSTATUS_Type INTSTATUS; /**< \brief Offset: 0x24 (R/  32) Interrupt Status */
  volatile /*!< Defines 'read only' permissions */ DMAC_BUSYCH_Type BUSYCH; /**< \brief Offset: 0x28 (R/  32) Busy Channels */
  volatile /*!< Defines 'read only' permissions */ DMAC_PENDCH_Type PENDCH; /**< \brief Offset: 0x2C (R/  32) Pending Channels */
  volatile /*!< Defines 'read only' permissions */ DMAC_ACTIVE_Type ACTIVE; /**< \brief Offset: 0x30 (R/  32) Active Channel and Levels */
  volatile /*!< Defines 'read / write' permissions */ DMAC_BASEADDR_Type BASEADDR; /**< \brief Offset: 0x34 (R/W 32) Descriptor Memory Section Base Address */
  volatile /*!< Defines 'read / write' permissions */ DMAC_WRBADDR_Type WRBADDR; /**< \brief Offset: 0x38 (R/W 32) Write-Back Memory Section Base Address */
       RoReg8 Reserved4[0x3];
  volatile /*!< Defines 'read / write' permissions */ DMAC_CHID_Type CHID; /**< \brief Offset: 0x3F (R/W  8) Channel ID */
  volatile /*!< Defines 'read / write' permissions */ DMAC_CHCTRLA_Type CHCTRLA; /**< \brief Offset: 0x40 (R/W  8) Channel Control A */
       RoReg8 Reserved5[0x3];
  volatile /*!< Defines 'read / write' permissions */ DMAC_CHCTRLB_Type CHCTRLB; /**< \brief Offset: 0x44 (R/W 32) Channel Control B */
       RoReg8 Reserved6[0x4];
  volatile /*!< Defines 'read / write' permissions */ DMAC_CHINTENCLR_Type CHINTENCLR; /**< \brief Offset: 0x4C (R/W  8) Channel Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ DMAC_CHINTENSET_Type CHINTENSET; /**< \brief Offset: 0x4D (R/W  8) Channel Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ DMAC_CHINTFLAG_Type CHINTFLAG; /**< \brief Offset: 0x4E (R/W  8) Channel Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ DMAC_CHSTATUS_Type CHSTATUS; /**< \brief Offset: 0x4F (R/   8) Channel Status */
} Dmac;


/** \brief DMAC Descriptor SRAM registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ DMAC_BTCTRL_Type BTCTRL; /**< \brief Offset: 0x00 (R/W 16) Block Transfer Control */
  volatile /*!< Defines 'read / write' permissions */ DMAC_BTCNT_Type BTCNT; /**< \brief Offset: 0x02 (R/W 16) Block Transfer Count */
  volatile /*!< Defines 'read / write' permissions */ DMAC_SRCADDR_Type SRCADDR; /**< \brief Offset: 0x04 (R/W 32) Block Transfer Source Address */
  volatile /*!< Defines 'read / write' permissions */ DMAC_DSTADDR_Type DSTADDR; /**< \brief Offset: 0x08 (R/W 32) Block Transfer Destination Address */
  volatile /*!< Defines 'read / write' permissions */ DMAC_DESCADDR_Type DESCADDR; /**< \brief Offset: 0x0C (R/W 32) Next Descriptor Address */
} DmacDescriptor

  __attribute__ ((aligned (8)))

;




/*@}*/
# 254 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h" 1
/**
 * \file
 *
 * \brief Component description for DSU
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DSU */
/* ========================================================================== */
/** \addtogroup SAMD21_DSU Device Service Unit */
/*@{*/




/* -------- DSU_CTRL : (DSU Offset: 0x0000) ( /W  8) Control -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t :1; /*!< bit:      1  Reserved                           */
    uint8_t CRC:1; /*!< bit:      2  32-bit Cyclic Redundancy Check     */
    uint8_t MBIST:1; /*!< bit:      3  Memory Built-In Self-Test          */
    uint8_t CE:1; /*!< bit:      4  Chip Erase                         */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DSU_CTRL_Type;
# 84 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_STATUSA : (DSU Offset: 0x0001) (R/W  8) Status A -------- */

typedef union {
  struct {
    uint8_t DONE:1; /*!< bit:      0  Done                               */
    uint8_t CRSTEXT:1; /*!< bit:      1  CPU Reset Phase Extension          */
    uint8_t BERR:1; /*!< bit:      2  Bus Error                          */
    uint8_t FAIL:1; /*!< bit:      3  Failure                            */
    uint8_t PERR:1; /*!< bit:      4  Protection Error                   */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DSU_STATUSA_Type;
# 114 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_STATUSB : (DSU Offset: 0x0002) (R/   8) Status B -------- */

typedef union {
  struct {
    uint8_t PROT:1; /*!< bit:      0  Protected                          */
    uint8_t DBGPRES:1; /*!< bit:      1  Debugger Present                   */
    uint8_t DCCD0:1; /*!< bit:      2  Debug Communication Channel 0 Dirty */
    uint8_t DCCD1:1; /*!< bit:      3  Debug Communication Channel 1 Dirty */
    uint8_t HPE:1; /*!< bit:      4  Hot-Plugging Enable                */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint8_t DCCD:2; /*!< bit:  2.. 3  Debug Communication Channel x Dirty */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} DSU_STATUSB_Type;
# 152 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_ADDR : (DSU Offset: 0x0004) (R/W 32) Address -------- */

typedef union {
  struct {
    uint32_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint32_t ADDR:30; /*!< bit:  2..31  Address                            */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_ADDR_Type;
# 171 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_LENGTH : (DSU Offset: 0x0008) (R/W 32) Length -------- */

typedef union {
  struct {
    uint32_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint32_t LENGTH:30; /*!< bit:  2..31  Length                             */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_LENGTH_Type;
# 190 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_DATA : (DSU Offset: 0x000C) (R/W 32) Data -------- */

typedef union {
  struct {
    uint32_t DATA:32; /*!< bit:  0..31  Data                               */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_DATA_Type;
# 208 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_DCC : (DSU Offset: 0x0010) (R/W 32) Debug Communication Channel n -------- */

typedef union {
  struct {
    uint32_t DATA:32; /*!< bit:  0..31  Data                               */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_DCC_Type;
# 226 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_DID : (DSU Offset: 0x0018) (R/  32) Device Identification -------- */

typedef union {
  struct {
    uint32_t DEVSEL:8; /*!< bit:  0.. 7  Device Select                      */
    uint32_t REVISION:4; /*!< bit:  8..11  Revision                           */
    uint32_t DIE:4; /*!< bit: 12..15  Die Identification                 */
    uint32_t SERIES:6; /*!< bit: 16..21  Product Series                     */
    uint32_t :1; /*!< bit:     22  Reserved                           */
    uint32_t FAMILY:5; /*!< bit: 23..27  Product Family                     */
    uint32_t PROCESSOR:4; /*!< bit: 28..31  Processor                          */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_DID_Type;
# 264 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_ENTRY : (DSU Offset: 0x1000) (R/  32) Coresight ROM Table Entry n -------- */

typedef union {
  struct {
    uint32_t EPRES:1; /*!< bit:      0  Entry Present                      */
    uint32_t FMT:1; /*!< bit:      1  Format                             */
    uint32_t :10; /*!< bit:  2..11  Reserved                           */
    uint32_t ADDOFF:20; /*!< bit: 12..31  Address Offset                     */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_ENTRY_Type;
# 289 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_END : (DSU Offset: 0x1008) (R/  32) Coresight ROM Table End -------- */

typedef union {
  struct {
    uint32_t END:32; /*!< bit:  0..31  End Marker                         */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_END_Type;
# 307 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_MEMTYPE : (DSU Offset: 0x1FCC) (R/  32) Coresight ROM Table Memory Type -------- */

typedef union {
  struct {
    uint32_t SMEMP:1; /*!< bit:      0  System Memory Present              */
    uint32_t :31; /*!< bit:  1..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_MEMTYPE_Type;
# 325 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_PID4 : (DSU Offset: 0x1FD0) (R/  32) Peripheral Identification 4 -------- */

typedef union {
  struct {
    uint32_t JEPCC:4; /*!< bit:  0.. 3  JEP-106 Continuation Code          */
    uint32_t FKBC:4; /*!< bit:  4.. 7  4KB Count                          */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_PID4_Type;
# 348 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_PID0 : (DSU Offset: 0x1FE0) (R/  32) Peripheral Identification 0 -------- */

typedef union {
  struct {
    uint32_t PARTNBL:8; /*!< bit:  0.. 7  Part Number Low                    */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_PID0_Type;
# 367 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_PID1 : (DSU Offset: 0x1FE4) (R/  32) Peripheral Identification 1 -------- */

typedef union {
  struct {
    uint32_t PARTNBH:4; /*!< bit:  0.. 3  Part Number High                   */
    uint32_t JEPIDCL:4; /*!< bit:  4.. 7  Low part of the JEP-106 Identity Code */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_PID1_Type;
# 390 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_PID2 : (DSU Offset: 0x1FE8) (R/  32) Peripheral Identification 2 -------- */

typedef union {
  struct {
    uint32_t JEPIDCH:3; /*!< bit:  0.. 2  JEP-106 Identity Code High         */
    uint32_t JEPU:1; /*!< bit:      3  JEP-106 Identity Code is used      */
    uint32_t REVISION:4; /*!< bit:  4.. 7  Revision Number                    */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_PID2_Type;
# 416 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_PID3 : (DSU Offset: 0x1FEC) (R/  32) Peripheral Identification 3 -------- */

typedef union {
  struct {
    uint32_t CUSMOD:4; /*!< bit:  0.. 3  ARM CUSMOD                         */
    uint32_t REVAND:4; /*!< bit:  4.. 7  Revision Number                    */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_PID3_Type;
# 439 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_CID0 : (DSU Offset: 0x1FF0) (R/  32) Component Identification 0 -------- */

typedef union {
  struct {
    uint32_t PREAMBLEB0:8; /*!< bit:  0.. 7  Preamble Byte 0                    */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_CID0_Type;
# 458 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_CID1 : (DSU Offset: 0x1FF4) (R/  32) Component Identification 1 -------- */

typedef union {
  struct {
    uint32_t PREAMBLE:4; /*!< bit:  0.. 3  Preamble                           */
    uint32_t CCLASS:4; /*!< bit:  4.. 7  Component Class                    */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_CID1_Type;
# 481 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_CID2 : (DSU Offset: 0x1FF8) (R/  32) Component Identification 2 -------- */

typedef union {
  struct {
    uint32_t PREAMBLEB2:8; /*!< bit:  0.. 7  Preamble Byte 2                    */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_CID2_Type;
# 500 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/* -------- DSU_CID3 : (DSU Offset: 0x1FFC) (R/  32) Component Identification 3 -------- */

typedef union {
  struct {
    uint32_t PREAMBLEB3:8; /*!< bit:  0.. 7  Preamble Byte 3                    */
    uint32_t :24; /*!< bit:  8..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} DSU_CID3_Type;
# 519 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/dsu.h"
/** \brief DSU hardware registers */

typedef struct {
  volatile /*!< Defines 'write only' permissions */ DSU_CTRL_Type CTRL; /**< \brief Offset: 0x0000 ( /W  8) Control */
  volatile /*!< Defines 'read / write' permissions */ DSU_STATUSA_Type STATUSA; /**< \brief Offset: 0x0001 (R/W  8) Status A */
  volatile /*!< Defines 'read only' permissions */ DSU_STATUSB_Type STATUSB; /**< \brief Offset: 0x0002 (R/   8) Status B */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ DSU_ADDR_Type ADDR; /**< \brief Offset: 0x0004 (R/W 32) Address */
  volatile /*!< Defines 'read / write' permissions */ DSU_LENGTH_Type LENGTH; /**< \brief Offset: 0x0008 (R/W 32) Length */
  volatile /*!< Defines 'read / write' permissions */ DSU_DATA_Type DATA; /**< \brief Offset: 0x000C (R/W 32) Data */
  volatile /*!< Defines 'read / write' permissions */ DSU_DCC_Type DCC[2]; /**< \brief Offset: 0x0010 (R/W 32) Debug Communication Channel n */
  volatile /*!< Defines 'read only' permissions */ DSU_DID_Type DID; /**< \brief Offset: 0x0018 (R/  32) Device Identification */
       RoReg8 Reserved2[0xFE4];
  volatile /*!< Defines 'read only' permissions */ DSU_ENTRY_Type ENTRY[2]; /**< \brief Offset: 0x1000 (R/  32) Coresight ROM Table Entry n */
  volatile /*!< Defines 'read only' permissions */ DSU_END_Type END; /**< \brief Offset: 0x1008 (R/  32) Coresight ROM Table End */
       RoReg8 Reserved3[0xFC0];
  volatile /*!< Defines 'read only' permissions */ DSU_MEMTYPE_Type MEMTYPE; /**< \brief Offset: 0x1FCC (R/  32) Coresight ROM Table Memory Type */
  volatile /*!< Defines 'read only' permissions */ DSU_PID4_Type PID4; /**< \brief Offset: 0x1FD0 (R/  32) Peripheral Identification 4 */
       RoReg8 Reserved4[0xC];
  volatile /*!< Defines 'read only' permissions */ DSU_PID0_Type PID0; /**< \brief Offset: 0x1FE0 (R/  32) Peripheral Identification 0 */
  volatile /*!< Defines 'read only' permissions */ DSU_PID1_Type PID1; /**< \brief Offset: 0x1FE4 (R/  32) Peripheral Identification 1 */
  volatile /*!< Defines 'read only' permissions */ DSU_PID2_Type PID2; /**< \brief Offset: 0x1FE8 (R/  32) Peripheral Identification 2 */
  volatile /*!< Defines 'read only' permissions */ DSU_PID3_Type PID3; /**< \brief Offset: 0x1FEC (R/  32) Peripheral Identification 3 */
  volatile /*!< Defines 'read only' permissions */ DSU_CID0_Type CID0; /**< \brief Offset: 0x1FF0 (R/  32) Component Identification 0 */
  volatile /*!< Defines 'read only' permissions */ DSU_CID1_Type CID1; /**< \brief Offset: 0x1FF4 (R/  32) Component Identification 1 */
  volatile /*!< Defines 'read only' permissions */ DSU_CID2_Type CID2; /**< \brief Offset: 0x1FF8 (R/  32) Component Identification 2 */
  volatile /*!< Defines 'read only' permissions */ DSU_CID3_Type CID3; /**< \brief Offset: 0x1FFC (R/  32) Component Identification 3 */
} Dsu;


/*@}*/
# 255 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h" 1
/**
 * \file
 *
 * \brief Component description for EIC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EIC */
/* ========================================================================== */
/** \addtogroup SAMD21_EIC External Interrupt Controller */
/*@{*/




/* -------- EIC_CTRL : (EIC Offset: 0x00) (R/W  8) Control -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} EIC_CTRL_Type;
# 77 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_STATUS : (EIC Offset: 0x01) (R/   8) Status -------- */

typedef union {
  struct {
    uint8_t :7; /*!< bit:  0.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy               */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} EIC_STATUS_Type;
# 95 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_NMICTRL : (EIC Offset: 0x02) (R/W  8) Non-Maskable Interrupt Control -------- */

typedef union {
  struct {
    uint8_t NMISENSE:3; /*!< bit:  0.. 2  Non-Maskable Interrupt Sense       */
    uint8_t NMIFILTEN:1; /*!< bit:      3  Non-Maskable Interrupt Filter Enable */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} EIC_NMICTRL_Type;
# 129 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_NMIFLAG : (EIC Offset: 0x03) (R/W  8) Non-Maskable Interrupt Flag Status and Clear -------- */

typedef union {
  struct {
    uint8_t NMI:1; /*!< bit:      0  Non-Maskable Interrupt             */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} EIC_NMIFLAG_Type;
# 147 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_EVCTRL : (EIC Offset: 0x04) (R/W 32) Event Control -------- */

typedef union {
  struct {
    uint32_t EXTINTEO0:1; /*!< bit:      0  External Interrupt 0 Event Output Enable */
    uint32_t EXTINTEO1:1; /*!< bit:      1  External Interrupt 1 Event Output Enable */
    uint32_t EXTINTEO2:1; /*!< bit:      2  External Interrupt 2 Event Output Enable */
    uint32_t EXTINTEO3:1; /*!< bit:      3  External Interrupt 3 Event Output Enable */
    uint32_t EXTINTEO4:1; /*!< bit:      4  External Interrupt 4 Event Output Enable */
    uint32_t EXTINTEO5:1; /*!< bit:      5  External Interrupt 5 Event Output Enable */
    uint32_t EXTINTEO6:1; /*!< bit:      6  External Interrupt 6 Event Output Enable */
    uint32_t EXTINTEO7:1; /*!< bit:      7  External Interrupt 7 Event Output Enable */
    uint32_t EXTINTEO8:1; /*!< bit:      8  External Interrupt 8 Event Output Enable */
    uint32_t EXTINTEO9:1; /*!< bit:      9  External Interrupt 9 Event Output Enable */
    uint32_t EXTINTEO10:1; /*!< bit:     10  External Interrupt 10 Event Output Enable */
    uint32_t EXTINTEO11:1; /*!< bit:     11  External Interrupt 11 Event Output Enable */
    uint32_t EXTINTEO12:1; /*!< bit:     12  External Interrupt 12 Event Output Enable */
    uint32_t EXTINTEO13:1; /*!< bit:     13  External Interrupt 13 Event Output Enable */
    uint32_t EXTINTEO14:1; /*!< bit:     14  External Interrupt 14 Event Output Enable */
    uint32_t EXTINTEO15:1; /*!< bit:     15  External Interrupt 15 Event Output Enable */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t EXTINTEO:16; /*!< bit:  0..15  External Interrupt x Event Output Enable */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EIC_EVCTRL_Type;
# 217 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_INTENCLR : (EIC Offset: 0x08) (R/W 32) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint32_t EXTINT0:1; /*!< bit:      0  External Interrupt 0 Enable        */
    uint32_t EXTINT1:1; /*!< bit:      1  External Interrupt 1 Enable        */
    uint32_t EXTINT2:1; /*!< bit:      2  External Interrupt 2 Enable        */
    uint32_t EXTINT3:1; /*!< bit:      3  External Interrupt 3 Enable        */
    uint32_t EXTINT4:1; /*!< bit:      4  External Interrupt 4 Enable        */
    uint32_t EXTINT5:1; /*!< bit:      5  External Interrupt 5 Enable        */
    uint32_t EXTINT6:1; /*!< bit:      6  External Interrupt 6 Enable        */
    uint32_t EXTINT7:1; /*!< bit:      7  External Interrupt 7 Enable        */
    uint32_t EXTINT8:1; /*!< bit:      8  External Interrupt 8 Enable        */
    uint32_t EXTINT9:1; /*!< bit:      9  External Interrupt 9 Enable        */
    uint32_t EXTINT10:1; /*!< bit:     10  External Interrupt 10 Enable       */
    uint32_t EXTINT11:1; /*!< bit:     11  External Interrupt 11 Enable       */
    uint32_t EXTINT12:1; /*!< bit:     12  External Interrupt 12 Enable       */
    uint32_t EXTINT13:1; /*!< bit:     13  External Interrupt 13 Enable       */
    uint32_t EXTINT14:1; /*!< bit:     14  External Interrupt 14 Enable       */
    uint32_t EXTINT15:1; /*!< bit:     15  External Interrupt 15 Enable       */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t EXTINT:16; /*!< bit:  0..15  External Interrupt x Enable        */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EIC_INTENCLR_Type;
# 287 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_INTENSET : (EIC Offset: 0x0C) (R/W 32) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint32_t EXTINT0:1; /*!< bit:      0  External Interrupt 0 Enable        */
    uint32_t EXTINT1:1; /*!< bit:      1  External Interrupt 1 Enable        */
    uint32_t EXTINT2:1; /*!< bit:      2  External Interrupt 2 Enable        */
    uint32_t EXTINT3:1; /*!< bit:      3  External Interrupt 3 Enable        */
    uint32_t EXTINT4:1; /*!< bit:      4  External Interrupt 4 Enable        */
    uint32_t EXTINT5:1; /*!< bit:      5  External Interrupt 5 Enable        */
    uint32_t EXTINT6:1; /*!< bit:      6  External Interrupt 6 Enable        */
    uint32_t EXTINT7:1; /*!< bit:      7  External Interrupt 7 Enable        */
    uint32_t EXTINT8:1; /*!< bit:      8  External Interrupt 8 Enable        */
    uint32_t EXTINT9:1; /*!< bit:      9  External Interrupt 9 Enable        */
    uint32_t EXTINT10:1; /*!< bit:     10  External Interrupt 10 Enable       */
    uint32_t EXTINT11:1; /*!< bit:     11  External Interrupt 11 Enable       */
    uint32_t EXTINT12:1; /*!< bit:     12  External Interrupt 12 Enable       */
    uint32_t EXTINT13:1; /*!< bit:     13  External Interrupt 13 Enable       */
    uint32_t EXTINT14:1; /*!< bit:     14  External Interrupt 14 Enable       */
    uint32_t EXTINT15:1; /*!< bit:     15  External Interrupt 15 Enable       */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t EXTINT:16; /*!< bit:  0..15  External Interrupt x Enable        */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EIC_INTENSET_Type;
# 357 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_INTFLAG : (EIC Offset: 0x10) (R/W 32) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT0:1; /*!< bit:      0  External Interrupt 0               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT1:1; /*!< bit:      1  External Interrupt 1               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT2:1; /*!< bit:      2  External Interrupt 2               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT3:1; /*!< bit:      3  External Interrupt 3               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT4:1; /*!< bit:      4  External Interrupt 4               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT5:1; /*!< bit:      5  External Interrupt 5               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT6:1; /*!< bit:      6  External Interrupt 6               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT7:1; /*!< bit:      7  External Interrupt 7               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT8:1; /*!< bit:      8  External Interrupt 8               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT9:1; /*!< bit:      9  External Interrupt 9               */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT10:1; /*!< bit:     10  External Interrupt 10              */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT11:1; /*!< bit:     11  External Interrupt 11              */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT12:1; /*!< bit:     12  External Interrupt 12              */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT13:1; /*!< bit:     13  External Interrupt 13              */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT14:1; /*!< bit:     14  External Interrupt 14              */
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT15:1; /*!< bit:     15  External Interrupt 15              */
    volatile /*!< Defines 'read only' permissions */ uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint32_t EXTINT:16; /*!< bit:  0..15  External Interrupt x               */
    volatile /*!< Defines 'read only' permissions */ uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EIC_INTFLAG_Type;
# 427 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_WAKEUP : (EIC Offset: 0x14) (R/W 32) Wake-Up Enable -------- */

typedef union {
  struct {
    uint32_t WAKEUPEN0:1; /*!< bit:      0  External Interrupt 0 Wake-up Enable */
    uint32_t WAKEUPEN1:1; /*!< bit:      1  External Interrupt 1 Wake-up Enable */
    uint32_t WAKEUPEN2:1; /*!< bit:      2  External Interrupt 2 Wake-up Enable */
    uint32_t WAKEUPEN3:1; /*!< bit:      3  External Interrupt 3 Wake-up Enable */
    uint32_t WAKEUPEN4:1; /*!< bit:      4  External Interrupt 4 Wake-up Enable */
    uint32_t WAKEUPEN5:1; /*!< bit:      5  External Interrupt 5 Wake-up Enable */
    uint32_t WAKEUPEN6:1; /*!< bit:      6  External Interrupt 6 Wake-up Enable */
    uint32_t WAKEUPEN7:1; /*!< bit:      7  External Interrupt 7 Wake-up Enable */
    uint32_t WAKEUPEN8:1; /*!< bit:      8  External Interrupt 8 Wake-up Enable */
    uint32_t WAKEUPEN9:1; /*!< bit:      9  External Interrupt 9 Wake-up Enable */
    uint32_t WAKEUPEN10:1; /*!< bit:     10  External Interrupt 10 Wake-up Enable */
    uint32_t WAKEUPEN11:1; /*!< bit:     11  External Interrupt 11 Wake-up Enable */
    uint32_t WAKEUPEN12:1; /*!< bit:     12  External Interrupt 12 Wake-up Enable */
    uint32_t WAKEUPEN13:1; /*!< bit:     13  External Interrupt 13 Wake-up Enable */
    uint32_t WAKEUPEN14:1; /*!< bit:     14  External Interrupt 14 Wake-up Enable */
    uint32_t WAKEUPEN15:1; /*!< bit:     15  External Interrupt 15 Wake-up Enable */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t WAKEUPEN:16; /*!< bit:  0..15  External Interrupt x Wake-up Enable */
    uint32_t :16; /*!< bit: 16..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EIC_WAKEUP_Type;
# 497 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/* -------- EIC_CONFIG : (EIC Offset: 0x18) (R/W 32) Configuration n -------- */

typedef union {
  struct {
    uint32_t SENSE0:3; /*!< bit:  0.. 2  Input Sense 0 Configuration        */
    uint32_t FILTEN0:1; /*!< bit:      3  Filter 0 Enable                    */
    uint32_t SENSE1:3; /*!< bit:  4.. 6  Input Sense 1 Configuration        */
    uint32_t FILTEN1:1; /*!< bit:      7  Filter 1 Enable                    */
    uint32_t SENSE2:3; /*!< bit:  8..10  Input Sense 2 Configuration        */
    uint32_t FILTEN2:1; /*!< bit:     11  Filter 2 Enable                    */
    uint32_t SENSE3:3; /*!< bit: 12..14  Input Sense 3 Configuration        */
    uint32_t FILTEN3:1; /*!< bit:     15  Filter 3 Enable                    */
    uint32_t SENSE4:3; /*!< bit: 16..18  Input Sense 4 Configuration        */
    uint32_t FILTEN4:1; /*!< bit:     19  Filter 4 Enable                    */
    uint32_t SENSE5:3; /*!< bit: 20..22  Input Sense 5 Configuration        */
    uint32_t FILTEN5:1; /*!< bit:     23  Filter 5 Enable                    */
    uint32_t SENSE6:3; /*!< bit: 24..26  Input Sense 6 Configuration        */
    uint32_t FILTEN6:1; /*!< bit:     27  Filter 6 Enable                    */
    uint32_t SENSE7:3; /*!< bit: 28..30  Input Sense 7 Configuration        */
    uint32_t FILTEN7:1; /*!< bit:     31  Filter 7 Enable                    */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EIC_CONFIG_Type;
# 663 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/eic.h"
/** \brief EIC hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ EIC_CTRL_Type CTRL; /**< \brief Offset: 0x00 (R/W  8) Control */
  volatile /*!< Defines 'read only' permissions */ EIC_STATUS_Type STATUS; /**< \brief Offset: 0x01 (R/   8) Status */
  volatile /*!< Defines 'read / write' permissions */ EIC_NMICTRL_Type NMICTRL; /**< \brief Offset: 0x02 (R/W  8) Non-Maskable Interrupt Control */
  volatile /*!< Defines 'read / write' permissions */ EIC_NMIFLAG_Type NMIFLAG; /**< \brief Offset: 0x03 (R/W  8) Non-Maskable Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read / write' permissions */ EIC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x04 (R/W 32) Event Control */
  volatile /*!< Defines 'read / write' permissions */ EIC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x08 (R/W 32) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ EIC_INTENSET_Type INTENSET; /**< \brief Offset: 0x0C (R/W 32) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ EIC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x10 (R/W 32) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read / write' permissions */ EIC_WAKEUP_Type WAKEUP; /**< \brief Offset: 0x14 (R/W 32) Wake-Up Enable */
  volatile /*!< Defines 'read / write' permissions */ EIC_CONFIG_Type CONFIG[2]; /**< \brief Offset: 0x18 (R/W 32) Configuration n */
} Eic;


/*@}*/
# 256 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h" 1
/**
 * \file
 *
 * \brief Component description for EVSYS
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR EVSYS */
/* ========================================================================== */
/** \addtogroup SAMD21_EVSYS Event System Interface */
/*@{*/




/* -------- EVSYS_CTRL : (EVSYS Offset: 0x00) ( /W  8) Control -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t :3; /*!< bit:  1.. 3  Reserved                           */
    uint8_t GCLKREQ:1; /*!< bit:      4  Generic Clock Requests             */
    uint8_t :3; /*!< bit:  5.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} EVSYS_CTRL_Type;
# 78 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h"
/* -------- EVSYS_CHANNEL : (EVSYS Offset: 0x04) (R/W 32) Channel -------- */

typedef union {
  struct {
    uint32_t CHANNEL:4; /*!< bit:  0.. 3  Channel Selection                  */
    uint32_t :4; /*!< bit:  4.. 7  Reserved                           */
    uint32_t SWEVT:1; /*!< bit:      8  Software Event                     */
    uint32_t :7; /*!< bit:  9..15  Reserved                           */
    uint32_t EVGEN:7; /*!< bit: 16..22  Event Generator Selection          */
    uint32_t :1; /*!< bit:     23  Reserved                           */
    uint32_t PATH:2; /*!< bit: 24..25  Path Selection                     */
    uint32_t EDGSEL:2; /*!< bit: 26..27  Edge Detection Selection           */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EVSYS_CHANNEL_Type;
# 129 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h"
/* -------- EVSYS_USER : (EVSYS Offset: 0x08) (R/W 16) User Multiplexer -------- */

typedef union {
  struct {
    uint16_t USER:5; /*!< bit:  0.. 4  User Multiplexer Selection         */
    uint16_t :3; /*!< bit:  5.. 7  Reserved                           */
    uint16_t CHANNEL:5; /*!< bit:  8..12  Channel Event Selection            */
    uint16_t :3; /*!< bit: 13..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} EVSYS_USER_Type;
# 155 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h"
/* -------- EVSYS_CHSTATUS : (EVSYS Offset: 0x0C) (R/  32) Channel Status -------- */

typedef union {
  struct {
    uint32_t USRRDY0:1; /*!< bit:      0  Channel 0 User Ready               */
    uint32_t USRRDY1:1; /*!< bit:      1  Channel 1 User Ready               */
    uint32_t USRRDY2:1; /*!< bit:      2  Channel 2 User Ready               */
    uint32_t USRRDY3:1; /*!< bit:      3  Channel 3 User Ready               */
    uint32_t USRRDY4:1; /*!< bit:      4  Channel 4 User Ready               */
    uint32_t USRRDY5:1; /*!< bit:      5  Channel 5 User Ready               */
    uint32_t USRRDY6:1; /*!< bit:      6  Channel 6 User Ready               */
    uint32_t USRRDY7:1; /*!< bit:      7  Channel 7 User Ready               */
    uint32_t CHBUSY0:1; /*!< bit:      8  Channel 0 Busy                     */
    uint32_t CHBUSY1:1; /*!< bit:      9  Channel 1 Busy                     */
    uint32_t CHBUSY2:1; /*!< bit:     10  Channel 2 Busy                     */
    uint32_t CHBUSY3:1; /*!< bit:     11  Channel 3 Busy                     */
    uint32_t CHBUSY4:1; /*!< bit:     12  Channel 4 Busy                     */
    uint32_t CHBUSY5:1; /*!< bit:     13  Channel 5 Busy                     */
    uint32_t CHBUSY6:1; /*!< bit:     14  Channel 6 Busy                     */
    uint32_t CHBUSY7:1; /*!< bit:     15  Channel 7 Busy                     */
    uint32_t USRRDY8:1; /*!< bit:     16  Channel 8 User Ready               */
    uint32_t USRRDY9:1; /*!< bit:     17  Channel 9 User Ready               */
    uint32_t USRRDY10:1; /*!< bit:     18  Channel 10 User Ready              */
    uint32_t USRRDY11:1; /*!< bit:     19  Channel 11 User Ready              */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t CHBUSY8:1; /*!< bit:     24  Channel 8 Busy                     */
    uint32_t CHBUSY9:1; /*!< bit:     25  Channel 9 Busy                     */
    uint32_t CHBUSY10:1; /*!< bit:     26  Channel 10 Busy                    */
    uint32_t CHBUSY11:1; /*!< bit:     27  Channel 11 Busy                    */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t USRRDY:8; /*!< bit:  0.. 7  Channel x User Ready               */
    uint32_t CHBUSY:8; /*!< bit:  8..15  Channel x Busy                     */
    uint32_t USRRDYp8:4; /*!< bit: 16..19  Channel x+8 User Ready             */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t CHBUSYp8:4; /*!< bit: 24..27  Channel x+8 Busy                   */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EVSYS_CHSTATUS_Type;
# 263 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h"
/* -------- EVSYS_INTENCLR : (EVSYS Offset: 0x10) (R/W 32) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint32_t OVR0:1; /*!< bit:      0  Channel 0 Overrun Interrupt Enable */
    uint32_t OVR1:1; /*!< bit:      1  Channel 1 Overrun Interrupt Enable */
    uint32_t OVR2:1; /*!< bit:      2  Channel 2 Overrun Interrupt Enable */
    uint32_t OVR3:1; /*!< bit:      3  Channel 3 Overrun Interrupt Enable */
    uint32_t OVR4:1; /*!< bit:      4  Channel 4 Overrun Interrupt Enable */
    uint32_t OVR5:1; /*!< bit:      5  Channel 5 Overrun Interrupt Enable */
    uint32_t OVR6:1; /*!< bit:      6  Channel 6 Overrun Interrupt Enable */
    uint32_t OVR7:1; /*!< bit:      7  Channel 7 Overrun Interrupt Enable */
    uint32_t EVD0:1; /*!< bit:      8  Channel 0 Event Detection Interrupt Enable */
    uint32_t EVD1:1; /*!< bit:      9  Channel 1 Event Detection Interrupt Enable */
    uint32_t EVD2:1; /*!< bit:     10  Channel 2 Event Detection Interrupt Enable */
    uint32_t EVD3:1; /*!< bit:     11  Channel 3 Event Detection Interrupt Enable */
    uint32_t EVD4:1; /*!< bit:     12  Channel 4 Event Detection Interrupt Enable */
    uint32_t EVD5:1; /*!< bit:     13  Channel 5 Event Detection Interrupt Enable */
    uint32_t EVD6:1; /*!< bit:     14  Channel 6 Event Detection Interrupt Enable */
    uint32_t EVD7:1; /*!< bit:     15  Channel 7 Event Detection Interrupt Enable */
    uint32_t OVR8:1; /*!< bit:     16  Channel 8 Overrun Interrupt Enable */
    uint32_t OVR9:1; /*!< bit:     17  Channel 9 Overrun Interrupt Enable */
    uint32_t OVR10:1; /*!< bit:     18  Channel 10 Overrun Interrupt Enable */
    uint32_t OVR11:1; /*!< bit:     19  Channel 11 Overrun Interrupt Enable */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t EVD8:1; /*!< bit:     24  Channel 8 Event Detection Interrupt Enable */
    uint32_t EVD9:1; /*!< bit:     25  Channel 9 Event Detection Interrupt Enable */
    uint32_t EVD10:1; /*!< bit:     26  Channel 10 Event Detection Interrupt Enable */
    uint32_t EVD11:1; /*!< bit:     27  Channel 11 Event Detection Interrupt Enable */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t OVR:8; /*!< bit:  0.. 7  Channel x Overrun Interrupt Enable */
    uint32_t EVD:8; /*!< bit:  8..15  Channel x Event Detection Interrupt Enable */
    uint32_t OVRp8:4; /*!< bit: 16..19  Channel x+8 Overrun Interrupt Enable */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t EVDp8:4; /*!< bit: 24..27  Channel x+8 Event Detection Interrupt Enable */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EVSYS_INTENCLR_Type;
# 371 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h"
/* -------- EVSYS_INTENSET : (EVSYS Offset: 0x14) (R/W 32) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint32_t OVR0:1; /*!< bit:      0  Channel 0 Overrun Interrupt Enable */
    uint32_t OVR1:1; /*!< bit:      1  Channel 1 Overrun Interrupt Enable */
    uint32_t OVR2:1; /*!< bit:      2  Channel 2 Overrun Interrupt Enable */
    uint32_t OVR3:1; /*!< bit:      3  Channel 3 Overrun Interrupt Enable */
    uint32_t OVR4:1; /*!< bit:      4  Channel 4 Overrun Interrupt Enable */
    uint32_t OVR5:1; /*!< bit:      5  Channel 5 Overrun Interrupt Enable */
    uint32_t OVR6:1; /*!< bit:      6  Channel 6 Overrun Interrupt Enable */
    uint32_t OVR7:1; /*!< bit:      7  Channel 7 Overrun Interrupt Enable */
    uint32_t EVD0:1; /*!< bit:      8  Channel 0 Event Detection Interrupt Enable */
    uint32_t EVD1:1; /*!< bit:      9  Channel 1 Event Detection Interrupt Enable */
    uint32_t EVD2:1; /*!< bit:     10  Channel 2 Event Detection Interrupt Enable */
    uint32_t EVD3:1; /*!< bit:     11  Channel 3 Event Detection Interrupt Enable */
    uint32_t EVD4:1; /*!< bit:     12  Channel 4 Event Detection Interrupt Enable */
    uint32_t EVD5:1; /*!< bit:     13  Channel 5 Event Detection Interrupt Enable */
    uint32_t EVD6:1; /*!< bit:     14  Channel 6 Event Detection Interrupt Enable */
    uint32_t EVD7:1; /*!< bit:     15  Channel 7 Event Detection Interrupt Enable */
    uint32_t OVR8:1; /*!< bit:     16  Channel 8 Overrun Interrupt Enable */
    uint32_t OVR9:1; /*!< bit:     17  Channel 9 Overrun Interrupt Enable */
    uint32_t OVR10:1; /*!< bit:     18  Channel 10 Overrun Interrupt Enable */
    uint32_t OVR11:1; /*!< bit:     19  Channel 11 Overrun Interrupt Enable */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t EVD8:1; /*!< bit:     24  Channel 8 Event Detection Interrupt Enable */
    uint32_t EVD9:1; /*!< bit:     25  Channel 9 Event Detection Interrupt Enable */
    uint32_t EVD10:1; /*!< bit:     26  Channel 10 Event Detection Interrupt Enable */
    uint32_t EVD11:1; /*!< bit:     27  Channel 11 Event Detection Interrupt Enable */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t OVR:8; /*!< bit:  0.. 7  Channel x Overrun Interrupt Enable */
    uint32_t EVD:8; /*!< bit:  8..15  Channel x Event Detection Interrupt Enable */
    uint32_t OVRp8:4; /*!< bit: 16..19  Channel x+8 Overrun Interrupt Enable */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t EVDp8:4; /*!< bit: 24..27  Channel x+8 Event Detection Interrupt Enable */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EVSYS_INTENSET_Type;
# 479 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h"
/* -------- EVSYS_INTFLAG : (EVSYS Offset: 0x18) (R/W 32) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR0:1; /*!< bit:      0  Channel 0 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR1:1; /*!< bit:      1  Channel 1 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR2:1; /*!< bit:      2  Channel 2 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR3:1; /*!< bit:      3  Channel 3 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR4:1; /*!< bit:      4  Channel 4 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR5:1; /*!< bit:      5  Channel 5 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR6:1; /*!< bit:      6  Channel 6 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR7:1; /*!< bit:      7  Channel 7 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD0:1; /*!< bit:      8  Channel 0 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD1:1; /*!< bit:      9  Channel 1 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD2:1; /*!< bit:     10  Channel 2 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD3:1; /*!< bit:     11  Channel 3 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD4:1; /*!< bit:     12  Channel 4 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD5:1; /*!< bit:     13  Channel 5 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD6:1; /*!< bit:     14  Channel 6 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD7:1; /*!< bit:     15  Channel 7 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR8:1; /*!< bit:     16  Channel 8 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR9:1; /*!< bit:     17  Channel 9 Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR10:1; /*!< bit:     18  Channel 10 Overrun                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR11:1; /*!< bit:     19  Channel 11 Overrun                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t :4; /*!< bit: 20..23  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD8:1; /*!< bit:     24  Channel 8 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD9:1; /*!< bit:     25  Channel 9 Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD10:1; /*!< bit:     26  Channel 10 Event Detection         */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD11:1; /*!< bit:     27  Channel 11 Event Detection         */
    volatile /*!< Defines 'read only' permissions */ uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint32_t OVR:8; /*!< bit:  0.. 7  Channel x Overrun                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVD:8; /*!< bit:  8..15  Channel x Event Detection          */
    volatile /*!< Defines 'read only' permissions */ uint32_t OVRp8:4; /*!< bit: 16..19  Channel x+8 Overrun                */
    volatile /*!< Defines 'read only' permissions */ uint32_t :4; /*!< bit: 20..23  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint32_t EVDp8:4; /*!< bit: 24..27  Channel x+8 Event Detection        */
    volatile /*!< Defines 'read only' permissions */ uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} EVSYS_INTFLAG_Type;
# 587 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/evsys.h"
/** \brief EVSYS hardware registers */

typedef struct {
  volatile /*!< Defines 'write only' permissions */ EVSYS_CTRL_Type CTRL; /**< \brief Offset: 0x00 ( /W  8) Control */
       RoReg8 Reserved1[0x3];
  volatile /*!< Defines 'read / write' permissions */ EVSYS_CHANNEL_Type CHANNEL; /**< \brief Offset: 0x04 (R/W 32) Channel */
  volatile /*!< Defines 'read / write' permissions */ EVSYS_USER_Type USER; /**< \brief Offset: 0x08 (R/W 16) User Multiplexer */
       RoReg8 Reserved2[0x2];
  volatile /*!< Defines 'read only' permissions */ EVSYS_CHSTATUS_Type CHSTATUS; /**< \brief Offset: 0x0C (R/  32) Channel Status */
  volatile /*!< Defines 'read / write' permissions */ EVSYS_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x10 (R/W 32) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ EVSYS_INTENSET_Type INTENSET; /**< \brief Offset: 0x14 (R/W 32) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ EVSYS_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x18 (R/W 32) Interrupt Flag Status and Clear */
} Evsys;


/*@}*/
# 257 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/gclk.h" 1
/**
 * \file
 *
 * \brief Component description for GCLK
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GCLK */
/* ========================================================================== */
/** \addtogroup SAMD21_GCLK Generic Clock Generator */
/*@{*/




/* -------- GCLK_CTRL : (GCLK Offset: 0x0) (R/W  8) Control -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} GCLK_CTRL_Type;
# 74 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/gclk.h"
/* -------- GCLK_STATUS : (GCLK Offset: 0x1) (R/   8) Status -------- */

typedef union {
  struct {
    uint8_t :7; /*!< bit:  0.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy Status        */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} GCLK_STATUS_Type;
# 92 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/gclk.h"
/* -------- GCLK_CLKCTRL : (GCLK Offset: 0x2) (R/W 16) Generic Clock Control -------- */

typedef union {
  struct {
    uint16_t ID:6; /*!< bit:  0.. 5  Generic Clock Selection ID         */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t GEN:4; /*!< bit:  8..11  Generic Clock Generator            */
    uint16_t :2; /*!< bit: 12..13  Reserved                           */
    uint16_t CLKEN:1; /*!< bit:     14  Clock Enable                       */
    uint16_t WRTLOCK:1; /*!< bit:     15  Write Lock                         */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} GCLK_CLKCTRL_Type;
# 212 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/gclk.h"
/* -------- GCLK_GENCTRL : (GCLK Offset: 0x4) (R/W 32) Generic Clock Generator Control -------- */

typedef union {
  struct {
    uint32_t ID:4; /*!< bit:  0.. 3  Generic Clock Generator Selection  */
    uint32_t :4; /*!< bit:  4.. 7  Reserved                           */
    uint32_t SRC:5; /*!< bit:  8..12  Source Select                      */
    uint32_t :3; /*!< bit: 13..15  Reserved                           */
    uint32_t GENEN:1; /*!< bit:     16  Generic Clock Generator Enable     */
    uint32_t IDC:1; /*!< bit:     17  Improve Duty Cycle                 */
    uint32_t OOV:1; /*!< bit:     18  Output Off Value                   */
    uint32_t OE:1; /*!< bit:     19  Output Enable                      */
    uint32_t DIVSEL:1; /*!< bit:     20  Divide Selection                   */
    uint32_t RUNSTDBY:1; /*!< bit:     21  Run in Standby                     */
    uint32_t :10; /*!< bit: 22..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} GCLK_GENCTRL_Type;
# 273 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/gclk.h"
/* -------- GCLK_GENDIV : (GCLK Offset: 0x8) (R/W 32) Generic Clock Generator Division -------- */

typedef union {
  struct {
    uint32_t ID:4; /*!< bit:  0.. 3  Generic Clock Generator Selection  */
    uint32_t :4; /*!< bit:  4.. 7  Reserved                           */
    uint32_t DIV:16; /*!< bit:  8..23  Division Factor                    */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} GCLK_GENDIV_Type;
# 297 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/gclk.h"
/** \brief GCLK hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ GCLK_CTRL_Type CTRL; /**< \brief Offset: 0x0 (R/W  8) Control */
  volatile /*!< Defines 'read only' permissions */ GCLK_STATUS_Type STATUS; /**< \brief Offset: 0x1 (R/   8) Status */
  volatile /*!< Defines 'read / write' permissions */ GCLK_CLKCTRL_Type CLKCTRL; /**< \brief Offset: 0x2 (R/W 16) Generic Clock Control */
  volatile /*!< Defines 'read / write' permissions */ GCLK_GENCTRL_Type GENCTRL; /**< \brief Offset: 0x4 (R/W 32) Generic Clock Generator Control */
  volatile /*!< Defines 'read / write' permissions */ GCLK_GENDIV_Type GENDIV; /**< \brief Offset: 0x8 (R/W 32) Generic Clock Generator Division */
} Gclk;


/*@}*/
# 258 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/hmatrixb.h" 1
/**
 * \file
 *
 * \brief Component description for HMATRIXB
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR HMATRIXB */
/* ========================================================================== */
/** \addtogroup SAMD21_HMATRIXB HSB Matrix */
/*@{*/




/* -------- HMATRIXB_PRAS : (HMATRIXB Offset: 0x080) (R/W 32) PRS Priority A for Slave -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} HMATRIXB_PRAS_Type;







/* -------- HMATRIXB_PRBS : (HMATRIXB Offset: 0x084) (R/W 32) PRS Priority B for Slave -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} HMATRIXB_PRBS_Type;







/* -------- HMATRIXB_SFR : (HMATRIXB Offset: 0x110) (R/W 32) Special Function -------- */

typedef union {
  struct {
    uint32_t SFR:32; /*!< bit:  0..31  Special Function Register          */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} HMATRIXB_SFR_Type;
# 98 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/hmatrixb.h"
/** \brief HmatrixbPrs hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ HMATRIXB_PRAS_Type PRAS; /**< \brief Offset: 0x000 (R/W 32) Priority A for Slave */
  volatile /*!< Defines 'read / write' permissions */ HMATRIXB_PRBS_Type PRBS; /**< \brief Offset: 0x004 (R/W 32) Priority B for Slave */
} HmatrixbPrs;


/** \brief HMATRIXB hardware registers */

typedef struct {
       RoReg8 Reserved1[0x80];
       HmatrixbPrs Prs[16]; /**< \brief Offset: 0x080 HmatrixbPrs groups */
       RoReg8 Reserved2[0x10];
  volatile /*!< Defines 'read / write' permissions */ HMATRIXB_SFR_Type SFR[16]; /**< \brief Offset: 0x110 (R/W 32) Special Function */
} Hmatrixb;


/*@}*/
# 259 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h" 1
/**
 * \file
 *
 * \brief Component description for I2S
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR I2S */
/* ========================================================================== */
/** \addtogroup SAMD21_I2S Inter-IC Sound Interface */
/*@{*/




/* -------- I2S_CTRLA : (I2S Offset: 0x00) (R/W  8) Control A -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint8_t CKEN0:1; /*!< bit:      2  Clock Unit 0 Enable                */
    uint8_t CKEN1:1; /*!< bit:      3  Clock Unit 1 Enable                */
    uint8_t SEREN0:1; /*!< bit:      4  Serializer 0 Enable                */
    uint8_t SEREN1:1; /*!< bit:      5  Serializer 1 Enable                */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint8_t CKEN:2; /*!< bit:  2.. 3  Clock Unit x Enable                */
    uint8_t SEREN:2; /*!< bit:  4.. 5  Serializer x Enable                */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} I2S_CTRLA_Type;
# 101 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/* -------- I2S_CLKCTRL : (I2S Offset: 0x04) (R/W 32) Clock Unit n Control -------- */

typedef union {
  struct {
    uint32_t SLOTSIZE:2; /*!< bit:  0.. 1  Slot Size                          */
    uint32_t NBSLOTS:3; /*!< bit:  2.. 4  Number of Slots in Frame           */
    uint32_t FSWIDTH:2; /*!< bit:  5.. 6  Frame Sync Width                   */
    uint32_t BITDELAY:1; /*!< bit:      7  Data Delay from Frame Sync         */
    uint32_t FSSEL:1; /*!< bit:      8  Frame Sync Select                  */
    uint32_t :2; /*!< bit:  9..10  Reserved                           */
    uint32_t FSINV:1; /*!< bit:     11  Frame Sync Invert                  */
    uint32_t SCKSEL:1; /*!< bit:     12  Serial Clock Select                */
    uint32_t :3; /*!< bit: 13..15  Reserved                           */
    uint32_t MCKSEL:1; /*!< bit:     16  Master Clock Select                */
    uint32_t :1; /*!< bit:     17  Reserved                           */
    uint32_t MCKEN:1; /*!< bit:     18  Master Clock Enable                */
    uint32_t MCKDIV:5; /*!< bit: 19..23  Master Clock Division Factor       */
    uint32_t MCKOUTDIV:5; /*!< bit: 24..28  Master Clock Output Division Factor */
    uint32_t FSOUTINV:1; /*!< bit:     29  Frame Sync Output Invert           */
    uint32_t SCKOUTINV:1; /*!< bit:     30  Serial Clock Output Invert         */
    uint32_t MCKOUTINV:1; /*!< bit:     31  Master Clock Output Invert         */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} I2S_CLKCTRL_Type;
# 197 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/* -------- I2S_INTENCLR : (I2S Offset: 0x0C) (R/W 16) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint16_t RXRDY0:1; /*!< bit:      0  Receive Ready 0 Interrupt Enable   */
    uint16_t RXRDY1:1; /*!< bit:      1  Receive Ready 1 Interrupt Enable   */
    uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint16_t RXOR0:1; /*!< bit:      4  Receive Overrun 0 Interrupt Enable */
    uint16_t RXOR1:1; /*!< bit:      5  Receive Overrun 1 Interrupt Enable */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t TXRDY0:1; /*!< bit:      8  Transmit Ready 0 Interrupt Enable  */
    uint16_t TXRDY1:1; /*!< bit:      9  Transmit Ready 1 Interrupt Enable  */
    uint16_t :2; /*!< bit: 10..11  Reserved                           */
    uint16_t TXUR0:1; /*!< bit:     12  Transmit Underrun 0 Interrupt Enable */
    uint16_t TXUR1:1; /*!< bit:     13  Transmit Underrun 1 Interrupt Enable */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t RXRDY:2; /*!< bit:  0.. 1  Receive Ready x Interrupt Enable   */
    uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint16_t RXOR:2; /*!< bit:  4.. 5  Receive Overrun x Interrupt Enable */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t TXRDY:2; /*!< bit:  8.. 9  Transmit Ready x Interrupt Enable  */
    uint16_t :2; /*!< bit: 10..11  Reserved                           */
    uint16_t TXUR:2; /*!< bit: 12..13  Transmit Underrun x Interrupt Enable */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} I2S_INTENCLR_Type;
# 261 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/* -------- I2S_INTENSET : (I2S Offset: 0x10) (R/W 16) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint16_t RXRDY0:1; /*!< bit:      0  Receive Ready 0 Interrupt Enable   */
    uint16_t RXRDY1:1; /*!< bit:      1  Receive Ready 1 Interrupt Enable   */
    uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint16_t RXOR0:1; /*!< bit:      4  Receive Overrun 0 Interrupt Enable */
    uint16_t RXOR1:1; /*!< bit:      5  Receive Overrun 1 Interrupt Enable */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t TXRDY0:1; /*!< bit:      8  Transmit Ready 0 Interrupt Enable  */
    uint16_t TXRDY1:1; /*!< bit:      9  Transmit Ready 1 Interrupt Enable  */
    uint16_t :2; /*!< bit: 10..11  Reserved                           */
    uint16_t TXUR0:1; /*!< bit:     12  Transmit Underrun 0 Interrupt Enable */
    uint16_t TXUR1:1; /*!< bit:     13  Transmit Underrun 1 Interrupt Enable */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t RXRDY:2; /*!< bit:  0.. 1  Receive Ready x Interrupt Enable   */
    uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint16_t RXOR:2; /*!< bit:  4.. 5  Receive Overrun x Interrupt Enable */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t TXRDY:2; /*!< bit:  8.. 9  Transmit Ready x Interrupt Enable  */
    uint16_t :2; /*!< bit: 10..11  Reserved                           */
    uint16_t TXUR:2; /*!< bit: 12..13  Transmit Underrun x Interrupt Enable */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} I2S_INTENSET_Type;
# 325 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/* -------- I2S_INTFLAG : (I2S Offset: 0x14) (R/W 16) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint16_t RXRDY0:1; /*!< bit:      0  Receive Ready 0                    */
    volatile /*!< Defines 'read only' permissions */ uint16_t RXRDY1:1; /*!< bit:      1  Receive Ready 1                    */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint16_t RXOR0:1; /*!< bit:      4  Receive Overrun 0                  */
    volatile /*!< Defines 'read only' permissions */ uint16_t RXOR1:1; /*!< bit:      5  Receive Overrun 1                  */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint16_t TXRDY0:1; /*!< bit:      8  Transmit Ready 0                   */
    volatile /*!< Defines 'read only' permissions */ uint16_t TXRDY1:1; /*!< bit:      9  Transmit Ready 1                   */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit: 10..11  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint16_t TXUR0:1; /*!< bit:     12  Transmit Underrun 0                */
    volatile /*!< Defines 'read only' permissions */ uint16_t TXUR1:1; /*!< bit:     13  Transmit Underrun 1                */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint16_t RXRDY:2; /*!< bit:  0.. 1  Receive Ready x                    */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit:  2.. 3  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint16_t RXOR:2; /*!< bit:  4.. 5  Receive Overrun x                  */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint16_t TXRDY:2; /*!< bit:  8.. 9  Transmit Ready x                   */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit: 10..11  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint16_t TXUR:2; /*!< bit: 12..13  Transmit Underrun x                */
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} I2S_INTFLAG_Type;
# 389 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/* -------- I2S_SYNCBUSY : (I2S Offset: 0x18) (R/  16) Synchronization Status -------- */

typedef union {
  struct {
    uint16_t SWRST:1; /*!< bit:      0  Software Reset Synchronization Status */
    uint16_t ENABLE:1; /*!< bit:      1  Enable Synchronization Status      */
    uint16_t CKEN0:1; /*!< bit:      2  Clock Unit 0 Enable Synchronization Status */
    uint16_t CKEN1:1; /*!< bit:      3  Clock Unit 1 Enable Synchronization Status */
    uint16_t SEREN0:1; /*!< bit:      4  Serializer 0 Enable Synchronization Status */
    uint16_t SEREN1:1; /*!< bit:      5  Serializer 1 Enable Synchronization Status */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t DATA0:1; /*!< bit:      8  Data 0 Synchronization Status      */
    uint16_t DATA1:1; /*!< bit:      9  Data 1 Synchronization Status      */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint16_t CKEN:2; /*!< bit:  2.. 3  Clock Unit x Enable Synchronization Status */
    uint16_t SEREN:2; /*!< bit:  4.. 5  Serializer x Enable Synchronization Status */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t DATA:2; /*!< bit:  8.. 9  Data x Synchronization Status      */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} I2S_SYNCBUSY_Type;
# 446 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/* -------- I2S_SERCTRL : (I2S Offset: 0x20) (R/W 32) Serializer n Control -------- */

typedef union {
  struct {
    uint32_t SERMODE:2; /*!< bit:  0.. 1  Serializer Mode                    */
    uint32_t TXDEFAULT:2; /*!< bit:  2.. 3  Line Default Line when Slot Disabled */
    uint32_t TXSAME:1; /*!< bit:      4  Transmit Data when Underrun        */
    uint32_t CLKSEL:1; /*!< bit:      5  Clock Unit Selection               */
    uint32_t :1; /*!< bit:      6  Reserved                           */
    uint32_t SLOTADJ:1; /*!< bit:      7  Data Slot Formatting Adjust        */
    uint32_t DATASIZE:3; /*!< bit:  8..10  Data Word Size                     */
    uint32_t :1; /*!< bit:     11  Reserved                           */
    uint32_t WORDADJ:1; /*!< bit:     12  Data Word Formatting Adjust        */
    uint32_t EXTEND:2; /*!< bit: 13..14  Data Formatting Bit Extension      */
    uint32_t BITREV:1; /*!< bit:     15  Data Formatting Bit Reverse        */
    uint32_t SLOTDIS0:1; /*!< bit:     16  Slot 0 Disabled for this Serializer */
    uint32_t SLOTDIS1:1; /*!< bit:     17  Slot 1 Disabled for this Serializer */
    uint32_t SLOTDIS2:1; /*!< bit:     18  Slot 2 Disabled for this Serializer */
    uint32_t SLOTDIS3:1; /*!< bit:     19  Slot 3 Disabled for this Serializer */
    uint32_t SLOTDIS4:1; /*!< bit:     20  Slot 4 Disabled for this Serializer */
    uint32_t SLOTDIS5:1; /*!< bit:     21  Slot 5 Disabled for this Serializer */
    uint32_t SLOTDIS6:1; /*!< bit:     22  Slot 6 Disabled for this Serializer */
    uint32_t SLOTDIS7:1; /*!< bit:     23  Slot 7 Disabled for this Serializer */
    uint32_t MONO:1; /*!< bit:     24  Mono Mode                          */
    uint32_t DMA:1; /*!< bit:     25  Single or Multiple DMA Channels    */
    uint32_t RXLOOP:1; /*!< bit:     26  Loop-back Test Mode                */
    uint32_t :5; /*!< bit: 27..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :16; /*!< bit:  0..15  Reserved                           */
    uint32_t SLOTDIS:8; /*!< bit: 16..23  Slot x Disabled for this Serializer */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} I2S_SERCTRL_Type;
# 599 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/* -------- I2S_DATA : (I2S Offset: 0x30) (R/W 32) Data n -------- */

typedef union {
  struct {
    uint32_t DATA:32; /*!< bit:  0..31  Sample Data                        */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} I2S_DATA_Type;
# 617 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/i2s.h"
/** \brief I2S hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ I2S_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W  8) Control A */
       RoReg8 Reserved1[0x3];
  volatile /*!< Defines 'read / write' permissions */ I2S_CLKCTRL_Type CLKCTRL[2]; /**< \brief Offset: 0x04 (R/W 32) Clock Unit n Control */
  volatile /*!< Defines 'read / write' permissions */ I2S_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W 16) Interrupt Enable Clear */
       RoReg8 Reserved2[0x2];
  volatile /*!< Defines 'read / write' permissions */ I2S_INTENSET_Type INTENSET; /**< \brief Offset: 0x10 (R/W 16) Interrupt Enable Set */
       RoReg8 Reserved3[0x2];
  volatile /*!< Defines 'read / write' permissions */ I2S_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x14 (R/W 16) Interrupt Flag Status and Clear */
       RoReg8 Reserved4[0x2];
  volatile /*!< Defines 'read only' permissions */ I2S_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x18 (R/  16) Synchronization Status */
       RoReg8 Reserved5[0x6];
  volatile /*!< Defines 'read / write' permissions */ I2S_SERCTRL_Type SERCTRL[2]; /**< \brief Offset: 0x20 (R/W 32) Serializer n Control */
       RoReg8 Reserved6[0x8];
  volatile /*!< Defines 'read / write' permissions */ I2S_DATA_Type DATA[2]; /**< \brief Offset: 0x30 (R/W 32) Data n */
} I2s;


/*@}*/
# 260 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/mtb.h" 1
/**
 * \file
 *
 * \brief Component description for MTB
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MTB */
/* ========================================================================== */
/** \addtogroup SAMD21_MTB Cortex-M0+ Micro-Trace Buffer */
/*@{*/




/* -------- MTB_POSITION : (MTB Offset: 0x000) (R/W 32) MTB Position -------- */

typedef union {
  struct {
    uint32_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint32_t WRAP:1; /*!< bit:      2  Pointer Value Wraps                */
    uint32_t POINTER:29; /*!< bit:  3..31  Trace Packet Location Pointer      */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} MTB_POSITION_Type;
# 77 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/mtb.h"
/* -------- MTB_MASTER : (MTB Offset: 0x004) (R/W 32) MTB Master -------- */

typedef union {
  struct {
    uint32_t MASK:5; /*!< bit:  0.. 4  Maximum Value of the Trace Buffer in SRAM */
    uint32_t TSTARTEN:1; /*!< bit:      5  Trace Start Input Enable           */
    uint32_t TSTOPEN:1; /*!< bit:      6  Trace Stop Input Enable            */
    uint32_t SFRWPRIV:1; /*!< bit:      7  Special Function Register Write Privilege */
    uint32_t RAMPRIV:1; /*!< bit:      8  SRAM Privilege                     */
    uint32_t HALTREQ:1; /*!< bit:      9  Halt Request                       */
    uint32_t :21; /*!< bit: 10..30  Reserved                           */
    uint32_t EN:1; /*!< bit:     31  Main Trace Enable                  */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} MTB_MASTER_Type;
# 114 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/mtb.h"
/* -------- MTB_FLOW : (MTB Offset: 0x008) (R/W 32) MTB Flow -------- */

typedef union {
  struct {
    uint32_t AUTOSTOP:1; /*!< bit:      0  Auto Stop Tracing                  */
    uint32_t AUTOHALT:1; /*!< bit:      1  Auto Halt Request                  */
    uint32_t :1; /*!< bit:      2  Reserved                           */
    uint32_t WATERMARK:29; /*!< bit:  3..31  Watermark value                    */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} MTB_FLOW_Type;
# 139 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/mtb.h"
/* -------- MTB_BASE : (MTB Offset: 0x00C) (R/  32) MTB Base -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_BASE_Type;





/* -------- MTB_ITCTRL : (MTB Offset: 0xF00) (R/W 32) MTB Integration Mode Control -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_ITCTRL_Type;





/* -------- MTB_CLAIMSET : (MTB Offset: 0xFA0) (R/W 32) MTB Claim Set -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_CLAIMSET_Type;





/* -------- MTB_CLAIMCLR : (MTB Offset: 0xFA4) (R/W 32) MTB Claim Clear -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_CLAIMCLR_Type;





/* -------- MTB_LOCKACCESS : (MTB Offset: 0xFB0) (R/W 32) MTB Lock Access -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_LOCKACCESS_Type;





/* -------- MTB_LOCKSTATUS : (MTB Offset: 0xFB4) (R/  32) MTB Lock Status -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_LOCKSTATUS_Type;





/* -------- MTB_AUTHSTATUS : (MTB Offset: 0xFB8) (R/  32) MTB Authentication Status -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_AUTHSTATUS_Type;





/* -------- MTB_DEVARCH : (MTB Offset: 0xFBC) (R/  32) MTB Device Architecture -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_DEVARCH_Type;





/* -------- MTB_DEVID : (MTB Offset: 0xFC8) (R/  32) MTB Device Configuration -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_DEVID_Type;





/* -------- MTB_DEVTYPE : (MTB Offset: 0xFCC) (R/  32) MTB Device Type -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_DEVTYPE_Type;





/* -------- MTB_PID4 : (MTB Offset: 0xFD0) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID4_Type;





/* -------- MTB_PID5 : (MTB Offset: 0xFD4) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID5_Type;





/* -------- MTB_PID6 : (MTB Offset: 0xFD8) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID6_Type;





/* -------- MTB_PID7 : (MTB Offset: 0xFDC) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID7_Type;





/* -------- MTB_PID0 : (MTB Offset: 0xFE0) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID0_Type;





/* -------- MTB_PID1 : (MTB Offset: 0xFE4) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID1_Type;





/* -------- MTB_PID2 : (MTB Offset: 0xFE8) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID2_Type;





/* -------- MTB_PID3 : (MTB Offset: 0xFEC) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_PID3_Type;





/* -------- MTB_CID0 : (MTB Offset: 0xFF0) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_CID0_Type;





/* -------- MTB_CID1 : (MTB Offset: 0xFF4) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_CID1_Type;





/* -------- MTB_CID2 : (MTB Offset: 0xFF8) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_CID2_Type;





/* -------- MTB_CID3 : (MTB Offset: 0xFFC) (R/  32) CoreSight -------- */

typedef union {
  uint32_t reg; /*!< Type      used for register access              */
} MTB_CID3_Type;





/** \brief MTB hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ MTB_POSITION_Type POSITION; /**< \brief Offset: 0x000 (R/W 32) MTB Position */
  volatile /*!< Defines 'read / write' permissions */ MTB_MASTER_Type MASTER; /**< \brief Offset: 0x004 (R/W 32) MTB Master */
  volatile /*!< Defines 'read / write' permissions */ MTB_FLOW_Type FLOW; /**< \brief Offset: 0x008 (R/W 32) MTB Flow */
  volatile /*!< Defines 'read only' permissions */ MTB_BASE_Type BASE; /**< \brief Offset: 0x00C (R/  32) MTB Base */
       RoReg8 Reserved1[0xEF0];
  volatile /*!< Defines 'read / write' permissions */ MTB_ITCTRL_Type ITCTRL; /**< \brief Offset: 0xF00 (R/W 32) MTB Integration Mode Control */
       RoReg8 Reserved2[0x9C];
  volatile /*!< Defines 'read / write' permissions */ MTB_CLAIMSET_Type CLAIMSET; /**< \brief Offset: 0xFA0 (R/W 32) MTB Claim Set */
  volatile /*!< Defines 'read / write' permissions */ MTB_CLAIMCLR_Type CLAIMCLR; /**< \brief Offset: 0xFA4 (R/W 32) MTB Claim Clear */
       RoReg8 Reserved3[0x8];
  volatile /*!< Defines 'read / write' permissions */ MTB_LOCKACCESS_Type LOCKACCESS; /**< \brief Offset: 0xFB0 (R/W 32) MTB Lock Access */
  volatile /*!< Defines 'read only' permissions */ MTB_LOCKSTATUS_Type LOCKSTATUS; /**< \brief Offset: 0xFB4 (R/  32) MTB Lock Status */
  volatile /*!< Defines 'read only' permissions */ MTB_AUTHSTATUS_Type AUTHSTATUS; /**< \brief Offset: 0xFB8 (R/  32) MTB Authentication Status */
  volatile /*!< Defines 'read only' permissions */ MTB_DEVARCH_Type DEVARCH; /**< \brief Offset: 0xFBC (R/  32) MTB Device Architecture */
       RoReg8 Reserved4[0x8];
  volatile /*!< Defines 'read only' permissions */ MTB_DEVID_Type DEVID; /**< \brief Offset: 0xFC8 (R/  32) MTB Device Configuration */
  volatile /*!< Defines 'read only' permissions */ MTB_DEVTYPE_Type DEVTYPE; /**< \brief Offset: 0xFCC (R/  32) MTB Device Type */
  volatile /*!< Defines 'read only' permissions */ MTB_PID4_Type PID4; /**< \brief Offset: 0xFD0 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_PID5_Type PID5; /**< \brief Offset: 0xFD4 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_PID6_Type PID6; /**< \brief Offset: 0xFD8 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_PID7_Type PID7; /**< \brief Offset: 0xFDC (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_PID0_Type PID0; /**< \brief Offset: 0xFE0 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_PID1_Type PID1; /**< \brief Offset: 0xFE4 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_PID2_Type PID2; /**< \brief Offset: 0xFE8 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_PID3_Type PID3; /**< \brief Offset: 0xFEC (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_CID0_Type CID0; /**< \brief Offset: 0xFF0 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_CID1_Type CID1; /**< \brief Offset: 0xFF4 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_CID2_Type CID2; /**< \brief Offset: 0xFF8 (R/  32) CoreSight */
  volatile /*!< Defines 'read only' permissions */ MTB_CID3_Type CID3; /**< \brief Offset: 0xFFC (R/  32) CoreSight */
} Mtb;


/*@}*/
# 261 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h" 1
/**
 * \file
 *
 * \brief Component description for NVMCTRL
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR NVMCTRL */
/* ========================================================================== */
/** \addtogroup SAMD21_NVMCTRL Non-Volatile Memory Controller */
/*@{*/




/* -------- NVMCTRL_CTRLA : (NVMCTRL Offset: 0x00) (R/W 16) Control A -------- */

typedef union {
  struct {
    uint16_t CMD:7; /*!< bit:  0.. 6  Command                            */
    uint16_t :1; /*!< bit:      7  Reserved                           */
    uint16_t CMDEX:8; /*!< bit:  8..15  Command Execution                  */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} NVMCTRL_CTRLA_Type;
# 107 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_CTRLB : (NVMCTRL Offset: 0x04) (R/W 32) Control B -------- */

typedef union {
  struct {
    uint32_t :1; /*!< bit:      0  Reserved                           */
    uint32_t RWS:4; /*!< bit:  1.. 4  NVM Read Wait States               */
    uint32_t :2; /*!< bit:  5.. 6  Reserved                           */
    uint32_t MANW:1; /*!< bit:      7  Manual Write                       */
    uint32_t SLEEPPRM:2; /*!< bit:  8.. 9  Power Reduction Mode during Sleep  */
    uint32_t :6; /*!< bit: 10..15  Reserved                           */
    uint32_t READMODE:2; /*!< bit: 16..17  NVMCTRL Read Mode                  */
    uint32_t CACHEDIS:1; /*!< bit:     18  Cache Disable                      */
    uint32_t :13; /*!< bit: 19..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} NVMCTRL_CTRLB_Type;
# 161 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_PARAM : (NVMCTRL Offset: 0x08) (R/W 32) NVM Parameter -------- */

typedef union {
  struct {
    uint32_t NVMP:16; /*!< bit:  0..15  NVM Pages                          */
    uint32_t PSZ:3; /*!< bit: 16..18  Page Size                          */
    uint32_t :13; /*!< bit: 19..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} NVMCTRL_PARAM_Type;
# 200 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_INTENCLR : (NVMCTRL Offset: 0x0C) (R/W  8) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t READY:1; /*!< bit:      0  NVM Ready Interrupt Enable         */
    uint8_t ERROR:1; /*!< bit:      1  Error Interrupt Enable             */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} NVMCTRL_INTENCLR_Type;
# 221 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_INTENSET : (NVMCTRL Offset: 0x10) (R/W  8) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t READY:1; /*!< bit:      0  NVM Ready Interrupt Enable         */
    uint8_t ERROR:1; /*!< bit:      1  Error Interrupt Enable             */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} NVMCTRL_INTENSET_Type;
# 242 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_INTFLAG : (NVMCTRL Offset: 0x14) (R/W  8) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t READY:1; /*!< bit:      0  NVM Ready                          */
    volatile /*!< Defines 'read only' permissions */ uint8_t ERROR:1; /*!< bit:      1  Error                              */
    volatile /*!< Defines 'read only' permissions */ uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} NVMCTRL_INTFLAG_Type;
# 263 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_STATUS : (NVMCTRL Offset: 0x18) (R/W 16) Status -------- */

typedef union {
  struct {
    uint16_t PRM:1; /*!< bit:      0  Power Reduction Mode               */
    uint16_t LOAD:1; /*!< bit:      1  NVM Page Buffer Active Loading     */
    uint16_t PROGE:1; /*!< bit:      2  Programming Error Status           */
    uint16_t LOCKE:1; /*!< bit:      3  Lock Error Status                  */
    uint16_t NVME:1; /*!< bit:      4  NVM Error                          */
    uint16_t :3; /*!< bit:  5.. 7  Reserved                           */
    uint16_t SB:1; /*!< bit:      8  Security Bit Status                */
    uint16_t :7; /*!< bit:  9..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} NVMCTRL_STATUS_Type;
# 297 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_ADDR : (NVMCTRL Offset: 0x1C) (R/W 32) Address -------- */

typedef union {
  struct {
    uint32_t ADDR:22; /*!< bit:  0..21  NVM Address                        */
    uint32_t :10; /*!< bit: 22..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} NVMCTRL_ADDR_Type;
# 316 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/* -------- NVMCTRL_LOCK : (NVMCTRL Offset: 0x20) (R/W 16) Lock Section -------- */

typedef union {
  struct {
    uint16_t LOCK:16; /*!< bit:  0..15  Region Lock Bits                   */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} NVMCTRL_LOCK_Type;
# 333 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/** \brief NVMCTRL APB hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 16) Control A */
       RoReg8 Reserved1[0x2];
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_CTRLB_Type CTRLB; /**< \brief Offset: 0x04 (R/W 32) Control B */
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_PARAM_Type PARAM; /**< \brief Offset: 0x08 (R/W 32) NVM Parameter */
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
       RoReg8 Reserved2[0x3];
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_INTENSET_Type INTENSET; /**< \brief Offset: 0x10 (R/W  8) Interrupt Enable Set */
       RoReg8 Reserved3[0x3];
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x14 (R/W  8) Interrupt Flag Status and Clear */
       RoReg8 Reserved4[0x3];
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_STATUS_Type STATUS; /**< \brief Offset: 0x18 (R/W 16) Status */
       RoReg8 Reserved5[0x2];
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_ADDR_Type ADDR; /**< \brief Offset: 0x1C (R/W 32) Address */
  volatile /*!< Defines 'read / write' permissions */ NVMCTRL_LOCK_Type LOCK; /**< \brief Offset: 0x20 (R/W 16) Lock Section */
} Nvmctrl;
# 367 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR NON-VOLATILE FUSES */
/* ************************************************************************** */
/** \addtogroup fuses_api Peripheral Software API */
/*@{*/
# 540 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/nvmctrl.h"
/*@}*/
# 262 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pac.h" 1
/**
 * \file
 *
 * \brief Component description for PAC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PAC */
/* ========================================================================== */
/** \addtogroup SAMD21_PAC Peripheral Access Controller */
/*@{*/




/* -------- PAC_WPCLR : (PAC Offset: 0x0) (R/W 32) Write Protection Clear -------- */

typedef union {
  struct {
    uint32_t :1; /*!< bit:      0  Reserved                           */
    uint32_t WP:31; /*!< bit:  1..31  Write Protection Clear             */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PAC_WPCLR_Type;
# 75 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pac.h"
/* -------- PAC_WPSET : (PAC Offset: 0x4) (R/W 32) Write Protection Set -------- */

typedef union {
  struct {
    uint32_t :1; /*!< bit:      0  Reserved                           */
    uint32_t WP:31; /*!< bit:  1..31  Write Protection Set               */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PAC_WPSET_Type;
# 94 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pac.h"
/** \brief PAC hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ PAC_WPCLR_Type WPCLR; /**< \brief Offset: 0x0 (R/W 32) Write Protection Clear */
  volatile /*!< Defines 'read / write' permissions */ PAC_WPSET_Type WPSET; /**< \brief Offset: 0x4 (R/W 32) Write Protection Set */
} Pac;


/*@}*/
# 263 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h" 1
/**
 * \file
 *
 * \brief Component description for PM
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PM */
/* ========================================================================== */
/** \addtogroup SAMD21_PM Power Manager */
/*@{*/




/* -------- PM_CTRL : (PM Offset: 0x00) (R/W  8) Control -------- */

typedef union {
  uint8_t reg; /*!< Type      used for register access              */
} PM_CTRL_Type;







/* -------- PM_SLEEP : (PM Offset: 0x01) (R/W  8) Sleep Mode -------- */

typedef union {
  struct {
    uint8_t IDLE:2; /*!< bit:  0.. 1  Idle Mode Configuration            */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_SLEEP_Type;
# 93 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_CPUSEL : (PM Offset: 0x08) (R/W  8) CPU Clock Select -------- */

typedef union {
  struct {
    uint8_t CPUDIV:3; /*!< bit:  0.. 2  CPU Prescaler Selection            */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_CPUSEL_Type;
# 128 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_APBASEL : (PM Offset: 0x09) (R/W  8) APBA Clock Select -------- */

typedef union {
  struct {
    uint8_t APBADIV:3; /*!< bit:  0.. 2  APBA Prescaler Selection           */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_APBASEL_Type;
# 163 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_APBBSEL : (PM Offset: 0x0A) (R/W  8) APBB Clock Select -------- */

typedef union {
  struct {
    uint8_t APBBDIV:3; /*!< bit:  0.. 2  APBB Prescaler Selection           */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_APBBSEL_Type;
# 198 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_APBCSEL : (PM Offset: 0x0B) (R/W  8) APBC Clock Select -------- */

typedef union {
  struct {
    uint8_t APBCDIV:3; /*!< bit:  0.. 2  APBC Prescaler Selection           */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_APBCSEL_Type;
# 233 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_AHBMASK : (PM Offset: 0x14) (R/W 32) AHB Mask -------- */

typedef union {
  struct {
    uint32_t HPB0_:1; /*!< bit:      0  HPB0 AHB Clock Mask                */
    uint32_t HPB1_:1; /*!< bit:      1  HPB1 AHB Clock Mask                */
    uint32_t HPB2_:1; /*!< bit:      2  HPB2 AHB Clock Mask                */
    uint32_t DSU_:1; /*!< bit:      3  DSU AHB Clock Mask                 */
    uint32_t NVMCTRL_:1; /*!< bit:      4  NVMCTRL AHB Clock Mask             */
    uint32_t DMAC_:1; /*!< bit:      5  DMAC AHB Clock Mask                */
    uint32_t USB_:1; /*!< bit:      6  USB AHB Clock Mask                 */
    uint32_t :25; /*!< bit:  7..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PM_AHBMASK_Type;
# 269 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_APBAMASK : (PM Offset: 0x18) (R/W 32) APBA Mask -------- */

typedef union {
  struct {
    uint32_t PAC0_:1; /*!< bit:      0  PAC0 APB Clock Enable              */
    uint32_t PM_:1; /*!< bit:      1  PM APB Clock Enable                */
    uint32_t SYSCTRL_:1; /*!< bit:      2  SYSCTRL APB Clock Enable           */
    uint32_t GCLK_:1; /*!< bit:      3  GCLK APB Clock Enable              */
    uint32_t WDT_:1; /*!< bit:      4  WDT APB Clock Enable               */
    uint32_t RTC_:1; /*!< bit:      5  RTC APB Clock Enable               */
    uint32_t EIC_:1; /*!< bit:      6  EIC APB Clock Enable               */
    uint32_t :25; /*!< bit:  7..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PM_APBAMASK_Type;
# 305 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_APBBMASK : (PM Offset: 0x1C) (R/W 32) APBB Mask -------- */

typedef union {
  struct {
    uint32_t PAC1_:1; /*!< bit:      0  PAC1 APB Clock Enable              */
    uint32_t DSU_:1; /*!< bit:      1  DSU APB Clock Enable               */
    uint32_t NVMCTRL_:1; /*!< bit:      2  NVMCTRL APB Clock Enable           */
    uint32_t PORT_:1; /*!< bit:      3  PORT APB Clock Enable              */
    uint32_t DMAC_:1; /*!< bit:      4  DMAC APB Clock Enable              */
    uint32_t USB_:1; /*!< bit:      5  USB APB Clock Enable               */
    uint32_t HMATRIX_:1; /*!< bit:      6  HMATRIX APB Clock Enable           */
    uint32_t :25; /*!< bit:  7..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PM_APBBMASK_Type;
# 341 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_APBCMASK : (PM Offset: 0x20) (R/W 32) APBC Mask -------- */

typedef union {
  struct {
    uint32_t PAC2_:1; /*!< bit:      0  PAC2 APB Clock Enable              */
    uint32_t EVSYS_:1; /*!< bit:      1  EVSYS APB Clock Enable             */
    uint32_t SERCOM0_:1; /*!< bit:      2  SERCOM0 APB Clock Enable           */
    uint32_t SERCOM1_:1; /*!< bit:      3  SERCOM1 APB Clock Enable           */
    uint32_t SERCOM2_:1; /*!< bit:      4  SERCOM2 APB Clock Enable           */
    uint32_t SERCOM3_:1; /*!< bit:      5  SERCOM3 APB Clock Enable           */
    uint32_t SERCOM4_:1; /*!< bit:      6  SERCOM4 APB Clock Enable           */
    uint32_t SERCOM5_:1; /*!< bit:      7  SERCOM5 APB Clock Enable           */
    uint32_t TCC0_:1; /*!< bit:      8  TCC0 APB Clock Enable              */
    uint32_t TCC1_:1; /*!< bit:      9  TCC1 APB Clock Enable              */
    uint32_t TCC2_:1; /*!< bit:     10  TCC2 APB Clock Enable              */
    uint32_t TC3_:1; /*!< bit:     11  TC3 APB Clock Enable               */
    uint32_t TC4_:1; /*!< bit:     12  TC4 APB Clock Enable               */
    uint32_t TC5_:1; /*!< bit:     13  TC5 APB Clock Enable               */
    uint32_t TC6_:1; /*!< bit:     14  TC6 APB Clock Enable               */
    uint32_t TC7_:1; /*!< bit:     15  TC7 APB Clock Enable               */
    uint32_t ADC_:1; /*!< bit:     16  ADC APB Clock Enable               */
    uint32_t AC_:1; /*!< bit:     17  AC APB Clock Enable                */
    uint32_t DAC_:1; /*!< bit:     18  DAC APB Clock Enable               */
    uint32_t PTC_:1; /*!< bit:     19  PTC APB Clock Enable               */
    uint32_t I2S_:1; /*!< bit:     20  I2S APB Clock Enable               */
    uint32_t :11; /*!< bit: 21..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PM_APBCMASK_Type;
# 419 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_INTENCLR : (PM Offset: 0x34) (R/W  8) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t CKRDY:1; /*!< bit:      0  Clock Ready Interrupt Enable       */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_INTENCLR_Type;
# 437 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_INTENSET : (PM Offset: 0x35) (R/W  8) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t CKRDY:1; /*!< bit:      0  Clock Ready Interrupt Enable       */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_INTENSET_Type;
# 455 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_INTFLAG : (PM Offset: 0x36) (R/W  8) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t CKRDY:1; /*!< bit:      0  Clock Ready                        */
    volatile /*!< Defines 'read only' permissions */ uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_INTFLAG_Type;
# 473 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/* -------- PM_RCAUSE : (PM Offset: 0x38) (R/   8) Reset Cause -------- */

typedef union {
  struct {
    uint8_t POR:1; /*!< bit:      0  Power On Reset                     */
    uint8_t BOD12:1; /*!< bit:      1  Brown Out 12 Detector Reset        */
    uint8_t BOD33:1; /*!< bit:      2  Brown Out 33 Detector Reset        */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t EXT:1; /*!< bit:      4  External Reset                     */
    uint8_t WDT:1; /*!< bit:      5  Watchdog Reset                     */
    uint8_t SYST:1; /*!< bit:      6  System Reset Request               */
    uint8_t :1; /*!< bit:      7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PM_RCAUSE_Type;
# 507 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/pm.h"
/** \brief PM hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ PM_CTRL_Type CTRL; /**< \brief Offset: 0x00 (R/W  8) Control */
  volatile /*!< Defines 'read / write' permissions */ PM_SLEEP_Type SLEEP; /**< \brief Offset: 0x01 (R/W  8) Sleep Mode */
       RoReg8 Reserved1[0x6];
  volatile /*!< Defines 'read / write' permissions */ PM_CPUSEL_Type CPUSEL; /**< \brief Offset: 0x08 (R/W  8) CPU Clock Select */
  volatile /*!< Defines 'read / write' permissions */ PM_APBASEL_Type APBASEL; /**< \brief Offset: 0x09 (R/W  8) APBA Clock Select */
  volatile /*!< Defines 'read / write' permissions */ PM_APBBSEL_Type APBBSEL; /**< \brief Offset: 0x0A (R/W  8) APBB Clock Select */
  volatile /*!< Defines 'read / write' permissions */ PM_APBCSEL_Type APBCSEL; /**< \brief Offset: 0x0B (R/W  8) APBC Clock Select */
       RoReg8 Reserved2[0x8];
  volatile /*!< Defines 'read / write' permissions */ PM_AHBMASK_Type AHBMASK; /**< \brief Offset: 0x14 (R/W 32) AHB Mask */
  volatile /*!< Defines 'read / write' permissions */ PM_APBAMASK_Type APBAMASK; /**< \brief Offset: 0x18 (R/W 32) APBA Mask */
  volatile /*!< Defines 'read / write' permissions */ PM_APBBMASK_Type APBBMASK; /**< \brief Offset: 0x1C (R/W 32) APBB Mask */
  volatile /*!< Defines 'read / write' permissions */ PM_APBCMASK_Type APBCMASK; /**< \brief Offset: 0x20 (R/W 32) APBC Mask */
       RoReg8 Reserved3[0x10];
  volatile /*!< Defines 'read / write' permissions */ PM_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x34 (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ PM_INTENSET_Type INTENSET; /**< \brief Offset: 0x35 (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ PM_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x36 (R/W  8) Interrupt Flag Status and Clear */
       RoReg8 Reserved4[0x1];
  volatile /*!< Defines 'read only' permissions */ PM_RCAUSE_Type RCAUSE; /**< \brief Offset: 0x38 (R/   8) Reset Cause */
} Pm;


/*@}*/
# 264 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h" 1
/**
 * \file
 *
 * \brief Component description for PORT
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PORT */
/* ========================================================================== */
/** \addtogroup SAMD21_PORT Port Module */
/*@{*/




/* -------- PORT_DIR : (PORT Offset: 0x00) (R/W 32) GROUP Data Direction -------- */

typedef union {
  struct {
    uint32_t DIR:32; /*!< bit:  0..31  Port Data Direction                */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_DIR_Type;
# 74 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_DIRCLR : (PORT Offset: 0x04) (R/W 32) GROUP Data Direction Clear -------- */

typedef union {
  struct {
    uint32_t DIRCLR:32; /*!< bit:  0..31  Port Data Direction Clear          */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_DIRCLR_Type;
# 92 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_DIRSET : (PORT Offset: 0x08) (R/W 32) GROUP Data Direction Set -------- */

typedef union {
  struct {
    uint32_t DIRSET:32; /*!< bit:  0..31  Port Data Direction Set            */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_DIRSET_Type;
# 110 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_DIRTGL : (PORT Offset: 0x0C) (R/W 32) GROUP Data Direction Toggle -------- */

typedef union {
  struct {
    uint32_t DIRTGL:32; /*!< bit:  0..31  Port Data Direction Toggle         */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_DIRTGL_Type;
# 128 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_OUT : (PORT Offset: 0x10) (R/W 32) GROUP Data Output Value -------- */

typedef union {
  struct {
    uint32_t OUT:32; /*!< bit:  0..31  Port Data Output Value             */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_OUT_Type;
# 146 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_OUTCLR : (PORT Offset: 0x14) (R/W 32) GROUP Data Output Value Clear -------- */

typedef union {
  struct {
    uint32_t OUTCLR:32; /*!< bit:  0..31  Port Data Output Value Clear       */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_OUTCLR_Type;
# 164 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_OUTSET : (PORT Offset: 0x18) (R/W 32) GROUP Data Output Value Set -------- */

typedef union {
  struct {
    uint32_t OUTSET:32; /*!< bit:  0..31  Port Data Output Value Set         */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_OUTSET_Type;
# 182 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_OUTTGL : (PORT Offset: 0x1C) (R/W 32) GROUP Data Output Value Toggle -------- */

typedef union {
  struct {
    uint32_t OUTTGL:32; /*!< bit:  0..31  Port Data Output Value Toggle      */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_OUTTGL_Type;
# 200 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_IN : (PORT Offset: 0x20) (R/  32) GROUP Data Input Value -------- */

typedef union {
  struct {
    uint32_t IN:32; /*!< bit:  0..31  Port Data Input Value              */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_IN_Type;
# 218 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_CTRL : (PORT Offset: 0x24) (R/W 32) GROUP Control -------- */

typedef union {
  struct {
    uint32_t SAMPLING:32; /*!< bit:  0..31  Input Sampling Mode                */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_CTRL_Type;
# 236 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_WRCONFIG : (PORT Offset: 0x28) ( /W 32) GROUP Write Configuration -------- */

typedef union {
  struct {
    uint32_t PINMASK:16; /*!< bit:  0..15  Pin Mask for Multiple Pin Configuration */
    uint32_t PMUXEN:1; /*!< bit:     16  Peripheral Multiplexer Enable      */
    uint32_t INEN:1; /*!< bit:     17  Input Enable                       */
    uint32_t PULLEN:1; /*!< bit:     18  Pull Enable                        */
    uint32_t :3; /*!< bit: 19..21  Reserved                           */
    uint32_t DRVSTR:1; /*!< bit:     22  Output Driver Strength Selection   */
    uint32_t :1; /*!< bit:     23  Reserved                           */
    uint32_t PMUX:4; /*!< bit: 24..27  Peripheral Multiplexing            */
    uint32_t WRPMUX:1; /*!< bit:     28  Write PMUX                         */
    uint32_t :1; /*!< bit:     29  Reserved                           */
    uint32_t WRPINCFG:1; /*!< bit:     30  Write PINCFG                       */
    uint32_t HWSEL:1; /*!< bit:     31  Half-Word Select                   */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} PORT_WRCONFIG_Type;
# 282 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_PMUX : (PORT Offset: 0x30) (R/W  8) GROUP Peripheral Multiplexing n -------- */

typedef union {
  struct {
    uint8_t PMUXE:4; /*!< bit:  0.. 3  Peripheral Multiplexing Even       */
    uint8_t PMUXO:4; /*!< bit:  4.. 7  Peripheral Multiplexing Odd        */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PORT_PMUX_Type;
# 336 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/* -------- PORT_PINCFG : (PORT Offset: 0x40) (R/W  8) GROUP Pin Configuration n -------- */

typedef union {
  struct {
    uint8_t PMUXEN:1; /*!< bit:      0  Peripheral Multiplexer Enable      */
    uint8_t INEN:1; /*!< bit:      1  Input Enable                       */
    uint8_t PULLEN:1; /*!< bit:      2  Pull Enable                        */
    uint8_t :3; /*!< bit:  3.. 5  Reserved                           */
    uint8_t DRVSTR:1; /*!< bit:      6  Output Driver Strength Selection   */
    uint8_t :1; /*!< bit:      7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} PORT_PINCFG_Type;
# 364 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/port.h"
/** \brief PortGroup hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ PORT_DIR_Type DIR; /**< \brief Offset: 0x00 (R/W 32) Data Direction */
  volatile /*!< Defines 'read / write' permissions */ PORT_DIRCLR_Type DIRCLR; /**< \brief Offset: 0x04 (R/W 32) Data Direction Clear */
  volatile /*!< Defines 'read / write' permissions */ PORT_DIRSET_Type DIRSET; /**< \brief Offset: 0x08 (R/W 32) Data Direction Set */
  volatile /*!< Defines 'read / write' permissions */ PORT_DIRTGL_Type DIRTGL; /**< \brief Offset: 0x0C (R/W 32) Data Direction Toggle */
  volatile /*!< Defines 'read / write' permissions */ PORT_OUT_Type OUT; /**< \brief Offset: 0x10 (R/W 32) Data Output Value */
  volatile /*!< Defines 'read / write' permissions */ PORT_OUTCLR_Type OUTCLR; /**< \brief Offset: 0x14 (R/W 32) Data Output Value Clear */
  volatile /*!< Defines 'read / write' permissions */ PORT_OUTSET_Type OUTSET; /**< \brief Offset: 0x18 (R/W 32) Data Output Value Set */
  volatile /*!< Defines 'read / write' permissions */ PORT_OUTTGL_Type OUTTGL; /**< \brief Offset: 0x1C (R/W 32) Data Output Value Toggle */
  volatile /*!< Defines 'read only' permissions */ PORT_IN_Type IN; /**< \brief Offset: 0x20 (R/  32) Data Input Value */
  volatile /*!< Defines 'read / write' permissions */ PORT_CTRL_Type CTRL; /**< \brief Offset: 0x24 (R/W 32) Control */
  volatile /*!< Defines 'write only' permissions */ PORT_WRCONFIG_Type WRCONFIG; /**< \brief Offset: 0x28 ( /W 32) Write Configuration */
       RoReg8 Reserved1[0x4];
  volatile /*!< Defines 'read / write' permissions */ PORT_PMUX_Type PMUX[16]; /**< \brief Offset: 0x30 (R/W  8) Peripheral Multiplexing n */
  volatile /*!< Defines 'read / write' permissions */ PORT_PINCFG_Type PINCFG[32]; /**< \brief Offset: 0x40 (R/W  8) Pin Configuration n */
       RoReg8 Reserved2[0x20];
} PortGroup;


/** \brief PORT hardware registers */

typedef struct {
       PortGroup Group[2]; /**< \brief Offset: 0x00 PortGroup groups [GROUPS] */
} Port;




/*@}*/
# 265 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h" 1
/**
 * \file
 *
 * \brief Component description for RTC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR RTC */
/* ========================================================================== */
/** \addtogroup SAMD21_RTC Real-Time Counter */
/*@{*/




/* -------- RTC_MODE0_CTRL : (RTC Offset: 0x00) (R/W 16) MODE0 MODE0 Control -------- */

typedef union {
  struct {
    uint16_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint16_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint16_t MODE:2; /*!< bit:  2.. 3  Operating Mode                     */
    uint16_t :3; /*!< bit:  4.. 6  Reserved                           */
    uint16_t MATCHCLR:1; /*!< bit:      7  Clear on Match                     */
    uint16_t PRESCALER:4; /*!< bit:  8..11  Prescaler                          */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE0_CTRL_Type;
# 117 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_CTRL : (RTC Offset: 0x00) (R/W 16) MODE1 MODE1 Control -------- */

typedef union {
  struct {
    uint16_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint16_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint16_t MODE:2; /*!< bit:  2.. 3  Operating Mode                     */
    uint16_t :4; /*!< bit:  4.. 7  Reserved                           */
    uint16_t PRESCALER:4; /*!< bit:  8..11  Prescaler                          */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE1_CTRL_Type;
# 175 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_CTRL : (RTC Offset: 0x00) (R/W 16) MODE2 MODE2 Control -------- */

typedef union {
  struct {
    uint16_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint16_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint16_t MODE:2; /*!< bit:  2.. 3  Operating Mode                     */
    uint16_t :2; /*!< bit:  4.. 5  Reserved                           */
    uint16_t CLKREP:1; /*!< bit:      6  Clock Representation               */
    uint16_t MATCHCLR:1; /*!< bit:      7  Clear on Match                     */
    uint16_t PRESCALER:4; /*!< bit:  8..11  Prescaler                          */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE2_CTRL_Type;
# 239 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_READREQ : (RTC Offset: 0x02) (R/W 16) Read Request -------- */

typedef union {
  struct {
    uint16_t ADDR:6; /*!< bit:  0.. 5  Address                            */
    uint16_t :8; /*!< bit:  6..13  Reserved                           */
    uint16_t RCONT:1; /*!< bit:     14  Read Continuously                  */
    uint16_t RREQ:1; /*!< bit:     15  Read Request                       */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_READREQ_Type;
# 264 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE0_EVCTRL : (RTC Offset: 0x04) (R/W 16) MODE0 MODE0 Event Control -------- */

typedef union {
  struct {
    uint16_t PEREO0:1; /*!< bit:      0  Periodic Interval 0 Event Output Enable */
    uint16_t PEREO1:1; /*!< bit:      1  Periodic Interval 1 Event Output Enable */
    uint16_t PEREO2:1; /*!< bit:      2  Periodic Interval 2 Event Output Enable */
    uint16_t PEREO3:1; /*!< bit:      3  Periodic Interval 3 Event Output Enable */
    uint16_t PEREO4:1; /*!< bit:      4  Periodic Interval 4 Event Output Enable */
    uint16_t PEREO5:1; /*!< bit:      5  Periodic Interval 5 Event Output Enable */
    uint16_t PEREO6:1; /*!< bit:      6  Periodic Interval 6 Event Output Enable */
    uint16_t PEREO7:1; /*!< bit:      7  Periodic Interval 7 Event Output Enable */
    uint16_t CMPEO0:1; /*!< bit:      8  Compare 0 Event Output Enable      */
    uint16_t :6; /*!< bit:  9..14  Reserved                           */
    uint16_t OVFEO:1; /*!< bit:     15  Overflow Event Output Enable       */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t PEREO:8; /*!< bit:  0.. 7  Periodic Interval x Event Output Enable */
    uint16_t CMPEO:1; /*!< bit:      8  Compare x Event Output Enable      */
    uint16_t :7; /*!< bit:  9..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE0_EVCTRL_Type;
# 320 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_EVCTRL : (RTC Offset: 0x04) (R/W 16) MODE1 MODE1 Event Control -------- */

typedef union {
  struct {
    uint16_t PEREO0:1; /*!< bit:      0  Periodic Interval 0 Event Output Enable */
    uint16_t PEREO1:1; /*!< bit:      1  Periodic Interval 1 Event Output Enable */
    uint16_t PEREO2:1; /*!< bit:      2  Periodic Interval 2 Event Output Enable */
    uint16_t PEREO3:1; /*!< bit:      3  Periodic Interval 3 Event Output Enable */
    uint16_t PEREO4:1; /*!< bit:      4  Periodic Interval 4 Event Output Enable */
    uint16_t PEREO5:1; /*!< bit:      5  Periodic Interval 5 Event Output Enable */
    uint16_t PEREO6:1; /*!< bit:      6  Periodic Interval 6 Event Output Enable */
    uint16_t PEREO7:1; /*!< bit:      7  Periodic Interval 7 Event Output Enable */
    uint16_t CMPEO0:1; /*!< bit:      8  Compare 0 Event Output Enable      */
    uint16_t CMPEO1:1; /*!< bit:      9  Compare 1 Event Output Enable      */
    uint16_t :5; /*!< bit: 10..14  Reserved                           */
    uint16_t OVFEO:1; /*!< bit:     15  Overflow Event Output Enable       */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t PEREO:8; /*!< bit:  0.. 7  Periodic Interval x Event Output Enable */
    uint16_t CMPEO:2; /*!< bit:  8.. 9  Compare x Event Output Enable      */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE1_EVCTRL_Type;
# 379 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_EVCTRL : (RTC Offset: 0x04) (R/W 16) MODE2 MODE2 Event Control -------- */

typedef union {
  struct {
    uint16_t PEREO0:1; /*!< bit:      0  Periodic Interval 0 Event Output Enable */
    uint16_t PEREO1:1; /*!< bit:      1  Periodic Interval 1 Event Output Enable */
    uint16_t PEREO2:1; /*!< bit:      2  Periodic Interval 2 Event Output Enable */
    uint16_t PEREO3:1; /*!< bit:      3  Periodic Interval 3 Event Output Enable */
    uint16_t PEREO4:1; /*!< bit:      4  Periodic Interval 4 Event Output Enable */
    uint16_t PEREO5:1; /*!< bit:      5  Periodic Interval 5 Event Output Enable */
    uint16_t PEREO6:1; /*!< bit:      6  Periodic Interval 6 Event Output Enable */
    uint16_t PEREO7:1; /*!< bit:      7  Periodic Interval 7 Event Output Enable */
    uint16_t ALARMEO0:1; /*!< bit:      8  Alarm 0 Event Output Enable        */
    uint16_t :6; /*!< bit:  9..14  Reserved                           */
    uint16_t OVFEO:1; /*!< bit:     15  Overflow Event Output Enable       */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t PEREO:8; /*!< bit:  0.. 7  Periodic Interval x Event Output Enable */
    uint16_t ALARMEO:1; /*!< bit:      8  Alarm x Event Output Enable        */
    uint16_t :7; /*!< bit:  9..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE2_EVCTRL_Type;
# 435 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE0_INTENCLR : (RTC Offset: 0x06) (R/W  8) MODE0 MODE0 Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t CMP0:1; /*!< bit:      0  Compare 0 Interrupt Enable         */
    uint8_t :5; /*!< bit:  1.. 5  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready Interrupt Enable */
    uint8_t OVF:1; /*!< bit:      7  Overflow Interrupt Enable          */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t CMP:1; /*!< bit:      0  Compare x Interrupt Enable         */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE0_INTENCLR_Type;
# 466 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_INTENCLR : (RTC Offset: 0x06) (R/W  8) MODE1 MODE1 Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t CMP0:1; /*!< bit:      0  Compare 0 Interrupt Enable         */
    uint8_t CMP1:1; /*!< bit:      1  Compare 1 Interrupt Enable         */
    uint8_t :4; /*!< bit:  2.. 5  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready Interrupt Enable */
    uint8_t OVF:1; /*!< bit:      7  Overflow Interrupt Enable          */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t CMP:2; /*!< bit:  0.. 1  Compare x Interrupt Enable         */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE1_INTENCLR_Type;
# 500 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_INTENCLR : (RTC Offset: 0x06) (R/W  8) MODE2 MODE2 Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t ALARM0:1; /*!< bit:      0  Alarm 0 Interrupt Enable           */
    uint8_t :5; /*!< bit:  1.. 5  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready Interrupt Enable */
    uint8_t OVF:1; /*!< bit:      7  Overflow Interrupt Enable          */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t ALARM:1; /*!< bit:      0  Alarm x Interrupt Enable           */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE2_INTENCLR_Type;
# 531 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE0_INTENSET : (RTC Offset: 0x07) (R/W  8) MODE0 MODE0 Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t CMP0:1; /*!< bit:      0  Compare 0 Interrupt Enable         */
    uint8_t :5; /*!< bit:  1.. 5  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready Interrupt Enable */
    uint8_t OVF:1; /*!< bit:      7  Overflow Interrupt Enable          */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t CMP:1; /*!< bit:      0  Compare x Interrupt Enable         */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE0_INTENSET_Type;
# 562 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_INTENSET : (RTC Offset: 0x07) (R/W  8) MODE1 MODE1 Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t CMP0:1; /*!< bit:      0  Compare 0 Interrupt Enable         */
    uint8_t CMP1:1; /*!< bit:      1  Compare 1 Interrupt Enable         */
    uint8_t :4; /*!< bit:  2.. 5  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready Interrupt Enable */
    uint8_t OVF:1; /*!< bit:      7  Overflow Interrupt Enable          */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t CMP:2; /*!< bit:  0.. 1  Compare x Interrupt Enable         */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE1_INTENSET_Type;
# 596 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_INTENSET : (RTC Offset: 0x07) (R/W  8) MODE2 MODE2 Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t ALARM0:1; /*!< bit:      0  Alarm 0 Interrupt Enable           */
    uint8_t :5; /*!< bit:  1.. 5  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready Interrupt Enable */
    uint8_t OVF:1; /*!< bit:      7  Overflow Interrupt Enable          */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t ALARM:1; /*!< bit:      0  Alarm x Interrupt Enable           */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE2_INTENSET_Type;
# 627 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE0_INTFLAG : (RTC Offset: 0x08) (R/W  8) MODE0 MODE0 Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t CMP0:1; /*!< bit:      0  Compare 0                          */
    volatile /*!< Defines 'read only' permissions */ uint8_t :5; /*!< bit:  1.. 5  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready              */
    volatile /*!< Defines 'read only' permissions */ uint8_t OVF:1; /*!< bit:      7  Overflow                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t CMP:1; /*!< bit:      0  Compare x                          */
    volatile /*!< Defines 'read only' permissions */ uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE0_INTFLAG_Type;
# 658 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_INTFLAG : (RTC Offset: 0x08) (R/W  8) MODE1 MODE1 Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t CMP0:1; /*!< bit:      0  Compare 0                          */
    volatile /*!< Defines 'read only' permissions */ uint8_t CMP1:1; /*!< bit:      1  Compare 1                          */
    volatile /*!< Defines 'read only' permissions */ uint8_t :4; /*!< bit:  2.. 5  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready              */
    volatile /*!< Defines 'read only' permissions */ uint8_t OVF:1; /*!< bit:      7  Overflow                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t CMP:2; /*!< bit:  0.. 1  Compare x                          */
    volatile /*!< Defines 'read only' permissions */ uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE1_INTFLAG_Type;
# 692 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_INTFLAG : (RTC Offset: 0x08) (R/W  8) MODE2 MODE2 Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t ALARM0:1; /*!< bit:      0  Alarm 0                            */
    volatile /*!< Defines 'read only' permissions */ uint8_t :5; /*!< bit:  1.. 5  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t SYNCRDY:1; /*!< bit:      6  Synchronization Ready              */
    volatile /*!< Defines 'read only' permissions */ uint8_t OVF:1; /*!< bit:      7  Overflow                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t ALARM:1; /*!< bit:      0  Alarm x                            */
    volatile /*!< Defines 'read only' permissions */ uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE2_INTFLAG_Type;
# 723 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_STATUS : (RTC Offset: 0x0A) (R/W  8) Status -------- */

typedef union {
  struct {
    uint8_t :7; /*!< bit:  0.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy               */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_STATUS_Type;
# 741 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_DBGCTRL : (RTC Offset: 0x0B) (R/W  8) Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGRUN:1; /*!< bit:      0  Run During Debug                   */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_DBGCTRL_Type;
# 759 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_FREQCORR : (RTC Offset: 0x0C) (R/W  8) Frequency Correction -------- */

typedef union {
  struct {
    uint8_t VALUE:7; /*!< bit:  0.. 6  Correction Value                   */
    uint8_t SIGN:1; /*!< bit:      7  Correction Sign                    */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_FREQCORR_Type;
# 780 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE0_COUNT : (RTC Offset: 0x10) (R/W 32) MODE0 MODE0 Counter Value -------- */

typedef union {
  struct {
    uint32_t COUNT:32; /*!< bit:  0..31  Counter Value                      */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} RTC_MODE0_COUNT_Type;
# 798 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_COUNT : (RTC Offset: 0x10) (R/W 16) MODE1 MODE1 Counter Value -------- */

typedef union {
  struct {
    uint16_t COUNT:16; /*!< bit:  0..15  Counter Value                      */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE1_COUNT_Type;
# 816 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_CLOCK : (RTC Offset: 0x10) (R/W 32) MODE2 MODE2 Clock Value -------- */

typedef union {
  struct {
    uint32_t SECOND:6; /*!< bit:  0.. 5  Second                             */
    uint32_t MINUTE:6; /*!< bit:  6..11  Minute                             */
    uint32_t HOUR:5; /*!< bit: 12..16  Hour                               */
    uint32_t DAY:5; /*!< bit: 17..21  Day                                */
    uint32_t MONTH:4; /*!< bit: 22..25  Month                              */
    uint32_t YEAR:6; /*!< bit: 26..31  Year                               */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} RTC_MODE2_CLOCK_Type;
# 856 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_PER : (RTC Offset: 0x14) (R/W 16) MODE1 MODE1 Counter Period -------- */

typedef union {
  struct {
    uint16_t PER:16; /*!< bit:  0..15  Counter Period                     */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE1_PER_Type;
# 874 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE0_COMP : (RTC Offset: 0x18) (R/W 32) MODE0 MODE0 Compare n Value -------- */

typedef union {
  struct {
    uint32_t COMP:32; /*!< bit:  0..31  Compare Value                      */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} RTC_MODE0_COMP_Type;
# 892 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE1_COMP : (RTC Offset: 0x18) (R/W 16) MODE1 MODE1 Compare n Value -------- */

typedef union {
  struct {
    uint16_t COMP:16; /*!< bit:  0..15  Compare Value                      */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} RTC_MODE1_COMP_Type;
# 910 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_ALARM : (RTC Offset: 0x18) (R/W 32) MODE2 MODE2_ALARM Alarm n Value -------- */

typedef union {
  struct {
    uint32_t SECOND:6; /*!< bit:  0.. 5  Second                             */
    uint32_t MINUTE:6; /*!< bit:  6..11  Minute                             */
    uint32_t HOUR:5; /*!< bit: 12..16  Hour                               */
    uint32_t DAY:5; /*!< bit: 17..21  Day                                */
    uint32_t MONTH:4; /*!< bit: 22..25  Month                              */
    uint32_t YEAR:6; /*!< bit: 26..31  Year                               */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} RTC_MODE2_ALARM_Type;
# 948 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/* -------- RTC_MODE2_MASK : (RTC Offset: 0x1C) (R/W  8) MODE2 MODE2_ALARM Alarm n Mask -------- */

typedef union {
  struct {
    uint8_t SEL:3; /*!< bit:  0.. 2  Alarm Mask Selection               */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} RTC_MODE2_MASK_Type;
# 981 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/rtc.h"
/** \brief RtcMode2Alarm hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_ALARM_Type ALARM; /**< \brief Offset: 0x00 (R/W 32) MODE2_ALARM Alarm n Value */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_MASK_Type MASK; /**< \brief Offset: 0x04 (R/W  8) MODE2_ALARM Alarm n Mask */
       RoReg8 Reserved1[0x3];
} RtcMode2Alarm;


/** \brief RTC_MODE0 hardware registers */

typedef struct { /* 32-bit Counter with Single 32-bit Compare */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE0_CTRL_Type CTRL; /**< \brief Offset: 0x00 (R/W 16) MODE0 Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE0_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x04 (R/W 16) MODE0 Event Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE0_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x06 (R/W  8) MODE0 Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE0_INTENSET_Type INTENSET; /**< \brief Offset: 0x07 (R/W  8) MODE0 Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE0_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x08 (R/W  8) MODE0 Interrupt Flag Status and Clear */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ RTC_STATUS_Type STATUS; /**< \brief Offset: 0x0A (R/W  8) Status */
  volatile /*!< Defines 'read / write' permissions */ RTC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x0B (R/W  8) Debug Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_FREQCORR_Type FREQCORR; /**< \brief Offset: 0x0C (R/W  8) Frequency Correction */
       RoReg8 Reserved2[0x3];
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE0_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W 32) MODE0 Counter Value */
       RoReg8 Reserved3[0x4];
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE0_COMP_Type COMP[1]; /**< \brief Offset: 0x18 (R/W 32) MODE0 Compare n Value */
} RtcMode0;


/** \brief RTC_MODE1 hardware registers */

typedef struct { /* 16-bit Counter with Two 16-bit Compares */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_CTRL_Type CTRL; /**< \brief Offset: 0x00 (R/W 16) MODE1 Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x04 (R/W 16) MODE1 Event Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x06 (R/W  8) MODE1 Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_INTENSET_Type INTENSET; /**< \brief Offset: 0x07 (R/W  8) MODE1 Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x08 (R/W  8) MODE1 Interrupt Flag Status and Clear */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ RTC_STATUS_Type STATUS; /**< \brief Offset: 0x0A (R/W  8) Status */
  volatile /*!< Defines 'read / write' permissions */ RTC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x0B (R/W  8) Debug Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_FREQCORR_Type FREQCORR; /**< \brief Offset: 0x0C (R/W  8) Frequency Correction */
       RoReg8 Reserved2[0x3];
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W 16) MODE1 Counter Value */
       RoReg8 Reserved3[0x2];
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_PER_Type PER; /**< \brief Offset: 0x14 (R/W 16) MODE1 Counter Period */
       RoReg8 Reserved4[0x2];
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE1_COMP_Type COMP[2]; /**< \brief Offset: 0x18 (R/W 16) MODE1 Compare n Value */
} RtcMode1;


/** \brief RTC_MODE2 hardware registers */

typedef struct { /* Clock/Calendar with Alarm */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_CTRL_Type CTRL; /**< \brief Offset: 0x00 (R/W 16) MODE2 Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x04 (R/W 16) MODE2 Event Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x06 (R/W  8) MODE2 Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_INTENSET_Type INTENSET; /**< \brief Offset: 0x07 (R/W  8) MODE2 Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x08 (R/W  8) MODE2 Interrupt Flag Status and Clear */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ RTC_STATUS_Type STATUS; /**< \brief Offset: 0x0A (R/W  8) Status */
  volatile /*!< Defines 'read / write' permissions */ RTC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x0B (R/W  8) Debug Control */
  volatile /*!< Defines 'read / write' permissions */ RTC_FREQCORR_Type FREQCORR; /**< \brief Offset: 0x0C (R/W  8) Frequency Correction */
       RoReg8 Reserved2[0x3];
  volatile /*!< Defines 'read / write' permissions */ RTC_MODE2_CLOCK_Type CLOCK; /**< \brief Offset: 0x10 (R/W 32) MODE2 Clock Value */
       RoReg8 Reserved3[0x4];
       RtcMode2Alarm Mode2Alarm[1]; /**< \brief Offset: 0x18 RtcMode2Alarm groups [ALARM_NUM] */
} RtcMode2;



typedef union {
       RtcMode0 MODE0; /**< \brief Offset: 0x00 32-bit Counter with Single 32-bit Compare */
       RtcMode1 MODE1; /**< \brief Offset: 0x00 16-bit Counter with Two 16-bit Compares */
       RtcMode2 MODE2; /**< \brief Offset: 0x00 Clock/Calendar with Alarm */
} Rtc;


/*@}*/
# 266 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h" 1
/**
 * \file
 *
 * \brief Component description for SERCOM
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SERCOM */
/* ========================================================================== */
/** \addtogroup SAMD21_SERCOM Serial Communication Interface */
/*@{*/




/* -------- SERCOM_I2CM_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CM I2CM Control A -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint32_t MODE:3; /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2; /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1; /*!< bit:      7  Run in Standby                     */
    uint32_t :8; /*!< bit:  8..15  Reserved                           */
    uint32_t PINOUT:1; /*!< bit:     16  Pin Usage                          */
    uint32_t :3; /*!< bit: 17..19  Reserved                           */
    uint32_t SDAHOLD:2; /*!< bit: 20..21  SDA Hold Time                      */
    uint32_t MEXTTOEN:1; /*!< bit:     22  Master SCL Low Extend Timeout      */
    uint32_t SEXTTOEN:1; /*!< bit:     23  Slave SCL Low Extend Timeout       */
    uint32_t SPEED:2; /*!< bit: 24..25  Transfer Speed                     */
    uint32_t :1; /*!< bit:     26  Reserved                           */
    uint32_t SCLSM:1; /*!< bit:     27  SCL Clock Stretch Mode             */
    uint32_t INACTOUT:2; /*!< bit: 28..29  Inactive Time-Out                  */
    uint32_t LOWTOUTEN:1; /*!< bit:     30  SCL Low Timeout Enable             */
    uint32_t :1; /*!< bit:     31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_CTRLA_Type;
# 127 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_CTRLA : (SERCOM Offset: 0x00) (R/W 32) I2CS I2CS Control A -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint32_t MODE:3; /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2; /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1; /*!< bit:      7  Run during Standby                 */
    uint32_t :8; /*!< bit:  8..15  Reserved                           */
    uint32_t PINOUT:1; /*!< bit:     16  Pin Usage                          */
    uint32_t :3; /*!< bit: 17..19  Reserved                           */
    uint32_t SDAHOLD:2; /*!< bit: 20..21  SDA Hold Time                      */
    uint32_t :1; /*!< bit:     22  Reserved                           */
    uint32_t SEXTTOEN:1; /*!< bit:     23  Slave SCL Low Extend Timeout       */
    uint32_t SPEED:2; /*!< bit: 24..25  Transfer Speed                     */
    uint32_t :1; /*!< bit:     26  Reserved                           */
    uint32_t SCLSM:1; /*!< bit:     27  SCL Clock Stretch Mode             */
    uint32_t :2; /*!< bit: 28..29  Reserved                           */
    uint32_t LOWTOUTEN:1; /*!< bit:     30  SCL Low Timeout Enable             */
    uint32_t :1; /*!< bit:     31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_CTRLA_Type;
# 193 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_CTRLA : (SERCOM Offset: 0x00) (R/W 32) SPI SPI Control A -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint32_t MODE:3; /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2; /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1; /*!< bit:      7  Run during Standby                 */
    uint32_t IBON:1; /*!< bit:      8  Immediate Buffer Overflow Notification */
    uint32_t :7; /*!< bit:  9..15  Reserved                           */
    uint32_t DOPO:2; /*!< bit: 16..17  Data Out Pinout                    */
    uint32_t :2; /*!< bit: 18..19  Reserved                           */
    uint32_t DIPO:2; /*!< bit: 20..21  Data In Pinout                     */
    uint32_t :2; /*!< bit: 22..23  Reserved                           */
    uint32_t FORM:4; /*!< bit: 24..27  Frame Format                       */
    uint32_t CPHA:1; /*!< bit:     28  Clock Phase                        */
    uint32_t CPOL:1; /*!< bit:     29  Clock Polarity                     */
    uint32_t DORD:1; /*!< bit:     30  Data Order                         */
    uint32_t :1; /*!< bit:     31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_CTRLA_Type;
# 261 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_CTRLA : (SERCOM Offset: 0x00) (R/W 32) USART USART Control A -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint32_t MODE:3; /*!< bit:  2.. 4  Operating Mode                     */
    uint32_t :2; /*!< bit:  5.. 6  Reserved                           */
    uint32_t RUNSTDBY:1; /*!< bit:      7  Run during Standby                 */
    uint32_t IBON:1; /*!< bit:      8  Immediate Buffer Overflow Notification */
    uint32_t :4; /*!< bit:  9..12  Reserved                           */
    uint32_t SAMPR:3; /*!< bit: 13..15  Sample                             */
    uint32_t TXPO:2; /*!< bit: 16..17  Transmit Data Pinout               */
    uint32_t :2; /*!< bit: 18..19  Reserved                           */
    uint32_t RXPO:2; /*!< bit: 20..21  Receive Data Pinout                */
    uint32_t SAMPA:2; /*!< bit: 22..23  Sample Adjustment                  */
    uint32_t FORM:4; /*!< bit: 24..27  Frame Format                       */
    uint32_t CMODE:1; /*!< bit:     28  Communication Mode                 */
    uint32_t CPOL:1; /*!< bit:     29  Clock Polarity                     */
    uint32_t DORD:1; /*!< bit:     30  Data Order                         */
    uint32_t :1; /*!< bit:     31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_USART_CTRLA_Type;
# 336 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CM I2CM Control B -------- */

typedef union {
  struct {
    uint32_t :8; /*!< bit:  0.. 7  Reserved                           */
    uint32_t SMEN:1; /*!< bit:      8  Smart Mode Enable                  */
    uint32_t QCEN:1; /*!< bit:      9  Quick Command Enable               */
    uint32_t :6; /*!< bit: 10..15  Reserved                           */
    uint32_t CMD:2; /*!< bit: 16..17  Command                            */
    uint32_t ACKACT:1; /*!< bit:     18  Acknowledge Action                 */
    uint32_t :13; /*!< bit: 19..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_CTRLB_Type;
# 366 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_CTRLB : (SERCOM Offset: 0x04) (R/W 32) I2CS I2CS Control B -------- */

typedef union {
  struct {
    uint32_t :8; /*!< bit:  0.. 7  Reserved                           */
    uint32_t SMEN:1; /*!< bit:      8  Smart Mode Enable                  */
    uint32_t GCMD:1; /*!< bit:      9  PMBus Group Command                */
    uint32_t AACKEN:1; /*!< bit:     10  Automatic Address Acknowledge      */
    uint32_t :3; /*!< bit: 11..13  Reserved                           */
    uint32_t AMODE:2; /*!< bit: 14..15  Address Mode                       */
    uint32_t CMD:2; /*!< bit: 16..17  Command                            */
    uint32_t ACKACT:1; /*!< bit:     18  Acknowledge Action                 */
    uint32_t :13; /*!< bit: 19..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_CTRLB_Type;
# 403 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_CTRLB : (SERCOM Offset: 0x04) (R/W 32) SPI SPI Control B -------- */

typedef union {
  struct {
    uint32_t CHSIZE:3; /*!< bit:  0.. 2  Character Size                     */
    uint32_t :3; /*!< bit:  3.. 5  Reserved                           */
    uint32_t PLOADEN:1; /*!< bit:      6  Data Preload Enable                */
    uint32_t :2; /*!< bit:  7.. 8  Reserved                           */
    uint32_t SSDE:1; /*!< bit:      9  Slave Select Low Detect Enable     */
    uint32_t :3; /*!< bit: 10..12  Reserved                           */
    uint32_t MSSEN:1; /*!< bit:     13  Master Slave Select Enable         */
    uint32_t AMODE:2; /*!< bit: 14..15  Address Mode                       */
    uint32_t :1; /*!< bit:     16  Reserved                           */
    uint32_t RXEN:1; /*!< bit:     17  Receiver Enable                    */
    uint32_t :14; /*!< bit: 18..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_CTRLB_Type;
# 442 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_CTRLB : (SERCOM Offset: 0x04) (R/W 32) USART USART Control B -------- */

typedef union {
  struct {
    uint32_t CHSIZE:3; /*!< bit:  0.. 2  Character Size                     */
    uint32_t :3; /*!< bit:  3.. 5  Reserved                           */
    uint32_t SBMODE:1; /*!< bit:      6  Stop Bit Mode                      */
    uint32_t :1; /*!< bit:      7  Reserved                           */
    uint32_t COLDEN:1; /*!< bit:      8  Collision Detection Enable         */
    uint32_t SFDE:1; /*!< bit:      9  Start of Frame Detection Enable    */
    uint32_t ENC:1; /*!< bit:     10  Encoding Format                    */
    uint32_t :2; /*!< bit: 11..12  Reserved                           */
    uint32_t PMODE:1; /*!< bit:     13  Parity Mode                        */
    uint32_t :2; /*!< bit: 14..15  Reserved                           */
    uint32_t TXEN:1; /*!< bit:     16  Transmitter Enable                 */
    uint32_t RXEN:1; /*!< bit:     17  Receiver Enable                    */
    uint32_t :14; /*!< bit: 18..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_USART_CTRLB_Type;
# 486 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_BAUD : (SERCOM Offset: 0x0C) (R/W 32) I2CM I2CM Baud Rate -------- */

typedef union {
  struct {
    uint32_t BAUD:8; /*!< bit:  0.. 7  Baud Rate Value                    */
    uint32_t BAUDLOW:8; /*!< bit:  8..15  Baud Rate Value Low                */
    uint32_t HSBAUD:8; /*!< bit: 16..23  High Speed Baud Rate Value         */
    uint32_t HSBAUDLOW:8; /*!< bit: 24..31  High Speed Baud Rate Value Low     */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_BAUD_Type;
# 516 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_BAUD : (SERCOM Offset: 0x0C) (R/W  8) SPI SPI Baud Rate -------- */

typedef union {
  struct {
    uint8_t BAUD:8; /*!< bit:  0.. 7  Baud Rate Value                    */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_BAUD_Type;
# 534 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_BAUD : (SERCOM Offset: 0x0C) (R/W 16) USART USART Baud Rate -------- */

typedef union {
  struct {
    uint16_t BAUD:16; /*!< bit:  0..15  Baud Rate Value                    */
  } bit; /*!< Structure used for bit  access                  */
  struct { // FRAC mode
    uint16_t BAUD:13; /*!< bit:  0..12  Baud Rate Value                    */
    uint16_t FP:3; /*!< bit: 13..15  Fractional Part                    */
  } FRAC; /*!< Structure used for FRAC                         */
  struct { // FRACFP mode
    uint16_t BAUD:13; /*!< bit:  0..12  Baud Rate Value                    */
    uint16_t FP:3; /*!< bit: 13..15  Fractional Part                    */
  } FRACFP; /*!< Structure used for FRACFP                       */
  struct { // USARTFP mode
    uint16_t BAUD:16; /*!< bit:  0..15  Baud Rate Value                    */
  } USARTFP; /*!< Structure used for USARTFP                      */
  uint16_t reg; /*!< Type      used for register access              */
} SERCOM_USART_BAUD_Type;
# 563 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
// FRAC mode
# 572 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
// FRACFP mode
# 581 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
// USARTFP mode





/* -------- SERCOM_USART_RXPL : (SERCOM Offset: 0x0E) (R/W  8) USART USART Receive Pulse Length -------- */

typedef union {
  struct {
    uint8_t RXPL:8; /*!< bit:  0.. 7  Receive Pulse Length               */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_USART_RXPL_Type;
# 605 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_INTENCLR : (SERCOM Offset: 0x14) (R/W  8) I2CM I2CM Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t MB:1; /*!< bit:      0  Master On Bus Interrupt Disable    */
    uint8_t SB:1; /*!< bit:      1  Slave On Bus Interrupt Disable     */
    uint8_t :5; /*!< bit:  2.. 6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_INTENCLR_Type;
# 629 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_INTENCLR : (SERCOM Offset: 0x14) (R/W  8) I2CS I2CS Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t PREC:1; /*!< bit:      0  Stop Received Interrupt Disable    */
    uint8_t AMATCH:1; /*!< bit:      1  Address Match Interrupt Disable    */
    uint8_t DRDY:1; /*!< bit:      2  Data Interrupt Disable             */
    uint8_t :4; /*!< bit:  3.. 6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_INTENCLR_Type;
# 656 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_INTENCLR : (SERCOM Offset: 0x14) (R/W  8) SPI SPI Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t DRE:1; /*!< bit:      0  Data Register Empty Interrupt Disable */
    uint8_t TXC:1; /*!< bit:      1  Transmit Complete Interrupt Disable */
    uint8_t RXC:1; /*!< bit:      2  Receive Complete Interrupt Disable */
    uint8_t SSL:1; /*!< bit:      3  Slave Select Low Interrupt Disable */
    uint8_t :3; /*!< bit:  4.. 6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_INTENCLR_Type;
# 686 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_INTENCLR : (SERCOM Offset: 0x14) (R/W  8) USART USART Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t DRE:1; /*!< bit:      0  Data Register Empty Interrupt Disable */
    uint8_t TXC:1; /*!< bit:      1  Transmit Complete Interrupt Disable */
    uint8_t RXC:1; /*!< bit:      2  Receive Complete Interrupt Disable */
    uint8_t RXS:1; /*!< bit:      3  Receive Start Interrupt Disable    */
    uint8_t CTSIC:1; /*!< bit:      4  Clear To Send Input Change Interrupt Disable */
    uint8_t RXBRK:1; /*!< bit:      5  Break Received Interrupt Disable   */
    uint8_t :1; /*!< bit:      6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Disable   */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_USART_INTENCLR_Type;
# 722 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_INTENSET : (SERCOM Offset: 0x16) (R/W  8) I2CM I2CM Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t MB:1; /*!< bit:      0  Master On Bus Interrupt Enable     */
    uint8_t SB:1; /*!< bit:      1  Slave On Bus Interrupt Enable      */
    uint8_t :5; /*!< bit:  2.. 6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_INTENSET_Type;
# 746 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_INTENSET : (SERCOM Offset: 0x16) (R/W  8) I2CS I2CS Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t PREC:1; /*!< bit:      0  Stop Received Interrupt Enable     */
    uint8_t AMATCH:1; /*!< bit:      1  Address Match Interrupt Enable     */
    uint8_t DRDY:1; /*!< bit:      2  Data Interrupt Enable              */
    uint8_t :4; /*!< bit:  3.. 6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_INTENSET_Type;
# 773 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_INTENSET : (SERCOM Offset: 0x16) (R/W  8) SPI SPI Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t DRE:1; /*!< bit:      0  Data Register Empty Interrupt Enable */
    uint8_t TXC:1; /*!< bit:      1  Transmit Complete Interrupt Enable */
    uint8_t RXC:1; /*!< bit:      2  Receive Complete Interrupt Enable  */
    uint8_t SSL:1; /*!< bit:      3  Slave Select Low Interrupt Enable  */
    uint8_t :3; /*!< bit:  4.. 6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_INTENSET_Type;
# 803 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_INTENSET : (SERCOM Offset: 0x16) (R/W  8) USART USART Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t DRE:1; /*!< bit:      0  Data Register Empty Interrupt Enable */
    uint8_t TXC:1; /*!< bit:      1  Transmit Complete Interrupt Enable */
    uint8_t RXC:1; /*!< bit:      2  Receive Complete Interrupt Enable  */
    uint8_t RXS:1; /*!< bit:      3  Receive Start Interrupt Enable     */
    uint8_t CTSIC:1; /*!< bit:      4  Clear To Send Input Change Interrupt Enable */
    uint8_t RXBRK:1; /*!< bit:      5  Break Received Interrupt Enable    */
    uint8_t :1; /*!< bit:      6  Reserved                           */
    uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt Enable    */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_USART_INTENSET_Type;
# 839 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_INTFLAG : (SERCOM Offset: 0x18) (R/W  8) I2CM I2CM Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t MB:1; /*!< bit:      0  Master On Bus Interrupt            */
    volatile /*!< Defines 'read only' permissions */ uint8_t SB:1; /*!< bit:      1  Slave On Bus Interrupt             */
    volatile /*!< Defines 'read only' permissions */ uint8_t :5; /*!< bit:  2.. 6  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_INTFLAG_Type;
# 863 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_INTFLAG : (SERCOM Offset: 0x18) (R/W  8) I2CS I2CS Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t PREC:1; /*!< bit:      0  Stop Received Interrupt            */
    volatile /*!< Defines 'read only' permissions */ uint8_t AMATCH:1; /*!< bit:      1  Address Match Interrupt            */
    volatile /*!< Defines 'read only' permissions */ uint8_t DRDY:1; /*!< bit:      2  Data Interrupt                     */
    volatile /*!< Defines 'read only' permissions */ uint8_t :4; /*!< bit:  3.. 6  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_INTFLAG_Type;
# 890 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_INTFLAG : (SERCOM Offset: 0x18) (R/W  8) SPI SPI Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t DRE:1; /*!< bit:      0  Data Register Empty Interrupt      */
    volatile /*!< Defines 'read only' permissions */ uint8_t TXC:1; /*!< bit:      1  Transmit Complete Interrupt        */
    volatile /*!< Defines 'read only' permissions */ uint8_t RXC:1; /*!< bit:      2  Receive Complete Interrupt         */
    volatile /*!< Defines 'read only' permissions */ uint8_t SSL:1; /*!< bit:      3  Slave Select Low Interrupt Flag    */
    volatile /*!< Defines 'read only' permissions */ uint8_t :3; /*!< bit:  4.. 6  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_INTFLAG_Type;
# 920 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_INTFLAG : (SERCOM Offset: 0x18) (R/W  8) USART USART Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t DRE:1; /*!< bit:      0  Data Register Empty Interrupt      */
    volatile /*!< Defines 'read only' permissions */ uint8_t TXC:1; /*!< bit:      1  Transmit Complete Interrupt        */
    volatile /*!< Defines 'read only' permissions */ uint8_t RXC:1; /*!< bit:      2  Receive Complete Interrupt         */
    volatile /*!< Defines 'read only' permissions */ uint8_t RXS:1; /*!< bit:      3  Receive Start Interrupt            */
    volatile /*!< Defines 'read only' permissions */ uint8_t CTSIC:1; /*!< bit:      4  Clear To Send Input Change Interrupt */
    volatile /*!< Defines 'read only' permissions */ uint8_t RXBRK:1; /*!< bit:      5  Break Received Interrupt           */
    volatile /*!< Defines 'read only' permissions */ uint8_t :1; /*!< bit:      6  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t ERROR:1; /*!< bit:      7  Combined Error Interrupt           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_USART_INTFLAG_Type;
# 956 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CM I2CM Status -------- */

typedef union {
  struct {
    uint16_t BUSERR:1; /*!< bit:      0  Bus Error                          */
    uint16_t ARBLOST:1; /*!< bit:      1  Arbitration Lost                   */
    uint16_t RXNACK:1; /*!< bit:      2  Received Not Acknowledge           */
    uint16_t :1; /*!< bit:      3  Reserved                           */
    uint16_t BUSSTATE:2; /*!< bit:  4.. 5  Bus State                          */
    uint16_t LOWTOUT:1; /*!< bit:      6  SCL Low Timeout                    */
    uint16_t CLKHOLD:1; /*!< bit:      7  Clock Hold                         */
    uint16_t MEXTTOUT:1; /*!< bit:      8  Master SCL Low Extend Timeout      */
    uint16_t SEXTTOUT:1; /*!< bit:      9  Slave SCL Low Extend Timeout       */
    uint16_t LENERR:1; /*!< bit:     10  Length Error                       */
    uint16_t :5; /*!< bit: 11..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_STATUS_Type;
# 1000 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_STATUS : (SERCOM Offset: 0x1A) (R/W 16) I2CS I2CS Status -------- */

typedef union {
  struct {
    uint16_t BUSERR:1; /*!< bit:      0  Bus Error                          */
    uint16_t COLL:1; /*!< bit:      1  Transmit Collision                 */
    uint16_t RXNACK:1; /*!< bit:      2  Received Not Acknowledge           */
    uint16_t DIR:1; /*!< bit:      3  Read/Write Direction               */
    uint16_t SR:1; /*!< bit:      4  Repeated Start                     */
    uint16_t :1; /*!< bit:      5  Reserved                           */
    uint16_t LOWTOUT:1; /*!< bit:      6  SCL Low Timeout                    */
    uint16_t CLKHOLD:1; /*!< bit:      7  Clock Hold                         */
    uint16_t :1; /*!< bit:      8  Reserved                           */
    uint16_t SEXTTOUT:1; /*!< bit:      9  Slave SCL Low Extend Timeout       */
    uint16_t HS:1; /*!< bit:     10  High Speed                         */
    uint16_t :5; /*!< bit: 11..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_STATUS_Type;
# 1044 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_STATUS : (SERCOM Offset: 0x1A) (R/W 16) SPI SPI Status -------- */

typedef union {
  struct {
    uint16_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint16_t BUFOVF:1; /*!< bit:      2  Buffer Overflow                    */
    uint16_t :13; /*!< bit:  3..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_STATUS_Type;
# 1063 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_STATUS : (SERCOM Offset: 0x1A) (R/W 16) USART USART Status -------- */

typedef union {
  struct {
    uint16_t PERR:1; /*!< bit:      0  Parity Error                       */
    uint16_t FERR:1; /*!< bit:      1  Frame Error                        */
    uint16_t BUFOVF:1; /*!< bit:      2  Buffer Overflow                    */
    uint16_t CTS:1; /*!< bit:      3  Clear To Send                      */
    uint16_t ISF:1; /*!< bit:      4  Inconsistent Sync Field            */
    uint16_t COLL:1; /*!< bit:      5  Collision Detected                 */
    uint16_t :10; /*!< bit:  6..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SERCOM_USART_STATUS_Type;
# 1096 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_SYNCBUSY : (SERCOM Offset: 0x1C) (R/  32) I2CM I2CM Syncbusy -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1; /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t SYSOP:1; /*!< bit:      2  System Operation Synchronization Busy */
    uint32_t :29; /*!< bit:  3..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_SYNCBUSY_Type;
# 1120 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_SYNCBUSY : (SERCOM Offset: 0x1C) (R/  32) I2CS I2CS Syncbusy -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1; /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t :30; /*!< bit:  2..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_SYNCBUSY_Type;
# 1141 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_SYNCBUSY : (SERCOM Offset: 0x1C) (R/  32) SPI SPI Syncbusy -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1; /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t CTRLB:1; /*!< bit:      2  CTRLB Synchronization Busy         */
    uint32_t :29; /*!< bit:  3..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_SYNCBUSY_Type;
# 1165 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_SYNCBUSY : (SERCOM Offset: 0x1C) (R/  32) USART USART Syncbusy -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset Synchronization Busy */
    uint32_t ENABLE:1; /*!< bit:      1  SERCOM Enable Synchronization Busy */
    uint32_t CTRLB:1; /*!< bit:      2  CTRLB Synchronization Busy         */
    uint32_t :29; /*!< bit:  3..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_USART_SYNCBUSY_Type;
# 1189 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CM I2CM Address -------- */

typedef union {
  struct {
    uint32_t ADDR:11; /*!< bit:  0..10  Address Value                      */
    uint32_t :2; /*!< bit: 11..12  Reserved                           */
    uint32_t LENEN:1; /*!< bit:     13  Length Enable                      */
    uint32_t HS:1; /*!< bit:     14  High Speed Mode                    */
    uint32_t TENBITEN:1; /*!< bit:     15  Ten Bit Addressing Enable          */
    uint32_t LEN:8; /*!< bit: 16..23  Length                             */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_ADDR_Type;
# 1222 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_ADDR : (SERCOM Offset: 0x24) (R/W 32) I2CS I2CS Address -------- */

typedef union {
  struct {
    uint32_t GENCEN:1; /*!< bit:      0  General Call Address Enable        */
    uint32_t ADDR:10; /*!< bit:  1..10  Address Value                      */
    uint32_t :4; /*!< bit: 11..14  Reserved                           */
    uint32_t TENBITEN:1; /*!< bit:     15  Ten Bit Addressing Enable          */
    uint32_t :1; /*!< bit:     16  Reserved                           */
    uint32_t ADDRMASK:10; /*!< bit: 17..26  Address Mask                       */
    uint32_t :5; /*!< bit: 27..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_ADDR_Type;
# 1253 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_ADDR : (SERCOM Offset: 0x24) (R/W 32) SPI SPI Address -------- */

typedef union {
  struct {
    uint32_t ADDR:8; /*!< bit:  0.. 7  Address Value                      */
    uint32_t :8; /*!< bit:  8..15  Reserved                           */
    uint32_t ADDRMASK:8; /*!< bit: 16..23  Address Mask                       */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_ADDR_Type;
# 1277 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_DATA : (SERCOM Offset: 0x28) (R/W  8) I2CM I2CM Data -------- */

typedef union {
  struct {
    uint8_t DATA:8; /*!< bit:  0.. 7  Data Value                         */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_DATA_Type;
# 1295 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CS_DATA : (SERCOM Offset: 0x28) (R/W  8) I2CS I2CS Data -------- */

typedef union {
  struct {
    uint8_t DATA:8; /*!< bit:  0.. 7  Data Value                         */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CS_DATA_Type;
# 1313 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_DATA : (SERCOM Offset: 0x28) (R/W 32) SPI SPI Data -------- */

typedef union {
  struct {
    uint32_t DATA:9; /*!< bit:  0.. 8  Data Value                         */
    uint32_t :23; /*!< bit:  9..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_DATA_Type;
# 1332 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_DATA : (SERCOM Offset: 0x28) (R/W 16) USART USART Data -------- */

typedef union {
  struct {
    uint16_t DATA:9; /*!< bit:  0.. 8  Data Value                         */
    uint16_t :7; /*!< bit:  9..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SERCOM_USART_DATA_Type;
# 1351 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_I2CM_DBGCTRL : (SERCOM Offset: 0x30) (R/W  8) I2CM I2CM Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGSTOP:1; /*!< bit:      0  Debug Mode                         */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_I2CM_DBGCTRL_Type;
# 1369 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_SPI_DBGCTRL : (SERCOM Offset: 0x30) (R/W  8) SPI SPI Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGSTOP:1; /*!< bit:      0  Debug Mode                         */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_SPI_DBGCTRL_Type;
# 1387 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/* -------- SERCOM_USART_DBGCTRL : (SERCOM Offset: 0x30) (R/W  8) USART USART Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGSTOP:1; /*!< bit:      0  Debug Mode                         */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SERCOM_USART_DBGCTRL_Type;
# 1405 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sercom.h"
/** \brief SERCOM_I2CM hardware registers */

typedef struct { /* I2C Master Mode */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 32) I2CM Control A */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_CTRLB_Type CTRLB; /**< \brief Offset: 0x04 (R/W 32) I2CM Control B */
       RoReg8 Reserved1[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_BAUD_Type BAUD; /**< \brief Offset: 0x0C (R/W 32) I2CM Baud Rate */
       RoReg8 Reserved2[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x14 (R/W  8) I2CM Interrupt Enable Clear */
       RoReg8 Reserved3[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_INTENSET_Type INTENSET; /**< \brief Offset: 0x16 (R/W  8) I2CM Interrupt Enable Set */
       RoReg8 Reserved4[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x18 (R/W  8) I2CM Interrupt Flag Status and Clear */
       RoReg8 Reserved5[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_STATUS_Type STATUS; /**< \brief Offset: 0x1A (R/W 16) I2CM Status */
  volatile /*!< Defines 'read only' permissions */ SERCOM_I2CM_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x1C (R/  32) I2CM Syncbusy */
       RoReg8 Reserved6[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_ADDR_Type ADDR; /**< \brief Offset: 0x24 (R/W 32) I2CM Address */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_DATA_Type DATA; /**< \brief Offset: 0x28 (R/W  8) I2CM Data */
       RoReg8 Reserved7[0x7];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CM_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x30 (R/W  8) I2CM Debug Control */
} SercomI2cm;


/** \brief SERCOM_I2CS hardware registers */

typedef struct { /* I2C Slave Mode */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 32) I2CS Control A */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_CTRLB_Type CTRLB; /**< \brief Offset: 0x04 (R/W 32) I2CS Control B */
       RoReg8 Reserved1[0xC];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x14 (R/W  8) I2CS Interrupt Enable Clear */
       RoReg8 Reserved2[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_INTENSET_Type INTENSET; /**< \brief Offset: 0x16 (R/W  8) I2CS Interrupt Enable Set */
       RoReg8 Reserved3[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x18 (R/W  8) I2CS Interrupt Flag Status and Clear */
       RoReg8 Reserved4[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_STATUS_Type STATUS; /**< \brief Offset: 0x1A (R/W 16) I2CS Status */
  volatile /*!< Defines 'read only' permissions */ SERCOM_I2CS_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x1C (R/  32) I2CS Syncbusy */
       RoReg8 Reserved5[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_ADDR_Type ADDR; /**< \brief Offset: 0x24 (R/W 32) I2CS Address */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_I2CS_DATA_Type DATA; /**< \brief Offset: 0x28 (R/W  8) I2CS Data */
} SercomI2cs;


/** \brief SERCOM_SPI hardware registers */

typedef struct { /* SPI Mode */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 32) SPI Control A */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_CTRLB_Type CTRLB; /**< \brief Offset: 0x04 (R/W 32) SPI Control B */
       RoReg8 Reserved1[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_BAUD_Type BAUD; /**< \brief Offset: 0x0C (R/W  8) SPI Baud Rate */
       RoReg8 Reserved2[0x7];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x14 (R/W  8) SPI Interrupt Enable Clear */
       RoReg8 Reserved3[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_INTENSET_Type INTENSET; /**< \brief Offset: 0x16 (R/W  8) SPI Interrupt Enable Set */
       RoReg8 Reserved4[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x18 (R/W  8) SPI Interrupt Flag Status and Clear */
       RoReg8 Reserved5[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_STATUS_Type STATUS; /**< \brief Offset: 0x1A (R/W 16) SPI Status */
  volatile /*!< Defines 'read only' permissions */ SERCOM_SPI_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x1C (R/  32) SPI Syncbusy */
       RoReg8 Reserved6[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_ADDR_Type ADDR; /**< \brief Offset: 0x24 (R/W 32) SPI Address */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_DATA_Type DATA; /**< \brief Offset: 0x28 (R/W 32) SPI Data */
       RoReg8 Reserved7[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_SPI_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x30 (R/W  8) SPI Debug Control */
} SercomSpi;


/** \brief SERCOM_USART hardware registers */

typedef struct { /* USART Mode */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 32) USART Control A */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_CTRLB_Type CTRLB; /**< \brief Offset: 0x04 (R/W 32) USART Control B */
       RoReg8 Reserved1[0x4];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_BAUD_Type BAUD; /**< \brief Offset: 0x0C (R/W 16) USART Baud Rate */
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_RXPL_Type RXPL; /**< \brief Offset: 0x0E (R/W  8) USART Receive Pulse Length */
       RoReg8 Reserved2[0x5];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x14 (R/W  8) USART Interrupt Enable Clear */
       RoReg8 Reserved3[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_INTENSET_Type INTENSET; /**< \brief Offset: 0x16 (R/W  8) USART Interrupt Enable Set */
       RoReg8 Reserved4[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x18 (R/W  8) USART Interrupt Flag Status and Clear */
       RoReg8 Reserved5[0x1];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_STATUS_Type STATUS; /**< \brief Offset: 0x1A (R/W 16) USART Status */
  volatile /*!< Defines 'read only' permissions */ SERCOM_USART_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x1C (R/  32) USART Syncbusy */
       RoReg8 Reserved6[0x8];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_DATA_Type DATA; /**< \brief Offset: 0x28 (R/W 16) USART Data */
       RoReg8 Reserved7[0x6];
  volatile /*!< Defines 'read / write' permissions */ SERCOM_USART_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x30 (R/W  8) USART Debug Control */
} SercomUsart;



typedef union {
       SercomI2cm I2CM; /**< \brief Offset: 0x00 I2C Master Mode */
       SercomI2cs I2CS; /**< \brief Offset: 0x00 I2C Slave Mode */
       SercomSpi SPI; /**< \brief Offset: 0x00 SPI Mode */
       SercomUsart USART; /**< \brief Offset: 0x00 USART Mode */
} Sercom;


/*@}*/
# 267 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h" 1
/**
 * \file
 *
 * \brief Component description for SYSCTRL
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SYSCTRL */
/* ========================================================================== */
/** \addtogroup SAMD21_SYSCTRL System Control */
/*@{*/




/* -------- SYSCTRL_INTENCLR : (SYSCTRL Offset: 0x00) (R/W 32) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint32_t XOSCRDY:1; /*!< bit:      0  XOSC Ready Interrupt Enable        */
    uint32_t XOSC32KRDY:1; /*!< bit:      1  XOSC32K Ready Interrupt Enable     */
    uint32_t OSC32KRDY:1; /*!< bit:      2  OSC32K Ready Interrupt Enable      */
    uint32_t OSC8MRDY:1; /*!< bit:      3  OSC8M Ready Interrupt Enable       */
    uint32_t DFLLRDY:1; /*!< bit:      4  DFLL Ready Interrupt Enable        */
    uint32_t DFLLOOB:1; /*!< bit:      5  DFLL Out Of Bounds Interrupt Enable */
    uint32_t DFLLLCKF:1; /*!< bit:      6  DFLL Lock Fine Interrupt Enable    */
    uint32_t DFLLLCKC:1; /*!< bit:      7  DFLL Lock Coarse Interrupt Enable  */
    uint32_t DFLLRCS:1; /*!< bit:      8  DFLL Reference Clock Stopped Interrupt Enable */
    uint32_t BOD33RDY:1; /*!< bit:      9  BOD33 Ready Interrupt Enable       */
    uint32_t BOD33DET:1; /*!< bit:     10  BOD33 Detection Interrupt Enable   */
    uint32_t B33SRDY:1; /*!< bit:     11  BOD33 Synchronization Ready Interrupt Enable */
    uint32_t :3; /*!< bit: 12..14  Reserved                           */
    uint32_t DPLLLCKR:1; /*!< bit:     15  DPLL Lock Rise Interrupt Enable    */
    uint32_t DPLLLCKF:1; /*!< bit:     16  DPLL Lock Fall Interrupt Enable    */
    uint32_t DPLLLTO:1; /*!< bit:     17  DPLL Lock Timeout Interrupt Enable */
    uint32_t :14; /*!< bit: 18..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_INTENCLR_Type;
# 117 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_INTENSET : (SYSCTRL Offset: 0x04) (R/W 32) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint32_t XOSCRDY:1; /*!< bit:      0  XOSC Ready Interrupt Enable        */
    uint32_t XOSC32KRDY:1; /*!< bit:      1  XOSC32K Ready Interrupt Enable     */
    uint32_t OSC32KRDY:1; /*!< bit:      2  OSC32K Ready Interrupt Enable      */
    uint32_t OSC8MRDY:1; /*!< bit:      3  OSC8M Ready Interrupt Enable       */
    uint32_t DFLLRDY:1; /*!< bit:      4  DFLL Ready Interrupt Enable        */
    uint32_t DFLLOOB:1; /*!< bit:      5  DFLL Out Of Bounds Interrupt Enable */
    uint32_t DFLLLCKF:1; /*!< bit:      6  DFLL Lock Fine Interrupt Enable    */
    uint32_t DFLLLCKC:1; /*!< bit:      7  DFLL Lock Coarse Interrupt Enable  */
    uint32_t DFLLRCS:1; /*!< bit:      8  DFLL Reference Clock Stopped Interrupt Enable */
    uint32_t BOD33RDY:1; /*!< bit:      9  BOD33 Ready Interrupt Enable       */
    uint32_t BOD33DET:1; /*!< bit:     10  BOD33 Detection Interrupt Enable   */
    uint32_t B33SRDY:1; /*!< bit:     11  BOD33 Synchronization Ready Interrupt Enable */
    uint32_t :3; /*!< bit: 12..14  Reserved                           */
    uint32_t DPLLLCKR:1; /*!< bit:     15  DPLL Lock Rise Interrupt Enable    */
    uint32_t DPLLLCKF:1; /*!< bit:     16  DPLL Lock Fall Interrupt Enable    */
    uint32_t DPLLLTO:1; /*!< bit:     17  DPLL Lock Timeout Interrupt Enable */
    uint32_t :14; /*!< bit: 18..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_INTENSET_Type;
# 178 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_INTFLAG : (SYSCTRL Offset: 0x08) (R/W 32) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint32_t XOSCRDY:1; /*!< bit:      0  XOSC Ready                         */
    volatile /*!< Defines 'read only' permissions */ uint32_t XOSC32KRDY:1; /*!< bit:      1  XOSC32K Ready                      */
    volatile /*!< Defines 'read only' permissions */ uint32_t OSC32KRDY:1; /*!< bit:      2  OSC32K Ready                       */
    volatile /*!< Defines 'read only' permissions */ uint32_t OSC8MRDY:1; /*!< bit:      3  OSC8M Ready                        */
    volatile /*!< Defines 'read only' permissions */ uint32_t DFLLRDY:1; /*!< bit:      4  DFLL Ready                         */
    volatile /*!< Defines 'read only' permissions */ uint32_t DFLLOOB:1; /*!< bit:      5  DFLL Out Of Bounds                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t DFLLLCKF:1; /*!< bit:      6  DFLL Lock Fine                     */
    volatile /*!< Defines 'read only' permissions */ uint32_t DFLLLCKC:1; /*!< bit:      7  DFLL Lock Coarse                   */
    volatile /*!< Defines 'read only' permissions */ uint32_t DFLLRCS:1; /*!< bit:      8  DFLL Reference Clock Stopped       */
    volatile /*!< Defines 'read only' permissions */ uint32_t BOD33RDY:1; /*!< bit:      9  BOD33 Ready                        */
    volatile /*!< Defines 'read only' permissions */ uint32_t BOD33DET:1; /*!< bit:     10  BOD33 Detection                    */
    volatile /*!< Defines 'read only' permissions */ uint32_t B33SRDY:1; /*!< bit:     11  BOD33 Synchronization Ready        */
    volatile /*!< Defines 'read only' permissions */ uint32_t :3; /*!< bit: 12..14  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint32_t DPLLLCKR:1; /*!< bit:     15  DPLL Lock Rise                     */
    volatile /*!< Defines 'read only' permissions */ uint32_t DPLLLCKF:1; /*!< bit:     16  DPLL Lock Fall                     */
    volatile /*!< Defines 'read only' permissions */ uint32_t DPLLLTO:1; /*!< bit:     17  DPLL Lock Timeout                  */
    volatile /*!< Defines 'read only' permissions */ uint32_t :14; /*!< bit: 18..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_INTFLAG_Type;
# 239 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_PCLKSR : (SYSCTRL Offset: 0x0C) (R/  32) Power and Clocks Status -------- */

typedef union {
  struct {
    uint32_t XOSCRDY:1; /*!< bit:      0  XOSC Ready                         */
    uint32_t XOSC32KRDY:1; /*!< bit:      1  XOSC32K Ready                      */
    uint32_t OSC32KRDY:1; /*!< bit:      2  OSC32K Ready                       */
    uint32_t OSC8MRDY:1; /*!< bit:      3  OSC8M Ready                        */
    uint32_t DFLLRDY:1; /*!< bit:      4  DFLL Ready                         */
    uint32_t DFLLOOB:1; /*!< bit:      5  DFLL Out Of Bounds                 */
    uint32_t DFLLLCKF:1; /*!< bit:      6  DFLL Lock Fine                     */
    uint32_t DFLLLCKC:1; /*!< bit:      7  DFLL Lock Coarse                   */
    uint32_t DFLLRCS:1; /*!< bit:      8  DFLL Reference Clock Stopped       */
    uint32_t BOD33RDY:1; /*!< bit:      9  BOD33 Ready                        */
    uint32_t BOD33DET:1; /*!< bit:     10  BOD33 Detection                    */
    uint32_t B33SRDY:1; /*!< bit:     11  BOD33 Synchronization Ready        */
    uint32_t :3; /*!< bit: 12..14  Reserved                           */
    uint32_t DPLLLCKR:1; /*!< bit:     15  DPLL Lock Rise                     */
    uint32_t DPLLLCKF:1; /*!< bit:     16  DPLL Lock Fall                     */
    uint32_t DPLLLTO:1; /*!< bit:     17  DPLL Lock Timeout                  */
    uint32_t :14; /*!< bit: 18..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_PCLKSR_Type;
# 300 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_XOSC : (SYSCTRL Offset: 0x10) (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control -------- */

typedef union {
  struct {
    uint16_t :1; /*!< bit:      0  Reserved                           */
    uint16_t ENABLE:1; /*!< bit:      1  Oscillator Enable                  */
    uint16_t XTALEN:1; /*!< bit:      2  Crystal Oscillator Enable          */
    uint16_t :3; /*!< bit:  3.. 5  Reserved                           */
    uint16_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint16_t ONDEMAND:1; /*!< bit:      7  On Demand Control                  */
    uint16_t GAIN:3; /*!< bit:  8..10  Oscillator Gain                    */
    uint16_t AMPGC:1; /*!< bit:     11  Automatic Amplitude Gain Control   */
    uint16_t STARTUP:4; /*!< bit: 12..15  Start-Up Time                      */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SYSCTRL_XOSC_Type;
# 349 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_XOSC32K : (SYSCTRL Offset: 0x14) (R/W 16) 32kHz External Crystal Oscillator (XOSC32K) Control -------- */

typedef union {
  struct {
    uint16_t :1; /*!< bit:      0  Reserved                           */
    uint16_t ENABLE:1; /*!< bit:      1  Oscillator Enable                  */
    uint16_t XTALEN:1; /*!< bit:      2  Crystal Oscillator Enable          */
    uint16_t EN32K:1; /*!< bit:      3  32kHz Output Enable                */
    uint16_t EN1K:1; /*!< bit:      4  1kHz Output Enable                 */
    uint16_t AAMPEN:1; /*!< bit:      5  Automatic Amplitude Control Enable */
    uint16_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint16_t ONDEMAND:1; /*!< bit:      7  On Demand Control                  */
    uint16_t STARTUP:3; /*!< bit:  8..10  Oscillator Start-Up Time           */
    uint16_t :1; /*!< bit:     11  Reserved                           */
    uint16_t WRTLOCK:1; /*!< bit:     12  Write Lock                         */
    uint16_t :3; /*!< bit: 13..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SYSCTRL_XOSC32K_Type;
# 394 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_OSC32K : (SYSCTRL Offset: 0x18) (R/W 32) 32kHz Internal Oscillator (OSC32K) Control -------- */

typedef union {
  struct {
    uint32_t :1; /*!< bit:      0  Reserved                           */
    uint32_t ENABLE:1; /*!< bit:      1  Oscillator Enable                  */
    uint32_t EN32K:1; /*!< bit:      2  32kHz Output Enable                */
    uint32_t EN1K:1; /*!< bit:      3  1kHz Output Enable                 */
    uint32_t :2; /*!< bit:  4.. 5  Reserved                           */
    uint32_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint32_t ONDEMAND:1; /*!< bit:      7  On Demand Control                  */
    uint32_t STARTUP:3; /*!< bit:  8..10  Oscillator Start-Up Time           */
    uint32_t :1; /*!< bit:     11  Reserved                           */
    uint32_t WRTLOCK:1; /*!< bit:     12  Write Lock                         */
    uint32_t :3; /*!< bit: 13..15  Reserved                           */
    uint32_t CALIB:7; /*!< bit: 16..22  Oscillator Calibration             */
    uint32_t :9; /*!< bit: 23..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_OSC32K_Type;
# 439 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_OSCULP32K : (SYSCTRL Offset: 0x1C) (R/W  8) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control -------- */

typedef union {
  struct {
    uint8_t CALIB:5; /*!< bit:  0.. 4  Oscillator Calibration             */
    uint8_t :2; /*!< bit:  5.. 6  Reserved                           */
    uint8_t WRTLOCK:1; /*!< bit:      7  Write Lock                         */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SYSCTRL_OSCULP32K_Type;
# 461 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_OSC8M : (SYSCTRL Offset: 0x20) (R/W 32) 8MHz Internal Oscillator (OSC8M) Control -------- */

typedef union {
  struct {
    uint32_t :1; /*!< bit:      0  Reserved                           */
    uint32_t ENABLE:1; /*!< bit:      1  Oscillator Enable                  */
    uint32_t :4; /*!< bit:  2.. 5  Reserved                           */
    uint32_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint32_t ONDEMAND:1; /*!< bit:      7  On Demand Control                  */
    uint32_t PRESC:2; /*!< bit:  8.. 9  Oscillator Prescaler               */
    uint32_t :6; /*!< bit: 10..15  Reserved                           */
    uint32_t CALIB:12; /*!< bit: 16..27  Oscillator Calibration             */
    uint32_t :2; /*!< bit: 28..29  Reserved                           */
    uint32_t FRANGE:2; /*!< bit: 30..31  Oscillator Frequency Range         */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_OSC8M_Type;
# 516 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DFLLCTRL : (SYSCTRL Offset: 0x24) (R/W 16) DFLL48M Control -------- */

typedef union {
  struct {
    uint16_t :1; /*!< bit:      0  Reserved                           */
    uint16_t ENABLE:1; /*!< bit:      1  DFLL Enable                        */
    uint16_t MODE:1; /*!< bit:      2  Operating Mode Selection           */
    uint16_t STABLE:1; /*!< bit:      3  Stable DFLL Frequency              */
    uint16_t LLAW:1; /*!< bit:      4  Lose Lock After Wake               */
    uint16_t USBCRM:1; /*!< bit:      5  USB Clock Recovery Mode            */
    uint16_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint16_t ONDEMAND:1; /*!< bit:      7  On Demand Control                  */
    uint16_t CCDIS:1; /*!< bit:      8  Chill Cycle Disable                */
    uint16_t QLDIS:1; /*!< bit:      9  Quick Lock Disable                 */
    uint16_t BPLCKC:1; /*!< bit:     10  Bypass Coarse Lock                 */
    uint16_t WAITLOCK:1; /*!< bit:     11  Wait Lock                          */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SYSCTRL_DFLLCTRL_Type;
# 565 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DFLLVAL : (SYSCTRL Offset: 0x28) (R/W 32) DFLL48M Value -------- */

typedef union {
  struct {
    uint32_t FINE:10; /*!< bit:  0.. 9  Fine Value                         */
    uint32_t COARSE:6; /*!< bit: 10..15  Coarse Value                       */
    uint32_t DIFF:16; /*!< bit: 16..31  Multiplication Ratio Difference    */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_DFLLVAL_Type;
# 591 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DFLLMUL : (SYSCTRL Offset: 0x2C) (R/W 32) DFLL48M Multiplier -------- */

typedef union {
  struct {
    uint32_t MUL:16; /*!< bit:  0..15  DFLL Multiply Factor               */
    uint32_t FSTEP:10; /*!< bit: 16..25  Fine Maximum Step                  */
    uint32_t CSTEP:6; /*!< bit: 26..31  Coarse Maximum Step                */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_DFLLMUL_Type;
# 617 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DFLLSYNC : (SYSCTRL Offset: 0x30) (R/W  8) DFLL48M Synchronization -------- */

typedef union {
  struct {
    uint8_t :7; /*!< bit:  0.. 6  Reserved                           */
    uint8_t READREQ:1; /*!< bit:      7  Read Request                       */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SYSCTRL_DFLLSYNC_Type;
# 635 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_BOD33 : (SYSCTRL Offset: 0x34) (R/W 32) 3.3V Brown-Out Detector (BOD33) Control -------- */

typedef union {
  struct {
    uint32_t :1; /*!< bit:      0  Reserved                           */
    uint32_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint32_t HYST:1; /*!< bit:      2  Hysteresis                         */
    uint32_t ACTION:2; /*!< bit:  3.. 4  BOD33 Action                       */
    uint32_t :1; /*!< bit:      5  Reserved                           */
    uint32_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint32_t :1; /*!< bit:      7  Reserved                           */
    uint32_t MODE:1; /*!< bit:      8  Operation Mode                     */
    uint32_t CEN:1; /*!< bit:      9  Clock Enable                       */
    uint32_t :2; /*!< bit: 10..11  Reserved                           */
    uint32_t PSEL:4; /*!< bit: 12..15  Prescaler Select                   */
    uint32_t LEVEL:6; /*!< bit: 16..21  BOD33 Threshold Level              */
    uint32_t :10; /*!< bit: 22..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_BOD33_Type;
# 719 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_VREG : (SYSCTRL Offset: 0x3C) (R/W 16) Voltage Regulator System (VREG) Control -------- */

typedef union {
  struct {
    uint16_t :6; /*!< bit:  0.. 5  Reserved                           */
    uint16_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint16_t :6; /*!< bit:  7..12  Reserved                           */
    uint16_t FORCELDO:1; /*!< bit:     13  Force LDO Voltage Regulator        */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} SYSCTRL_VREG_Type;
# 742 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_VREF : (SYSCTRL Offset: 0x40) (R/W 32) Voltage References System (VREF) Control -------- */

typedef union {
  struct {
    uint32_t :1; /*!< bit:      0  Reserved                           */
    uint32_t TSEN:1; /*!< bit:      1  Temperature Sensor Enable          */
    uint32_t BGOUTEN:1; /*!< bit:      2  Bandgap Output Enable              */
    uint32_t :13; /*!< bit:  3..15  Reserved                           */
    uint32_t CALIB:11; /*!< bit: 16..26  Bandgap Voltage Generator Calibration */
    uint32_t :5; /*!< bit: 27..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_VREF_Type;
# 769 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DPLLCTRLA : (SYSCTRL Offset: 0x44) (R/W  8) DPLL Control A -------- */

typedef union {
  struct {
    uint8_t :1; /*!< bit:      0  Reserved                           */
    uint8_t ENABLE:1; /*!< bit:      1  DPLL Enable                        */
    uint8_t :4; /*!< bit:  2.. 5  Reserved                           */
    uint8_t RUNSTDBY:1; /*!< bit:      6  Run in Standby                     */
    uint8_t ONDEMAND:1; /*!< bit:      7  On Demand Clock Activation         */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SYSCTRL_DPLLCTRLA_Type;
# 794 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DPLLRATIO : (SYSCTRL Offset: 0x48) (R/W 32) DPLL Ratio Control -------- */

typedef union {
  struct {
    uint32_t LDR:12; /*!< bit:  0..11  Loop Divider Ratio                 */
    uint32_t :4; /*!< bit: 12..15  Reserved                           */
    uint32_t LDRFRAC:4; /*!< bit: 16..19  Loop Divider Ratio Fractional Part */
    uint32_t :12; /*!< bit: 20..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_DPLLRATIO_Type;
# 818 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DPLLCTRLB : (SYSCTRL Offset: 0x4C) (R/W 32) DPLL Control B -------- */

typedef union {
  struct {
    uint32_t FILTER:2; /*!< bit:  0.. 1  Proportional Integral Filter Selection */
    uint32_t LPEN:1; /*!< bit:      2  Low-Power Enable                   */
    uint32_t WUF:1; /*!< bit:      3  Wake Up Fast                       */
    uint32_t REFCLK:2; /*!< bit:  4.. 5  Reference Clock Selection          */
    uint32_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint32_t LTIME:3; /*!< bit:  8..10  Lock Time                          */
    uint32_t :1; /*!< bit:     11  Reserved                           */
    uint32_t LBYPASS:1; /*!< bit:     12  Lock Bypass                        */
    uint32_t :3; /*!< bit: 13..15  Reserved                           */
    uint32_t DIV:11; /*!< bit: 16..26  Clock Divider                      */
    uint32_t :5; /*!< bit: 27..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} SYSCTRL_DPLLCTRLB_Type;
# 885 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/* -------- SYSCTRL_DPLLSTATUS : (SYSCTRL Offset: 0x50) (R/   8) DPLL Status -------- */

typedef union {
  struct {
    uint8_t LOCK:1; /*!< bit:      0  DPLL Lock Status                   */
    uint8_t CLKRDY:1; /*!< bit:      1  Output Clock Ready                 */
    uint8_t ENABLE:1; /*!< bit:      2  DPLL Enable                        */
    uint8_t DIV:1; /*!< bit:      3  Divider Enable                     */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} SYSCTRL_DPLLSTATUS_Type;
# 912 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/sysctrl.h"
/** \brief SYSCTRL hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x00 (R/W 32) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_INTENSET_Type INTENSET; /**< \brief Offset: 0x04 (R/W 32) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x08 (R/W 32) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ SYSCTRL_PCLKSR_Type PCLKSR; /**< \brief Offset: 0x0C (R/  32) Power and Clocks Status */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_XOSC_Type XOSC; /**< \brief Offset: 0x10 (R/W 16) External Multipurpose Crystal Oscillator (XOSC) Control */
       RoReg8 Reserved1[0x2];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_XOSC32K_Type XOSC32K; /**< \brief Offset: 0x14 (R/W 16) 32kHz External Crystal Oscillator (XOSC32K) Control */
       RoReg8 Reserved2[0x2];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_OSC32K_Type OSC32K; /**< \brief Offset: 0x18 (R/W 32) 32kHz Internal Oscillator (OSC32K) Control */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_OSCULP32K_Type OSCULP32K; /**< \brief Offset: 0x1C (R/W  8) 32kHz Ultra Low Power Internal Oscillator (OSCULP32K) Control */
       RoReg8 Reserved3[0x3];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_OSC8M_Type OSC8M; /**< \brief Offset: 0x20 (R/W 32) 8MHz Internal Oscillator (OSC8M) Control */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_DFLLCTRL_Type DFLLCTRL; /**< \brief Offset: 0x24 (R/W 16) DFLL48M Control */
       RoReg8 Reserved4[0x2];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_DFLLVAL_Type DFLLVAL; /**< \brief Offset: 0x28 (R/W 32) DFLL48M Value */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_DFLLMUL_Type DFLLMUL; /**< \brief Offset: 0x2C (R/W 32) DFLL48M Multiplier */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_DFLLSYNC_Type DFLLSYNC; /**< \brief Offset: 0x30 (R/W  8) DFLL48M Synchronization */
       RoReg8 Reserved5[0x3];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_BOD33_Type BOD33; /**< \brief Offset: 0x34 (R/W 32) 3.3V Brown-Out Detector (BOD33) Control */
       RoReg8 Reserved6[0x4];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_VREG_Type VREG; /**< \brief Offset: 0x3C (R/W 16) Voltage Regulator System (VREG) Control */
       RoReg8 Reserved7[0x2];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_VREF_Type VREF; /**< \brief Offset: 0x40 (R/W 32) Voltage References System (VREF) Control */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_DPLLCTRLA_Type DPLLCTRLA; /**< \brief Offset: 0x44 (R/W  8) DPLL Control A */
       RoReg8 Reserved8[0x3];
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_DPLLRATIO_Type DPLLRATIO; /**< \brief Offset: 0x48 (R/W 32) DPLL Ratio Control */
  volatile /*!< Defines 'read / write' permissions */ SYSCTRL_DPLLCTRLB_Type DPLLCTRLB; /**< \brief Offset: 0x4C (R/W 32) DPLL Control B */
  volatile /*!< Defines 'read only' permissions */ SYSCTRL_DPLLSTATUS_Type DPLLSTATUS; /**< \brief Offset: 0x50 (R/   8) DPLL Status */
} Sysctrl;


/*@}*/
# 268 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h" 1
/**
 * \file
 *
 * \brief Component description for TC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TC */
/* ========================================================================== */
/** \addtogroup SAMD21_TC Basic Timer Counter */
/*@{*/




/* -------- TC_CTRLA : (TC Offset: 0x00) (R/W 16) Control A -------- */

typedef union {
  struct {
    uint16_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint16_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint16_t MODE:2; /*!< bit:  2.. 3  TC Mode                            */
    uint16_t :1; /*!< bit:      4  Reserved                           */
    uint16_t WAVEGEN:2; /*!< bit:  5.. 6  Waveform Generation Operation      */
    uint16_t :1; /*!< bit:      7  Reserved                           */
    uint16_t PRESCALER:3; /*!< bit:  8..10  Prescaler                          */
    uint16_t RUNSTDBY:1; /*!< bit:     11  Run in Standby                     */
    uint16_t PRESCSYNC:2; /*!< bit: 12..13  Prescaler and Counter Synchronization */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} TC_CTRLA_Type;
# 134 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_READREQ : (TC Offset: 0x02) (R/W 16) Read Request -------- */

typedef union {
  struct {
    uint16_t ADDR:5; /*!< bit:  0.. 4  Address                            */
    uint16_t :9; /*!< bit:  5..13  Reserved                           */
    uint16_t RCONT:1; /*!< bit:     14  Read Continuously                  */
    uint16_t RREQ:1; /*!< bit:     15  Read Request                       */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} TC_READREQ_Type;
# 159 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_CTRLBCLR : (TC Offset: 0x04) (R/W  8) Control B Clear -------- */

typedef union {
  struct {
    uint8_t DIR:1; /*!< bit:      0  Counter Direction                  */
    uint8_t :1; /*!< bit:      1  Reserved                           */
    uint8_t ONESHOT:1; /*!< bit:      2  One-Shot                           */
    uint8_t :3; /*!< bit:  3.. 5  Reserved                           */
    uint8_t CMD:2; /*!< bit:  6.. 7  Command                            */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_CTRLBCLR_Type;
# 191 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_CTRLBSET : (TC Offset: 0x05) (R/W  8) Control B Set -------- */

typedef union {
  struct {
    uint8_t DIR:1; /*!< bit:      0  Counter Direction                  */
    uint8_t :1; /*!< bit:      1  Reserved                           */
    uint8_t ONESHOT:1; /*!< bit:      2  One-Shot                           */
    uint8_t :3; /*!< bit:  3.. 5  Reserved                           */
    uint8_t CMD:2; /*!< bit:  6.. 7  Command                            */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_CTRLBSET_Type;
# 223 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_CTRLC : (TC Offset: 0x06) (R/W  8) Control C -------- */

typedef union {
  struct {
    uint8_t INVEN0:1; /*!< bit:      0  Output Waveform 0 Invert Enable    */
    uint8_t INVEN1:1; /*!< bit:      1  Output Waveform 1 Invert Enable    */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t CPTEN0:1; /*!< bit:      4  Capture Channel 0 Enable           */
    uint8_t CPTEN1:1; /*!< bit:      5  Capture Channel 1 Enable           */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t INVEN:2; /*!< bit:  0.. 1  Output Waveform x Invert Enable    */
    uint8_t :2; /*!< bit:  2.. 3  Reserved                           */
    uint8_t CPTEN:2; /*!< bit:  4.. 5  Capture Channel x Enable           */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_CTRLC_Type;
# 263 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_DBGCTRL : (TC Offset: 0x08) (R/W  8) Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGRUN:1; /*!< bit:      0  Debug Run Mode                     */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_DBGCTRL_Type;
# 281 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_EVCTRL : (TC Offset: 0x0A) (R/W 16) Event Control -------- */

typedef union {
  struct {
    uint16_t EVACT:3; /*!< bit:  0.. 2  Event Action                       */
    uint16_t :1; /*!< bit:      3  Reserved                           */
    uint16_t TCINV:1; /*!< bit:      4  TC Inverted Event Input            */
    uint16_t TCEI:1; /*!< bit:      5  TC Event Input                     */
    uint16_t :2; /*!< bit:  6.. 7  Reserved                           */
    uint16_t OVFEO:1; /*!< bit:      8  Overflow/Underflow Event Output Enable */
    uint16_t :3; /*!< bit:  9..11  Reserved                           */
    uint16_t MCEO0:1; /*!< bit:     12  Match or Capture Channel 0 Event Output Enable */
    uint16_t MCEO1:1; /*!< bit:     13  Match or Capture Channel 1 Event Output Enable */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t :12; /*!< bit:  0..11  Reserved                           */
    uint16_t MCEO:2; /*!< bit: 12..13  Match or Capture Channel x Event Output Enable */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} TC_EVCTRL_Type;
# 338 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_INTENCLR : (TC Offset: 0x0C) (R/W  8) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t OVF:1; /*!< bit:      0  Overflow Interrupt Enable          */
    uint8_t ERR:1; /*!< bit:      1  Error Interrupt Enable             */
    uint8_t :1; /*!< bit:      2  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      3  Synchronization Ready Interrupt Enable */
    uint8_t MC0:1; /*!< bit:      4  Match or Capture Channel 0 Interrupt Enable */
    uint8_t MC1:1; /*!< bit:      5  Match or Capture Channel 1 Interrupt Enable */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t :4; /*!< bit:  0.. 3  Reserved                           */
    uint8_t MC:2; /*!< bit:  4.. 5  Match or Capture Channel x Interrupt Enable */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_INTENCLR_Type;
# 377 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_INTENSET : (TC Offset: 0x0D) (R/W  8) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t OVF:1; /*!< bit:      0  Overflow Interrupt Enable          */
    uint8_t ERR:1; /*!< bit:      1  Error Interrupt Enable             */
    uint8_t :1; /*!< bit:      2  Reserved                           */
    uint8_t SYNCRDY:1; /*!< bit:      3  Synchronization Ready Interrupt Enable */
    uint8_t MC0:1; /*!< bit:      4  Match or Capture Channel 0 Interrupt Enable */
    uint8_t MC1:1; /*!< bit:      5  Match or Capture Channel 1 Interrupt Enable */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t :4; /*!< bit:  0.. 3  Reserved                           */
    uint8_t MC:2; /*!< bit:  4.. 5  Match or Capture Channel x Interrupt Enable */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_INTENSET_Type;
# 416 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_INTFLAG : (TC Offset: 0x0E) (R/W  8) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t OVF:1; /*!< bit:      0  Overflow                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t ERR:1; /*!< bit:      1  Error                              */
    volatile /*!< Defines 'read only' permissions */ uint8_t :1; /*!< bit:      2  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t SYNCRDY:1; /*!< bit:      3  Synchronization Ready              */
    volatile /*!< Defines 'read only' permissions */ uint8_t MC0:1; /*!< bit:      4  Match or Capture Channel 0         */
    volatile /*!< Defines 'read only' permissions */ uint8_t MC1:1; /*!< bit:      5  Match or Capture Channel 1         */
    volatile /*!< Defines 'read only' permissions */ uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t :4; /*!< bit:  0.. 3  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t MC:2; /*!< bit:  4.. 5  Match or Capture Channel x         */
    volatile /*!< Defines 'read only' permissions */ uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_INTFLAG_Type;
# 455 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_STATUS : (TC Offset: 0x0F) (R/   8) Status -------- */

typedef union {
  struct {
    uint8_t :3; /*!< bit:  0.. 2  Reserved                           */
    uint8_t STOP:1; /*!< bit:      3  Stop                               */
    uint8_t SLAVE:1; /*!< bit:      4  Slave                              */
    uint8_t :2; /*!< bit:  5.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy               */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_STATUS_Type;
# 480 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_COUNT16_COUNT : (TC Offset: 0x10) (R/W 16) COUNT16 COUNT16 Counter Value -------- */

typedef union {
  struct {
    uint16_t COUNT:16; /*!< bit:  0..15  Count Value                        */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} TC_COUNT16_COUNT_Type;
# 498 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_COUNT32_COUNT : (TC Offset: 0x10) (R/W 32) COUNT32 COUNT32 Counter Value -------- */

typedef union {
  struct {
    uint32_t COUNT:32; /*!< bit:  0..31  Count Value                        */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TC_COUNT32_COUNT_Type;
# 516 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_COUNT8_COUNT : (TC Offset: 0x10) (R/W  8) COUNT8 COUNT8 Counter Value -------- */

typedef union {
  struct {
    uint8_t COUNT:8; /*!< bit:  0.. 7  Counter Value                      */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_COUNT8_COUNT_Type;
# 534 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_COUNT8_PER : (TC Offset: 0x14) (R/W  8) COUNT8 COUNT8 Period Value -------- */

typedef union {
  struct {
    uint8_t PER:8; /*!< bit:  0.. 7  Period Value                       */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_COUNT8_PER_Type;
# 552 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_COUNT16_CC : (TC Offset: 0x18) (R/W 16) COUNT16 COUNT16 Compare/Capture -------- */

typedef union {
  struct {
    uint16_t CC:16; /*!< bit:  0..15  Compare/Capture Value              */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} TC_COUNT16_CC_Type;
# 570 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_COUNT32_CC : (TC Offset: 0x18) (R/W 32) COUNT32 COUNT32 Compare/Capture -------- */

typedef union {
  struct {
    uint32_t CC:32; /*!< bit:  0..31  Compare/Capture Value              */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TC_COUNT32_CC_Type;
# 588 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/* -------- TC_COUNT8_CC : (TC Offset: 0x18) (R/W  8) COUNT8 COUNT8 Compare/Capture -------- */

typedef union {
  struct {
    uint8_t CC:8; /*!< bit:  0.. 7  Compare/Capture Value              */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TC_COUNT8_CC_Type;
# 606 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tc.h"
/** \brief TC_COUNT8 hardware registers */

typedef struct { /* 8-bit Counter Mode */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 16) Control A */
  volatile /*!< Defines 'read / write' permissions */ TC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLC_Type CTRLC; /**< \brief Offset: 0x06 (R/W  8) Control C */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ TC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x08 (R/W  8) Debug Control */
       RoReg8 Reserved2[0x1];
  volatile /*!< Defines 'read / write' permissions */ TC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x0A (R/W 16) Event Control */
  volatile /*!< Defines 'read / write' permissions */ TC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ TC_INTENSET_Type INTENSET; /**< \brief Offset: 0x0D (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ TC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x0E (R/W  8) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ TC_STATUS_Type STATUS; /**< \brief Offset: 0x0F (R/   8) Status */
  volatile /*!< Defines 'read / write' permissions */ TC_COUNT8_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W  8) COUNT8 Counter Value */
       RoReg8 Reserved3[0x3];
  volatile /*!< Defines 'read / write' permissions */ TC_COUNT8_PER_Type PER; /**< \brief Offset: 0x14 (R/W  8) COUNT8 Period Value */
       RoReg8 Reserved4[0x3];
  volatile /*!< Defines 'read / write' permissions */ TC_COUNT8_CC_Type CC[2]; /**< \brief Offset: 0x18 (R/W  8) COUNT8 Compare/Capture */
} TcCount8;


/** \brief TC_COUNT16 hardware registers */

typedef struct { /* 16-bit Counter Mode */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 16) Control A */
  volatile /*!< Defines 'read / write' permissions */ TC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLC_Type CTRLC; /**< \brief Offset: 0x06 (R/W  8) Control C */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ TC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x08 (R/W  8) Debug Control */
       RoReg8 Reserved2[0x1];
  volatile /*!< Defines 'read / write' permissions */ TC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x0A (R/W 16) Event Control */
  volatile /*!< Defines 'read / write' permissions */ TC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ TC_INTENSET_Type INTENSET; /**< \brief Offset: 0x0D (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ TC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x0E (R/W  8) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ TC_STATUS_Type STATUS; /**< \brief Offset: 0x0F (R/   8) Status */
  volatile /*!< Defines 'read / write' permissions */ TC_COUNT16_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W 16) COUNT16 Counter Value */
       RoReg8 Reserved3[0x6];
  volatile /*!< Defines 'read / write' permissions */ TC_COUNT16_CC_Type CC[2]; /**< \brief Offset: 0x18 (R/W 16) COUNT16 Compare/Capture */
} TcCount16;


/** \brief TC_COUNT32 hardware registers */

typedef struct { /* 32-bit Counter Mode */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 16) Control A */
  volatile /*!< Defines 'read / write' permissions */ TC_READREQ_Type READREQ; /**< \brief Offset: 0x02 (R/W 16) Read Request */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W  8) Control B Set */
  volatile /*!< Defines 'read / write' permissions */ TC_CTRLC_Type CTRLC; /**< \brief Offset: 0x06 (R/W  8) Control C */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ TC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x08 (R/W  8) Debug Control */
       RoReg8 Reserved2[0x1];
  volatile /*!< Defines 'read / write' permissions */ TC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x0A (R/W 16) Event Control */
  volatile /*!< Defines 'read / write' permissions */ TC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x0C (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ TC_INTENSET_Type INTENSET; /**< \brief Offset: 0x0D (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ TC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x0E (R/W  8) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ TC_STATUS_Type STATUS; /**< \brief Offset: 0x0F (R/   8) Status */
  volatile /*!< Defines 'read / write' permissions */ TC_COUNT32_COUNT_Type COUNT; /**< \brief Offset: 0x10 (R/W 32) COUNT32 Counter Value */
       RoReg8 Reserved3[0x4];
  volatile /*!< Defines 'read / write' permissions */ TC_COUNT32_CC_Type CC[2]; /**< \brief Offset: 0x18 (R/W 32) COUNT32 Compare/Capture */
} TcCount32;



typedef union {
       TcCount8 COUNT8; /**< \brief Offset: 0x00 8-bit Counter Mode */
       TcCount16 COUNT16; /**< \brief Offset: 0x00 16-bit Counter Mode */
       TcCount32 COUNT32; /**< \brief Offset: 0x00 32-bit Counter Mode */
} Tc;


/*@}*/
# 269 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h" 1
/**
 * \file
 *
 * \brief Component description for TCC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TCC */
/* ========================================================================== */
/** \addtogroup SAMD21_TCC Timer Counter Control */
/*@{*/




/* -------- TCC_CTRLA : (TCC Offset: 0x00) (R/W 32) Control A -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint32_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint32_t :3; /*!< bit:  2.. 4  Reserved                           */
    uint32_t RESOLUTION:2; /*!< bit:  5.. 6  Enhanced Resolution                */
    uint32_t :1; /*!< bit:      7  Reserved                           */
    uint32_t PRESCALER:3; /*!< bit:  8..10  Prescaler                          */
    uint32_t RUNSTDBY:1; /*!< bit:     11  Run in Standby                     */
    uint32_t PRESCSYNC:2; /*!< bit: 12..13  Prescaler and Counter Synchronization Selection */
    uint32_t ALOCK:1; /*!< bit:     14  Auto Lock                          */
    uint32_t :9; /*!< bit: 15..23  Reserved                           */
    uint32_t CPTEN0:1; /*!< bit:     24  Capture Channel 0 Enable           */
    uint32_t CPTEN1:1; /*!< bit:     25  Capture Channel 1 Enable           */
    uint32_t CPTEN2:1; /*!< bit:     26  Capture Channel 2 Enable           */
    uint32_t CPTEN3:1; /*!< bit:     27  Capture Channel 3 Enable           */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :24; /*!< bit:  0..23  Reserved                           */
    uint32_t CPTEN:4; /*!< bit: 24..27  Capture Channel x Enable           */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_CTRLA_Type;
# 148 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_CTRLBCLR : (TCC Offset: 0x04) (R/W  8) Control B Clear -------- */

typedef union {
  struct {
    uint8_t DIR:1; /*!< bit:      0  Counter Direction                  */
    uint8_t LUPD:1; /*!< bit:      1  Lock Update                        */
    uint8_t ONESHOT:1; /*!< bit:      2  One-Shot                           */
    uint8_t IDXCMD:2; /*!< bit:  3.. 4  Ramp Index Command                 */
    uint8_t CMD:3; /*!< bit:  5.. 7  TCC Command                        */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TCC_CTRLBCLR_Type;
# 197 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_CTRLBSET : (TCC Offset: 0x05) (R/W  8) Control B Set -------- */

typedef union {
  struct {
    uint8_t DIR:1; /*!< bit:      0  Counter Direction                  */
    uint8_t LUPD:1; /*!< bit:      1  Lock Update                        */
    uint8_t ONESHOT:1; /*!< bit:      2  One-Shot                           */
    uint8_t IDXCMD:2; /*!< bit:  3.. 4  Ramp Index Command                 */
    uint8_t CMD:3; /*!< bit:  5.. 7  TCC Command                        */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TCC_CTRLBSET_Type;
# 246 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_SYNCBUSY : (TCC Offset: 0x08) (R/  32) Synchronization Busy -------- */

typedef union {
  struct {
    uint32_t SWRST:1; /*!< bit:      0  Swrst Busy                         */
    uint32_t ENABLE:1; /*!< bit:      1  Enable Busy                        */
    uint32_t CTRLB:1; /*!< bit:      2  Ctrlb Busy                         */
    uint32_t STATUS:1; /*!< bit:      3  Status Busy                        */
    uint32_t COUNT:1; /*!< bit:      4  Count Busy                         */
    uint32_t PATT:1; /*!< bit:      5  Pattern Busy                       */
    uint32_t WAVE:1; /*!< bit:      6  Wave Busy                          */
    uint32_t PER:1; /*!< bit:      7  Period busy                        */
    uint32_t CC0:1; /*!< bit:      8  Compare Channel 0 Busy             */
    uint32_t CC1:1; /*!< bit:      9  Compare Channel 1 Busy             */
    uint32_t CC2:1; /*!< bit:     10  Compare Channel 2 Busy             */
    uint32_t CC3:1; /*!< bit:     11  Compare Channel 3 Busy             */
    uint32_t :4; /*!< bit: 12..15  Reserved                           */
    uint32_t PATTB:1; /*!< bit:     16  Pattern Buffer Busy                */
    uint32_t WAVEB:1; /*!< bit:     17  Wave Buffer Busy                   */
    uint32_t PERB:1; /*!< bit:     18  Period Buffer Busy                 */
    uint32_t CCB0:1; /*!< bit:     19  Compare Channel Buffer 0 Busy      */
    uint32_t CCB1:1; /*!< bit:     20  Compare Channel Buffer 1 Busy      */
    uint32_t CCB2:1; /*!< bit:     21  Compare Channel Buffer 2 Busy      */
    uint32_t CCB3:1; /*!< bit:     22  Compare Channel Buffer 3 Busy      */
    uint32_t :9; /*!< bit: 23..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :8; /*!< bit:  0.. 7  Reserved                           */
    uint32_t CC:4; /*!< bit:  8..11  Compare Channel x Busy             */
    uint32_t :7; /*!< bit: 12..18  Reserved                           */
    uint32_t CCB:4; /*!< bit: 19..22  Compare Channel Buffer x Busy      */
    uint32_t :9; /*!< bit: 23..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_SYNCBUSY_Type;
# 332 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_FCTRLA : (TCC Offset: 0x0C) (R/W 32) Recoverable Fault A Configuration -------- */

typedef union {
  struct {
    uint32_t SRC:2; /*!< bit:  0.. 1  Fault A Source                     */
    uint32_t :1; /*!< bit:      2  Reserved                           */
    uint32_t KEEP:1; /*!< bit:      3  Fault A Keeper                     */
    uint32_t QUAL:1; /*!< bit:      4  Fault A Qualification              */
    uint32_t BLANK:2; /*!< bit:  5.. 6  Fault A Blanking Mode              */
    uint32_t RESTART:1; /*!< bit:      7  Fault A Restart                    */
    uint32_t HALT:2; /*!< bit:  8.. 9  Fault A Halt Mode                  */
    uint32_t CHSEL:2; /*!< bit: 10..11  Fault A Capture Channel            */
    uint32_t CAPTURE:3; /*!< bit: 12..14  Fault A Capture Action             */
    uint32_t :1; /*!< bit:     15  Reserved                           */
    uint32_t BLANKVAL:8; /*!< bit: 16..23  Fault A Blanking Time              */
    uint32_t FILTERVAL:4; /*!< bit: 24..27  Fault A Filter Value               */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_FCTRLA_Type;
# 432 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_FCTRLB : (TCC Offset: 0x10) (R/W 32) Recoverable Fault B Configuration -------- */

typedef union {
  struct {
    uint32_t SRC:2; /*!< bit:  0.. 1  Fault B Source                     */
    uint32_t :1; /*!< bit:      2  Reserved                           */
    uint32_t KEEP:1; /*!< bit:      3  Fault B Keeper                     */
    uint32_t QUAL:1; /*!< bit:      4  Fault B Qualification              */
    uint32_t BLANK:2; /*!< bit:  5.. 6  Fault B Blanking Mode              */
    uint32_t RESTART:1; /*!< bit:      7  Fault B Restart                    */
    uint32_t HALT:2; /*!< bit:  8.. 9  Fault B Halt Mode                  */
    uint32_t CHSEL:2; /*!< bit: 10..11  Fault B Capture Channel            */
    uint32_t CAPTURE:3; /*!< bit: 12..14  Fault B Capture Action             */
    uint32_t :1; /*!< bit:     15  Reserved                           */
    uint32_t BLANKVAL:8; /*!< bit: 16..23  Fault B Blanking Time              */
    uint32_t FILTERVAL:4; /*!< bit: 24..27  Fault B Filter Value               */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_FCTRLB_Type;
# 532 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_WEXCTRL : (TCC Offset: 0x14) (R/W 32) Waveform Extension Configuration -------- */

typedef union {
  struct {
    uint32_t OTMX:2; /*!< bit:  0.. 1  Output Matrix                      */
    uint32_t :6; /*!< bit:  2.. 7  Reserved                           */
    uint32_t DTIEN0:1; /*!< bit:      8  Dead-time Insertion Generator 0 Enable */
    uint32_t DTIEN1:1; /*!< bit:      9  Dead-time Insertion Generator 1 Enable */
    uint32_t DTIEN2:1; /*!< bit:     10  Dead-time Insertion Generator 2 Enable */
    uint32_t DTIEN3:1; /*!< bit:     11  Dead-time Insertion Generator 3 Enable */
    uint32_t :4; /*!< bit: 12..15  Reserved                           */
    uint32_t DTLS:8; /*!< bit: 16..23  Dead-time Low Side Outputs Value   */
    uint32_t DTHS:8; /*!< bit: 24..31  Dead-time High Side Outputs Value  */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :8; /*!< bit:  0.. 7  Reserved                           */
    uint32_t DTIEN:4; /*!< bit:  8..11  Dead-time Insertion Generator x Enable */
    uint32_t :20; /*!< bit: 12..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_WEXCTRL_Type;
# 580 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_DRVCTRL : (TCC Offset: 0x18) (R/W 32) Driver Control -------- */

typedef union {
  struct {
    uint32_t NRE0:1; /*!< bit:      0  Non-Recoverable State 0 Output Enable */
    uint32_t NRE1:1; /*!< bit:      1  Non-Recoverable State 1 Output Enable */
    uint32_t NRE2:1; /*!< bit:      2  Non-Recoverable State 2 Output Enable */
    uint32_t NRE3:1; /*!< bit:      3  Non-Recoverable State 3 Output Enable */
    uint32_t NRE4:1; /*!< bit:      4  Non-Recoverable State 4 Output Enable */
    uint32_t NRE5:1; /*!< bit:      5  Non-Recoverable State 5 Output Enable */
    uint32_t NRE6:1; /*!< bit:      6  Non-Recoverable State 6 Output Enable */
    uint32_t NRE7:1; /*!< bit:      7  Non-Recoverable State 7 Output Enable */
    uint32_t NRV0:1; /*!< bit:      8  Non-Recoverable State 0 Output Value */
    uint32_t NRV1:1; /*!< bit:      9  Non-Recoverable State 1 Output Value */
    uint32_t NRV2:1; /*!< bit:     10  Non-Recoverable State 2 Output Value */
    uint32_t NRV3:1; /*!< bit:     11  Non-Recoverable State 3 Output Value */
    uint32_t NRV4:1; /*!< bit:     12  Non-Recoverable State 4 Output Value */
    uint32_t NRV5:1; /*!< bit:     13  Non-Recoverable State 5 Output Value */
    uint32_t NRV6:1; /*!< bit:     14  Non-Recoverable State 6 Output Value */
    uint32_t NRV7:1; /*!< bit:     15  Non-Recoverable State 7 Output Value */
    uint32_t INVEN0:1; /*!< bit:     16  Output Waveform 0 Inversion        */
    uint32_t INVEN1:1; /*!< bit:     17  Output Waveform 1 Inversion        */
    uint32_t INVEN2:1; /*!< bit:     18  Output Waveform 2 Inversion        */
    uint32_t INVEN3:1; /*!< bit:     19  Output Waveform 3 Inversion        */
    uint32_t INVEN4:1; /*!< bit:     20  Output Waveform 4 Inversion        */
    uint32_t INVEN5:1; /*!< bit:     21  Output Waveform 5 Inversion        */
    uint32_t INVEN6:1; /*!< bit:     22  Output Waveform 6 Inversion        */
    uint32_t INVEN7:1; /*!< bit:     23  Output Waveform 7 Inversion        */
    uint32_t FILTERVAL0:4; /*!< bit: 24..27  Non-Recoverable Fault Input 0 Filter Value */
    uint32_t FILTERVAL1:4; /*!< bit: 28..31  Non-Recoverable Fault Input 1 Filter Value */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t NRE:8; /*!< bit:  0.. 7  Non-Recoverable State x Output Enable */
    uint32_t NRV:8; /*!< bit:  8..15  Non-Recoverable State x Output Value */
    uint32_t INVEN:8; /*!< bit: 16..23  Output Waveform x Inversion        */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_DRVCTRL_Type;
# 689 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_DBGCTRL : (TCC Offset: 0x1E) (R/W  8) Debug Control -------- */

typedef union {
  struct {
    uint8_t DBGRUN:1; /*!< bit:      0  Debug Running Mode                 */
    uint8_t :1; /*!< bit:      1  Reserved                           */
    uint8_t FDDBD:1; /*!< bit:      2  Fault Detection on Debug Break Detection */
    uint8_t :5; /*!< bit:  3.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} TCC_DBGCTRL_Type;
# 711 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_EVCTRL : (TCC Offset: 0x20) (R/W 32) Event Control -------- */

typedef union {
  struct {
    uint32_t EVACT0:3; /*!< bit:  0.. 2  Timer/counter Input Event0 Action  */
    uint32_t EVACT1:3; /*!< bit:  3.. 5  Timer/counter Input Event1 Action  */
    uint32_t CNTSEL:2; /*!< bit:  6.. 7  Timer/counter Output Event Mode    */
    uint32_t OVFEO:1; /*!< bit:      8  Overflow/Underflow Output Event Enable */
    uint32_t TRGEO:1; /*!< bit:      9  Retrigger Output Event Enable      */
    uint32_t CNTEO:1; /*!< bit:     10  Timer/counter Output Event Enable  */
    uint32_t :1; /*!< bit:     11  Reserved                           */
    uint32_t TCINV0:1; /*!< bit:     12  Inverted Event 0 Input Enable      */
    uint32_t TCINV1:1; /*!< bit:     13  Inverted Event 1 Input Enable      */
    uint32_t TCEI0:1; /*!< bit:     14  Timer/counter Event 0 Input Enable */
    uint32_t TCEI1:1; /*!< bit:     15  Timer/counter Event 1 Input Enable */
    uint32_t MCEI0:1; /*!< bit:     16  Match or Capture Channel 0 Event Input Enable */
    uint32_t MCEI1:1; /*!< bit:     17  Match or Capture Channel 1 Event Input Enable */
    uint32_t MCEI2:1; /*!< bit:     18  Match or Capture Channel 2 Event Input Enable */
    uint32_t MCEI3:1; /*!< bit:     19  Match or Capture Channel 3 Event Input Enable */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t MCEO0:1; /*!< bit:     24  Match or Capture Channel 0 Event Output Enable */
    uint32_t MCEO1:1; /*!< bit:     25  Match or Capture Channel 1 Event Output Enable */
    uint32_t MCEO2:1; /*!< bit:     26  Match or Capture Channel 2 Event Output Enable */
    uint32_t MCEO3:1; /*!< bit:     27  Match or Capture Channel 3 Event Output Enable */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :12; /*!< bit:  0..11  Reserved                           */
    uint32_t TCINV:2; /*!< bit: 12..13  Inverted Event x Input Enable      */
    uint32_t TCEI:2; /*!< bit: 14..15  Timer/counter Event x Input Enable */
    uint32_t MCEI:4; /*!< bit: 16..19  Match or Capture Channel x Event Input Enable */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t MCEO:4; /*!< bit: 24..27  Match or Capture Channel x Event Output Enable */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_EVCTRL_Type;
# 844 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_INTENCLR : (TCC Offset: 0x24) (R/W 32) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint32_t OVF:1; /*!< bit:      0  Overflow Interrupt Enable          */
    uint32_t TRG:1; /*!< bit:      1  Retrigger Interrupt Enable         */
    uint32_t CNT:1; /*!< bit:      2  Counter Interrupt Enable           */
    uint32_t ERR:1; /*!< bit:      3  Error Interrupt Enable             */
    uint32_t :7; /*!< bit:  4..10  Reserved                           */
    uint32_t DFS:1; /*!< bit:     11  Non-Recoverable Debug Fault Interrupt Enable */
    uint32_t FAULTA:1; /*!< bit:     12  Recoverable Fault A Interrupt Enable */
    uint32_t FAULTB:1; /*!< bit:     13  Recoverable Fault B Interrupt Enable */
    uint32_t FAULT0:1; /*!< bit:     14  Non-Recoverable Fault 0 Interrupt Enable */
    uint32_t FAULT1:1; /*!< bit:     15  Non-Recoverable Fault 1 Interrupt Enable */
    uint32_t MC0:1; /*!< bit:     16  Match or Capture Channel 0 Interrupt Enable */
    uint32_t MC1:1; /*!< bit:     17  Match or Capture Channel 1 Interrupt Enable */
    uint32_t MC2:1; /*!< bit:     18  Match or Capture Channel 2 Interrupt Enable */
    uint32_t MC3:1; /*!< bit:     19  Match or Capture Channel 3 Interrupt Enable */
    uint32_t :12; /*!< bit: 20..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :16; /*!< bit:  0..15  Reserved                           */
    uint32_t MC:4; /*!< bit: 16..19  Match or Capture Channel x Interrupt Enable */
    uint32_t :12; /*!< bit: 20..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_INTENCLR_Type;
# 907 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_INTENSET : (TCC Offset: 0x28) (R/W 32) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint32_t OVF:1; /*!< bit:      0  Overflow Interrupt Enable          */
    uint32_t TRG:1; /*!< bit:      1  Retrigger Interrupt Enable         */
    uint32_t CNT:1; /*!< bit:      2  Counter Interrupt Enable           */
    uint32_t ERR:1; /*!< bit:      3  Error Interrupt Enable             */
    uint32_t :7; /*!< bit:  4..10  Reserved                           */
    uint32_t DFS:1; /*!< bit:     11  Non-Recoverable Debug Fault Interrupt Enable */
    uint32_t FAULTA:1; /*!< bit:     12  Recoverable Fault A Interrupt Enable */
    uint32_t FAULTB:1; /*!< bit:     13  Recoverable Fault B Interrupt Enable */
    uint32_t FAULT0:1; /*!< bit:     14  Non-Recoverable Fault 0 Interrupt Enable */
    uint32_t FAULT1:1; /*!< bit:     15  Non-Recoverable Fault 1 Interrupt Enable */
    uint32_t MC0:1; /*!< bit:     16  Match or Capture Channel 0 Interrupt Enable */
    uint32_t MC1:1; /*!< bit:     17  Match or Capture Channel 1 Interrupt Enable */
    uint32_t MC2:1; /*!< bit:     18  Match or Capture Channel 2 Interrupt Enable */
    uint32_t MC3:1; /*!< bit:     19  Match or Capture Channel 3 Interrupt Enable */
    uint32_t :12; /*!< bit: 20..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :16; /*!< bit:  0..15  Reserved                           */
    uint32_t MC:4; /*!< bit: 16..19  Match or Capture Channel x Interrupt Enable */
    uint32_t :12; /*!< bit: 20..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_INTENSET_Type;
# 970 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_INTFLAG : (TCC Offset: 0x2C) (R/W 32) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint32_t OVF:1; /*!< bit:      0  Overflow                           */
    volatile /*!< Defines 'read only' permissions */ uint32_t TRG:1; /*!< bit:      1  Retrigger                          */
    volatile /*!< Defines 'read only' permissions */ uint32_t CNT:1; /*!< bit:      2  Counter                            */
    volatile /*!< Defines 'read only' permissions */ uint32_t ERR:1; /*!< bit:      3  Error                              */
    volatile /*!< Defines 'read only' permissions */ uint32_t :7; /*!< bit:  4..10  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint32_t DFS:1; /*!< bit:     11  Non-Recoverable Debug Fault        */
    volatile /*!< Defines 'read only' permissions */ uint32_t FAULTA:1; /*!< bit:     12  Recoverable Fault A                */
    volatile /*!< Defines 'read only' permissions */ uint32_t FAULTB:1; /*!< bit:     13  Recoverable Fault B                */
    volatile /*!< Defines 'read only' permissions */ uint32_t FAULT0:1; /*!< bit:     14  Non-Recoverable Fault 0            */
    volatile /*!< Defines 'read only' permissions */ uint32_t FAULT1:1; /*!< bit:     15  Non-Recoverable Fault 1            */
    volatile /*!< Defines 'read only' permissions */ uint32_t MC0:1; /*!< bit:     16  Match or Capture 0                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t MC1:1; /*!< bit:     17  Match or Capture 1                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t MC2:1; /*!< bit:     18  Match or Capture 2                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t MC3:1; /*!< bit:     19  Match or Capture 3                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t :12; /*!< bit: 20..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint32_t :16; /*!< bit:  0..15  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint32_t MC:4; /*!< bit: 16..19  Match or Capture x                 */
    volatile /*!< Defines 'read only' permissions */ uint32_t :12; /*!< bit: 20..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_INTFLAG_Type;
# 1033 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_STATUS : (TCC Offset: 0x30) (R/W 32) Status -------- */

typedef union {
  struct {
    uint32_t STOP:1; /*!< bit:      0  Stop                               */
    uint32_t IDX:1; /*!< bit:      1  Ramp                               */
    uint32_t :1; /*!< bit:      2  Reserved                           */
    uint32_t DFS:1; /*!< bit:      3  Non-Recoverable Debug Fault State  */
    uint32_t SLAVE:1; /*!< bit:      4  Slave                              */
    uint32_t PATTBV:1; /*!< bit:      5  Pattern Buffer Valid               */
    uint32_t WAVEBV:1; /*!< bit:      6  Wave Buffer Valid                  */
    uint32_t PERBV:1; /*!< bit:      7  Period Buffer Valid                */
    uint32_t FAULTAIN:1; /*!< bit:      8  Recoverable Fault A Input          */
    uint32_t FAULTBIN:1; /*!< bit:      9  Recoverable Fault B Input          */
    uint32_t FAULT0IN:1; /*!< bit:     10  Non-Recoverable Fault0 Input       */
    uint32_t FAULT1IN:1; /*!< bit:     11  Non-Recoverable Fault1 Input       */
    uint32_t FAULTA:1; /*!< bit:     12  Recoverable Fault A State          */
    uint32_t FAULTB:1; /*!< bit:     13  Recoverable Fault B State          */
    uint32_t FAULT0:1; /*!< bit:     14  Non-Recoverable Fault 0 State      */
    uint32_t FAULT1:1; /*!< bit:     15  Non-Recoverable Fault 1 State      */
    uint32_t CCBV0:1; /*!< bit:     16  Compare Channel 0 Buffer Valid     */
    uint32_t CCBV1:1; /*!< bit:     17  Compare Channel 1 Buffer Valid     */
    uint32_t CCBV2:1; /*!< bit:     18  Compare Channel 2 Buffer Valid     */
    uint32_t CCBV3:1; /*!< bit:     19  Compare Channel 3 Buffer Valid     */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t CMP0:1; /*!< bit:     24  Compare Channel 0 Value            */
    uint32_t CMP1:1; /*!< bit:     25  Compare Channel 1 Value            */
    uint32_t CMP2:1; /*!< bit:     26  Compare Channel 2 Value            */
    uint32_t CMP3:1; /*!< bit:     27  Compare Channel 3 Value            */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :16; /*!< bit:  0..15  Reserved                           */
    uint32_t CCBV:4; /*!< bit: 16..19  Compare Channel x Buffer Valid     */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t CMP:4; /*!< bit: 24..27  Compare Channel x Value            */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_STATUS_Type;
# 1132 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_COUNT : (TCC Offset: 0x34) (R/W 32) Count -------- */

typedef union {
  struct { // DITH4 mode
    uint32_t :4; /*!< bit:  0.. 3  Reserved                           */
    uint32_t COUNT:20; /*!< bit:  4..23  Counter Value                      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH4; /*!< Structure used for DITH4                        */
  struct { // DITH5 mode
    uint32_t :5; /*!< bit:  0.. 4  Reserved                           */
    uint32_t COUNT:19; /*!< bit:  5..23  Counter Value                      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH5; /*!< Structure used for DITH5                        */
  struct { // DITH6 mode
    uint32_t :6; /*!< bit:  0.. 5  Reserved                           */
    uint32_t COUNT:18; /*!< bit:  6..23  Counter Value                      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH6; /*!< Structure used for DITH6                        */
  struct {
    uint32_t COUNT:24; /*!< bit:  0..23  Counter Value                      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_COUNT_Type;





// DITH4 mode





// DITH5 mode





// DITH6 mode
# 1184 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_PATT : (TCC Offset: 0x38) (R/W 16) Pattern -------- */

typedef union {
  struct {
    uint16_t PGE0:1; /*!< bit:      0  Pattern Generator 0 Output Enable  */
    uint16_t PGE1:1; /*!< bit:      1  Pattern Generator 1 Output Enable  */
    uint16_t PGE2:1; /*!< bit:      2  Pattern Generator 2 Output Enable  */
    uint16_t PGE3:1; /*!< bit:      3  Pattern Generator 3 Output Enable  */
    uint16_t PGE4:1; /*!< bit:      4  Pattern Generator 4 Output Enable  */
    uint16_t PGE5:1; /*!< bit:      5  Pattern Generator 5 Output Enable  */
    uint16_t PGE6:1; /*!< bit:      6  Pattern Generator 6 Output Enable  */
    uint16_t PGE7:1; /*!< bit:      7  Pattern Generator 7 Output Enable  */
    uint16_t PGV0:1; /*!< bit:      8  Pattern Generator 0 Output Value   */
    uint16_t PGV1:1; /*!< bit:      9  Pattern Generator 1 Output Value   */
    uint16_t PGV2:1; /*!< bit:     10  Pattern Generator 2 Output Value   */
    uint16_t PGV3:1; /*!< bit:     11  Pattern Generator 3 Output Value   */
    uint16_t PGV4:1; /*!< bit:     12  Pattern Generator 4 Output Value   */
    uint16_t PGV5:1; /*!< bit:     13  Pattern Generator 5 Output Value   */
    uint16_t PGV6:1; /*!< bit:     14  Pattern Generator 6 Output Value   */
    uint16_t PGV7:1; /*!< bit:     15  Pattern Generator 7 Output Value   */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t PGE:8; /*!< bit:  0.. 7  Pattern Generator x Output Enable  */
    uint16_t PGV:8; /*!< bit:  8..15  Pattern Generator x Output Value   */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} TCC_PATT_Type;
# 1256 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_WAVE : (TCC Offset: 0x3C) (R/W 32) Waveform Control -------- */

typedef union {
  struct {
    uint32_t WAVEGEN:3; /*!< bit:  0.. 2  Waveform Generation                */
    uint32_t :1; /*!< bit:      3  Reserved                           */
    uint32_t RAMP:2; /*!< bit:  4.. 5  Ramp Mode                          */
    uint32_t :1; /*!< bit:      6  Reserved                           */
    uint32_t CIPEREN:1; /*!< bit:      7  Circular period Enable             */
    uint32_t CICCEN0:1; /*!< bit:      8  Circular Channel 0 Enable          */
    uint32_t CICCEN1:1; /*!< bit:      9  Circular Channel 1 Enable          */
    uint32_t CICCEN2:1; /*!< bit:     10  Circular Channel 2 Enable          */
    uint32_t CICCEN3:1; /*!< bit:     11  Circular Channel 3 Enable          */
    uint32_t :4; /*!< bit: 12..15  Reserved                           */
    uint32_t POL0:1; /*!< bit:     16  Channel 0 Polarity                 */
    uint32_t POL1:1; /*!< bit:     17  Channel 1 Polarity                 */
    uint32_t POL2:1; /*!< bit:     18  Channel 2 Polarity                 */
    uint32_t POL3:1; /*!< bit:     19  Channel 3 Polarity                 */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t SWAP0:1; /*!< bit:     24  Swap DTI Output Pair 0             */
    uint32_t SWAP1:1; /*!< bit:     25  Swap DTI Output Pair 1             */
    uint32_t SWAP2:1; /*!< bit:     26  Swap DTI Output Pair 2             */
    uint32_t SWAP3:1; /*!< bit:     27  Swap DTI Output Pair 3             */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :8; /*!< bit:  0.. 7  Reserved                           */
    uint32_t CICCEN:4; /*!< bit:  8..11  Circular Channel x Enable          */
    uint32_t :4; /*!< bit: 12..15  Reserved                           */
    uint32_t POL:4; /*!< bit: 16..19  Channel x Polarity                 */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t SWAP:4; /*!< bit: 24..27  Swap DTI Output Pair x             */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_WAVE_Type;
# 1360 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_PER : (TCC Offset: 0x40) (R/W 32) Period -------- */

typedef union {
  struct { // DITH4 mode
    uint32_t DITHERCY:4; /*!< bit:  0.. 3  Dithering Cycle Number             */
    uint32_t PER:20; /*!< bit:  4..23  Period Value                       */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH4; /*!< Structure used for DITH4                        */
  struct { // DITH5 mode
    uint32_t DITHERCY:5; /*!< bit:  0.. 4  Dithering Cycle Number             */
    uint32_t PER:19; /*!< bit:  5..23  Period Value                       */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH5; /*!< Structure used for DITH5                        */
  struct { // DITH6 mode
    uint32_t DITHERCY:6; /*!< bit:  0.. 5  Dithering Cycle Number             */
    uint32_t PER:18; /*!< bit:  6..23  Period Value                       */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH6; /*!< Structure used for DITH6                        */
  struct {
    uint32_t PER:24; /*!< bit:  0..23  Period Value                       */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_PER_Type;





// DITH4 mode
# 1398 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH5 mode
# 1407 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH6 mode
# 1421 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_CC : (TCC Offset: 0x44) (R/W 32) Compare and Capture -------- */

typedef union {
  struct { // DITH4 mode
    uint32_t DITHERCY:4; /*!< bit:  0.. 3  Dithering Cycle Number             */
    uint32_t CC:20; /*!< bit:  4..23  Channel Compare/Capture Value      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH4; /*!< Structure used for DITH4                        */
  struct { // DITH5 mode
    uint32_t DITHERCY:5; /*!< bit:  0.. 4  Dithering Cycle Number             */
    uint32_t CC:19; /*!< bit:  5..23  Channel Compare/Capture Value      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH5; /*!< Structure used for DITH5                        */
  struct { // DITH6 mode
    uint32_t DITHERCY:6; /*!< bit:  0.. 5  Dithering Cycle Number             */
    uint32_t CC:18; /*!< bit:  6..23  Channel Compare/Capture Value      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH6; /*!< Structure used for DITH6                        */
  struct {
    uint32_t CC:24; /*!< bit:  0..23  Channel Compare/Capture Value      */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_CC_Type;





// DITH4 mode
# 1459 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH5 mode
# 1468 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH6 mode
# 1482 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_PATTB : (TCC Offset: 0x64) (R/W 16) Pattern Buffer -------- */

typedef union {
  struct {
    uint16_t PGEB0:1; /*!< bit:      0  Pattern Generator 0 Output Enable Buffer */
    uint16_t PGEB1:1; /*!< bit:      1  Pattern Generator 1 Output Enable Buffer */
    uint16_t PGEB2:1; /*!< bit:      2  Pattern Generator 2 Output Enable Buffer */
    uint16_t PGEB3:1; /*!< bit:      3  Pattern Generator 3 Output Enable Buffer */
    uint16_t PGEB4:1; /*!< bit:      4  Pattern Generator 4 Output Enable Buffer */
    uint16_t PGEB5:1; /*!< bit:      5  Pattern Generator 5 Output Enable Buffer */
    uint16_t PGEB6:1; /*!< bit:      6  Pattern Generator 6 Output Enable Buffer */
    uint16_t PGEB7:1; /*!< bit:      7  Pattern Generator 7 Output Enable Buffer */
    uint16_t PGVB0:1; /*!< bit:      8  Pattern Generator 0 Output Enable  */
    uint16_t PGVB1:1; /*!< bit:      9  Pattern Generator 1 Output Enable  */
    uint16_t PGVB2:1; /*!< bit:     10  Pattern Generator 2 Output Enable  */
    uint16_t PGVB3:1; /*!< bit:     11  Pattern Generator 3 Output Enable  */
    uint16_t PGVB4:1; /*!< bit:     12  Pattern Generator 4 Output Enable  */
    uint16_t PGVB5:1; /*!< bit:     13  Pattern Generator 5 Output Enable  */
    uint16_t PGVB6:1; /*!< bit:     14  Pattern Generator 6 Output Enable  */
    uint16_t PGVB7:1; /*!< bit:     15  Pattern Generator 7 Output Enable  */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t PGEB:8; /*!< bit:  0.. 7  Pattern Generator x Output Enable Buffer */
    uint16_t PGVB:8; /*!< bit:  8..15  Pattern Generator x Output Enable  */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} TCC_PATTB_Type;
# 1554 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_WAVEB : (TCC Offset: 0x68) (R/W 32) Waveform Control Buffer -------- */

typedef union {
  struct {
    uint32_t WAVEGENB:3; /*!< bit:  0.. 2  Waveform Generation Buffer         */
    uint32_t :1; /*!< bit:      3  Reserved                           */
    uint32_t RAMPB:2; /*!< bit:  4.. 5  Ramp Mode Buffer                   */
    uint32_t :1; /*!< bit:      6  Reserved                           */
    uint32_t CIPERENB:1; /*!< bit:      7  Circular Period Enable Buffer      */
    uint32_t CICCENB0:1; /*!< bit:      8  Circular Channel 0 Enable Buffer   */
    uint32_t CICCENB1:1; /*!< bit:      9  Circular Channel 1 Enable Buffer   */
    uint32_t CICCENB2:1; /*!< bit:     10  Circular Channel 2 Enable Buffer   */
    uint32_t CICCENB3:1; /*!< bit:     11  Circular Channel 3 Enable Buffer   */
    uint32_t :4; /*!< bit: 12..15  Reserved                           */
    uint32_t POLB0:1; /*!< bit:     16  Channel 0 Polarity Buffer          */
    uint32_t POLB1:1; /*!< bit:     17  Channel 1 Polarity Buffer          */
    uint32_t POLB2:1; /*!< bit:     18  Channel 2 Polarity Buffer          */
    uint32_t POLB3:1; /*!< bit:     19  Channel 3 Polarity Buffer          */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t SWAPB0:1; /*!< bit:     24  Swap DTI Output Pair 0 Buffer      */
    uint32_t SWAPB1:1; /*!< bit:     25  Swap DTI Output Pair 1 Buffer      */
    uint32_t SWAPB2:1; /*!< bit:     26  Swap DTI Output Pair 2 Buffer      */
    uint32_t SWAPB3:1; /*!< bit:     27  Swap DTI Output Pair 3 Buffer      */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint32_t :8; /*!< bit:  0.. 7  Reserved                           */
    uint32_t CICCENB:4; /*!< bit:  8..11  Circular Channel x Enable Buffer   */
    uint32_t :4; /*!< bit: 12..15  Reserved                           */
    uint32_t POLB:4; /*!< bit: 16..19  Channel x Polarity Buffer          */
    uint32_t :4; /*!< bit: 20..23  Reserved                           */
    uint32_t SWAPB:4; /*!< bit: 24..27  Swap DTI Output Pair x Buffer      */
    uint32_t :4; /*!< bit: 28..31  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_WAVEB_Type;
# 1658 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_PERB : (TCC Offset: 0x6C) (R/W 32) Period Buffer -------- */

typedef union {
  struct { // DITH4 mode
    uint32_t DITHERCYB:4; /*!< bit:  0.. 3  Dithering Buffer Cycle Number      */
    uint32_t PERB:20; /*!< bit:  4..23  Period Buffer Value                */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH4; /*!< Structure used for DITH4                        */
  struct { // DITH5 mode
    uint32_t DITHERCYB:5; /*!< bit:  0.. 4  Dithering Buffer Cycle Number      */
    uint32_t PERB:19; /*!< bit:  5..23  Period Buffer Value                */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH5; /*!< Structure used for DITH5                        */
  struct { // DITH6 mode
    uint32_t DITHERCYB:6; /*!< bit:  0.. 5  Dithering Buffer Cycle Number      */
    uint32_t PERB:18; /*!< bit:  6..23  Period Buffer Value                */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH6; /*!< Structure used for DITH6                        */
  struct {
    uint32_t PERB:24; /*!< bit:  0..23  Period Buffer Value                */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_PERB_Type;





// DITH4 mode
# 1696 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH5 mode
# 1705 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH6 mode
# 1719 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/* -------- TCC_CCB : (TCC Offset: 0x70) (R/W 32) Compare and Capture Buffer -------- */

typedef union {
  struct { // DITH4 mode
    uint32_t DITHERCYB:4; /*!< bit:  0.. 3  Dithering Buffer Cycle Number      */
    uint32_t CCB:20; /*!< bit:  4..23  Channel Compare/Capture Buffer Value */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH4; /*!< Structure used for DITH4                        */
  struct { // DITH5 mode
    uint32_t DITHERCYB:5; /*!< bit:  0.. 4  Dithering Buffer Cycle Number      */
    uint32_t CCB:19; /*!< bit:  5..23  Channel Compare/Capture Buffer Value */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH5; /*!< Structure used for DITH5                        */
  struct { // DITH6 mode
    uint32_t DITHERCYB:6; /*!< bit:  0.. 5  Dithering Buffer Cycle Number      */
    uint32_t CCB:18; /*!< bit:  6..23  Channel Compare/Capture Buffer Value */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } DITH6; /*!< Structure used for DITH6                        */
  struct {
    uint32_t CCB:24; /*!< bit:  0..23  Channel Compare/Capture Buffer Value */
    uint32_t :8; /*!< bit: 24..31  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} TCC_CCB_Type;





// DITH4 mode
# 1757 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH5 mode
# 1766 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
// DITH6 mode
# 1780 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/tcc.h"
/** \brief TCC hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ TCC_CTRLA_Type CTRLA; /**< \brief Offset: 0x00 (R/W 32) Control A */
  volatile /*!< Defines 'read / write' permissions */ TCC_CTRLBCLR_Type CTRLBCLR; /**< \brief Offset: 0x04 (R/W  8) Control B Clear */
  volatile /*!< Defines 'read / write' permissions */ TCC_CTRLBSET_Type CTRLBSET; /**< \brief Offset: 0x05 (R/W  8) Control B Set */
       RoReg8 Reserved1[0x2];
  volatile /*!< Defines 'read only' permissions */ TCC_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x08 (R/  32) Synchronization Busy */
  volatile /*!< Defines 'read / write' permissions */ TCC_FCTRLA_Type FCTRLA; /**< \brief Offset: 0x0C (R/W 32) Recoverable Fault A Configuration */
  volatile /*!< Defines 'read / write' permissions */ TCC_FCTRLB_Type FCTRLB; /**< \brief Offset: 0x10 (R/W 32) Recoverable Fault B Configuration */
  volatile /*!< Defines 'read / write' permissions */ TCC_WEXCTRL_Type WEXCTRL; /**< \brief Offset: 0x14 (R/W 32) Waveform Extension Configuration */
  volatile /*!< Defines 'read / write' permissions */ TCC_DRVCTRL_Type DRVCTRL; /**< \brief Offset: 0x18 (R/W 32) Driver Control */
       RoReg8 Reserved2[0x2];
  volatile /*!< Defines 'read / write' permissions */ TCC_DBGCTRL_Type DBGCTRL; /**< \brief Offset: 0x1E (R/W  8) Debug Control */
       RoReg8 Reserved3[0x1];
  volatile /*!< Defines 'read / write' permissions */ TCC_EVCTRL_Type EVCTRL; /**< \brief Offset: 0x20 (R/W 32) Event Control */
  volatile /*!< Defines 'read / write' permissions */ TCC_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x24 (R/W 32) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ TCC_INTENSET_Type INTENSET; /**< \brief Offset: 0x28 (R/W 32) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ TCC_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x2C (R/W 32) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read / write' permissions */ TCC_STATUS_Type STATUS; /**< \brief Offset: 0x30 (R/W 32) Status */
  volatile /*!< Defines 'read / write' permissions */ TCC_COUNT_Type COUNT; /**< \brief Offset: 0x34 (R/W 32) Count */
  volatile /*!< Defines 'read / write' permissions */ TCC_PATT_Type PATT; /**< \brief Offset: 0x38 (R/W 16) Pattern */
       RoReg8 Reserved4[0x2];
  volatile /*!< Defines 'read / write' permissions */ TCC_WAVE_Type WAVE; /**< \brief Offset: 0x3C (R/W 32) Waveform Control */
  volatile /*!< Defines 'read / write' permissions */ TCC_PER_Type PER; /**< \brief Offset: 0x40 (R/W 32) Period */
  volatile /*!< Defines 'read / write' permissions */ TCC_CC_Type CC[4]; /**< \brief Offset: 0x44 (R/W 32) Compare and Capture */
       RoReg8 Reserved5[0x10];
  volatile /*!< Defines 'read / write' permissions */ TCC_PATTB_Type PATTB; /**< \brief Offset: 0x64 (R/W 16) Pattern Buffer */
       RoReg8 Reserved6[0x2];
  volatile /*!< Defines 'read / write' permissions */ TCC_WAVEB_Type WAVEB; /**< \brief Offset: 0x68 (R/W 32) Waveform Control Buffer */
  volatile /*!< Defines 'read / write' permissions */ TCC_PERB_Type PERB; /**< \brief Offset: 0x6C (R/W 32) Period Buffer */
  volatile /*!< Defines 'read / write' permissions */ TCC_CCB_Type CCB[4]; /**< \brief Offset: 0x70 (R/W 32) Compare and Capture Buffer */
} Tcc;


/*@}*/
# 270 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h" 1
/**
 * \file
 *
 * \brief Component description for USB
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR USB */
/* ========================================================================== */
/** \addtogroup SAMD21_USB Universal Serial Bus */
/*@{*/




/* -------- USB_CTRLA : (USB Offset: 0x000) (R/W  8) Control A -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset                     */
    uint8_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint8_t RUNSTDBY:1; /*!< bit:      2  Run in Standby Mode                */
    uint8_t :4; /*!< bit:  3.. 6  Reserved                           */
    uint8_t MODE:1; /*!< bit:      7  Operating Mode                     */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_CTRLA_Type;
# 87 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_SYNCBUSY : (USB Offset: 0x002) (R/   8) Synchronization Busy -------- */

typedef union {
  struct {
    uint8_t SWRST:1; /*!< bit:      0  Software Reset Synchronization Busy */
    uint8_t ENABLE:1; /*!< bit:      1  Enable Synchronization Busy        */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_SYNCBUSY_Type;
# 108 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_QOSCTRL : (USB Offset: 0x003) (R/W  8) USB Quality Of Service -------- */

typedef union {
  struct {
    uint8_t CQOS:2; /*!< bit:  0.. 1  Configuration Quality of Service   */
    uint8_t DQOS:2; /*!< bit:  2.. 3  Data Quality of Service            */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_QOSCTRL_Type;
# 147 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_CTRLB : (USB Offset: 0x008) (R/W 16) DEVICE DEVICE Control B -------- */

typedef union {
  struct {
    uint16_t DETACH:1; /*!< bit:      0  Detach                             */
    uint16_t UPRSM:1; /*!< bit:      1  Upstream Resume                    */
    uint16_t SPDCONF:2; /*!< bit:  2.. 3  Speed Configuration                */
    uint16_t NREPLY:1; /*!< bit:      4  No Reply                           */
    uint16_t TSTJ:1; /*!< bit:      5  Test mode J                        */
    uint16_t TSTK:1; /*!< bit:      6  Test mode K                        */
    uint16_t TSTPCKT:1; /*!< bit:      7  Test packet mode                   */
    uint16_t OPMODE2:1; /*!< bit:      8  Specific Operational Mode          */
    uint16_t GNAK:1; /*!< bit:      9  Global NAK                         */
    uint16_t LPMHDSK:2; /*!< bit: 10..11  Link Power Management Handshake    */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_DEVICE_CTRLB_Type;
# 210 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_CTRLB : (USB Offset: 0x008) (R/W 16) HOST HOST Control B -------- */

typedef union {
  struct {
    uint16_t :1; /*!< bit:      0  Reserved                           */
    uint16_t RESUME:1; /*!< bit:      1  Send USB Resume                    */
    uint16_t SPDCONF:2; /*!< bit:  2.. 3  Speed Configuration for Host       */
    uint16_t :1; /*!< bit:      4  Reserved                           */
    uint16_t TSTJ:1; /*!< bit:      5  Test mode J                        */
    uint16_t TSTK:1; /*!< bit:      6  Test mode K                        */
    uint16_t :1; /*!< bit:      7  Reserved                           */
    uint16_t SOFE:1; /*!< bit:      8  Start of Frame Generation Enable   */
    uint16_t BUSRESET:1; /*!< bit:      9  Send USB Reset                     */
    uint16_t VBUSOK:1; /*!< bit:     10  VBUS is OK                         */
    uint16_t L1RESUME:1; /*!< bit:     11  Send L1 Resume                     */
    uint16_t :4; /*!< bit: 12..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_CTRLB_Type;
# 257 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_DADD : (USB Offset: 0x00A) (R/W  8) DEVICE DEVICE Device Address -------- */

typedef union {
  struct {
    uint8_t DADD:7; /*!< bit:  0.. 6  Device Address                     */
    uint8_t ADDEN:1; /*!< bit:      7  Device Address Enable              */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_DADD_Type;
# 278 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_HSOFC : (USB Offset: 0x00A) (R/W  8) HOST HOST Host Start Of Frame Control -------- */

typedef union {
  struct {
    uint8_t FLENC:4; /*!< bit:  0.. 3  Frame Length Control               */
    uint8_t :3; /*!< bit:  4.. 6  Reserved                           */
    uint8_t FLENCE:1; /*!< bit:      7  Frame Length Control Enable        */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_HSOFC_Type;
# 300 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_STATUS : (USB Offset: 0x00C) (R/   8) DEVICE DEVICE Status -------- */

typedef union {
  struct {
    uint8_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint8_t SPEED:2; /*!< bit:  2.. 3  Speed Status                       */
    uint8_t :2; /*!< bit:  4.. 5  Reserved                           */
    uint8_t LINESTATE:2; /*!< bit:  6.. 7  USB Line State Status              */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_STATUS_Type;
# 336 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_STATUS : (USB Offset: 0x00C) (R/W  8) HOST HOST Status -------- */

typedef union {
  struct {
    uint8_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint8_t SPEED:2; /*!< bit:  2.. 3  Speed Status                       */
    uint8_t :2; /*!< bit:  4.. 5  Reserved                           */
    uint8_t LINESTATE:2; /*!< bit:  6.. 7  USB Line State Status              */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_STATUS_Type;
# 360 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_FSMSTATUS : (USB Offset: 0x00D) (R/   8) Finite State Machine Status -------- */

typedef union {
  struct {
    uint8_t FSMSTATE:6; /*!< bit:  0.. 5  Fine State Machine Status          */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_FSMSTATUS_Type;
# 393 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_FNUM : (USB Offset: 0x010) (R/  16) DEVICE DEVICE Device Frame Number -------- */

typedef union {
  struct {
    uint16_t MFNUM:3; /*!< bit:  0.. 2  Micro Frame Number                 */
    uint16_t FNUM:11; /*!< bit:  3..13  Frame Number                       */
    uint16_t :1; /*!< bit:     14  Reserved                           */
    uint16_t FNCERR:1; /*!< bit:     15  Frame Number CRC Error             */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_DEVICE_FNUM_Type;
# 419 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_FNUM : (USB Offset: 0x010) (R/W 16) HOST HOST Host Frame Number -------- */

typedef union {
  struct {
    uint16_t MFNUM:3; /*!< bit:  0.. 2  Micro Frame Number                 */
    uint16_t FNUM:11; /*!< bit:  3..13  Frame Number                       */
    uint16_t :2; /*!< bit: 14..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_FNUM_Type;
# 442 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_FLENHIGH : (USB Offset: 0x012) (R/   8) HOST HOST Host Frame Length -------- */

typedef union {
  struct {
    uint8_t FLENHIGH:8; /*!< bit:  0.. 7  Frame Length                       */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_FLENHIGH_Type;
# 460 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_INTENCLR : (USB Offset: 0x014) (R/W 16) DEVICE DEVICE Device Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint16_t SUSPEND:1; /*!< bit:      0  Suspend Interrupt Enable           */
    uint16_t MSOF:1; /*!< bit:      1  Micro Start of Frame Interrupt Enable in High Speed Mode */
    uint16_t SOF:1; /*!< bit:      2  Start Of Frame Interrupt Enable    */
    uint16_t EORST:1; /*!< bit:      3  End of Reset Interrupt Enable      */
    uint16_t WAKEUP:1; /*!< bit:      4  Wake Up Interrupt Enable           */
    uint16_t EORSM:1; /*!< bit:      5  End Of Resume Interrupt Enable     */
    uint16_t UPRSM:1; /*!< bit:      6  Upstream Resume Interrupt Enable   */
    uint16_t RAMACER:1; /*!< bit:      7  Ram Access Interrupt Enable        */
    uint16_t LPMNYET:1; /*!< bit:      8  Link Power Management Not Yet Interrupt Enable */
    uint16_t LPMSUSP:1; /*!< bit:      9  Link Power Management Suspend Interrupt Enable */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_DEVICE_INTENCLR_Type;
# 505 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_INTENCLR : (USB Offset: 0x014) (R/W 16) HOST HOST Host Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint16_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint16_t HSOF:1; /*!< bit:      2  Host Start Of Frame Interrupt Disable */
    uint16_t RST:1; /*!< bit:      3  BUS Reset Interrupt Disable        */
    uint16_t WAKEUP:1; /*!< bit:      4  Wake Up Interrupt Disable          */
    uint16_t DNRSM:1; /*!< bit:      5  DownStream to Device Interrupt Disable */
    uint16_t UPRSM:1; /*!< bit:      6  Upstream Resume from Device Interrupt Disable */
    uint16_t RAMACER:1; /*!< bit:      7  Ram Access Interrupt Disable       */
    uint16_t DCONN:1; /*!< bit:      8  Device Connection Interrupt Disable */
    uint16_t DDISC:1; /*!< bit:      9  Device Disconnection Interrupt Disable */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_INTENCLR_Type;
# 545 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_INTENSET : (USB Offset: 0x018) (R/W 16) DEVICE DEVICE Device Interrupt Enable Set -------- */

typedef union {
  struct {
    uint16_t SUSPEND:1; /*!< bit:      0  Suspend Interrupt Enable           */
    uint16_t MSOF:1; /*!< bit:      1  Micro Start of Frame Interrupt Enable in High Speed Mode */
    uint16_t SOF:1; /*!< bit:      2  Start Of Frame Interrupt Enable    */
    uint16_t EORST:1; /*!< bit:      3  End of Reset Interrupt Enable      */
    uint16_t WAKEUP:1; /*!< bit:      4  Wake Up Interrupt Enable           */
    uint16_t EORSM:1; /*!< bit:      5  End Of Resume Interrupt Enable     */
    uint16_t UPRSM:1; /*!< bit:      6  Upstream Resume Interrupt Enable   */
    uint16_t RAMACER:1; /*!< bit:      7  Ram Access Interrupt Enable        */
    uint16_t LPMNYET:1; /*!< bit:      8  Link Power Management Not Yet Interrupt Enable */
    uint16_t LPMSUSP:1; /*!< bit:      9  Link Power Management Suspend Interrupt Enable */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_DEVICE_INTENSET_Type;
# 590 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_INTENSET : (USB Offset: 0x018) (R/W 16) HOST HOST Host Interrupt Enable Set -------- */

typedef union {
  struct {
    uint16_t :2; /*!< bit:  0.. 1  Reserved                           */
    uint16_t HSOF:1; /*!< bit:      2  Host Start Of Frame Interrupt Enable */
    uint16_t RST:1; /*!< bit:      3  Bus Reset Interrupt Enable         */
    uint16_t WAKEUP:1; /*!< bit:      4  Wake Up Interrupt Enable           */
    uint16_t DNRSM:1; /*!< bit:      5  DownStream to the Device Interrupt Enable */
    uint16_t UPRSM:1; /*!< bit:      6  Upstream Resume fromthe device Interrupt Enable */
    uint16_t RAMACER:1; /*!< bit:      7  Ram Access Interrupt Enable        */
    uint16_t DCONN:1; /*!< bit:      8  Link Power Management Interrupt Enable */
    uint16_t DDISC:1; /*!< bit:      9  Device Disconnection Interrupt Enable */
    uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_INTENSET_Type;
# 630 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_INTFLAG : (USB Offset: 0x01C) (R/W 16) DEVICE DEVICE Device Interrupt Flag -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint16_t SUSPEND:1; /*!< bit:      0  Suspend                            */
    volatile /*!< Defines 'read only' permissions */ uint16_t MSOF:1; /*!< bit:      1  Micro Start of Frame in High Speed Mode */
    volatile /*!< Defines 'read only' permissions */ uint16_t SOF:1; /*!< bit:      2  Start Of Frame                     */
    volatile /*!< Defines 'read only' permissions */ uint16_t EORST:1; /*!< bit:      3  End of Reset                       */
    volatile /*!< Defines 'read only' permissions */ uint16_t WAKEUP:1; /*!< bit:      4  Wake Up                            */
    volatile /*!< Defines 'read only' permissions */ uint16_t EORSM:1; /*!< bit:      5  End Of Resume                      */
    volatile /*!< Defines 'read only' permissions */ uint16_t UPRSM:1; /*!< bit:      6  Upstream Resume                    */
    volatile /*!< Defines 'read only' permissions */ uint16_t RAMACER:1; /*!< bit:      7  Ram Access                         */
    volatile /*!< Defines 'read only' permissions */ uint16_t LPMNYET:1; /*!< bit:      8  Link Power Management Not Yet      */
    volatile /*!< Defines 'read only' permissions */ uint16_t LPMSUSP:1; /*!< bit:      9  Link Power Management Suspend      */
    volatile /*!< Defines 'read only' permissions */ uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_DEVICE_INTFLAG_Type;
# 675 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_INTFLAG : (USB Offset: 0x01C) (R/W 16) HOST HOST Host Interrupt Flag -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint16_t :2; /*!< bit:  0.. 1  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint16_t HSOF:1; /*!< bit:      2  Host Start Of Frame                */
    volatile /*!< Defines 'read only' permissions */ uint16_t RST:1; /*!< bit:      3  Bus Reset                          */
    volatile /*!< Defines 'read only' permissions */ uint16_t WAKEUP:1; /*!< bit:      4  Wake Up                            */
    volatile /*!< Defines 'read only' permissions */ uint16_t DNRSM:1; /*!< bit:      5  Downstream                         */
    volatile /*!< Defines 'read only' permissions */ uint16_t UPRSM:1; /*!< bit:      6  Upstream Resume from the Device    */
    volatile /*!< Defines 'read only' permissions */ uint16_t RAMACER:1; /*!< bit:      7  Ram Access                         */
    volatile /*!< Defines 'read only' permissions */ uint16_t DCONN:1; /*!< bit:      8  Device Connection                  */
    volatile /*!< Defines 'read only' permissions */ uint16_t DDISC:1; /*!< bit:      9  Device Disconnection               */
    volatile /*!< Defines 'read only' permissions */ uint16_t :6; /*!< bit: 10..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_INTFLAG_Type;
# 715 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPINTSMRY : (USB Offset: 0x020) (R/  16) DEVICE DEVICE End Point Interrupt Summary -------- */

typedef union {
  struct {
    uint16_t EPINT0:1; /*!< bit:      0  End Point 0 Interrupt              */
    uint16_t EPINT1:1; /*!< bit:      1  End Point 1 Interrupt              */
    uint16_t EPINT2:1; /*!< bit:      2  End Point 2 Interrupt              */
    uint16_t EPINT3:1; /*!< bit:      3  End Point 3 Interrupt              */
    uint16_t EPINT4:1; /*!< bit:      4  End Point 4 Interrupt              */
    uint16_t EPINT5:1; /*!< bit:      5  End Point 5 Interrupt              */
    uint16_t EPINT6:1; /*!< bit:      6  End Point 6 Interrupt              */
    uint16_t EPINT7:1; /*!< bit:      7  End Point 7 Interrupt              */
    uint16_t :8; /*!< bit:  8..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t EPINT:8; /*!< bit:  0.. 7  End Point x Interrupt              */
    uint16_t :8; /*!< bit:  8..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPINTSMRY_Type;
# 761 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PINTSMRY : (USB Offset: 0x020) (R/  16) HOST HOST Pipe Interrupt Summary -------- */

typedef union {
  struct {
    uint16_t EPINT0:1; /*!< bit:      0  Pipe 0 Interrupt                   */
    uint16_t EPINT1:1; /*!< bit:      1  Pipe 1 Interrupt                   */
    uint16_t EPINT2:1; /*!< bit:      2  Pipe 2 Interrupt                   */
    uint16_t EPINT3:1; /*!< bit:      3  Pipe 3 Interrupt                   */
    uint16_t EPINT4:1; /*!< bit:      4  Pipe 4 Interrupt                   */
    uint16_t EPINT5:1; /*!< bit:      5  Pipe 5 Interrupt                   */
    uint16_t EPINT6:1; /*!< bit:      6  Pipe 6 Interrupt                   */
    uint16_t EPINT7:1; /*!< bit:      7  Pipe 7 Interrupt                   */
    uint16_t :8; /*!< bit:  8..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint16_t EPINT:8; /*!< bit:  0.. 7  Pipe x Interrupt                   */
    uint16_t :8; /*!< bit:  8..15  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_PINTSMRY_Type;
# 807 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DESCADD : (USB Offset: 0x024) (R/W 32) Descriptor Address -------- */

typedef union {
  struct {
    uint32_t DESCADD:32; /*!< bit:  0..31  Descriptor Address Value           */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} USB_DESCADD_Type;
# 825 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_PADCAL : (USB Offset: 0x028) (R/W 16) USB PAD Calibration -------- */

typedef union {
  struct {
    uint16_t TRANSP:5; /*!< bit:  0.. 4  USB Pad Transp calibration         */
    uint16_t :1; /*!< bit:      5  Reserved                           */
    uint16_t TRANSN:5; /*!< bit:  6..10  USB Pad Transn calibration         */
    uint16_t :1; /*!< bit:     11  Reserved                           */
    uint16_t TRIM:3; /*!< bit: 12..14  USB Pad Trim calibration           */
    uint16_t :1; /*!< bit:     15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_PADCAL_Type;
# 854 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPCFG : (USB Offset: 0x100) (R/W  8) DEVICE DEVICE_ENDPOINT End Point Configuration -------- */

typedef union {
  struct {
    uint8_t EPTYPE0:3; /*!< bit:  0.. 2  End Point Type0                    */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t EPTYPE1:3; /*!< bit:  4.. 6  End Point Type1                    */
    uint8_t NYETDIS:1; /*!< bit:      7  NYET Token Disable                 */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPCFG_Type;
# 880 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PCFG : (USB Offset: 0x100) (R/W  8) HOST HOST_PIPE End Point Configuration -------- */

typedef union {
  struct {
    uint8_t PTOKEN:2; /*!< bit:  0.. 1  Pipe Token                         */
    uint8_t BK:1; /*!< bit:      2  Pipe Bank                          */
    uint8_t PTYPE:3; /*!< bit:  3.. 5  Pipe Type                          */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_PCFG_Type;
# 906 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_BINTERVAL : (USB Offset: 0x103) (R/W  8) HOST HOST_PIPE Bus Access Period of Pipe -------- */

typedef union {
  struct {
    uint8_t BITINTERVAL:8; /*!< bit:  0.. 7  Bit Interval                       */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_BINTERVAL_Type;
# 924 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPSTATUSCLR : (USB Offset: 0x104) ( /W  8) DEVICE DEVICE_ENDPOINT End Point Pipe Status Clear -------- */

typedef union {
  struct {
    uint8_t DTGLOUT:1; /*!< bit:      0  Data Toggle OUT Clear              */
    uint8_t DTGLIN:1; /*!< bit:      1  Data Toggle IN Clear               */
    uint8_t CURBK:1; /*!< bit:      2  Curren Bank Clear                  */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t STALLRQ0:1; /*!< bit:      4  Stall 0 Request Clear              */
    uint8_t STALLRQ1:1; /*!< bit:      5  Stall 1 Request Clear              */
    uint8_t BK0RDY:1; /*!< bit:      6  Bank 0 Ready Clear                 */
    uint8_t BK1RDY:1; /*!< bit:      7  Bank 1 Ready Clear                 */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t :4; /*!< bit:  0.. 3  Reserved                           */
    uint8_t STALLRQ:2; /*!< bit:  4.. 5  Stall x Request Clear              */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPSTATUSCLR_Type;
# 968 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PSTATUSCLR : (USB Offset: 0x104) ( /W  8) HOST HOST_PIPE End Point Pipe Status Clear -------- */

typedef union {
  struct {
    uint8_t DTGL:1; /*!< bit:      0  Data Toggle clear                  */
    uint8_t :1; /*!< bit:      1  Reserved                           */
    uint8_t CURBK:1; /*!< bit:      2  Curren Bank clear                  */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t PFREEZE:1; /*!< bit:      4  Pipe Freeze Clear                  */
    uint8_t :1; /*!< bit:      5  Reserved                           */
    uint8_t BK0RDY:1; /*!< bit:      6  Bank 0 Ready Clear                 */
    uint8_t BK1RDY:1; /*!< bit:      7  Bank 1 Ready Clear                 */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_PSTATUSCLR_Type;
# 1000 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPSTATUSSET : (USB Offset: 0x105) ( /W  8) DEVICE DEVICE_ENDPOINT End Point Pipe Status Set -------- */

typedef union {
  struct {
    uint8_t DTGLOUT:1; /*!< bit:      0  Data Toggle OUT Set                */
    uint8_t DTGLIN:1; /*!< bit:      1  Data Toggle IN Set                 */
    uint8_t CURBK:1; /*!< bit:      2  Current Bank Set                   */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t STALLRQ0:1; /*!< bit:      4  Stall 0 Request Set                */
    uint8_t STALLRQ1:1; /*!< bit:      5  Stall 1 Request Set                */
    uint8_t BK0RDY:1; /*!< bit:      6  Bank 0 Ready Set                   */
    uint8_t BK1RDY:1; /*!< bit:      7  Bank 1 Ready Set                   */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t :4; /*!< bit:  0.. 3  Reserved                           */
    uint8_t STALLRQ:2; /*!< bit:  4.. 5  Stall x Request Set                */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPSTATUSSET_Type;
# 1044 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PSTATUSSET : (USB Offset: 0x105) ( /W  8) HOST HOST_PIPE End Point Pipe Status Set -------- */

typedef union {
  struct {
    uint8_t DTGL:1; /*!< bit:      0  Data Toggle Set                    */
    uint8_t :1; /*!< bit:      1  Reserved                           */
    uint8_t CURBK:1; /*!< bit:      2  Current Bank Set                   */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t PFREEZE:1; /*!< bit:      4  Pipe Freeze Set                    */
    uint8_t :1; /*!< bit:      5  Reserved                           */
    uint8_t BK0RDY:1; /*!< bit:      6  Bank 0 Ready Set                   */
    uint8_t BK1RDY:1; /*!< bit:      7  Bank 1 Ready Set                   */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_PSTATUSSET_Type;
# 1076 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPSTATUS : (USB Offset: 0x106) (R/   8) DEVICE DEVICE_ENDPOINT End Point Pipe Status -------- */

typedef union {
  struct {
    uint8_t DTGLOUT:1; /*!< bit:      0  Data Toggle Out                    */
    uint8_t DTGLIN:1; /*!< bit:      1  Data Toggle In                     */
    uint8_t CURBK:1; /*!< bit:      2  Current Bank                       */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t STALLRQ0:1; /*!< bit:      4  Stall 0 Request                    */
    uint8_t STALLRQ1:1; /*!< bit:      5  Stall 1 Request                    */
    uint8_t BK0RDY:1; /*!< bit:      6  Bank 0 ready                       */
    uint8_t BK1RDY:1; /*!< bit:      7  Bank 1 ready                       */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t :4; /*!< bit:  0.. 3  Reserved                           */
    uint8_t STALLRQ:2; /*!< bit:  4.. 5  Stall x Request                    */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPSTATUS_Type;
# 1120 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PSTATUS : (USB Offset: 0x106) (R/   8) HOST HOST_PIPE End Point Pipe Status -------- */

typedef union {
  struct {
    uint8_t DTGL:1; /*!< bit:      0  Data Toggle                        */
    uint8_t :1; /*!< bit:      1  Reserved                           */
    uint8_t CURBK:1; /*!< bit:      2  Current Bank                       */
    uint8_t :1; /*!< bit:      3  Reserved                           */
    uint8_t PFREEZE:1; /*!< bit:      4  Pipe Freeze                        */
    uint8_t :1; /*!< bit:      5  Reserved                           */
    uint8_t BK0RDY:1; /*!< bit:      6  Bank 0 ready                       */
    uint8_t BK1RDY:1; /*!< bit:      7  Bank 1 ready                       */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_PSTATUS_Type;
# 1152 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPINTFLAG : (USB Offset: 0x107) (R/W  8) DEVICE DEVICE_ENDPOINT End Point Interrupt Flag -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t TRCPT0:1; /*!< bit:      0  Transfer Complete 0                */
    volatile /*!< Defines 'read only' permissions */ uint8_t TRCPT1:1; /*!< bit:      1  Transfer Complete 1                */
    volatile /*!< Defines 'read only' permissions */ uint8_t TRFAIL0:1; /*!< bit:      2  Error Flow 0                       */
    volatile /*!< Defines 'read only' permissions */ uint8_t TRFAIL1:1; /*!< bit:      3  Error Flow 1                       */
    volatile /*!< Defines 'read only' permissions */ uint8_t RXSTP:1; /*!< bit:      4  Received Setup                     */
    volatile /*!< Defines 'read only' permissions */ uint8_t STALL0:1; /*!< bit:      5  Stall 0 In/out                     */
    volatile /*!< Defines 'read only' permissions */ uint8_t STALL1:1; /*!< bit:      6  Stall 1 In/out                     */
    volatile /*!< Defines 'read only' permissions */ uint8_t :1; /*!< bit:      7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t TRCPT:2; /*!< bit:  0.. 1  Transfer Complete x                */
    volatile /*!< Defines 'read only' permissions */ uint8_t TRFAIL:2; /*!< bit:  2.. 3  Error Flow x                       */
    volatile /*!< Defines 'read only' permissions */ uint8_t :1; /*!< bit:      4  Reserved                           */
    volatile /*!< Defines 'read only' permissions */ uint8_t STALL:2; /*!< bit:  5.. 6  Stall x In/out                     */
    volatile /*!< Defines 'read only' permissions */ uint8_t :1; /*!< bit:      7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPINTFLAG_Type;
# 1204 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PINTFLAG : (USB Offset: 0x107) (R/W  8) HOST HOST_PIPE Pipe Interrupt Flag -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t TRCPT0:1; /*!< bit:      0  Transfer Complete 0 Interrupt Flag */
    volatile /*!< Defines 'read only' permissions */ uint8_t TRCPT1:1; /*!< bit:      1  Transfer Complete 1 Interrupt Flag */
    volatile /*!< Defines 'read only' permissions */ uint8_t TRFAIL:1; /*!< bit:      2  Error Flow Interrupt Flag          */
    volatile /*!< Defines 'read only' permissions */ uint8_t PERR:1; /*!< bit:      3  Pipe Error Interrupt Flag          */
    volatile /*!< Defines 'read only' permissions */ uint8_t TXSTP:1; /*!< bit:      4  Transmit  Setup Interrupt Flag     */
    volatile /*!< Defines 'read only' permissions */ uint8_t STALL:1; /*!< bit:      5  Stall Interrupt Flag               */
    volatile /*!< Defines 'read only' permissions */ uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t TRCPT:2; /*!< bit:  0.. 1  Transfer Complete x Interrupt Flag */
    volatile /*!< Defines 'read only' permissions */ uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_PINTFLAG_Type;
# 1244 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPINTENCLR : (USB Offset: 0x108) (R/W  8) DEVICE DEVICE_ENDPOINT End Point Interrupt Clear Flag -------- */

typedef union {
  struct {
    uint8_t TRCPT0:1; /*!< bit:      0  Transfer Complete 0 Interrupt Disable */
    uint8_t TRCPT1:1; /*!< bit:      1  Transfer Complete 1 Interrupt Disable */
    uint8_t TRFAIL0:1; /*!< bit:      2  Error Flow 0 Interrupt Disable     */
    uint8_t TRFAIL1:1; /*!< bit:      3  Error Flow 1 Interrupt Disable     */
    uint8_t RXSTP:1; /*!< bit:      4  Received Setup Interrupt Disable   */
    uint8_t STALL0:1; /*!< bit:      5  Stall 0 In/Out Interrupt Disable   */
    uint8_t STALL1:1; /*!< bit:      6  Stall 1 In/Out Interrupt Disable   */
    uint8_t :1; /*!< bit:      7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t TRCPT:2; /*!< bit:  0.. 1  Transfer Complete x Interrupt Disable */
    uint8_t TRFAIL:2; /*!< bit:  2.. 3  Error Flow x Interrupt Disable     */
    uint8_t :1; /*!< bit:      4  Reserved                           */
    uint8_t STALL:2; /*!< bit:  5.. 6  Stall x In/Out Interrupt Disable   */
    uint8_t :1; /*!< bit:      7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPINTENCLR_Type;
# 1296 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PINTENCLR : (USB Offset: 0x108) (R/W  8) HOST HOST_PIPE Pipe Interrupt Flag Clear -------- */

typedef union {
  struct {
    uint8_t TRCPT0:1; /*!< bit:      0  Transfer Complete 0 Disable        */
    uint8_t TRCPT1:1; /*!< bit:      1  Transfer Complete 1 Disable        */
    uint8_t TRFAIL:1; /*!< bit:      2  Error Flow Interrupt Disable       */
    uint8_t PERR:1; /*!< bit:      3  Pipe Error Interrupt Disable       */
    uint8_t TXSTP:1; /*!< bit:      4  Transmit  Setup Interrupt Disable  */
    uint8_t STALL:1; /*!< bit:      5  Stall Inetrrupt Disable            */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t TRCPT:2; /*!< bit:  0.. 1  Transfer Complete x Disable        */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_PINTENCLR_Type;
# 1336 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EPINTENSET : (USB Offset: 0x109) (R/W  8) DEVICE DEVICE_ENDPOINT End Point Interrupt Set Flag -------- */

typedef union {
  struct {
    uint8_t TRCPT0:1; /*!< bit:      0  Transfer Complete 0 Interrupt Enable */
    uint8_t TRCPT1:1; /*!< bit:      1  Transfer Complete 1 Interrupt Enable */
    uint8_t TRFAIL0:1; /*!< bit:      2  Error Flow 0 Interrupt Enable      */
    uint8_t TRFAIL1:1; /*!< bit:      3  Error Flow 1 Interrupt Enable      */
    uint8_t RXSTP:1; /*!< bit:      4  Received Setup Interrupt Enable    */
    uint8_t STALL0:1; /*!< bit:      5  Stall 0 In/out Interrupt enable    */
    uint8_t STALL1:1; /*!< bit:      6  Stall 1 In/out Interrupt enable    */
    uint8_t :1; /*!< bit:      7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t TRCPT:2; /*!< bit:  0.. 1  Transfer Complete x Interrupt Enable */
    uint8_t TRFAIL:2; /*!< bit:  2.. 3  Error Flow x Interrupt Enable      */
    uint8_t :1; /*!< bit:      4  Reserved                           */
    uint8_t STALL:2; /*!< bit:  5.. 6  Stall x In/out Interrupt enable    */
    uint8_t :1; /*!< bit:      7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EPINTENSET_Type;
# 1388 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PINTENSET : (USB Offset: 0x109) (R/W  8) HOST HOST_PIPE Pipe Interrupt Flag Set -------- */

typedef union {
  struct {
    uint8_t TRCPT0:1; /*!< bit:      0  Transfer Complete 0 Interrupt Enable */
    uint8_t TRCPT1:1; /*!< bit:      1  Transfer Complete 1 Interrupt Enable */
    uint8_t TRFAIL:1; /*!< bit:      2  Error Flow Interrupt Enable        */
    uint8_t PERR:1; /*!< bit:      3  Pipe Error Interrupt Enable        */
    uint8_t TXSTP:1; /*!< bit:      4  Transmit  Setup Interrupt Enable   */
    uint8_t STALL:1; /*!< bit:      5  Stall Interrupt Enable             */
    uint8_t :2; /*!< bit:  6.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  struct {
    uint8_t TRCPT:2; /*!< bit:  0.. 1  Transfer Complete x Interrupt Enable */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } vec; /*!< Structure used for vec  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_PINTENSET_Type;
# 1428 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_ADDR : (USB Offset: 0x000) (R/W 32) DEVICE DEVICE_DESC_BANK Endpoint Bank, Adress of Data Buffer -------- */

typedef union {
  struct {
    uint32_t ADDR:32; /*!< bit:  0..31  Adress of data buffer              */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} USB_DEVICE_ADDR_Type;
# 1445 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_ADDR : (USB Offset: 0x000) (R/W 32) HOST HOST_DESC_BANK Host Bank, Adress of Data Buffer -------- */

typedef union {
  struct {
    uint32_t ADDR:32; /*!< bit:  0..31  Adress of data buffer              */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} USB_HOST_ADDR_Type;
# 1462 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_PCKSIZE : (USB Offset: 0x004) (R/W 32) DEVICE DEVICE_DESC_BANK Endpoint Bank, Packet Size -------- */

typedef union {
  struct {
    uint32_t BYTE_COUNT:14; /*!< bit:  0..13  Byte Count                         */
    uint32_t MULTI_PACKET_SIZE:14; /*!< bit: 14..27  Multi Packet In or Out size        */
    uint32_t SIZE:3; /*!< bit: 28..30  Enpoint size                       */
    uint32_t AUTO_ZLP:1; /*!< bit:     31  Automatic Zero Length Packet       */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} USB_DEVICE_PCKSIZE_Type;
# 1490 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_PCKSIZE : (USB Offset: 0x004) (R/W 32) HOST HOST_DESC_BANK Host Bank, Packet Size -------- */

typedef union {
  struct {
    uint32_t BYTE_COUNT:14; /*!< bit:  0..13  Byte Count                         */
    uint32_t MULTI_PACKET_SIZE:14; /*!< bit: 14..27  Multi Packet In or Out size        */
    uint32_t SIZE:3; /*!< bit: 28..30  Pipe size                          */
    uint32_t AUTO_ZLP:1; /*!< bit:     31  Automatic Zero Length Packet       */
  } bit; /*!< Structure used for bit  access                  */
  uint32_t reg; /*!< Type      used for register access              */
} USB_HOST_PCKSIZE_Type;
# 1518 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_EXTREG : (USB Offset: 0x008) (R/W 16) DEVICE DEVICE_DESC_BANK Endpoint Bank, Extended -------- */

typedef union {
  struct {
    uint16_t SUBPID:4; /*!< bit:  0.. 3  SUBPID field send with extended token */
    uint16_t VARIABLE:11; /*!< bit:  4..14  Variable field send with extended token */
    uint16_t :1; /*!< bit:     15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_DEVICE_EXTREG_Type;
# 1540 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_EXTREG : (USB Offset: 0x008) (R/W 16) HOST HOST_DESC_BANK Host Bank, Extended -------- */

typedef union {
  struct {
    uint16_t SUBPID:4; /*!< bit:  0.. 3  SUBPID field send with extended token */
    uint16_t VARIABLE:11; /*!< bit:  4..14  Variable field send with extended token */
    uint16_t :1; /*!< bit:     15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_EXTREG_Type;
# 1562 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_DEVICE_STATUS_BK : (USB Offset: 0x00A) (R/W  8) DEVICE DEVICE_DESC_BANK Enpoint Bank, Status of Bank -------- */

typedef union {
  struct {
    uint8_t CRCERR:1; /*!< bit:      0  CRC Error Status                   */
    uint8_t ERRORFLOW:1; /*!< bit:      1  Error Flow Status                  */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_DEVICE_STATUS_BK_Type;
# 1582 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_STATUS_BK : (USB Offset: 0x00A) (R/W  8) HOST HOST_DESC_BANK Host Bank, Status of Bank -------- */

typedef union {
  struct {
    uint8_t CRCERR:1; /*!< bit:      0  CRC Error Status                   */
    uint8_t ERRORFLOW:1; /*!< bit:      1  Error Flow Status                  */
    uint8_t :6; /*!< bit:  2.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} USB_HOST_STATUS_BK_Type;
# 1602 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_CTRL_PIPE : (USB Offset: 0x00C) (R/W 16) HOST HOST_DESC_BANK Host Bank, Host Control Pipe -------- */

typedef union {
  struct {
    uint16_t PDADDR:7; /*!< bit:  0.. 6  Pipe Device Adress                 */
    uint16_t :1; /*!< bit:      7  Reserved                           */
    uint16_t PEPNUM:4; /*!< bit:  8..11  Pipe Endpoint Number               */
    uint16_t PERMAX:4; /*!< bit: 12..15  Pipe Error Max Number              */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_CTRL_PIPE_Type;
# 1629 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/* -------- USB_HOST_STATUS_PIPE : (USB Offset: 0x00E) (R/W 16) HOST HOST_DESC_BANK Host Bank, Host Status Pipe -------- */

typedef union {
  struct {
    uint16_t DTGLER:1; /*!< bit:      0  Data Toggle Error                  */
    uint16_t DAPIDER:1; /*!< bit:      1  Data PID Error                     */
    uint16_t PIDER:1; /*!< bit:      2  PID Error                          */
    uint16_t TOUTER:1; /*!< bit:      3  Time Out Error                     */
    uint16_t CRC16ER:1; /*!< bit:      4  CRC16 Error                        */
    uint16_t ERCNT:3; /*!< bit:  5.. 7  Pipe Error Count                   */
    uint16_t :8; /*!< bit:  8..15  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint16_t reg; /*!< Type      used for register access              */
} USB_HOST_STATUS_PIPE_Type;
# 1662 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/usb.h"
/** \brief UsbDeviceDescBank SRAM registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_ADDR_Type ADDR; /**< \brief Offset: 0x000 (R/W 32) DEVICE_DESC_BANK Endpoint Bank, Adress of Data Buffer */
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_PCKSIZE_Type PCKSIZE; /**< \brief Offset: 0x004 (R/W 32) DEVICE_DESC_BANK Endpoint Bank, Packet Size */
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_EXTREG_Type EXTREG; /**< \brief Offset: 0x008 (R/W 16) DEVICE_DESC_BANK Endpoint Bank, Extended */
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_STATUS_BK_Type STATUS_BK; /**< \brief Offset: 0x00A (R/W  8) DEVICE_DESC_BANK Enpoint Bank, Status of Bank */
       RoReg8 Reserved1[0x5];
} UsbDeviceDescBank;


/** \brief UsbHostDescBank SRAM registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_ADDR_Type ADDR; /**< \brief Offset: 0x000 (R/W 32) HOST_DESC_BANK Host Bank, Adress of Data Buffer */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_PCKSIZE_Type PCKSIZE; /**< \brief Offset: 0x004 (R/W 32) HOST_DESC_BANK Host Bank, Packet Size */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_EXTREG_Type EXTREG; /**< \brief Offset: 0x008 (R/W 16) HOST_DESC_BANK Host Bank, Extended */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_STATUS_BK_Type STATUS_BK; /**< \brief Offset: 0x00A (R/W  8) HOST_DESC_BANK Host Bank, Status of Bank */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_CTRL_PIPE_Type CTRL_PIPE; /**< \brief Offset: 0x00C (R/W 16) HOST_DESC_BANK Host Bank, Host Control Pipe */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_STATUS_PIPE_Type STATUS_PIPE; /**< \brief Offset: 0x00E (R/W 16) HOST_DESC_BANK Host Bank, Host Status Pipe */
} UsbHostDescBank;


/** \brief UsbDeviceEndpoint hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_EPCFG_Type EPCFG; /**< \brief Offset: 0x000 (R/W  8) DEVICE_ENDPOINT End Point Configuration */
       RoReg8 Reserved1[0x3];
  volatile /*!< Defines 'write only' permissions */ USB_DEVICE_EPSTATUSCLR_Type EPSTATUSCLR; /**< \brief Offset: 0x004 ( /W  8) DEVICE_ENDPOINT End Point Pipe Status Clear */
  volatile /*!< Defines 'write only' permissions */ USB_DEVICE_EPSTATUSSET_Type EPSTATUSSET; /**< \brief Offset: 0x005 ( /W  8) DEVICE_ENDPOINT End Point Pipe Status Set */
  volatile /*!< Defines 'read only' permissions */ USB_DEVICE_EPSTATUS_Type EPSTATUS; /**< \brief Offset: 0x006 (R/   8) DEVICE_ENDPOINT End Point Pipe Status */
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_EPINTFLAG_Type EPINTFLAG; /**< \brief Offset: 0x007 (R/W  8) DEVICE_ENDPOINT End Point Interrupt Flag */
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_EPINTENCLR_Type EPINTENCLR; /**< \brief Offset: 0x008 (R/W  8) DEVICE_ENDPOINT End Point Interrupt Clear Flag */
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_EPINTENSET_Type EPINTENSET; /**< \brief Offset: 0x009 (R/W  8) DEVICE_ENDPOINT End Point Interrupt Set Flag */
       RoReg8 Reserved2[0x16];
} UsbDeviceEndpoint;


/** \brief UsbHostPipe hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_PCFG_Type PCFG; /**< \brief Offset: 0x000 (R/W  8) HOST_PIPE End Point Configuration */
       RoReg8 Reserved1[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_BINTERVAL_Type BINTERVAL; /**< \brief Offset: 0x003 (R/W  8) HOST_PIPE Bus Access Period of Pipe */
  volatile /*!< Defines 'write only' permissions */ USB_HOST_PSTATUSCLR_Type PSTATUSCLR; /**< \brief Offset: 0x004 ( /W  8) HOST_PIPE End Point Pipe Status Clear */
  volatile /*!< Defines 'write only' permissions */ USB_HOST_PSTATUSSET_Type PSTATUSSET; /**< \brief Offset: 0x005 ( /W  8) HOST_PIPE End Point Pipe Status Set */
  volatile /*!< Defines 'read only' permissions */ USB_HOST_PSTATUS_Type PSTATUS; /**< \brief Offset: 0x006 (R/   8) HOST_PIPE End Point Pipe Status */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_PINTFLAG_Type PINTFLAG; /**< \brief Offset: 0x007 (R/W  8) HOST_PIPE Pipe Interrupt Flag */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_PINTENCLR_Type PINTENCLR; /**< \brief Offset: 0x008 (R/W  8) HOST_PIPE Pipe Interrupt Flag Clear */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_PINTENSET_Type PINTENSET; /**< \brief Offset: 0x009 (R/W  8) HOST_PIPE Pipe Interrupt Flag Set */
       RoReg8 Reserved2[0x16];
} UsbHostPipe;


/** \brief USB_DEVICE APB hardware registers */

typedef struct { /* USB is Device */
  volatile /*!< Defines 'read / write' permissions */ USB_CTRLA_Type CTRLA; /**< \brief Offset: 0x000 (R/W  8) Control A */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read only' permissions */ USB_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x002 (R/   8) Synchronization Busy */
  volatile /*!< Defines 'read / write' permissions */ USB_QOSCTRL_Type QOSCTRL; /**< \brief Offset: 0x003 (R/W  8) USB Quality Of Service */
       RoReg8 Reserved2[0x4];
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_CTRLB_Type CTRLB; /**< \brief Offset: 0x008 (R/W 16) DEVICE Control B */
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_DADD_Type DADD; /**< \brief Offset: 0x00A (R/W  8) DEVICE Device Address */
       RoReg8 Reserved3[0x1];
  volatile /*!< Defines 'read only' permissions */ USB_DEVICE_STATUS_Type STATUS; /**< \brief Offset: 0x00C (R/   8) DEVICE Status */
  volatile /*!< Defines 'read only' permissions */ USB_FSMSTATUS_Type FSMSTATUS; /**< \brief Offset: 0x00D (R/   8) Finite State Machine Status */
       RoReg8 Reserved4[0x2];
  volatile /*!< Defines 'read only' permissions */ USB_DEVICE_FNUM_Type FNUM; /**< \brief Offset: 0x010 (R/  16) DEVICE Device Frame Number */
       RoReg8 Reserved5[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x014 (R/W 16) DEVICE Device Interrupt Enable Clear */
       RoReg8 Reserved6[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_INTENSET_Type INTENSET; /**< \brief Offset: 0x018 (R/W 16) DEVICE Device Interrupt Enable Set */
       RoReg8 Reserved7[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_DEVICE_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x01C (R/W 16) DEVICE Device Interrupt Flag */
       RoReg8 Reserved8[0x2];
  volatile /*!< Defines 'read only' permissions */ USB_DEVICE_EPINTSMRY_Type EPINTSMRY; /**< \brief Offset: 0x020 (R/  16) DEVICE End Point Interrupt Summary */
       RoReg8 Reserved9[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_DESCADD_Type DESCADD; /**< \brief Offset: 0x024 (R/W 32) Descriptor Address */
  volatile /*!< Defines 'read / write' permissions */ USB_PADCAL_Type PADCAL; /**< \brief Offset: 0x028 (R/W 16) USB PAD Calibration */
       RoReg8 Reserved10[0xD6];
       UsbDeviceEndpoint DeviceEndpoint[8]; /**< \brief Offset: 0x100 UsbDeviceEndpoint groups [EPT_NUM] */
} UsbDevice;


/** \brief USB_HOST hardware registers */

typedef struct { /* USB is Host */
  volatile /*!< Defines 'read / write' permissions */ USB_CTRLA_Type CTRLA; /**< \brief Offset: 0x000 (R/W  8) Control A */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read only' permissions */ USB_SYNCBUSY_Type SYNCBUSY; /**< \brief Offset: 0x002 (R/   8) Synchronization Busy */
  volatile /*!< Defines 'read / write' permissions */ USB_QOSCTRL_Type QOSCTRL; /**< \brief Offset: 0x003 (R/W  8) USB Quality Of Service */
       RoReg8 Reserved2[0x4];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_CTRLB_Type CTRLB; /**< \brief Offset: 0x008 (R/W 16) HOST Control B */
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_HSOFC_Type HSOFC; /**< \brief Offset: 0x00A (R/W  8) HOST Host Start Of Frame Control */
       RoReg8 Reserved3[0x1];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_STATUS_Type STATUS; /**< \brief Offset: 0x00C (R/W  8) HOST Status */
  volatile /*!< Defines 'read only' permissions */ USB_FSMSTATUS_Type FSMSTATUS; /**< \brief Offset: 0x00D (R/   8) Finite State Machine Status */
       RoReg8 Reserved4[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_FNUM_Type FNUM; /**< \brief Offset: 0x010 (R/W 16) HOST Host Frame Number */
  volatile /*!< Defines 'read only' permissions */ USB_HOST_FLENHIGH_Type FLENHIGH; /**< \brief Offset: 0x012 (R/   8) HOST Host Frame Length */
       RoReg8 Reserved5[0x1];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x014 (R/W 16) HOST Host Interrupt Enable Clear */
       RoReg8 Reserved6[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_INTENSET_Type INTENSET; /**< \brief Offset: 0x018 (R/W 16) HOST Host Interrupt Enable Set */
       RoReg8 Reserved7[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_HOST_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x01C (R/W 16) HOST Host Interrupt Flag */
       RoReg8 Reserved8[0x2];
  volatile /*!< Defines 'read only' permissions */ USB_HOST_PINTSMRY_Type PINTSMRY; /**< \brief Offset: 0x020 (R/  16) HOST Pipe Interrupt Summary */
       RoReg8 Reserved9[0x2];
  volatile /*!< Defines 'read / write' permissions */ USB_DESCADD_Type DESCADD; /**< \brief Offset: 0x024 (R/W 32) Descriptor Address */
  volatile /*!< Defines 'read / write' permissions */ USB_PADCAL_Type PADCAL; /**< \brief Offset: 0x028 (R/W 16) USB PAD Calibration */
       RoReg8 Reserved10[0xD6];
       UsbHostPipe HostPipe[8]; /**< \brief Offset: 0x100 UsbHostPipe groups [EPT_NUM*HOST_IMPLEMENTED] */
} UsbHost;


/** \brief USB_DEVICE Descriptor SRAM registers */

typedef struct { /* USB is Device */
       UsbDeviceDescBank DeviceDescBank[2]; /**< \brief Offset: 0x000 UsbDeviceDescBank groups */
} UsbDeviceDescriptor;


/** \brief USB_HOST Descriptor SRAM registers */

typedef struct { /* USB is Host */
       UsbHostDescBank HostDescBank[2]; /**< \brief Offset: 0x000 UsbHostDescBank groups [2*HOST_IMPLEMENTED] */
} UsbHostDescriptor;





typedef union {
       UsbDevice DEVICE; /**< \brief Offset: 0x000 USB is Device */
       UsbHost HOST; /**< \brief Offset: 0x000 USB is Host */
} Usb;


/*@}*/
# 271 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h" 1
/**
 * \file
 *
 * \brief Component description for WDT
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR WDT */
/* ========================================================================== */
/** \addtogroup SAMD21_WDT Watchdog Timer */
/*@{*/




/* -------- WDT_CTRL : (WDT Offset: 0x0) (R/W  8) Control -------- */

typedef union {
  struct {
    uint8_t :1; /*!< bit:      0  Reserved                           */
    uint8_t ENABLE:1; /*!< bit:      1  Enable                             */
    uint8_t WEN:1; /*!< bit:      2  Watchdog Timer Window Mode Enable  */
    uint8_t :4; /*!< bit:  3.. 6  Reserved                           */
    uint8_t ALWAYSON:1; /*!< bit:      7  Always-On                          */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_CTRL_Type;
# 81 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/* -------- WDT_CONFIG : (WDT Offset: 0x1) (R/W  8) Configuration -------- */

typedef union {
  struct {
    uint8_t PER:4; /*!< bit:  0.. 3  Time-Out Period                    */
    uint8_t WINDOW:4; /*!< bit:  4.. 7  Window Mode Time-Out Period        */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_CONFIG_Type;
# 151 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/* -------- WDT_EWCTRL : (WDT Offset: 0x2) (R/W  8) Early Warning Interrupt Control -------- */

typedef union {
  struct {
    uint8_t EWOFFSET:4; /*!< bit:  0.. 3  Early Warning Interrupt Time Offset */
    uint8_t :4; /*!< bit:  4.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_EWCTRL_Type;
# 194 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/* -------- WDT_INTENCLR : (WDT Offset: 0x4) (R/W  8) Interrupt Enable Clear -------- */

typedef union {
  struct {
    uint8_t EW:1; /*!< bit:      0  Early Warning Interrupt Enable     */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_INTENCLR_Type;
# 212 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/* -------- WDT_INTENSET : (WDT Offset: 0x5) (R/W  8) Interrupt Enable Set -------- */

typedef union {
  struct {
    uint8_t EW:1; /*!< bit:      0  Early Warning Interrupt Enable     */
    uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_INTENSET_Type;
# 230 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/* -------- WDT_INTFLAG : (WDT Offset: 0x6) (R/W  8) Interrupt Flag Status and Clear -------- */

typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    volatile /*!< Defines 'read only' permissions */ uint8_t EW:1; /*!< bit:      0  Early Warning                      */
    volatile /*!< Defines 'read only' permissions */ uint8_t :7; /*!< bit:  1.. 7  Reserved                           */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_INTFLAG_Type;
# 248 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/* -------- WDT_STATUS : (WDT Offset: 0x7) (R/   8) Status -------- */

typedef union {
  struct {
    uint8_t :7; /*!< bit:  0.. 6  Reserved                           */
    uint8_t SYNCBUSY:1; /*!< bit:      7  Synchronization Busy               */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_STATUS_Type;
# 266 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/* -------- WDT_CLEAR : (WDT Offset: 0x8) ( /W  8) Clear -------- */

typedef union {
  struct {
    uint8_t CLEAR:8; /*!< bit:  0.. 7  Watchdog Clear                     */
  } bit; /*!< Structure used for bit  access                  */
  uint8_t reg; /*!< Type      used for register access              */
} WDT_CLEAR_Type;
# 286 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/component/wdt.h"
/** \brief WDT hardware registers */

typedef struct {
  volatile /*!< Defines 'read / write' permissions */ WDT_CTRL_Type CTRL; /**< \brief Offset: 0x0 (R/W  8) Control */
  volatile /*!< Defines 'read / write' permissions */ WDT_CONFIG_Type CONFIG; /**< \brief Offset: 0x1 (R/W  8) Configuration */
  volatile /*!< Defines 'read / write' permissions */ WDT_EWCTRL_Type EWCTRL; /**< \brief Offset: 0x2 (R/W  8) Early Warning Interrupt Control */
       RoReg8 Reserved1[0x1];
  volatile /*!< Defines 'read / write' permissions */ WDT_INTENCLR_Type INTENCLR; /**< \brief Offset: 0x4 (R/W  8) Interrupt Enable Clear */
  volatile /*!< Defines 'read / write' permissions */ WDT_INTENSET_Type INTENSET; /**< \brief Offset: 0x5 (R/W  8) Interrupt Enable Set */
  volatile /*!< Defines 'read / write' permissions */ WDT_INTFLAG_Type INTFLAG; /**< \brief Offset: 0x6 (R/W  8) Interrupt Flag Status and Clear */
  volatile /*!< Defines 'read only' permissions */ WDT_STATUS_Type STATUS; /**< \brief Offset: 0x7 (R/   8) Status */
  volatile /*!< Defines 'write only' permissions */ WDT_CLEAR_Type CLEAR; /**< \brief Offset: 0x8 ( /W  8) Clear */
} Wdt;


/*@}*/
# 272 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
/*@}*/

/* ************************************************************************** */
/**  REGISTERS ACCESS DEFINITIONS FOR SAMD21G18A */
/* ************************************************************************** */
/** \defgroup SAMD21G18A_reg Registers Access Definitions */
/*@{*/

# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/ac.h" 1
/**
 * \file
 *
 * \brief Instance description for AC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for AC peripheral ========== */
# 80 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/ac.h"
/* ========== Instance parameters for AC peripheral ========== */
# 281 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/adc.h" 1
/**
 * \file
 *
 * \brief Instance description for ADC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for ADC peripheral ========== */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/adc.h"
/* ========== Instance parameters for ADC peripheral ========== */
# 282 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/dac.h" 1
/**
 * \file
 *
 * \brief Instance description for DAC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for DAC peripheral ========== */
# 70 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/dac.h"
/* ========== Instance parameters for DAC peripheral ========== */
# 283 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/dmac.h" 1
/**
 * \file
 *
 * \brief Instance description for DMAC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for DMAC peripheral ========== */
# 98 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/dmac.h"
/* ========== Instance parameters for DMAC peripheral ========== */
# 284 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/dsu.h" 1
/**
 * \file
 *
 * \brief Instance description for DSU
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for DSU peripheral ========== */
# 96 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/dsu.h"
/* ========== Instance parameters for DSU peripheral ========== */
# 285 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/eic.h" 1
/**
 * \file
 *
 * \brief Instance description for EIC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for EIC peripheral ========== */
# 74 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/eic.h"
/* ========== Instance parameters for EIC peripheral ========== */
# 286 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/evsys.h" 1
/**
 * \file
 *
 * \brief Instance description for EVSYS
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for EVSYS peripheral ========== */
# 66 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/evsys.h"
/* ========== Instance parameters for EVSYS peripheral ========== */
# 91 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/evsys.h"
// GENERATORS
# 166 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/evsys.h"
// USERS
# 287 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/gclk.h" 1
/**
 * \file
 *
 * \brief Instance description for GCLK
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for GCLK peripheral ========== */
# 62 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/gclk.h"
/* ========== Instance parameters for GCLK peripheral ========== */
# 288 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sbmatrix.h" 1
/**
 * \file
 *
 * \brief Instance description for SBMATRIX
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SBMATRIX peripheral ========== */
# 148 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sbmatrix.h"
/* ========== Instance parameters for SBMATRIX peripheral ========== */

/* ========== Instance parameters for SBMATRIX ========== */
# 289 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/i2s.h" 1
/**
 * \file
 *
 * \brief Instance description for I2S
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for I2S peripheral ========== */
# 74 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/i2s.h"
/* ========== Instance parameters for I2S peripheral ========== */
# 290 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/mtb.h" 1
/**
 * \file
 *
 * \brief Instance description for MTB
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for MTB peripheral ========== */
# 291 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/nvmctrl.h" 1
/**
 * \file
 *
 * \brief Instance description for NVMCTRL
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for NVMCTRL peripheral ========== */
# 70 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/nvmctrl.h"
/* ========== Instance parameters for NVMCTRL peripheral ========== */
# 292 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pac0.h" 1
/**
 * \file
 *
 * \brief Instance description for PAC0
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for PAC0 peripheral ========== */
# 56 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pac0.h"
/* ========== Instance parameters for PAC0 peripheral ========== */
# 293 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pac1.h" 1
/**
 * \file
 *
 * \brief Instance description for PAC1
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for PAC1 peripheral ========== */
# 56 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pac1.h"
/* ========== Instance parameters for PAC1 peripheral ========== */
# 294 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pac2.h" 1
/**
 * \file
 *
 * \brief Instance description for PAC2
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for PAC2 peripheral ========== */
# 56 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pac2.h"
/* ========== Instance parameters for PAC2 peripheral ========== */
# 295 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pm.h" 1
/**
 * \file
 *
 * \brief Instance description for PM
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for PM peripheral ========== */
# 80 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/pm.h"
/* ========== Instance parameters for PM peripheral ========== */
# 296 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/port.h" 1
/**
 * \file
 *
 * \brief Instance description for PORT
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for PORT peripheral ========== */
# 104 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/port.h"
/* ========== Instance parameters for PORT peripheral ========== */
# 297 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/rtc.h" 1
/**
 * \file
 *
 * \brief Instance description for RTC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for RTC peripheral ========== */
# 108 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/rtc.h"
/* ========== Instance parameters for RTC peripheral ========== */
# 298 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom0.h" 1
/**
 * \file
 *
 * \brief Instance description for SERCOM0
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SERCOM0 peripheral ========== */
# 136 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom0.h"
/* ========== Instance parameters for SERCOM0 peripheral ========== */
# 299 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom1.h" 1
/**
 * \file
 *
 * \brief Instance description for SERCOM1
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SERCOM1 peripheral ========== */
# 136 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom1.h"
/* ========== Instance parameters for SERCOM1 peripheral ========== */
# 300 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom2.h" 1
/**
 * \file
 *
 * \brief Instance description for SERCOM2
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SERCOM2 peripheral ========== */
# 136 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom2.h"
/* ========== Instance parameters for SERCOM2 peripheral ========== */
# 301 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom3.h" 1
/**
 * \file
 *
 * \brief Instance description for SERCOM3
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SERCOM3 peripheral ========== */
# 136 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom3.h"
/* ========== Instance parameters for SERCOM3 peripheral ========== */
# 302 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom4.h" 1
/**
 * \file
 *
 * \brief Instance description for SERCOM4
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SERCOM4 peripheral ========== */
# 136 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom4.h"
/* ========== Instance parameters for SERCOM4 peripheral ========== */
# 303 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom5.h" 1
/**
 * \file
 *
 * \brief Instance description for SERCOM5
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SERCOM5 peripheral ========== */
# 136 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sercom5.h"
/* ========== Instance parameters for SERCOM5 peripheral ========== */
# 304 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sysctrl.h" 1
/**
 * \file
 *
 * \brief Instance description for SYSCTRL
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for SYSCTRL peripheral ========== */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/sysctrl.h"
/* ========== Instance parameters for SYSCTRL peripheral ========== */
# 305 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tc3.h" 1
/**
 * \file
 *
 * \brief Instance description for TC3
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for TC3 peripheral ========== */
# 94 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tc3.h"
/* ========== Instance parameters for TC3 peripheral ========== */
# 306 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tc4.h" 1
/**
 * \file
 *
 * \brief Instance description for TC4
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for TC4 peripheral ========== */
# 94 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tc4.h"
/* ========== Instance parameters for TC4 peripheral ========== */
# 307 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tc5.h" 1
/**
 * \file
 *
 * \brief Instance description for TC5
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for TC5 peripheral ========== */
# 94 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tc5.h"
/* ========== Instance parameters for TC5 peripheral ========== */
# 308 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tcc0.h" 1
/**
 * \file
 *
 * \brief Instance description for TCC0
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for TCC0 peripheral ========== */
# 110 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tcc0.h"
/* ========== Instance parameters for TCC0 peripheral ========== */
# 309 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tcc1.h" 1
/**
 * \file
 *
 * \brief Instance description for TCC1
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for TCC1 peripheral ========== */
# 100 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tcc1.h"
/* ========== Instance parameters for TCC1 peripheral ========== */
# 310 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tcc2.h" 1
/**
 * \file
 *
 * \brief Instance description for TCC2
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for TCC2 peripheral ========== */
# 96 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/tcc2.h"
/* ========== Instance parameters for TCC2 peripheral ========== */
# 311 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/usb.h" 1
/**
 * \file
 *
 * \brief Instance description for USB
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for USB peripheral ========== */
# 338 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/usb.h"
/* ========== Instance parameters for USB peripheral ========== */
# 312 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/wdt.h" 1
/**
 * \file
 *
 * \brief Instance description for WDT
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */




/* ========== Register definition for WDT peripheral ========== */
# 68 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/instance/wdt.h"
/* ========== Instance parameters for WDT peripheral ========== */
# 313 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
/*@}*/

/* ************************************************************************** */
/**  PERIPHERAL ID DEFINITIONS FOR SAMD21G18A */
/* ************************************************************************** */
/** \defgroup SAMD21G18A_id Peripheral Ids Definitions */
/*@{*/

// Peripheral instances on HPB0 bridge
# 330 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h"
// Peripheral instances on HPB1 bridge
# 340 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h"
// Peripheral instances on HPB2 bridge
# 362 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h"
/*@}*/

/* ************************************************************************** */
/**  BASE ADDRESS DEFINITIONS FOR SAMD21G18A */
/* ************************************************************************** */
/** \defgroup SAMD21G18A_base Peripheral Base Address Definitions */
/*@{*/
# 525 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h"
/*@}*/

/* ************************************************************************** */
/**  PORT DEFINITIONS FOR SAMD21G18A */
/* ************************************************************************** */
/** \defgroup SAMD21G18A_port PORT Definitions */
/*@{*/

# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h" 1
/**
 * \file
 *
 * \brief Peripheral I/O description for SAMD21G18A
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */
# 123 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for GCLK peripheral ========== */
# 192 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for EIC peripheral ========== */
# 345 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for USB peripheral ========== */
# 358 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for SERCOM0 peripheral ========== */
# 391 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for SERCOM1 peripheral ========== */
# 424 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for SERCOM2 peripheral ========== */
# 457 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for SERCOM3 peripheral ========== */
# 498 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for SERCOM4 peripheral ========== */
# 531 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for SERCOM5 peripheral ========== */
# 572 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for TCC0 peripheral ========== */
# 653 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for TCC1 peripheral ========== */
# 694 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for TCC2 peripheral ========== */
# 719 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for TC3 peripheral ========== */
# 736 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for TC4 peripheral ========== */
# 753 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for TC5 peripheral ========== */
# 770 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for ADC peripheral ========== */
# 831 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for AC peripheral ========== */
# 864 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for DAC peripheral ========== */
# 873 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/pio/samd21g18a.h"
/* ========== PORT definition for I2S peripheral ========== */
# 534 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h" 2
/*@}*/

/* ************************************************************************** */
/**  MEMORY MAPPING DEFINITIONS FOR SAMD21G18A */
/* ************************************************************************** */
# 558 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21g18a.h"
/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAMD21G18A */
/* ************************************************************************** */



}


/*@}*/
# 70 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd21/include/samd21.h" 2
# 106 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/samd.h" 2
# 471 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h" 2
# 49 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/wiring_constants.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C"{
# 44 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/wiring_constants.h"
enum BitOrder {
 LSBFIRST = 0,
 MSBFIRST = 1
};

// moved to WInterrupts.h
////      LOW 0
////      HIGH 1
//#define CHANGE 2
//#define FALLING 3
//#define RISING 4
//
//#define DEFAULT 1
//#define EXTERNAL 0


} // extern "C"
# 51 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2





void yield( void ) ;

/* system functions */
int main( void );
void init( void );

/* sketch */
void setup( void ) ;
void loop( void ) ;

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WVariant.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       


# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h" 1
/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2015, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following condition is met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */
# 23 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WVariant.h" 2


extern "C" {


/* Definitions and types for pins */
typedef enum _EAnalogChannel
{
  No_ADC_Channel=-1,
  ADC_Channel0=0,
  ADC_Channel1=1,
  ADC_Channel2=2,
  ADC_Channel3=3,
  ADC_Channel4=4,
  ADC_Channel5=5,
  ADC_Channel6=6,
  ADC_Channel7=7,




  ADC_Channel10=10,
  ADC_Channel11=11,






  ADC_Channel16=16,
  ADC_Channel17=17,
  ADC_Channel18=18,
  ADC_Channel19=19,
  DAC_Channel0,
} EAnalogChannel ;

// Definitions for TC channels
typedef enum _ETCChannel
{
  NOT_ON_TIMER=-1,
  TCC0_CH0 = (0<<8)|(0),
  TCC0_CH1 = (0<<8)|(1),
  TCC0_CH2 = (0<<8)|(2),
  TCC0_CH3 = (0<<8)|(3),
  TCC0_CH4 = (0<<8)|(0), // Channel 4 is 0!
  TCC0_CH5 = (0<<8)|(1), // Channel 5 is 1!
  TCC0_CH6 = (0<<8)|(2), // Channel 6 is 2!
  TCC0_CH7 = (0<<8)|(3), // Channel 7 is 3!
  TCC1_CH0 = (1<<8)|(0),
  TCC1_CH1 = (1<<8)|(1),
  TCC1_CH2 = (1<<8)|(0), // Channel 2 is 0!
  TCC1_CH3 = (1<<8)|(1), // Channel 3 is 1!
  TCC2_CH0 = (2<<8)|(0),
  TCC2_CH1 = (2<<8)|(1),
  TCC2_CH2 = (2<<8)|(0), // Channel 2 is 0!
  TCC2_CH3 = (2<<8)|(1), // Channel 3 is 1!
  TC3_CH0 = (3<<8)|(0),
  TC3_CH1 = (3<<8)|(1),
  TC4_CH0 = (4<<8)|(0),
  TC4_CH1 = (4<<8)|(1),
  TC5_CH0 = (5<<8)|(0),
  TC5_CH1 = (5<<8)|(1),






} ETCChannel ;

extern const void* g_apTCInstances[3 /**< \brief (TCC) Number of instances */+3 /**< \brief (TC) Number of instances */] ;





// Definitions for PWM channels
typedef enum _EPWMChannel
{
  NOT_ON_PWM=-1,
  PWM0_CH0=TCC0_CH0,
  PWM0_CH1=TCC0_CH1,
  PWM0_CH2=TCC0_CH2,
  PWM0_CH3=TCC0_CH3,
  PWM0_CH4=TCC0_CH4,
  PWM0_CH5=TCC0_CH5,
  PWM0_CH6=TCC0_CH6,
  PWM0_CH7=TCC0_CH7,
  PWM1_CH0=TCC1_CH0,
  PWM1_CH1=TCC1_CH1,
  PWM1_CH2=TCC1_CH2,
  PWM1_CH3=TCC1_CH3,
  PWM2_CH0=TCC2_CH0,
  PWM2_CH1=TCC2_CH1,
  PWM2_CH2=TCC2_CH2,
  PWM2_CH3=TCC2_CH3,
  PWM3_CH0=TC3_CH0,
  PWM3_CH1=TC3_CH1,
  PWM4_CH0=TC4_CH0,
  PWM4_CH1=TC4_CH1,
  PWM5_CH0=TC5_CH0,
  PWM5_CH1=TC5_CH1,






} EPWMChannel ;

typedef enum _EPortType
{
  NOT_A_PORT=-1,
  PORTA=0,
  PORTB=1,
  PORTC=2,
} EPortType ;

typedef enum
{
  EXTERNAL_INT_0 = 0,
  EXTERNAL_INT_1,
  EXTERNAL_INT_2,
  EXTERNAL_INT_3,
  EXTERNAL_INT_4,
  EXTERNAL_INT_5,
  EXTERNAL_INT_6,
  EXTERNAL_INT_7,
  EXTERNAL_INT_8,
  EXTERNAL_INT_9,
  EXTERNAL_INT_10,
  EXTERNAL_INT_11,
  EXTERNAL_INT_12,
  EXTERNAL_INT_13,
  EXTERNAL_INT_14,
  EXTERNAL_INT_15,
  EXTERNAL_INT_NMI,
  EXTERNAL_NUM_INTERRUPTS,
  NOT_AN_INTERRUPT = -1,
  EXTERNAL_INT_NONE = NOT_AN_INTERRUPT,
} EExt_Interrupts ;

//A    B                 C       D          E      F   G   H
//EIC REF ADC AC PTC DAC SERCOM SERCOM_ALT TC/TCC TCC COM AC/GCLK

typedef enum _EPioType
{
  PIO_NOT_A_PIN=-1, /* Not under control of a peripheral. */
  PIO_EXTINT=0, /* The pin is controlled by the associated signal of peripheral A. */
  PIO_ANALOG, /* The pin is controlled by the associated signal of peripheral B. */
  PIO_SERCOM, /* The pin is controlled by the associated signal of peripheral C. */
  PIO_SERCOM_ALT, /* The pin is controlled by the associated signal of peripheral D. */
  PIO_TIMER, /* The pin is controlled by the associated signal of peripheral E. */
  PIO_TIMER_ALT, /* The pin is controlled by the associated signal of peripheral F. */
  PIO_COM, /* The pin is controlled by the associated signal of peripheral G. */
  PIO_AC_CLK, /* The pin is controlled by the associated signal of peripheral H. */
  PIO_DIGITAL, /* The pin is controlled by PORT. */
  PIO_INPUT, /* The pin is controlled by PORT and is an input. */
  PIO_INPUT_PULLUP, /* The pin is controlled by PORT and is an input with internal pull-up resistor enabled. */
  PIO_OUTPUT, /* The pin is controlled by PORT and is an output. */

  PIO_PWM=PIO_TIMER,
  PIO_PWM_ALT=PIO_TIMER_ALT,
} EPioType ;

/**
 * Pin Attributes to be OR-ed
 */
# 200 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WVariant.h"
/* Types used for the table below */
typedef struct _PinDescription
{
  EPortType ulPort ;
  uint32_t ulPin ;
  EPioType ulPinType ;
  uint32_t ulPinAttribute ;
  EAnalogChannel ulADCChannelNumber ; /* ADC Channel number in the SAM device */
  EPWMChannel ulPWMChannel ;
  ETCChannel ulTCChannel ;
  EExt_Interrupts ulExtInt ;
} PinDescription ;

/* Pins table to be instantiated into variant.cpp */
extern const PinDescription g_APinDescription[] ;

/* Generic Clock Multiplexer IDs */
# 256 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WVariant.h"
} // extern "C"
# 67 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2


} // extern "C"


// The following headers are for C++ only compilation

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WCharacter.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/ctype.h" 1 3



# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 5 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/ctype.h" 2 3

extern "C" {

int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);


int isblank (int __c);



int isascii (int __c);
int toascii (int __c);
# 43 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/ctype.h" 3
const

extern char *__ctype_ptr__;
# 108 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/ctype.h" 3
/* For C++ backward-compatibility only.  */
extern const char _ctype_[];

}
# 23 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WCharacter.h" 2


extern "C" {


// WCharacter.h prototypes

inline boolean isAlphaNumeric(int c) __attribute__((always_inline));
inline boolean isAlpha(int c) __attribute__((always_inline));
inline boolean isAscii(int c) __attribute__((always_inline));
inline boolean isWhitespace(int c) __attribute__((always_inline));
inline boolean isControl(int c) __attribute__((always_inline));
inline boolean isDigit(int c) __attribute__((always_inline));
inline boolean isGraph(int c) __attribute__((always_inline));
inline boolean isLowerCase(int c) __attribute__((always_inline));
inline boolean isPrintable(int c) __attribute__((always_inline));
inline boolean isPunct(int c) __attribute__((always_inline));
inline boolean isSpace(int c) __attribute__((always_inline));
inline boolean isUpperCase(int c) __attribute__((always_inline));
inline boolean isHexadecimalDigit(int c) __attribute__((always_inline));
inline int toAscii(int c) __attribute__((always_inline));
inline int toLowerCase(int c) __attribute__((always_inline));
inline int toUpperCase(int c)__attribute__((always_inline));



// Checks for an alphanumeric character.
// It is equivalent to (isalpha(c) || isdigit(c)).
inline boolean isAlphaNumeric(int c)
{
  return ( isalnum(c) == 0 ? false : true);
}


// Checks for an alphabetic character.
// It is equivalent to (isupper(c) || islower(c)).
inline boolean isAlpha(int c)
{
  return ( isalpha(c) == 0 ? false : true);
}


// Checks whether c is a 7-bit unsigned char value
// that fits into the ASCII character set.
inline boolean isAscii(int c)
{
/*  return ( isascii(c) == 0 ? false : true); */
  return ( (c & ~0x7f) != 0 ? false : true);
}


// Checks for a blank character, that is, a space or a tab.
inline boolean isWhitespace(int c)
{
  return ( isblank (c) == 0 ? false : true);
}


// Checks for a control character.
inline boolean isControl(int c)
{
  return ( iscntrl (c) == 0 ? false : true);
}


// Checks for a digit (0 through 9).
inline boolean isDigit(int c)
{
  return ( isdigit (c) == 0 ? false : true);
}


// Checks for any printable character except space.
inline boolean isGraph(int c)
{
  return ( isgraph (c) == 0 ? false : true);
}


// Checks for a lower-case character.
inline boolean isLowerCase(int c)
{
  return (islower (c) == 0 ? false : true);
}


// Checks for any printable character including space.
inline boolean isPrintable(int c)
{
  return ( isprint (c) == 0 ? false : true);
}


// Checks for any printable character which is not a space
// or an alphanumeric character.
inline boolean isPunct(int c)
{
  return ( ispunct (c) == 0 ? false : true);
}


// Checks for white-space characters. For the avr-libc library,
// these are: space, formfeed ('\f'), newline ('\n'), carriage
// return ('\r'), horizontal tab ('\t'), and vertical tab ('\v').
inline boolean isSpace(int c)
{
  return ( isspace (c) == 0 ? false : true);
}


// Checks for an uppercase letter.
inline boolean isUpperCase(int c)
{
  return ( isupper (c) == 0 ? false : true);
}


// Checks for a hexadecimal digits, i.e. one of 0 1 2 3 4 5 6 7
// 8 9 a b c d e f A B C D E F.
inline boolean isHexadecimalDigit(int c)
{
  return ( isxdigit (c) == 0 ? false : true);
}


// Converts c to a 7-bit unsigned char value that fits into the
// ASCII character set, by clearing the high-order bits.
inline int toAscii(int c)
{
/*  return toascii (c); */
  return (c & 0x7f);
}


// Warning:
// Many people will be unhappy if you use this function.
// This function will convert accented letters into random
// characters.

// Converts the letter c to lower case, if possible.
inline int toLowerCase(int c)
{
  return tolower (c);
}


// Converts the letter c to upper case, if possible.
inline int toUpperCase(int c)
{
  return toupper (c);
}


}
# 75 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */
# 27 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WString.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/string.h" 1 3
/*
 * string.h
 *
 * Definitions for memory and string functions.
 */
# 28 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WString.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/avr/pgmspace.h" 1
/*
  pgmspace.h - Definitions for compatibility with AVR pgmspace macros

  Copyright (c) 2015 Arduino LLC

  Based on work of Paul Stoffregen on Teensy 3 (http://pjrc.com)

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE
*/
# 30 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WString.h" 2

// When compiling programs with this class, the following gcc parameters
// dramatically increase performance and memory (RAM) efficiency, typically
// with little or no increase in code size.
//     -felide-constructors
//     -std=c++0x

class __FlashStringHelper;


// An inherited class for holding the result of a concatenation.  These
// result objects are assumed to be writable by subsequent concatenations.
class StringSumHelper;

// The string class
class String
{
 // use a function pointer to allow for "if (s)" without the
 // complications of an operator bool(). for more information, see:
 // http://www.artima.com/cppsource/safebool.html
 typedef void (String::*StringIfHelperType)() const;
 void StringIfHelper() const {}

public:
 // constructors
 // creates a copy of the initial value.
 // if the initial value is null or invalid, or if memory allocation
 // fails, the string will be marked as invalid (i.e. "if (s)" will
 // be false).
 String(const char *cstr = "");
 String(const String &str);
 String(const __FlashStringHelper *str);

 String(String &&rval);
 String(StringSumHelper &&rval);

 explicit String(char c);
 explicit String(unsigned char, unsigned char base=10);
 explicit String(int, unsigned char base=10);
 explicit String(unsigned int, unsigned char base=10);
 explicit String(long, unsigned char base=10);
 explicit String(unsigned long, unsigned char base=10);
 explicit String(float, unsigned char decimalPlaces=2);
 explicit String(double, unsigned char decimalPlaces=2);
 ~String(void);

 // memory management
 // return true on success, false on failure (in which case, the string
 // is left unchanged).  reserve(0), if successful, will validate an
 // invalid string (i.e., "if (s)" will be true afterwards)
 unsigned char reserve(unsigned int size);
 inline unsigned int length(void) const {return len;}

 // creates a copy of the assigned value.  if the value is null or
 // invalid, or if the memory allocation fails, the string will be
 // marked as invalid ("if (s)" will be false).
 String & operator = (const String &rhs);
 String & operator = (const char *cstr);
 String & operator = (const __FlashStringHelper *str);

 String & operator = (String &&rval);
 String & operator = (StringSumHelper &&rval);


 // concatenate (works w/ built-in types)

 // returns true on success, false on failure (in which case, the string
 // is left unchanged).  if the argument is null or invalid, the
 // concatenation is considered unsucessful.
 unsigned char concat(const String &str);
 unsigned char concat(const char *cstr);
 unsigned char concat(char c);
 unsigned char concat(unsigned char c);
 unsigned char concat(int num);
 unsigned char concat(unsigned int num);
 unsigned char concat(long num);
 unsigned char concat(unsigned long num);
 unsigned char concat(float num);
 unsigned char concat(double num);
 unsigned char concat(const __FlashStringHelper * str);

 // if there's not enough memory for the concatenated value, the string
 // will be left unchanged (but this isn't signalled in any way)
 String & operator += (const String &rhs) {concat(rhs); return (*this);}
 String & operator += (const char *cstr) {concat(cstr); return (*this);}
 String & operator += (char c) {concat(c); return (*this);}
 String & operator += (unsigned char num) {concat(num); return (*this);}
 String & operator += (int num) {concat(num); return (*this);}
 String & operator += (unsigned int num) {concat(num); return (*this);}
 String & operator += (long num) {concat(num); return (*this);}
 String & operator += (unsigned long num) {concat(num); return (*this);}
 String & operator += (float num) {concat(num); return (*this);}
 String & operator += (double num) {concat(num); return (*this);}
 String & operator += (const __FlashStringHelper *str){concat(str); return (*this);}

 friend StringSumHelper & operator + (const StringSumHelper &lhs, const String &rhs);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const char *cstr);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, char c);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned char num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned int num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, unsigned long num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, float num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, double num);
 friend StringSumHelper & operator + (const StringSumHelper &lhs, const __FlashStringHelper *rhs);

 // comparison (only works w/ Strings and "strings")
 operator StringIfHelperType() const { return buffer ? &String::StringIfHelper : 0; }
 int compareTo(const String &s) const;
 unsigned char equals(const String &s) const;
 unsigned char equals(const char *cstr) const;
 unsigned char operator == (const String &rhs) const {return equals(rhs);}
 unsigned char operator == (const char *cstr) const {return equals(cstr);}
 unsigned char operator != (const String &rhs) const {return !equals(rhs);}
 unsigned char operator != (const char *cstr) const {return !equals(cstr);}
 unsigned char operator < (const String &rhs) const;
 unsigned char operator > (const String &rhs) const;
 unsigned char operator <= (const String &rhs) const;
 unsigned char operator >= (const String &rhs) const;
 unsigned char equalsIgnoreCase(const String &s) const;
 unsigned char startsWith( const String &prefix) const;
 unsigned char startsWith(const String &prefix, unsigned int offset) const;
 unsigned char endsWith(const String &suffix) const;

 // character acccess
 char charAt(unsigned int index) const;
 void setCharAt(unsigned int index, char c);
 char operator [] (unsigned int index) const;
 char& operator [] (unsigned int index);
 void getBytes(unsigned char *buf, unsigned int bufsize, unsigned int index=0) const;
 void toCharArray(char *buf, unsigned int bufsize, unsigned int index=0) const
  { getBytes((unsigned char *)buf, bufsize, index); }
 const char* c_str() const { return buffer; }
 char* begin() { return buffer; }
 char* end() { return buffer + length(); }
 const char* begin() const { return c_str(); }
 const char* end() const { return c_str() + length(); }

 // search
 int indexOf( char ch ) const;
 int indexOf( char ch, unsigned int fromIndex ) const;
 int indexOf( const String &str ) const;
 int indexOf( const String &str, unsigned int fromIndex ) const;
 int lastIndexOf( char ch ) const;
 int lastIndexOf( char ch, unsigned int fromIndex ) const;
 int lastIndexOf( const String &str ) const;
 int lastIndexOf( const String &str, unsigned int fromIndex ) const;
 String substring( unsigned int beginIndex ) const { return substring(beginIndex, len); };
 String substring( unsigned int beginIndex, unsigned int endIndex ) const;

 // modification
 void replace(char find, char replace);
 void replace(const String& find, const String& replace);
 void remove(unsigned int index);
 void remove(unsigned int index, unsigned int count);
 void toLowerCase(void);
 void toUpperCase(void);
 void trim(void);

 // parsing/conversion
 long toInt(void) const;
 float toFloat(void) const;
 double toDouble(void) const;

protected:
 char *buffer; // the actual char array
 unsigned int capacity; // the array length minus one (for the '\0')
 unsigned int len; // the String length (not counting the '\0')
protected:
 void init(void);
 void invalidate(void);
 unsigned char changeBuffer(unsigned int maxStrLen);
 unsigned char concat(const char *cstr, unsigned int length);

 // copy and move
 String & copy(const char *cstr, unsigned int length);
 String & copy(const __FlashStringHelper *pstr, unsigned int length);

 void move(String &rhs);

};

class StringSumHelper : public String
{
public:
 StringSumHelper(const String &s) : String(s) {}
 StringSumHelper(const char *p) : String(p) {}
 StringSumHelper(char c) : String(c) {}
 StringSumHelper(unsigned char num) : String(num) {}
 StringSumHelper(int num) : String(num) {}
 StringSumHelper(unsigned int num) : String(num) {}
 StringSumHelper(long num) : String(num) {}
 StringSumHelper(unsigned long num) : String(num) {}
 StringSumHelper(float num) : String(num) {}
 StringSumHelper(double num) : String(num) {}
};
# 76 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Tone.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       



# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 1
/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2014 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 24 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Tone.h" 2

void tone(uint32_t _pin, uint32_t frequency, uint32_t duration = 0);
void noTone(uint32_t _pin);
# 77 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WMath.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




extern long random( long ) ;
extern long random( long, long ) ;
extern void randomSeed( uint32_t dwSeed ) ;
extern long map( long, long, long, long, long ) ;

extern uint16_t makeWord( uint16_t w ) ;
extern uint16_t makeWord( uint8_t h, uint8_t l ) ;
# 78 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/HardwareSerial.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 23 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/HardwareSerial.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 26 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Stream.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Print.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/inttypes.h" 1 3
/*
 * Copyright (c) 2004, 2005 by
 * Ralf Corsepius, Ulm/Germany. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software
 * is freely granted, provided that this notice is preserved.
 */

/**
 *  @file  inttypes.h
 */
# 23 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Print.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 1 3
/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * advertising materials, and other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 *	@(#)stdio.h	5.3 (Berkeley) 3/15/86
 */

/*
 * NB: to fit things in six character monocase externals, the
 * stdio code uses the prefix `__s' for stdio objects, typically
 * followed by a three-character attempt at a mnemonic.
 */




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 30 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 2 3





# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 46 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */



/* On FreeBSD 5, machine/ansi.h does not exist anymore... */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_.
   NetBSD defines _I386_ANSI_H_ and _X86_64_ANSI_H_ instead of _ANSI_H_ */
# 92 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */
# 117 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE_TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 157 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* If this symbol has done its job, get rid of it.  */




/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 238 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
# 358 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 and FreeBSD [23].x require the MACHINE_ANSI_H check here.  */
/*  NetBSD 5 requires the I386_ANSI_H and X86_64_ANSI_H checks here.  */
# 394 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* A null pointer constant.  */
# 412 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 3 4
/* Offset of member MEMBER in a struct of type TYPE. */
# 36 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 2 3


# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stdarg.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.15  Variable arguments  <stdarg.h>
 */
# 36 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stdarg.h" 3 4
/* Define __gnuc_va_list.  */



typedef __builtin_va_list __gnuc_va_list;


/* Define the standard macros for the user,
   if this invocation was from the user program.  */
# 39 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 2 3

/*
 * <sys/reent.h> defines __FILE, _fpos_t.
 * They must be defined there because struct _reent needs them (and we don't
 * want reent.h to include this file.
 */

# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 47 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 1 3
/* unified sys/types.h: 
   start with sef's sysvi386 version.
   merge go32 version -- a few ifdefs.
   h8300hms, h8300xray, and sysvnecv70 disagree on the following types:

   typedef int gid_t;
   typedef int uid_t;
   typedef int dev_t;
   typedef int ino_t;
   typedef int mode_t;
   typedef int caddr_t;

   however, these aren't "reasonable" values, the sysvi386 ones make far 
   more sense, and should work sufficiently well (in particular, h8300 
   doesn't have a stat, and the necv70 doesn't matter.) -- eichin
 */



# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/_ansi.h" 1 3
/* Provide support for both ANSI and non-ANSI environments.  */

/* Some ANSI environments are "broken" in the sense that __STDC__ cannot be
   relied upon to have it's intended meaning.  Therefore we must use our own
   concoction: _HAVE_STDC.  Always use _HAVE_STDC instead of __STDC__ in newlib
   sources!

   To get a strict ANSI C environment, define macro __STRICT_ANSI__.  This will
   "comment out" the non-ANSI parts of the ANSI header files (non-ANSI header
   files aren't affected).  */
# 21 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 2 3




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/_types.h" 1 3
/*
 *  $Id$
 */
# 26 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 2 3
# 61 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/_types.h" 1 3
/* ANSI C namespace clean utility typedefs */

/* This file defines various typedefs needed by the system calls that support
   the C library.  Basically, they're just the POSIX versions with an '_'
   prepended.  This file lives in the `sys' directory so targets can provide
   their own if desired (or they can put target dependant conditionals here).
*/
# 62 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 2 3







# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 70 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/types.h" 1 3



/*
 *  The following section is RTEMS specific and is needed to more
 *  closely match the types defined in the BSD machine/types.h.
 *  This is needed to let the RTEMS/BSD TCP/IP stack compile.
 */
# 19 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/machine/types.h" 3
typedef long int __off_t;
typedef int __pid_t;

__extension__ typedef long long int __loff_t;
# 71 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 2 3

/* To ensure the stat struct's layout doesn't change when sizeof(int), etc.
   changes, we assume sizeof short and long never change and have all types
   used to define struct stat use them and not int where possible.
   Where not possible, _ST_INTxx are used.  It would be preferable to not have
   such assumptions, but until the extra fluff is necessary, it's avoided.
   No 64 bit targets use stat yet.  What to do about them is postponed
   until necessary.  */
# 91 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
/* also defined in mingw/gmon.h and in w32api/winsock[2].h */

typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;





typedef unsigned short ushort; /* System V compatibility */
typedef unsigned int uint; /* System V compatibility */
typedef unsigned long ulong; /* System V compatibility */



typedef unsigned long /* clock() */ clock_t;




typedef long /* time() */ time_t;





/* Time Value Specification Structures, P1003.1b-1993, p. 261 */

struct timespec {
  time_t tv_sec; /* Seconds */
  long tv_nsec; /* Nanoseconds */
};


struct itimerspec {
  struct timespec it_interval; /* Timer period */
  struct timespec it_value; /* Timer expiration */
};


typedef long daddr_t;



typedef char * caddr_t;
# 155 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
typedef unsigned short ino_t;
# 176 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
/*
 * All these should be machine specific - right now they are all broken.
 * However, for all of Cygnus' embedded targets, we want them to all be
 * the same.  Otherwise things like sizeof (struct stat) might depend on
 * how the file was compiled (e.g. -mint16 vs -mint32, etc.).
 */


typedef _off_t off_t;
typedef __dev_t dev_t;
typedef __uid_t uid_t;
typedef __gid_t gid_t;





typedef int pid_t;







typedef long key_t;

typedef _ssize_t ssize_t;
# 217 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
typedef unsigned int mode_t __attribute__ ((__mode__ (__SI__)));




typedef unsigned short nlink_t;

/* We don't define fd_set and friends if we are compiling POSIX
   source, or if we have included (or may include as indicated
   by __USE_W32_SOCKETS) the W32api winsock[2].h header which
   defines Windows versions of them.   Note that a program which
   includes the W32api winsock[2].h header must know what it is doing;
   it must not call the cygwin32 select function.
*/



/*
 * Select uses bit masks of file descriptors in longs.
 * These macros manipulate such bit fields (the filesystem macros use chars).
 * FD_SETSIZE may be defined by the user, but the default here
 * should be >= NOFILE (param.h).
 */




typedef long fd_mask;





/* We use a macro for fd_set so that including Sockets.h afterwards
   can work.  */
typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8 /* number of bits in a byte */) /* bits per mask */)-1))/((sizeof (fd_mask) * 8 /* number of bits in a byte */) /* bits per mask */))];
} _types_fd_set;
# 275 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;
typedef long suseconds_t;

# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/features.h" 1 3
/*
 *  Written by Joel Sherrill <joel@OARcorp.com>.
 *
 *  COPYRIGHT (c) 1989-2000.
 *
 *  On-Line Applications Research Corporation (OAR).
 *
 *  Permission to use, copy, modify, and distribute this software for any
 *  purpose without fee is hereby granted, provided that this entire notice
 *  is included in all copies of any software which is or includes a copy
 *  or modification of this software.
 *
 *  THIS SOFTWARE IS BEING PROVIDED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
 *  WARRANTY.  IN PARTICULAR,  THE AUTHOR MAKES NO REPRESENTATION
 *  OR WARRANTY OF ANY KIND CONCERNING THE MERCHANTABILITY OF THIS
 *  SOFTWARE OR ITS FITNESS FOR ANY PARTICULAR PURPOSE.
 *
 *  $Id$
 */
# 288 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 2 3


/* Cygwin will probably never have full posix compliance due to little things
 * like an inability to set the stackaddress. Cygwin is also using void *  
 * pointers rather than structs to ensure maximum binary compatability with
 * previous releases.
 * This means that we don't use the types defined here, but rather in
 * <cygwin/types.h>
 */
# 485 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
/* POSIX Barrier Types */
# 497 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/types.h" 3
/* POSIX Spin Lock Types */






/* POSIX Reader/Writer Lock Types */
# 48 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 2 3

extern "C" {

typedef __FILE FILE;




typedef _fpos_t fpos_t;





# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/stdio.h" 1 3




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/reent.h" 1 3
/* This header file provides the reentrancy.  */

/* WARNING: All identifiers here must begin with an underscore.  This file is
   included by stdio.h and others and we therefore must only use identifiers
   in the namespace allotted to us.  */
# 6 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/sys/stdio.h" 2 3

/* Internal locking macros, used to protect stdio functions.  In the
   general case, expand to nothing. Use __SSTR flag in FILE _flags to
   detect if FILE is private to sprintf/sscanf class of functions; if
   set then do nothing as lock is not initialised. */
# 63 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 2 3





 /* RD and WR are never simultaneously asserted */
# 84 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
/* _flags2 flags */


/*
 * The following three definitions are for ANSI C, which took them
 * from System V, which stupidly took internal interface macros and
 * made them official arguments to setvbuf(), without renaming them.
 * Hence, these ugly _IOxxx names are *supposed* to appear in user code.
 *
 * Although these happen to match their counterparts above, the
 * implementation does not rely on that (so these could be renumbered).
 */
# 150 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
/*
 * Functions defined in ANSI C standard.
 */
# 162 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
FILE * tmpfile (void);
char * tmpnam (char *);
int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *, const char *, FILE *);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int fprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int fscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int printf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)))
                                                            ;
int scanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int sscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int vfprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)))
                                                            ;
int vsprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int fgetc (FILE *);
char * fgets (char *, int, FILE *);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void * , size_t _size, size_t _n, FILE *);
size_t fwrite (const void * , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *, fpos_t *);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char * _name, const char * _type);
int sprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int remove (const char *);
int rename (const char *, const char *);
# 230 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
int fseeko (FILE *, off_t, int);
off_t ftello ( FILE *);




int asiprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
char * asniprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * asnprintf (char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int asprintf (char **, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

int diprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

int fcloseall (void);
int fiprintf (FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int fiscanf (FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int iprintf (const char *, ...) __attribute__ ((__format__ (__printf__, 1, 2)))
                                                            ;
int iscanf (const char *, ...) __attribute__ ((__format__ (__scanf__, 1, 2)))
                                                           ;
int siprintf (char *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int siscanf (const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int snprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int sniprintf (char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * tempnam (const char *, const char *);
int vasiprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vasprintf (char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vdiprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vfiprintf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vfiscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vfscanf (FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int viprintf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 1, 0)))
                                                            ;
int viscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vscanf (const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 1, 0)))
                                                           ;
int vsiprintf (char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int vsiscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int vsniprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vsnprintf (char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int vsscanf (const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;



/*
 * Routines in POSIX 1003.1:2001.
 */



FILE * fdopen (int, const char *);

int fileno (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE * popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);
int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);


/*
 * Routines in POSIX 1003.1:200x.
 */




int dprintf (int, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;

FILE * fmemopen (void *, size_t, const char *);
/* getdelim - see __getdelim for now */
/* getline - see __getline for now */
FILE * open_memstream (char **, size_t *);



int vdprintf (int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;



/*
 * Recursive versions of the above.
 */

int _asiprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
char * _asnprintf_r (struct _reent *, char *, size_t *, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _asprintf_r (struct _reent *, char **, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _diprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _dprintf_r (struct _reent *, int, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *, int, FILE *);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fiscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
FILE * _fmemopen_r (struct _reent *, void *, size_t, const char *);
FILE * _fopen_r (struct _reent *, const char *, const char *);
FILE * _freopen_r (struct _reent *, const char *, const char *, FILE *);
int _fprintf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *, FILE *);
size_t _fread_r (struct _reent *, void * , size_t _size, size_t _n, FILE *);
int _fscanf_r (struct _reent *, FILE *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int _iscanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__printf__, 2, 3)))
                                                            ;
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new)
                                          ;
int _scanf_r (struct _reent *, const char *, ...) __attribute__ ((__format__ (__scanf__, 2, 3)))
                                                           ;
int _siprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _siscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _snprintf_r (struct _reent *, char *, size_t, const char *, ...) __attribute__ ((__format__ (__printf__, 4, 5)))
                                                            ;
int _sprintf_r (struct _reent *, char *, const char *, ...) __attribute__ ((__format__ (__printf__, 3, 4)))
                                                            ;
int _sscanf_r (struct _reent *, const char *, const char *, ...) __attribute__ ((__format__ (__scanf__, 3, 4)))
                                                           ;
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vdprintf_r (struct _reent *, int, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _vfprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vfscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vprintf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 2, 0)))
                                                            ;
int _vscanf_r (struct _reent *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 2, 0)))
                                                           ;
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vsnprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 4, 0)))
                                                            ;
int _vsprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__printf__, 3, 0)))
                                                            ;
int _vsscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) __attribute__ ((__format__ (__scanf__, 3, 0)))
                                                           ;

/* Other extensions.  */

int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);
# 505 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
/*
 * Routines internal to the implementation.
 */

int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);

/*
 * Stdio function-access interface.
 */
# 533 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
FILE *funopen (const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie))





                                   ;
FILE *_funopen_r (struct _reent *, const void * __cookie, int (*__readfn)(void * __cookie, char *__buf, int __n), int (*__writefn)(void * __cookie, const char *__buf, int __n), fpos_t (*__seekfn)(void * __cookie, fpos_t __off, int __whence), int (*__closefn)(void * __cookie))





                                   ;







typedef ssize_t cookie_read_function_t(void *__cookie, char *__buf, size_t __n);
typedef ssize_t cookie_write_function_t(void *__cookie, const char *__buf,
     size_t __n);




typedef int cookie_seek_function_t(void *__cookie, off_t *__off, int __whence);

typedef int cookie_close_function_t(void *__cookie);
typedef struct
{
  /* These four struct member names are dictated by Linux; hopefully,
     they don't conflict with any macros.  */
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
FILE *fopencookie (void *__cookie, const char *__mode, cookie_io_functions_t __functions)
                                                         ;
FILE *_fopencookie_r (struct _reent *, void *__cookie, const char *__mode, cookie_io_functions_t __functions)
                                                         ;



/*
 * The __sfoo macros are here so that we can 
 * define function versions in the C library.
 */
# 626 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
/*
 * This has been tuned to generate reasonable code on the vax using pcc
 */
# 670 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
/* fast always-buffered version, true iff error */
# 685 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdio.h" 3
}
# 24 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Print.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WString.h" 1
/*
  WString.h - String library for Wiring & Arduino
  ...mostly rewritten by Paul Stoffregen...
  Copyright (c) 2009-10 Hernando Barragan.  All right reserved.
  Copyright 2011, Paul Stoffregen, paul@pjrc.com

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 26 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Print.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Printable.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/stdlib.h" 1 3
/*
 * stdlib.h
 *
 * Definitions for common types, variables, and functions.
 */
# 23 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Printable.h" 2

class Print;

/** The Printable class provides a way for new classes to allow themselves to be printed.
    By deriving from Printable and implementing the printTo method, it will then be possible
    for users to print out instances of this class by passing them into the usual
    Print::print and Print::println methods.
*/

class Printable
{
  public:
    virtual size_t printTo(Print& p) const = 0;
};
# 27 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Print.h" 2
# 36 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Print.h"
class Print
{
  private:
    int write_error;
    size_t printNumber(unsigned long, uint8_t);
    size_t printFloat(double, uint8_t);
  protected:
    void setWriteError(int err = 1) { write_error = err; }
  public:
    Print() : write_error(0) {}

    int getWriteError() { return write_error; }
    void clearWriteError() { setWriteError(0); }

    virtual size_t write(uint8_t) = 0;
    size_t write(const char *str) {
      if (str == __null) return 0;
      return write((const uint8_t *)str, strlen(str));
    }
    virtual size_t write(const uint8_t *buffer, size_t size);
    size_t write(const char *buffer, size_t size) {
      return write((const uint8_t *)buffer, size);
    }

    // default to zero, meaning "a single write may block"
    // should be overriden by subclasses with buffering
    virtual int availableForWrite() { return 0; }

    size_t print(const __FlashStringHelper *);
    size_t print(const String &);
    size_t print(const char[]);
    size_t print(char);
    size_t print(unsigned char, int = 10);
    size_t print(int, int = 10);
    size_t print(unsigned int, int = 10);
    size_t print(long, int = 10);
    size_t print(unsigned long, int = 10);
    size_t print(double, int = 2);
    size_t print(const Printable&);

    size_t println(const __FlashStringHelper *);
    size_t println(const String &s);
    size_t println(const char[]);
    size_t println(char);
    size_t println(unsigned char, int = 10);
    size_t println(int, int = 10);
    size_t println(unsigned int, int = 10);
    size_t println(long, int = 10);
    size_t println(unsigned long, int = 10);
    size_t println(double, int = 2);
    size_t println(const Printable&);
    size_t println(void);

    virtual void flush() { /* Empty implementation for backward compatibility */ }
};
# 27 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Stream.h" 2

// compatability macros for testing
/*
#define   getInt()            parseInt()
#define   getInt(ignore)      parseInt(ignore)
#define   getFloat()          parseFloat()
#define   getFloat(ignore)    parseFloat(ignore)
#define   getString( pre_string, post_string, buffer, length)
readBytesBetween( pre_string, terminator, buffer, length)
*/

// This enumeration provides the lookahead options for parseInt(), parseFloat()
// The rules set out here are used until either the first valid character is found
// or a time out occurs due to lack of input.
enum LookaheadMode{
    SKIP_ALL, // All invalid characters are ignored.
    SKIP_NONE, // Nothing is skipped, and the stream is not touched unless the first waiting character is valid.
    SKIP_WHITESPACE // Only tabs, spaces, line feeds & carriage returns are skipped.
};



class Stream : public Print
{
  protected:
    unsigned long _timeout; // number of milliseconds to wait for the next char before aborting timed read
    unsigned long _startMillis; // used for timeout measurement
    int timedRead(); // read stream with timeout
    int timedPeek(); // peek stream with timeout
    int peekNextDigit(LookaheadMode lookahead, bool detectDecimal); // returns the next numeric digit in the stream or -1 if timeout

  public:
    virtual int available() = 0;
    virtual int read() = 0;
    virtual int peek() = 0;

    Stream() {_timeout=1000;}

// parsing methods

  void setTimeout(unsigned long timeout); // sets maximum milliseconds to wait for stream data, default is 1 second
  unsigned long getTimeout(void) { return _timeout; }

  bool find(char *target); // reads data from the stream until the target string is found
  bool find(uint8_t *target) { return find ((char *)target); }
  // returns true if target string is found, false if timed out (see setTimeout)

  bool find(char *target, size_t length); // reads data from the stream until the target string of given length is found
  bool find(uint8_t *target, size_t length) { return find ((char *)target, length); }
  // returns true if target string is found, false if timed out

  bool find(char target) { return find (&target, 1); }

  bool findUntil(char *target, char *terminator); // as find but search ends if the terminator string is found
  bool findUntil(uint8_t *target, char *terminator) { return findUntil((char *)target, terminator); }

  bool findUntil(char *target, size_t targetLen, char *terminate, size_t termLen); // as above but search ends if the terminate string is found
  bool findUntil(uint8_t *target, size_t targetLen, char *terminate, size_t termLen) {return findUntil((char *)target, targetLen, terminate, termLen); }

  long parseInt(LookaheadMode lookahead = SKIP_ALL, char ignore = '\x01' /* a char not found in a valid ASCII numeric field*/);
  // returns the first valid (long) integer value from the current position.
  // lookahead determines how parseInt looks ahead in the stream.
  // See LookaheadMode enumeration at the top of the file.
  // Lookahead is terminated by the first character that is not a valid part of an integer.
  // Once parsing commences, 'ignore' will be skipped in the stream.

  float parseFloat(LookaheadMode lookahead = SKIP_ALL, char ignore = '\x01' /* a char not found in a valid ASCII numeric field*/);
  // float version of parseInt

  size_t readBytes( char *buffer, size_t length); // read chars from stream into buffer
  size_t readBytes( uint8_t *buffer, size_t length) { return readBytes((char *)buffer, length); }
  // terminates if length characters have been read or timeout (see setTimeout)
  // returns the number of characters placed in the buffer (0 means no valid data found)

  size_t readBytesUntil( char terminator, char *buffer, size_t length); // as readBytes with terminator character
  size_t readBytesUntil( char terminator, uint8_t *buffer, size_t length) { return readBytesUntil(terminator, (char *)buffer, length); }
  // terminates if length characters have been read, timeout, or if the terminator character  detected
  // returns the number of characters placed in the buffer (0 means no valid data found)

  // Arduino String functions to be added here
  String readString();
  String readStringUntil(char terminator);

  protected:
  long parseInt(char ignore) { return parseInt(SKIP_ALL, ignore); }
  float parseFloat(char ignore) { return parseFloat(SKIP_ALL, ignore); }
  // These overload exists for compatibility with any class that has derived
  // Stream and used parseFloat/Int with a custom ignore character. To keep
  // the public API simple, these overload remains protected.

  struct MultiTarget {
    const char *str; // string you're searching for
    size_t len; // length of string you're searching for
    size_t index; // index used by the search routine.
  };

  // This allows you to search for an arbitrary number of strings.
  // Returns index of the target that is found first or -1 if timeout occurs.
  int findMulti(struct MultiTarget *targets, int tCount);
};
# 25 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/HardwareSerial.h" 2
# 67 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/HardwareSerial.h"
class HardwareSerial : public Stream
{
  public:
    virtual void begin(unsigned long);
    virtual void begin(unsigned long baudrate, uint16_t config);
    virtual void end();
    virtual int available(void) = 0;
    virtual int peek(void) = 0;
    virtual int read(void) = 0;
    virtual void flush(void) = 0;
    virtual size_t write(uint8_t) = 0;
    using Print::write; // pull in write(str) and write(buf, size) from Print
    virtual operator bool() = 0;
};

extern void serialEventRun(void) __attribute__((weak));
# 79 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/pulse.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       


extern "C" {


/*
 * \brief Measures the length (in microseconds) of a pulse on the pin; state is HIGH
 * or LOW, the type of pulse to measure.  Works on pulses from 2-3 microseconds
 * to 3 minutes in length, but must be called at least a few dozen microseconds
 * before the start of the pulse.
 */
uint32_t pulseIn(uint32_t pin, uint32_t state, uint32_t timeout);


// Provides a version of pulseIn with a default argument (C++ only)
uint32_t pulseIn(uint32_t pin, uint32_t state, uint32_t timeout = 1000000L);

} // extern "C"
# 80 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/delay.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C" {



# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h" 1
/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




// The definitions here needs a SAMD core >=1.6.10


/*----------------------------------------------------------------------------
 *        Definitions
 *----------------------------------------------------------------------------*/

/** Frequency of the board main oscillator */


/** Master clock frequency */


/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/




# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/SERCOM.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




# 1 "/home/megabug/.arduino15/packages/arduino/tools/CMSIS-Atmel/1.1.0/CMSIS/Device/ATMEL/sam.h" 1
/* ----------------------------------------------------------------------------
 *         SAM Software Package License
 * ----------------------------------------------------------------------------
 * Copyright (c) 2015, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following condition is met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */
# 23 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/SERCOM.h" 2



typedef enum
{
 UART_EXT_CLOCK = 0,
 UART_INT_CLOCK = 0x1u
} SercomUartMode;

typedef enum
{
 SPI_SLAVE_OPERATION = 0x2u,
 SPI_MASTER_OPERATION = 0x3u
} SercomSpiMode;

typedef enum
{
 I2C_SLAVE_OPERATION = 0x4u,
 I2C_MASTER_OPERATION = 0x5u
} SercomI2CMode;

typedef enum
{
 SERCOM_EVEN_PARITY = 0,
 SERCOM_ODD_PARITY,
 SERCOM_NO_PARITY
} SercomParityMode;

typedef enum
{
 SERCOM_STOP_BIT_1 = 0,
 SERCOM_STOP_BITS_2
} SercomNumberStopBit;

typedef enum
{
 MSB_FIRST = 0,
 LSB_FIRST
} SercomDataOrder;

typedef enum
{
 UART_CHAR_SIZE_8_BITS = 0,
 UART_CHAR_SIZE_9_BITS,
 UART_CHAR_SIZE_5_BITS = 0x5u,
 UART_CHAR_SIZE_6_BITS,
 UART_CHAR_SIZE_7_BITS
} SercomUartCharSize;

typedef enum
{
 SERCOM_RX_PAD_0 = 0,
 SERCOM_RX_PAD_1,
 SERCOM_RX_PAD_2,
 SERCOM_RX_PAD_3
} SercomRXPad;

typedef enum
{
 UART_TX_PAD_0 = 0x0ul, // Only for UART
 UART_TX_PAD_2 = 0x1ul, // Only for UART
 UART_TX_RTS_CTS_PAD_0_2_3 = 0x2ul, // Only for UART with TX on PAD0, RTS on PAD2 and CTS on PAD3
} SercomUartTXPad;

typedef enum
{
 SAMPLE_RATE_x16 = 0x1, //Fractional
 SAMPLE_RATE_x8 = 0x3, //Fractional
} SercomUartSampleRate;

typedef enum
{
 SERCOM_SPI_MODE_0 = 0, // CPOL : 0  | CPHA : 0
 SERCOM_SPI_MODE_1, // CPOL : 0  | CPHA : 1
 SERCOM_SPI_MODE_2, // CPOL : 1  | CPHA : 0
 SERCOM_SPI_MODE_3 // CPOL : 1  | CPHA : 1
} SercomSpiClockMode;

typedef enum
{
 SPI_PAD_0_SCK_1 = 0,
 SPI_PAD_2_SCK_3,
 SPI_PAD_3_SCK_1,
 SPI_PAD_0_SCK_3
} SercomSpiTXPad;

typedef enum
{
 SPI_CHAR_SIZE_8_BITS = 0x0ul,
 SPI_CHAR_SIZE_9_BITS
} SercomSpiCharSize;

typedef enum
{
 WIRE_UNKNOWN_STATE = 0x0ul,
 WIRE_IDLE_STATE,
 WIRE_OWNER_STATE,
 WIRE_BUSY_STATE
} SercomWireBusState;

typedef enum
{
 WIRE_WRITE_FLAG = 0x0ul,
 WIRE_READ_FLAG
} SercomWireReadWriteFlag;

typedef enum
{
 WIRE_MASTER_ACT_NO_ACTION = 0,
 WIRE_MASTER_ACT_REPEAT_START,
 WIRE_MASTER_ACT_READ,
 WIRE_MASTER_ACT_STOP
} SercomMasterCommandWire;

typedef enum
{
 WIRE_MASTER_ACK_ACTION = 0,
 WIRE_MASTER_NACK_ACTION
} SercomMasterAckActionWire;

class SERCOM
{
 public:
  SERCOM(Sercom* s) ;

  /* ========== UART ========== */
  void initUART(SercomUartMode mode, SercomUartSampleRate sampleRate, uint32_t baudrate=0) ;
  void initFrame(SercomUartCharSize charSize, SercomDataOrder dataOrder, SercomParityMode parityMode, SercomNumberStopBit nbStopBits) ;
  void initPads(SercomUartTXPad txPad, SercomRXPad rxPad) ;

  void resetUART( void ) ;
  void enableUART( void ) ;
  void flushUART( void ) ;
  void clearStatusUART( void ) ;
  bool availableDataUART( void ) ;
  bool isBufferOverflowErrorUART( void ) ;
  bool isFrameErrorUART( void ) ;
  bool isParityErrorUART( void ) ;
  bool isDataRegisterEmptyUART( void ) ;
  uint8_t readDataUART( void ) ;
  int writeDataUART(uint8_t data) ;
  bool isUARTError() ;
  void acknowledgeUARTError() ;
  void enableDataRegisterEmptyInterruptUART();
  void disableDataRegisterEmptyInterruptUART();

  /* ========== SPI ========== */
  void initSPI(SercomSpiTXPad mosi, SercomRXPad miso, SercomSpiCharSize charSize, SercomDataOrder dataOrder) ;
  void initSPIClock(SercomSpiClockMode clockMode, uint32_t baudrate) ;

  void resetSPI( void ) ;
  void enableSPI( void ) ;
  void disableSPI( void ) ;
  void setDataOrderSPI(SercomDataOrder dataOrder) ;
  SercomDataOrder getDataOrderSPI( void ) ;
  void setBaudrateSPI(uint8_t divider) ;
  void setClockModeSPI(SercomSpiClockMode clockMode) ;
  uint8_t transferDataSPI(uint8_t data) ;
  bool isBufferOverflowErrorSPI( void ) ;
  bool isDataRegisterEmptySPI( void ) ;
  bool isTransmitCompleteSPI( void ) ;
  bool isReceiveCompleteSPI( void ) ;

  /* ========== WIRE ========== */
  void initSlaveWIRE(uint8_t address) ;
  void initMasterWIRE(uint32_t baudrate) ;

  void resetWIRE( void ) ;
  void enableWIRE( void ) ;
    void disableWIRE( void );
    void prepareNackBitWIRE( void ) ;
    void prepareAckBitWIRE( void ) ;
    void prepareCommandBitsWire(uint8_t cmd);
  bool startTransmissionWIRE(uint8_t address, SercomWireReadWriteFlag flag) ;
  bool sendDataMasterWIRE(uint8_t data) ;
  bool sendDataSlaveWIRE(uint8_t data) ;
  bool isMasterWIRE( void ) ;
  bool isSlaveWIRE( void ) ;
  bool isBusIdleWIRE( void ) ;
  bool isBusOwnerWIRE( void ) ;
  bool isDataReadyWIRE( void ) ;
  bool isStopDetectedWIRE( void ) ;
  bool isRestartDetectedWIRE( void ) ;
  bool isAddressMatch( void ) ;
  bool isMasterReadOperationWIRE( void ) ;
    bool isRXNackReceivedWIRE( void ) ;
  int availableWIRE( void ) ;
  uint8_t readDataWIRE( void ) ;

 private:
  Sercom* sercom;
  uint8_t calculateBaudrateSynchronous(uint32_t baudrate) ;
  uint32_t division(uint32_t dividend, uint32_t divisor) ;
  void initClockNVIC( void ) ;
};
# 43 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Uart.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/HardwareSerial.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 22 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Uart.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/SERCOM.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 23 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Uart.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/RingBuffer.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/






// Define constants and variables for buffering incoming serial data.  We're
// using a ring buffer (I think), in which head is the index of the location
// to which to write the next incoming character and tail is the index of the
// location from which to read.


class RingBuffer
{
  public:
    uint8_t _aucBuffer[64] ;
    int _iHead ;
    int _iTail ;

  public:
    RingBuffer( void ) ;
    void store_char( uint8_t c ) ;
 void clear();
 int read_char();
 int available();
 int availableForStore();
 int peek();
 bool isFull();

  private:
 int nextIndex(int index);
} ;
# 24 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Uart.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/cstddef" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 18.1  Types
//

       
# 40 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/cstddef" 3

# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */




// The current version of the C++ library in compressed ISO date format.


// Macros for various attributes.
//   _GLIBCXX_PURE
//   _GLIBCXX_CONST
//   _GLIBCXX_NORETURN
//   _GLIBCXX_NOTHROW
//   _GLIBCXX_VISIBILITY
# 54 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// See below for C++






// Macros for visibility attributes.
//   _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY
//   _GLIBCXX_VISIBILITY
# 74 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Macros for deprecated attributes.
//   _GLIBCXX_USE_DEPRECATED
//   _GLIBCXX_DEPRECATED
# 87 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Macros for ABI tag attributes.







// Macro for constexpr, to support in mixed 03/0x mode.
# 106 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Macro for noexcept, to support in mixed 03/0x mode.
# 131 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Macro for extern template, ie controling template linkage via use
// of extern keyword on template declaration. As documented in the g++
// manual, it inhibits all implicit instantiations and is used
// throughout the library to avoid multiple weak definitions for
// required types that are already explicitly instantiated in the
// library binary. This substantially reduces the binary size of
// resulting executables.
// Special case: _GLIBCXX_EXTERN_TEMPLATE == -1 disallows extern
// templates only in basic_string, thus activating its debug-mode
// checks even at -O0.


/*
  Outline of libstdc++ namespaces.

  namespace std
  {
    namespace __debug { }
    namespace __parallel { }
    namespace __profile { }
    namespace __cxx1998 { }

    namespace __detail { }

    namespace rel_ops { }

    namespace tr1
    {
      namespace placeholders { }
      namespace regex_constants { }
      namespace __detail { }
    }

    namespace tr2 { }
    
    namespace decimal { }

    namespace chrono { }
    namespace placeholders { }
    namespace regex_constants { }
    namespace this_thread { }
  }

  namespace abi { }

  namespace __gnu_cxx
  {
    namespace __detail { }
  }

  For full details see:
  http://gcc.gnu.org/onlinedocs/libstdc++/latest-doxygen/namespaces.html
*/
namespace std
{
  typedef unsigned int size_t;
  typedef int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;

}


// Defined if inline namespaces are used for versioning.


// Inline namespace for symbol versioning.
# 241 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Inline namespaces for special modes: debug, parallel, profile.
# 288 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Macros for namespace scope. Either namespace std:: or the name
// of some nested namespace within it corresponding to the active mode.
// _GLIBCXX_STD_A
// _GLIBCXX_STD_C
//
// Macros for opening/closing conditional namespaces.
// _GLIBCXX_BEGIN_NAMESPACE_ALGO
// _GLIBCXX_END_NAMESPACE_ALGO
// _GLIBCXX_BEGIN_NAMESPACE_CONTAINER
// _GLIBCXX_END_NAMESPACE_CONTAINER
# 340 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// GLIBCXX_ABI Deprecated
// Define if compatibility should be provided for -mlong-double-64.


// Inline namespace for long double 128 mode.
# 359 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Assert.
# 385 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// Macros for race detectors.
// _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) and
// _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A) should be used to explain
// atomic (lock-free) synchronization to race detectors:
// the race detector will infer a happens-before arc from the former to the
// latter when they share the same argument pointer.
//
// The most frequent use case for these macros (and the only case in the
// current implementation of the library) is atomic reference counting:
//   void _M_remove_reference()
//   {
//     _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(&this->_M_refcount);
//     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount, -1) <= 0)
//       {
//         _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(&this->_M_refcount);
//         _M_destroy(__a);
//       }
//   }
// The annotations in this example tell the race detector that all memory
// accesses occurred when the refcount was positive do not race with
// memory accesses which occurred after the refcount became zero.







// Macros for C linkage: define extern "C" linkage only when using C++.
# 423 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 3
// First includes.

// Pick up any OS-specific definitions.
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/os_defines.h" 1 3
// Specific definitions for newlib  -*- C++ -*-

// Copyright (C) 2000-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/os_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */




// System-specific #define, typedefs, corrections, etc, go here.  This
// file will come before all others.
# 427 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 2 3

// Pick up any CPU-specific definitions.
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/cpu_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-

// Copyright (C) 2005-2013 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpu_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */
# 430 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/arm-none-eabi/armv6-m/bits/c++config.h" 2 3

// If platform uses neither visibility nor psuedo-visibility,
// specify empty default for namespace annotation macros.




// Certain function definitions that are meant to be overridable from
// user code are decorated with this macro.  For some targets, this
// macro causes these definitions to be weak.





// The remainder of the prewritten config is automatic; all the
// user hooks are listed above.

// Create a boolean flag to be used to determine if --fast-math is set.






// This marks string literals in header files to be extracted for eventual
// translation.  It is primarily used for messages in thrown exceptions; see
// src/functexcept.cc.  We use __N because the more traditional _N is used
// for something else under certain OSes (see BADNAMES).


// For example, <windows.h> is known to #define min and max as macros...



// End of prewritten config; the settings discovered at configure time follow.
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the `acosf' function. */


/* Define to 1 if you have the `acosl' function. */
/* #undef _GLIBCXX_HAVE_ACOSL */

/* Define to 1 if you have the `asinf' function. */


/* Define to 1 if you have the `asinl' function. */
/* #undef _GLIBCXX_HAVE_ASINL */

/* Define to 1 if the target assembler supports .symver directive. */


/* Define to 1 if you have the `atan2f' function. */


/* Define to 1 if you have the `atan2l' function. */
/* #undef _GLIBCXX_HAVE_ATAN2L */

/* Define to 1 if you have the `atanf' function. */


/* Define to 1 if you have the `atanl' function. */
/* #undef _GLIBCXX_HAVE_ATANL */

/* Define to 1 if you have the `at_quick_exit' function. */
/* #undef _GLIBCXX_HAVE_AT_QUICK_EXIT */

/* Define to 1 if the target assembler supports thread-local storage. */
/* #undef _GLIBCXX_HAVE_CC_TLS */

/* Define to 1 if you have the `ceilf' function. */


/* Define to 1 if you have the `ceill' function. */
/* #undef _GLIBCXX_HAVE_CEILL */

/* Define to 1 if you have the <complex.h> header file. */


/* Define to 1 if you have the `cosf' function. */


/* Define to 1 if you have the `coshf' function. */


/* Define to 1 if you have the `coshl' function. */
/* #undef _GLIBCXX_HAVE_COSHL */

/* Define to 1 if you have the `cosl' function. */
/* #undef _GLIBCXX_HAVE_COSL */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef _GLIBCXX_HAVE_DLFCN_H */

/* Define if EBADMSG exists. */


/* Define if ECANCELED exists. */


/* Define if ECHILD exists. */


/* Define if EIDRM exists. */


/* Define to 1 if you have the <endian.h> header file. */
/* #undef _GLIBCXX_HAVE_ENDIAN_H */

/* Define if ENODATA exists. */


/* Define if ENOLINK exists. */


/* Define if ENOSPC exists. */


/* Define if ENOSR exists. */


/* Define if ENOSTR exists. */


/* Define if ENOTRECOVERABLE exists. */


/* Define if ENOTSUP exists. */


/* Define if EOVERFLOW exists. */


/* Define if EOWNERDEAD exists. */


/* Define if EPERM exists. */


/* Define if EPROTO exists. */


/* Define if ETIME exists. */


/* Define if ETIMEDOUT exists. */


/* Define if ETXTBSY exists. */


/* Define if EWOULDBLOCK exists. */


/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_EXECINFO_H */

/* Define to 1 if you have the `expf' function. */


/* Define to 1 if you have the `expl' function. */
/* #undef _GLIBCXX_HAVE_EXPL */

/* Define to 1 if you have the `fabsf' function. */


/* Define to 1 if you have the `fabsl' function. */
/* #undef _GLIBCXX_HAVE_FABSL */

/* Define to 1 if you have the <fenv.h> header file. */
/* #undef _GLIBCXX_HAVE_FENV_H */

/* Define to 1 if you have the `finite' function. */
/* #undef _GLIBCXX_HAVE_FINITE */

/* Define to 1 if you have the `finitef' function. */
/* #undef _GLIBCXX_HAVE_FINITEF */

/* Define to 1 if you have the `finitel' function. */
/* #undef _GLIBCXX_HAVE_FINITEL */

/* Define to 1 if you have the <float.h> header file. */


/* Define to 1 if you have the `floorf' function. */


/* Define to 1 if you have the `floorl' function. */
/* #undef _GLIBCXX_HAVE_FLOORL */

/* Define to 1 if you have the `fmodf' function. */


/* Define to 1 if you have the `fmodl' function. */
/* #undef _GLIBCXX_HAVE_FMODL */

/* Define to 1 if you have the `fpclass' function. */
/* #undef _GLIBCXX_HAVE_FPCLASS */

/* Define to 1 if you have the <fp.h> header file. */
/* #undef _GLIBCXX_HAVE_FP_H */

/* Define to 1 if you have the `frexpf' function. */


/* Define to 1 if you have the `frexpl' function. */
/* #undef _GLIBCXX_HAVE_FREXPL */

/* Define if _Unwind_GetIPInfo is available. */


/* Define if gets is available in <stdio.h>. */


/* Define to 1 if you have the `hypot' function. */


/* Define to 1 if you have the `hypotf' function. */
/* #undef _GLIBCXX_HAVE_HYPOTF */

/* Define to 1 if you have the `hypotl' function. */
/* #undef _GLIBCXX_HAVE_HYPOTL */

/* Define if you have the iconv() function. */


/* Define to 1 if you have the <ieeefp.h> header file. */


/* Define if int64_t is available in <stdint.h>. */


/* Define if int64_t is a long. */
/* #undef _GLIBCXX_HAVE_INT64_T_LONG */

/* Define if int64_t is a long long. */


/* Define to 1 if you have the <inttypes.h> header file. */


/* Define to 1 if you have the `isinf' function. */
/* #undef _GLIBCXX_HAVE_ISINF */

/* Define to 1 if you have the `isinff' function. */
/* #undef _GLIBCXX_HAVE_ISINFF */

/* Define to 1 if you have the `isinfl' function. */
/* #undef _GLIBCXX_HAVE_ISINFL */

/* Define to 1 if you have the `isnan' function. */
/* #undef _GLIBCXX_HAVE_ISNAN */

/* Define to 1 if you have the `isnanf' function. */
/* #undef _GLIBCXX_HAVE_ISNANF */

/* Define to 1 if you have the `isnanl' function. */
/* #undef _GLIBCXX_HAVE_ISNANL */

/* Defined if iswblank exists. */


/* Define if LC_MESSAGES is available in <locale.h>. */


/* Define to 1 if you have the `ldexpf' function. */


/* Define to 1 if you have the `ldexpl' function. */
/* #undef _GLIBCXX_HAVE_LDEXPL */

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef _GLIBCXX_HAVE_LIBINTL_H */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_AS */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_DATA */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_FSIZE */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_RSS */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_VMEM */

/* Define if futex syscall is available. */
/* #undef _GLIBCXX_HAVE_LINUX_FUTEX */

/* Define to 1 if you have the <locale.h> header file. */


/* Define to 1 if you have the `log10f' function. */


/* Define to 1 if you have the `log10l' function. */
/* #undef _GLIBCXX_HAVE_LOG10L */

/* Define to 1 if you have the `logf' function. */


/* Define to 1 if you have the `logl' function. */
/* #undef _GLIBCXX_HAVE_LOGL */

/* Define to 1 if you have the <machine/endian.h> header file. */


/* Define to 1 if you have the <machine/param.h> header file. */


/* Define if mbstate_t exists in wchar.h. */


/* Define to 1 if you have the <memory.h> header file. */
/* #undef _GLIBCXX_HAVE_MEMORY_H */

/* Define to 1 if you have the `modf' function. */
/* #undef _GLIBCXX_HAVE_MODF */

/* Define to 1 if you have the `modff' function. */


/* Define to 1 if you have the `modfl' function. */
/* #undef _GLIBCXX_HAVE_MODFL */

/* Define to 1 if you have the <nan.h> header file. */
/* #undef _GLIBCXX_HAVE_NAN_H */

/* Define if poll is available in <poll.h>. */
/* #undef _GLIBCXX_HAVE_POLL */

/* Define to 1 if you have the `powf' function. */


/* Define to 1 if you have the `powl' function. */
/* #undef _GLIBCXX_HAVE_POWL */

/* Define to 1 if you have the `qfpclass' function. */
/* #undef _GLIBCXX_HAVE_QFPCLASS */

/* Define to 1 if you have the `quick_exit' function. */
/* #undef _GLIBCXX_HAVE_QUICK_EXIT */

/* Define to 1 if you have the `setenv' function. */
/* #undef _GLIBCXX_HAVE_SETENV */

/* Define to 1 if you have the `sincos' function. */
/* #undef _GLIBCXX_HAVE_SINCOS */

/* Define to 1 if you have the `sincosf' function. */
/* #undef _GLIBCXX_HAVE_SINCOSF */

/* Define to 1 if you have the `sincosl' function. */
/* #undef _GLIBCXX_HAVE_SINCOSL */

/* Define to 1 if you have the `sinf' function. */


/* Define to 1 if you have the `sinhf' function. */


/* Define to 1 if you have the `sinhl' function. */
/* #undef _GLIBCXX_HAVE_SINHL */

/* Define to 1 if you have the `sinl' function. */
/* #undef _GLIBCXX_HAVE_SINL */

/* Defined if sleep exists. */


/* Define to 1 if you have the `sqrtf' function. */


/* Define to 1 if you have the `sqrtl' function. */
/* #undef _GLIBCXX_HAVE_SQRTL */

/* Define to 1 if you have the <stdalign.h> header file. */


/* Define to 1 if you have the <stdbool.h> header file. */


/* Define to 1 if you have the <stdint.h> header file. */


/* Define to 1 if you have the <stdlib.h> header file. */


/* Define if strerror_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_L */

/* Define if strerror_r is available in <string.h>. */


/* Define to 1 if you have the <strings.h> header file. */


/* Define to 1 if you have the <string.h> header file. */


/* Define to 1 if you have the `strtof' function. */


/* Define to 1 if you have the `strtold' function. */
/* #undef _GLIBCXX_HAVE_STRTOLD */

/* Define if strxfrm_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRXFRM_L */

/* Define to 1 if the target runtime linker supports binding the same symbol
   to different versions. */
/* #undef _GLIBCXX_HAVE_SYMVER_SYMBOL_RENAMING_RUNTIME_SUPPORT */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/ipc.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IPC_H */

/* Define to 1 if you have the <sys/isa_defs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_ISA_DEFS_H */

/* Define to 1 if you have the <sys/machine.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_MACHINE_H */

/* Define to 1 if you have the <sys/param.h> header file. */


/* Define to 1 if you have the <sys/resource.h> header file. */


/* Define to 1 if you have a suitable <sys/sdt.h> header file */
/* #undef _GLIBCXX_HAVE_SYS_SDT_H */

/* Define to 1 if you have the <sys/sem.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SEM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */


/* Define to 1 if you have the <sys/sysinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SYSINFO_H */

/* Define to 1 if you have the <sys/time.h> header file. */


/* Define to 1 if you have the <sys/types.h> header file. */


/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_UIO_H */

/* Define if S_IFREG is available in <sys/stat.h>. */
/* #undef _GLIBCXX_HAVE_S_IFREG */

/* Define if S_IFREG is available in <sys/stat.h>. */


/* Define to 1 if you have the `tanf' function. */


/* Define to 1 if you have the `tanhf' function. */


/* Define to 1 if you have the `tanhl' function. */
/* #undef _GLIBCXX_HAVE_TANHL */

/* Define to 1 if you have the `tanl' function. */
/* #undef _GLIBCXX_HAVE_TANL */

/* Define to 1 if you have the <tgmath.h> header file. */


/* Define to 1 if the target supports thread-local storage. */
/* #undef _GLIBCXX_HAVE_TLS */

/* Define to 1 if you have the <unistd.h> header file. */


/* Defined if usleep exists. */


/* Defined if vfwscanf exists. */


/* Defined if vswscanf exists. */


/* Defined if vwscanf exists. */


/* Define to 1 if you have the <wchar.h> header file. */


/* Defined if wcstof exists. */


/* Define to 1 if you have the <wctype.h> header file. */


/* Defined if Sleep exists. */
/* #undef _GLIBCXX_HAVE_WIN32_SLEEP */

/* Define if writev is available in <sys/uio.h>. */
/* #undef _GLIBCXX_HAVE_WRITEV */

/* Define to 1 if you have the `_acosf' function. */
/* #undef _GLIBCXX_HAVE__ACOSF */

/* Define to 1 if you have the `_acosl' function. */
/* #undef _GLIBCXX_HAVE__ACOSL */

/* Define to 1 if you have the `_asinf' function. */
/* #undef _GLIBCXX_HAVE__ASINF */

/* Define to 1 if you have the `_asinl' function. */
/* #undef _GLIBCXX_HAVE__ASINL */

/* Define to 1 if you have the `_atan2f' function. */
/* #undef _GLIBCXX_HAVE__ATAN2F */

/* Define to 1 if you have the `_atan2l' function. */
/* #undef _GLIBCXX_HAVE__ATAN2L */

/* Define to 1 if you have the `_atanf' function. */
/* #undef _GLIBCXX_HAVE__ATANF */

/* Define to 1 if you have the `_atanl' function. */
/* #undef _GLIBCXX_HAVE__ATANL */

/* Define to 1 if you have the `_ceilf' function. */
/* #undef _GLIBCXX_HAVE__CEILF */

/* Define to 1 if you have the `_ceill' function. */
/* #undef _GLIBCXX_HAVE__CEILL */

/* Define to 1 if you have the `_cosf' function. */
/* #undef _GLIBCXX_HAVE__COSF */

/* Define to 1 if you have the `_coshf' function. */
/* #undef _GLIBCXX_HAVE__COSHF */

/* Define to 1 if you have the `_coshl' function. */
/* #undef _GLIBCXX_HAVE__COSHL */

/* Define to 1 if you have the `_cosl' function. */
/* #undef _GLIBCXX_HAVE__COSL */

/* Define to 1 if you have the `_expf' function. */
/* #undef _GLIBCXX_HAVE__EXPF */

/* Define to 1 if you have the `_expl' function. */
/* #undef _GLIBCXX_HAVE__EXPL */

/* Define to 1 if you have the `_fabsf' function. */
/* #undef _GLIBCXX_HAVE__FABSF */

/* Define to 1 if you have the `_fabsl' function. */
/* #undef _GLIBCXX_HAVE__FABSL */

/* Define to 1 if you have the `_finite' function. */
/* #undef _GLIBCXX_HAVE__FINITE */

/* Define to 1 if you have the `_finitef' function. */
/* #undef _GLIBCXX_HAVE__FINITEF */

/* Define to 1 if you have the `_finitel' function. */
/* #undef _GLIBCXX_HAVE__FINITEL */

/* Define to 1 if you have the `_floorf' function. */
/* #undef _GLIBCXX_HAVE__FLOORF */

/* Define to 1 if you have the `_floorl' function. */
/* #undef _GLIBCXX_HAVE__FLOORL */

/* Define to 1 if you have the `_fmodf' function. */
/* #undef _GLIBCXX_HAVE__FMODF */

/* Define to 1 if you have the `_fmodl' function. */
/* #undef _GLIBCXX_HAVE__FMODL */

/* Define to 1 if you have the `_fpclass' function. */
/* #undef _GLIBCXX_HAVE__FPCLASS */

/* Define to 1 if you have the `_frexpf' function. */
/* #undef _GLIBCXX_HAVE__FREXPF */

/* Define to 1 if you have the `_frexpl' function. */
/* #undef _GLIBCXX_HAVE__FREXPL */

/* Define to 1 if you have the `_hypot' function. */
/* #undef _GLIBCXX_HAVE__HYPOT */

/* Define to 1 if you have the `_hypotf' function. */
/* #undef _GLIBCXX_HAVE__HYPOTF */

/* Define to 1 if you have the `_hypotl' function. */
/* #undef _GLIBCXX_HAVE__HYPOTL */

/* Define to 1 if you have the `_isinf' function. */
/* #undef _GLIBCXX_HAVE__ISINF */

/* Define to 1 if you have the `_isinff' function. */
/* #undef _GLIBCXX_HAVE__ISINFF */

/* Define to 1 if you have the `_isinfl' function. */
/* #undef _GLIBCXX_HAVE__ISINFL */

/* Define to 1 if you have the `_isnan' function. */
/* #undef _GLIBCXX_HAVE__ISNAN */

/* Define to 1 if you have the `_isnanf' function. */
/* #undef _GLIBCXX_HAVE__ISNANF */

/* Define to 1 if you have the `_isnanl' function. */
/* #undef _GLIBCXX_HAVE__ISNANL */

/* Define to 1 if you have the `_ldexpf' function. */
/* #undef _GLIBCXX_HAVE__LDEXPF */

/* Define to 1 if you have the `_ldexpl' function. */
/* #undef _GLIBCXX_HAVE__LDEXPL */

/* Define to 1 if you have the `_log10f' function. */
/* #undef _GLIBCXX_HAVE__LOG10F */

/* Define to 1 if you have the `_log10l' function. */
/* #undef _GLIBCXX_HAVE__LOG10L */

/* Define to 1 if you have the `_logf' function. */
/* #undef _GLIBCXX_HAVE__LOGF */

/* Define to 1 if you have the `_logl' function. */
/* #undef _GLIBCXX_HAVE__LOGL */

/* Define to 1 if you have the `_modf' function. */
/* #undef _GLIBCXX_HAVE__MODF */

/* Define to 1 if you have the `_modff' function. */
/* #undef _GLIBCXX_HAVE__MODFF */

/* Define to 1 if you have the `_modfl' function. */
/* #undef _GLIBCXX_HAVE__MODFL */

/* Define to 1 if you have the `_powf' function. */
/* #undef _GLIBCXX_HAVE__POWF */

/* Define to 1 if you have the `_powl' function. */
/* #undef _GLIBCXX_HAVE__POWL */

/* Define to 1 if you have the `_qfpclass' function. */
/* #undef _GLIBCXX_HAVE__QFPCLASS */

/* Define to 1 if you have the `_sincos' function. */
/* #undef _GLIBCXX_HAVE__SINCOS */

/* Define to 1 if you have the `_sincosf' function. */
/* #undef _GLIBCXX_HAVE__SINCOSF */

/* Define to 1 if you have the `_sincosl' function. */
/* #undef _GLIBCXX_HAVE__SINCOSL */

/* Define to 1 if you have the `_sinf' function. */
/* #undef _GLIBCXX_HAVE__SINF */

/* Define to 1 if you have the `_sinhf' function. */
/* #undef _GLIBCXX_HAVE__SINHF */

/* Define to 1 if you have the `_sinhl' function. */
/* #undef _GLIBCXX_HAVE__SINHL */

/* Define to 1 if you have the `_sinl' function. */
/* #undef _GLIBCXX_HAVE__SINL */

/* Define to 1 if you have the `_sqrtf' function. */
/* #undef _GLIBCXX_HAVE__SQRTF */

/* Define to 1 if you have the `_sqrtl' function. */
/* #undef _GLIBCXX_HAVE__SQRTL */

/* Define to 1 if you have the `_tanf' function. */
/* #undef _GLIBCXX_HAVE__TANF */

/* Define to 1 if you have the `_tanhf' function. */
/* #undef _GLIBCXX_HAVE__TANHF */

/* Define to 1 if you have the `_tanhl' function. */
/* #undef _GLIBCXX_HAVE__TANHL */

/* Define to 1 if you have the `_tanl' function. */
/* #undef _GLIBCXX_HAVE__TANL */

/* Define to 1 if you have the `__cxa_thread_atexit_impl' function. */
/* #undef _GLIBCXX_HAVE___CXA_THREAD_ATEXIT_IMPL */

/* Define as const if the declaration of iconv() needs const. */
/* #undef _GLIBCXX_ICONV_CONST */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */


/* Name of package */
/* #undef _GLIBCXX_PACKAGE */

/* Define to the address where bug reports for this package should be sent. */


/* Define to the full name of this package. */


/* Define to the full name and version of this package. */


/* Define to the one symbol short name of this package. */


/* Define to the home page for this package. */


/* Define to the version of this package. */


/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */

/* The size of `int', as computed by sizeof. */
/* #undef SIZEOF_INT */

/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG */

/* The size of `short', as computed by sizeof. */
/* #undef SIZEOF_SHORT */

/* The size of `void *', as computed by sizeof. */
/* #undef SIZEOF_VOID_P */

/* Define to 1 if you have the ANSI C header files. */


/* Version number of package */
/* #undef _GLIBCXX_VERSION */

/* Define if the compiler supports C++11 atomics. */
/* #undef _GLIBCXX_ATOMIC_BUILTINS */

/* Define to use concept checking code from the boost libraries. */
/* #undef _GLIBCXX_CONCEPT_CHECKS */

/* Define to 1 if a fully dynamic basic_string is wanted, 0 to disable,
   undefined for platform defaults */


/* Define if gthreads library is available. */
/* #undef _GLIBCXX_HAS_GTHREADS */

/* Define to 1 if a full hosted library is built, or 0 if freestanding. */


/* Define if compatibility should be provided for -mlong-double-64. */

/* Define if ptrdiff_t is int. */


/* Define if using setrlimit to set resource limits during "make check" */
/* #undef _GLIBCXX_RES_LIMITS */

/* Define if size_t is unsigned int. */


/* Define if the compiler is configured for setjmp/longjmp exceptions. */
/* #undef _GLIBCXX_SJLJ_EXCEPTIONS */

/* Define to the value of the EOF integer constant. */


/* Define to the value of the SEEK_CUR integer constant. */


/* Define to the value of the SEEK_END integer constant. */


/* Define to use symbol versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER */

/* Define to use darwin versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_DARWIN */

/* Define to use GNU versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_GNU */

/* Define to use GNU namespace versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_GNU_NAMESPACE */

/* Define to use Sun versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_SUN */

/* Define if C99 functions or macros from <wchar.h>, <math.h>, <complex.h>,
   <stdio.h>, and <stdlib.h> can be used or exposed. */
/* #undef _GLIBCXX_USE_C99 */

/* Define if C99 functions in <complex.h> should be used in <complex>. Using
   compiler builtins for these functions requires corresponding C99 library
   functions to be present. */
/* #undef _GLIBCXX_USE_C99_COMPLEX */

/* Define if C99 functions in <complex.h> should be used in <tr1/complex>.
   Using compiler builtins for these functions requires corresponding C99
   library functions to be present. */
/* #undef _GLIBCXX_USE_C99_COMPLEX_TR1 */

/* Define if C99 functions in <ctype.h> should be imported in <tr1/cctype> in
   namespace std::tr1. */


/* Define if C99 functions in <fenv.h> should be imported in <tr1/cfenv> in
   namespace std::tr1. */
/* #undef _GLIBCXX_USE_C99_FENV_TR1 */

/* Define if C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */


/* Define if wchar_t C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */


/* Define if C99 functions or macros in <math.h> should be imported in <cmath>
   in namespace std. */


/* Define if C99 functions or macros in <math.h> should be imported in
   <tr1/cmath> in namespace std::tr1. */
/* #undef _GLIBCXX_USE_C99_MATH_TR1 */

/* Define if C99 types in <stdint.h> should be imported in <tr1/cstdint> in
   namespace std::tr1. */


/* Defined if clock_gettime has monotonic clock support. */
/* #undef _GLIBCXX_USE_CLOCK_MONOTONIC */

/* Defined if clock_gettime syscall has monotonic and realtime clock support. */
/* #undef _GLIBCXX_USE_CLOCK_GETTIME_SYSCALL */

/* Defined if clock_gettime has realtime clock support. */
/* #undef _GLIBCXX_USE_CLOCK_REALTIME */

/* Define if ISO/IEC TR 24733 decimal floating point types are supported on
   this host. */
/* #undef _GLIBCXX_USE_DECIMAL_FLOAT */

/* Define if __float128 is supported on this host. */
/* #undef _GLIBCXX_USE_FLOAT128 */

/* Defined if gettimeofday is available. */


/* Define if get_nprocs is available in <sys/sysinfo.h>. */
/* #undef _GLIBCXX_USE_GET_NPROCS */

/* Define if __int128 is supported on this host. */
/* #undef _GLIBCXX_USE_INT128 */

/* Define if LFS support is available. */
/* #undef _GLIBCXX_USE_LFS */

/* Define if code specialized for long long should be used. */


/* Defined if nanosleep is available. */
/* #undef _GLIBCXX_USE_NANOSLEEP */

/* Define if NLS translations are to be used. */
/* #undef _GLIBCXX_USE_NLS */

/* Define if pthreads_num_processors_np is available in <pthread.h>. */
/* #undef _GLIBCXX_USE_PTHREADS_NUM_PROCESSORS_NP */

/* Define if /dev/random and /dev/urandom are available for the random_device
   of TR1 (Chapter 5.1). */
/* #undef _GLIBCXX_USE_RANDOM_TR1 */

/* Defined if sched_yield is available. */
/* #undef _GLIBCXX_USE_SCHED_YIELD */

/* Define if _SC_NPROCESSORS_ONLN is available in <unistd.h>. */


/* Define if _SC_NPROC_ONLN is available in <unistd.h>. */
/* #undef _GLIBCXX_USE_SC_NPROC_ONLN */

/* Define if sysctl(), CTL_HW and HW_NCPU are available in <sys/sysctl.h>. */
/* #undef _GLIBCXX_USE_SYSCTL_HW_NCPU */

/* Define if code specialized for wchar_t should be used. */


/* Define to 1 if a verbose library is built, or 0 otherwise. */


/* Defined if as can handle rdrand. */
/* #undef _GLIBCXX_X86_RDRAND */

/* Define to 1 if mutex_timedlock is available. */
# 42 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/cstddef" 2 3
# 1 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/lib/gcc/arm-none-eabi/4.8.3/include/stddef.h" 1 3 4
/* Copyright (C) 1989-2013 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
<http://www.gnu.org/licenses/>.  */

/*
 * ISO C Standard:  7.17  Common definitions  <stddef.h>
 */
# 42 "/home/megabug/.arduino15/packages/arduino/tools/arm-none-eabi-gcc/4.8.3-2014q1/arm-none-eabi/include/c++/4.8.3/cstddef" 2 3
# 26 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Uart.h" 2

class Uart : public HardwareSerial
{
  public:
    Uart(SERCOM *_s, uint8_t _pinRX, uint8_t _pinTX, SercomRXPad _padRX, SercomUartTXPad _padTX);
    void begin(unsigned long baudRate);
    void begin(unsigned long baudrate, uint16_t config);
    void end();
    int available();
    int availableForWrite();
    int peek();
    int read();
    void flush();
    size_t write(const uint8_t data);
    using Print::write; // pull in write(str) and write(buf, size) from Print

    void IrqHandler();

    operator bool() { return true; }

  private:
    SERCOM *sercom;
    RingBuffer rxBuffer;
    RingBuffer txBuffer;

    uint8_t uc_pinRX;
    uint8_t uc_pinTX;
    SercomRXPad uc_padRX;
    SercomUartTXPad uc_padTX;

    SercomNumberStopBit extractNbStopBit(uint16_t config);
    SercomUartCharSize extractCharSize(uint16_t config);
    SercomParityMode extractParity(uint16_t config);
};
# 44 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h" 2



extern "C"
{


/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

// Number of pins defined in PinDescription array
# 64 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h"
//#define analogInPinToBit(P)        ( )





/*
 * digitalPinToTimer(..) is AVR-specific and is not defined for SAMD
 * architecture. If you need to check if a pin supports PWM you must
 * use digitalPinHasPWM(..).
 *
 * https://github.com/arduino/Arduino/issues/1833
 */
// #define digitalPinToTimer(P)

// LEDs
# 88 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h"
/*
 * Analog pins
 */
# 99 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h"
static const uint8_t A0 = (14ul);
static const uint8_t A1 = (15ul);
static const uint8_t A2 = (16ul);
static const uint8_t A3 = (17ul);
static const uint8_t A4 = (18ul);
static const uint8_t A5 = (19ul);
static const uint8_t DAC0 = (14ul);


// Other pins

static const uint8_t ATN = (38ul);

/*
 * Serial interfaces
 */
// Serial (EDBG)





// Serial1





/*
 * SPI Interfaces
 */
# 139 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h"
static const uint8_t SS = (16ul) ; // SERCOM4 last PAD is present on A2 but HW SS isn't used. Set here only for reference.
static const uint8_t MOSI = (23u) ;
static const uint8_t MISO = (22u) ;
static const uint8_t SCK = (24u) ;

/*
 * Wire Interfaces
 */







static const uint8_t SDA = (20u);
static const uint8_t SCL = (21u);

/*
 * USB
 */




/*
 * I2S Interfaces
 */
# 176 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h"
}


/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/



/*	=========================
 *	===== SERCOM DEFINITION
 *	=========================
*/
extern SERCOM sercom0;
extern SERCOM sercom1;
extern SERCOM sercom2;
extern SERCOM sercom3;
extern SERCOM sercom4;
extern SERCOM sercom5;

extern Uart Serial;
extern Uart Serial1;



// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.


// Serial has no physical pins broken out, so it's not listed as HARDWARE port
# 28 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/delay.h" 2

/**
 * \brief Returns the number of milliseconds since the Arduino board began running the current program.
 *
 * This number will overflow (go back to zero), after approximately 50 days.
 *
 * \return Number of milliseconds since the program started (uint32_t)
 */
extern unsigned long millis( void ) ;

/**
 * \brief Returns the number of microseconds since the Arduino board began running the current program.
 *
 * This number will overflow (go back to zero), after approximately 70 minutes. On 16 MHz Arduino boards
 * (e.g. Duemilanove and Nano), this function has a resolution of four microseconds (i.e. the value returned is
 * always a multiple of four). On 8 MHz Arduino boards (e.g. the LilyPad), this function has a resolution
 * of eight microseconds.
 *
 * \note There are 1,000 microseconds in a millisecond and 1,000,000 microseconds in a second.
 */
extern unsigned long micros( void ) ;

/**
 * \brief Pauses the program for the amount of time (in miliseconds) specified as parameter.
 * (There are 1000 milliseconds in a second.)
 *
 * \param dwMs the number of milliseconds to pause (uint32_t)
 */
extern void delay( unsigned long dwMs ) ;

/**
 * \brief Pauses the program for the amount of time (in microseconds) specified as parameter.
 *
 * \param dwUs the number of microseconds to pause (uint32_t)
 */
static __inline__ void delayMicroseconds( unsigned int ) __attribute__((always_inline, unused)) ;
static __inline__ void delayMicroseconds( unsigned int usec )
{
  if ( usec == 0 )
  {
    return ;
  }

  /*
   *  The following loop:
   *
   *    for (; ul; ul--) {
   *      __asm__ volatile("");
   *    }
   *
   *  produce the following assembly code:
   *
   *    loop:
   *      subs r3, #1        // 1 Core cycle
   *      bne.n loop         // 1 Core cycle + 1 if branch is taken
   */

  // VARIANT_MCK / 1000000 == cycles needed to delay 1uS
  //                     3 == cycles used in a loop
  uint32_t n = usec * ((48000000ul) / 1000000) / 3;
  __asm__ __volatile__(
    "1:              \n"
    "   sub %0, #1   \n" // substract 1 from %0 (n)
    "   bne 1b       \n" // if result is not 0 jump to 1
    : "+r" (n) // '%0' is n variable with RW constraints
    : // no input
    : // no clobber
  );
  // https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html
  // https://gcc.gnu.org/onlinedocs/gcc/Extended-Asm.html#Volatile
}


}
# 82 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2




// Include board variant
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/variants/arduino_zero/variant.h" 1
/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 88 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2

# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/wiring.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       


extern "C" {


extern void init(void);


}
# 90 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/wiring_digital.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





 extern "C" {




/**
 * \brief Configures the specified pin to behave either as an input or an output. See the description of digital pins for details.
 *
 * \param ulPin The number of the pin whose mode you wish to set
 * \param ulMode Can be INPUT, OUTPUT, INPUT_PULLUP or INPUT_PULLDOWN
 */
extern void pinMode( uint32_t dwPin, uint32_t dwMode ) ;

/**
 * \brief Write a HIGH or a LOW value to a digital pin.
 *
 * If the pin has been configured as an OUTPUT with pinMode(), its voltage will be set to the
 * corresponding value: 5V (or 3.3V on 3.3V boards) for HIGH, 0V (ground) for LOW.
 *
 * If the pin is configured as an INPUT, writing a HIGH value with digitalWrite() will enable an internal
 * 20K pullup resistor (see the tutorial on digital pins). Writing LOW will disable the pullup. The pullup
 * resistor is enough to light an LED dimly, so if LEDs appear to work, but very dimly, this is a likely
 * cause. The remedy is to set the pin to an output with the pinMode() function.
 *
 * \note Digital pin PIN_LED is harder to use as a digital input than the other digital pins because it has an LED
 * and resistor attached to it that's soldered to the board on most boards. If you enable its internal 20k pull-up
 * resistor, it will hang at around 1.7 V instead of the expected 5V because the onboard LED and series resistor
 * pull the voltage level down, meaning it always returns LOW. If you must use pin PIN_LED as a digital input, use an
 * external pull down resistor.
 *
 * \param dwPin the pin number
 * \param dwVal HIGH or LOW
 */
extern void digitalWrite( uint32_t dwPin, uint32_t dwVal ) ;

/**
 * \brief Reads the value from a specified digital pin, either HIGH or LOW.
 *
 * \param ulPin The number of the digital pin you want to read (int)
 *
 * \return HIGH or LOW
 */
extern int digitalRead( uint32_t ulPin ) ;


}
# 91 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/wiring_analog.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       




extern "C" {


/*
 * \brief SAMD products have only one reference for ADC
 */
typedef enum _eAnalogReference
{
  AR_DEFAULT,
  AR_INTERNAL,
  AR_EXTERNAL,
  AR_INTERNAL1V0,
  AR_INTERNAL1V65,
  AR_INTERNAL2V23
} eAnalogReference ;


/*
 * \brief Configures the reference voltage used for analog input (i.e. the value used as the top of the input range).
 * This function is kept only for compatibility with existing AVR based API.
 *
 * \param ulMmode Should be set to AR_DEFAULT.
 */
extern void analogReference( eAnalogReference ulMode ) ;

/*
 * \brief Writes an analog value (PWM wave) to a pin.
 *
 * \param ulPin
 * \param ulValue
 */
extern void analogWrite( uint32_t ulPin, uint32_t ulValue ) ;

/*
 * \brief Reads the value from the specified analog pin.
 *
 * \param ulPin
 *
 * \return Read value from selected pin, if no error.
 */
extern uint32_t analogRead( uint32_t ulPin ) ;

/*
 * \brief Set the resolution of analogRead return values. Default is 10 bits (range from 0 to 1023).
 *
 * \param res
 */
extern void analogReadResolution(int res);

/*
 * \brief Set the resolution of analogWrite parameters. Default is 8 bits (range from 0 to 255).
 *
 * \param res
 */
extern void analogWriteResolution(int res);

extern void analogOutputInit( void ) ;


}
# 92 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/wiring_shift.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





 extern "C" {


/*
 * \brief
 */
extern uint32_t shiftIn( uint32_t ulDataPin, uint32_t ulClockPin, uint32_t ulBitOrder ) ;


/*
 * \brief
 */
extern void shiftOut( uint32_t ulDataPin, uint32_t ulClockPin, uint32_t ulBitOrder, uint32_t ulVal ) ;



}
# 93 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/WInterrupts.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/







extern "C" {


//      LOW 0
//      HIGH 1







typedef void (*voidFuncPtr)(void);

/*
 * \brief Specifies a named Interrupt Service Routine (ISR) to call when an interrupt occurs.
 *        Replaces any previous function that was attached to the interrupt.
 */
void attachInterrupt(uint32_t pin, voidFuncPtr callback, uint32_t mode);

/*
 * \brief Turns off the given interrupt.
 */
void detachInterrupt(uint32_t pin);


}
# 94 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2

// undefine stdlib's abs if encountered
# 123 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h"
// Interrupts



// USB Device
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBDesc.h" 1
/*
  Copyright (c) 2014 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




// CDC or HID can be enabled together.
# 31 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBDesc.h"
// CDC
# 46 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBDesc.h"
// Defined string description
# 129 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h" 1
/*
  Copyright (c) 2014 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/




//	Standard requests
# 34 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"
// bEndpointAddress in Endpoint Descriptor
# 47 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"
// bmRequestType
# 66 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"
//	Class requests
# 76 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"
//	Descriptors

// #define USB_DEVICE_DESC_SIZE			18
// #define USB_CONFIGUARTION_DESC_SIZE		9
// #define USB_INTERFACE_DESC_SIZE			9
// #define USB_ENDPOINT_DESC_SIZE			7
# 101 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"
// bMaxPower in Configuration Descriptor
# 119 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"

# 119 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"
#pragma pack(1)
# 119 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"


//	Device
typedef struct {
 uint8_t len; // 18
 uint8_t dtype; // 1 USB_DEVICE_DESCRIPTOR_TYPE
 uint16_t usbVersion; // 0x200
 uint8_t deviceClass;
 uint8_t deviceSubClass;
 uint8_t deviceProtocol;
 uint8_t packetSize0; // Packet 0
 uint16_t idVendor;
 uint16_t idProduct;
 uint16_t deviceVersion; // 0x100
 uint8_t iManufacturer;
 uint8_t iProduct;
 uint8_t iSerialNumber;
 uint8_t bNumConfigurations;
} DeviceDescriptor;

//	Config
typedef struct {
 uint8_t len; // 9
 uint8_t dtype; // 2
 uint16_t clen; // total length
 uint8_t numInterfaces;
 uint8_t config;
 uint8_t iconfig;
 uint8_t attributes;
 uint8_t maxPower;
} ConfigDescriptor;

//	String

//	Interface
typedef struct
{
 uint8_t len; // 9
 uint8_t dtype; // 4
 uint8_t number;
 uint8_t alternate;
 uint8_t numEndpoints;
 uint8_t interfaceClass;
 uint8_t interfaceSubClass;
 uint8_t protocol;
 uint8_t iInterface;
} InterfaceDescriptor;

//	Endpoint
typedef struct
{
 uint8_t len; // 7
 uint8_t dtype; // 5
 uint8_t addr;
 uint8_t attr;
 uint16_t packetSize;
 uint8_t interval;
} EndpointDescriptor;

// Interface Association Descriptor
// Used to bind 2 interfaces together in CDC compostite device
typedef struct
{
 uint8_t len; // 8
 uint8_t dtype; // 11
 uint8_t firstInterface;
 uint8_t interfaceCount;
 uint8_t functionClass;
 uint8_t funtionSubClass;
 uint8_t functionProtocol;
 uint8_t iInterface;
} IADDescriptor;

//	CDC CS interface descriptor
typedef struct
{
 uint8_t len; // 5
 uint8_t dtype; // 0x24
 uint8_t subtype;
 uint8_t d0;
 uint8_t d1;
} CDCCSInterfaceDescriptor;

typedef struct
{
 uint8_t len; // 4
 uint8_t dtype; // 0x24
 uint8_t subtype;
 uint8_t d0;
} CDCCSInterfaceDescriptor4;

typedef struct
{
    uint8_t len;
    uint8_t dtype; // 0x24
    uint8_t subtype; // 1
    uint8_t bmCapabilities;
    uint8_t bDataInterface;
} CMFunctionalDescriptor;

typedef struct
{
    uint8_t len;
    uint8_t dtype; // 0x24
    uint8_t subtype; // 1
    uint8_t bmCapabilities;
} ACMFunctionalDescriptor;

typedef struct
{
 //	IAD
 IADDescriptor iad; // Only needed on compound device
 //	Control
 InterfaceDescriptor cif;
 CDCCSInterfaceDescriptor header;
 ACMFunctionalDescriptor controlManagement; // ACM
 CDCCSInterfaceDescriptor functionalDescriptor; // CDC_UNION
 CMFunctionalDescriptor callManagement; // Call Management
 EndpointDescriptor cifin;

 //	Data
 InterfaceDescriptor dif;
 EndpointDescriptor in;
 EndpointDescriptor out;
} CDCDescriptor;

typedef struct
{
 InterfaceDescriptor msc;
 EndpointDescriptor in;
 EndpointDescriptor out;
} MSCDescriptor;


# 252 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"
#pragma pack()
# 252 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBCore.h"




/* Table 9-8. Standard Device Descriptor
 * bLength, bDescriptorType, bcdUSB, bDeviceClass, bDeviceSubClass, bDeviceProtocol, bMaxPacketSize0,
 *    idVendor, idProduct, bcdDevice, iManufacturer, iProduct, iSerialNumber, bNumConfigurations */



/* Table 9-10. Standard Configuration Descriptor
 * bLength, bDescriptorType, wTotalLength, bNumInterfaces, bConfigurationValue, iConfiguration
 * bmAttributes, bMaxPower */



/* Table 9-12. Standard Interface Descriptor
 * bLength, bDescriptorType, bInterfaceNumber, bAlternateSetting, bNumEndpoints, bInterfaceClass,
 * bInterfaceSubClass, bInterfaceProtocol, iInterface */



/* Table 9-13. Standard Endpoint Descriptor
 * bLength, bDescriptorType, bEndpointAddress, bmAttributes, wMaxPacketSize, bInterval */



/* iadclasscode_r10.pdf, Table 9\96Z. Standard Interface Association Descriptor
 * bLength, bDescriptorType, bFirstInterface, bInterfaceCount, bFunctionClass, bFunctionSubClass, bFunctionProtocol, iFunction */

// Functional Descriptor General Format


/* bFunctionLength, bDescriptorType, bDescriptorSubtype, function specific data0, functional specific data N-1
 * CS_INTERFACE 24h */
# 130 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBAPI.h" 1
/*
  Copyright (c) 2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

       
# 32 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBAPI.h"
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Stream.h" 1
/*
  Stream.h - base class for character-based streams.
  Copyright (c) 2010 David A. Mellis.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  parsing functions based on TextFinder library by Michael Margolis
*/
# 33 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBAPI.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/RingBuffer.h" 1
/*
  Copyright (c) 2014 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
# 34 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USBAPI.h" 2

//================================================================================
// USB

// Low level API
typedef struct {
 union {
  uint8_t bmRequestType;
  struct {
   uint8_t direction : 5;
   uint8_t type : 2;
   uint8_t transferDirection : 1;
  };
 };
 uint8_t bRequest;
 uint8_t wValueL;
 uint8_t wValueH;
 uint16_t wIndex;
 uint16_t wLength;
} USBSetup;

class USBDeviceClass {
public:
 USBDeviceClass() {};

 // USB Device API
 void init();
 bool attach();
 bool detach();
 void setAddress(uint32_t addr);

 bool configured();
 bool connected();

 void standby();

 // Setup API
 bool handleClassInterfaceSetup(USBSetup &setup);
 bool handleStandardSetup(USBSetup &setup);
 bool sendDescriptor(USBSetup &setup);

 // Control EndPoint API
 uint32_t sendControl(const void *data, uint32_t len);
 uint32_t sendControl(int /* ep */, const void *data, uint32_t len) { return sendControl(data, len); }
 uint32_t recvControl(void *data, uint32_t len);
 uint32_t sendConfiguration(uint32_t maxlen);
 bool sendStringDescriptor(const uint8_t *string, uint8_t maxlen);
 void initControl(int end);
 uint8_t SendInterfaces(uint32_t* total);
 void packMessages(bool val);

 // Generic EndPoint API
 void initEndpoints(void);
 void initEP(uint32_t ep, uint32_t type);
 void handleEndpoint(uint8_t ep);

 uint32_t send(uint32_t ep, const void *data, uint32_t len);
 void sendZlp(uint32_t ep);
 uint32_t recv(uint32_t ep, void *data, uint32_t len);
 int recv(uint32_t ep);
 uint32_t available(uint32_t ep);
 void flush(uint32_t ep);
 void stall(uint32_t ep);

 // private?
 uint32_t armSend(uint32_t ep, const void *data, uint32_t len);
 uint8_t armRecv(uint32_t ep);
 uint8_t armRecvCtrlOUT(uint32_t ep);

 void ISRHandler();

private:
 bool initialized;
};

extern USBDeviceClass USBDevice;

//================================================================================
//	Serial over CDC (Serial1 is the physical port)

class Serial_ : public Stream
{
public:
 Serial_(USBDeviceClass &_usb) : usb(_usb), stalled(false) { }
 void begin(uint32_t baud_count);
 void begin(unsigned long, uint8_t);
 void end(void);

 virtual int available(void);
 virtual int availableForWrite(void);
 virtual int peek(void);
 virtual int read(void);
 virtual void flush(void);
 virtual size_t write(uint8_t);
 virtual size_t write(const uint8_t *buffer, size_t size);
 using Print::write; // pull in write(str) from Print
 operator bool();

 size_t readBytes(char *buffer, size_t length);

 // This method allows processing "SEND_BREAK" requests sent by
 // the USB host. Those requests indicate that the host wants to
 // send a BREAK signal and are accompanied by a single uint16_t
 // value, specifying the duration of the break. The value 0
 // means to end any current break, while the value 0xffff means
 // to start an indefinite break.
 // readBreak() will return the value of the most recent break
 // request, but will return it at most once, returning -1 when
 // readBreak() is called again (until another break request is
 // received, which is again returned once).
 // This also mean that if two break requests are received
 // without readBreak() being called in between, the value of the
 // first request is lost.
 // Note that the value returned is a long, so it can return
 // 0-0xffff as well as -1.
 int32_t readBreak();

 // These return the settings specified by the USB host for the
 // serial port. These aren't really used, but are offered here
 // in case a sketch wants to act on these settings.
 uint32_t baud();
 uint8_t stopbits();
 uint8_t paritytype();
 uint8_t numbits();
 bool dtr();
 bool rts();
 enum {
  ONE_STOP_BIT = 0,
  ONE_AND_HALF_STOP_BIT = 1,
  TWO_STOP_BITS = 2,
 };
 enum {
  NO_PARITY = 0,
  ODD_PARITY = 1,
  EVEN_PARITY = 2,
  MARK_PARITY = 3,
  SPACE_PARITY = 4,
 };

private:
 int availableForStore(void);

 USBDeviceClass &usb;
 RingBuffer *_cdc_rx_buffer;
 bool stalled;
};
extern Serial_ SerialUSB;

//================================================================================
//================================================================================
//	MSC 'Driver'

uint32_t MSC_GetInterface(uint8_t* interfaceNum);
uint32_t MSC_GetDescriptor(uint32_t i);
bool MSC_Setup(USBSetup& setup);
bool MSC_Data(uint8_t rx,uint8_t tx);

//================================================================================
//================================================================================
//	CDC 'Driver'

int CDC_GetInterface(uint8_t* interfaceNum);
const void* _CDC_GetInterface(void);
uint32_t _CDC_GetInterfaceLength(void);
uint32_t CDC_GetOtherInterface(uint8_t* interfaceNum);
uint32_t CDC_GetDescriptor(uint32_t i);
bool CDC_Setup(USBSetup& setup);
# 131 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USB_host.h" 1
/*
  Copyright (c) 2014 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





# 1 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/samd21_host.h" 1
/*
  Copyright (c) 2014 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/





extern "C" {


extern __attribute__((__aligned__(4))) volatile UsbHostDescriptor usb_pipe_table[8 /* Number of USB end points*/];
# 60 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/samd21_host.h"
// USB host connection/disconnection monitoring
# 69 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/samd21_host.h"
// Initiates a USB register reset


// Bus Reset







// Initiates a SOF events





// USB address of pipes



// Pipes




// Pipe configuration


// Pipe data management
# 109 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/samd21_host.h"
// Endpoint Interrupt Summary


// Run in Standby

// Force host mode


// Enable USB macro

// Disable USB macro


// Force full speed mode



}
# 24 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USB_host.h" 2

extern "C" {
# 34 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/USB/USB_host.h"
//! \brief Device speed
/*typedef enum {
	UHD_SPEED_LOW  = 0,
	UHD_SPEED_FULL = 1,
	UHD_SPEED_HIGH = 2,
} uhd_speed_t;*/

//! States of USBB interface
typedef enum {
 UHD_STATE_NO_VBUS = 0,
 UHD_STATE_DISCONNECTED = 1,
 UHD_STATE_CONNECTED = 2,
 UHD_STATE_ERROR = 3,
} uhd_vbus_state_t;

extern void UHD_Init(void);
extern void UHD_Handler(void);
extern void USB_SetHandler(void (*pf_isr)(void));
extern uhd_vbus_state_t UHD_GetVBUSState(void);
extern uint32_t UHD_Pipe0_Alloc(uint32_t ul_add, uint32_t ul_ep_size);
extern uint32_t UHD_Pipe_Alloc(uint32_t ul_dev_addr, uint32_t ul_dev_ep, uint32_t ul_type, uint32_t ul_dir, uint32_t ul_maxsize, uint32_t ul_interval, uint32_t ul_nb_bank);
extern void UHD_Pipe_CountZero(uint32_t ul_pipe);
extern void UHD_Pipe_Free(uint32_t ul_pipe);
extern uint32_t UHD_Pipe_Read(uint32_t ul_pipe, uint32_t ul_size, uint8_t* data);
extern void UHD_Pipe_Write(uint32_t ul_pipe, uint32_t ul_size, uint8_t* data);
extern void UHD_Pipe_Send(uint32_t ul_pipe, uint32_t ul_token_type);
extern uint32_t UHD_Pipe_Is_Transfer_Complete(uint32_t ul_pipe, uint32_t ul_token_type);


}
# 132 "/home/megabug/.arduino15/packages/arduino/hardware/samd/1.6.16/cores/arduino/Arduino.h" 2
# 2 "/home/megabug/Code/arduino/build/linux/work/examples/01.Basics/Blink/Blink.ino" 2
# 1 "/home/megabug/Code/arduino/build/linux/work/examples/01.Basics/Blink/Blink.ino"
/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode((13u), (0x1));
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite((13u), (0x1)); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite((13u), (0x0)); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
}
