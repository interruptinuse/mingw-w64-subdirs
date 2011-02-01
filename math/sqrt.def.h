/*
 This Software is provided under the Zope Public License (ZPL) Version 2.1.

 Copyright (c) 2009, 2010 by the mingw-w64 project

 See the AUTHORS file for the list of contributors to the mingw-w64 project.

 This license has been certified as open source. It has also been designated
 as GPL compatible by the Free Software Foundation (FSF).

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

   1. Redistributions in source code must retain the accompanying copyright
      notice, this list of conditions, and the following disclaimer.
   2. Redistributions in binary form must reproduce the accompanying
      copyright notice, this list of conditions, and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
   3. Names of the copyright holders must not be used to endorse or promote
      products derived from this software without prior written permission
      from the copyright holders.
   4. The right to distribute this software or to use it for any purpose does
      not give you the right to use Servicemarks (sm) or Trademarks (tm) of
      the copyright holders.  Use of them is covered by separate agreement
      with the copyright holders.
   5. If any files are modified, you must cause the modified files to carry
      prominent notices stating that you changed the files and the date of
      any change.

 Disclaimer

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY EXPRESSED
 OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
 OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "../complex/complex_internal.h"
#include <errno.h>

__FLT_TYPE
__FLT_ABI (sqrt) (__FLT_TYPE x)
{
  __FLT_TYPE res = __FLT_CST (0.0);
  int x_class = fpclassify (x);
  if (x_class == FP_NAN || signbit (x))
    {
      res = (signbit (x) ? -__FLT_NAN : __FLT_NAN);
      __FLT_RPT_DOMAIN ("sqrt", x, 0.0, res);
      return res;
    }
  else if (x_class == FP_ZERO)
    return __FLT_CST (0.0);
  else if (x_class == FP_INFINITE)
    return __FLT_HUGE_VAL;
  else if (x == __FLT_CST (1.0))
   return __FLT_CST (1.0);
#if !defined(_WIN64) || defined(_NEW_COMPLEX_LDOUBLE)
  asm ("fsqrt" : "=t" (res) : "0" (x));
  return res;
#elif defined(_NEW_COMPLEX_FLOAT)
 __asm__ __volatile__ ("sqrtss %0, %0" : "=x" (x) : "x" (x) : );
 return x;
#else
 __asm__ __volatile__ ("sqrtsd %0, %0" : "=x" (x) : "x" (x) : );
 return x;
#endif
}
