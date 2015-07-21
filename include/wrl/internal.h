/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _WRL_INTERNAL_H_
#define _WRL_INTERNAL_H_

#include <windows.h>

namespace Microsoft {
    namespace WRL {
        namespace Details {
            inline void DECLSPEC_NORETURN RaiseException(HRESULT hr, DWORD flags = EXCEPTION_NONCONTINUABLE) throw() {
                ::RaiseException(static_cast<DWORD>(hr), flags, 0, NULL);
            }
        }
    }
}

#endif
