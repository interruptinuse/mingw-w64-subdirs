#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

LONG InterlockedXor(LONG volatile *Destination,LONG Value)
{
  __asm__ __volatile__("lock ; xorl %0,%1"
    : : "r"(Value),"m"(*Destination) : "memory");
  return *Destination;
}

