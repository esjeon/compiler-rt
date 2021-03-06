/* ===-- endian.h - stub SDK header for compiler-rt -------------------------===
 *
 *                     The LLVM Compiler Infrastructure
 *
 * This file is dual licensed under the MIT and the University of Illinois Open
 * Source Licenses. See LICENSE.TXT for details.
 *
 * ===-----------------------------------------------------------------------===
 *
 * This is a stub SDK header file. This file is not part of the interface of
 * this library nor an official version of the appropriate SDK header. It is
 * intended only to stub the features of this header required by compiler-rt.
 *
 * ===-----------------------------------------------------------------------===
 */

#ifndef __ENDIAN_H__
#define __ENDIAN_H__

#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321

#if defined(__LITTLE_ENDIAN__) || defined(__ORDER_LITTLE_ENDIAN__)
#define __BYTE_ORDER __LITTLE_ENDIAN
#else
#define __BYTE_ORDER __BIG_ENDIAN
#endif

#endif /* __ENDIAN_H__ */
