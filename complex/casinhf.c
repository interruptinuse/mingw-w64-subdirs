/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
/*
   casinhf.c
   Contributed by Danny Smith
   2004-12-24
*/

#include <math.h>
#include <complex.h>

/* casinh (z) = -I casin (I * z) */

float complex casinhf (float complex Z)
{
  float complex Tmp;
  float complex Res;

  __real__ Tmp = - __imag__ Z;
  __imag__ Tmp =   __real__ Z;
  Tmp = casinf (Tmp);
  __real__ Res =   __imag__ Tmp;
  __imag__ Res = - __real__ Tmp;
  return Res;
}
