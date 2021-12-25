/*** Autogenerated by WIDL 7.0-rc2 from include/windows.system.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_system_h__
#define __windows_system_h__

/* Forward declarations */

#ifndef ____x_ABI_CWindows_CSystem_CIDispatcherQueueController_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIDispatcherQueueController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueueController __x_ABI_CWindows_CSystem_CIDispatcherQueueController;
#ifdef __cplusplus
#define __x_ABI_CWindows_CSystem_CIDispatcherQueueController ABI::Windows::System::IDispatcherQueueController
namespace ABI {
    namespace Windows {
        namespace System {
            interface IDispatcherQueueController;
        }
    }
}
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <inspectable.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IDispatcherQueueController interface
 */
#ifndef ____x_ABI_CWindows_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__

DEFINE_GUID(IID___x_ABI_CWindows_CSystem_CIDispatcherQueueController, 0x22f34e66, 0x50db, 0x4e36, 0xa9,0x8d, 0x61,0xc0,0x1b,0x38,0x4d,0x20);
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            MIDL_INTERFACE("22f34e66-50db-4e36-a98d-61c01b384d20")
            IDispatcherQueueController : public IInspectable
            {
            };
        }
    }
}
extern "C" {
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(__x_ABI_CWindows_CSystem_CIDispatcherQueueController, 0x22f34e66, 0x50db, 0x4e36, 0xa9,0x8d, 0x61,0xc0,0x1b,0x38,0x4d,0x20)
#endif
#else
typedef struct __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController *This);

    /*** IInspectable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetIids)(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController *This,
        ULONG *iidCount,
        IID **iids);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeClassName)(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController *This,
        HSTRING *className);

    HRESULT (STDMETHODCALLTYPE *GetTrustLevel)(
        __x_ABI_CWindows_CSystem_CIDispatcherQueueController *This,
        TrustLevel *trustLevel);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerVtbl;

interface __x_ABI_CWindows_CSystem_CIDispatcherQueueController {
    CONST_VTBL __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define __x_ABI_CWindows_CSystem_CIDispatcherQueueController_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define __x_ABI_CWindows_CSystem_CIDispatcherQueueController_AddRef(This) (This)->lpVtbl->AddRef(This)
#define __x_ABI_CWindows_CSystem_CIDispatcherQueueController_Release(This) (This)->lpVtbl->Release(This)
/*** IInspectable methods ***/
#define __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetIids(This,iidCount,iids) (This)->lpVtbl->GetIids(This,iidCount,iids)
#define __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetRuntimeClassName(This,className) (This)->lpVtbl->GetRuntimeClassName(This,className)
#define __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetTrustLevel(This,trustLevel) (This)->lpVtbl->GetTrustLevel(This,trustLevel)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CSystem_CIDispatcherQueueController_QueryInterface(__x_ABI_CWindows_CSystem_CIDispatcherQueueController* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CSystem_CIDispatcherQueueController_AddRef(__x_ABI_CWindows_CSystem_CIDispatcherQueueController* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG __x_ABI_CWindows_CSystem_CIDispatcherQueueController_Release(__x_ABI_CWindows_CSystem_CIDispatcherQueueController* This) {
    return This->lpVtbl->Release(This);
}
/*** IInspectable methods ***/
static FORCEINLINE HRESULT __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetIids(__x_ABI_CWindows_CSystem_CIDispatcherQueueController* This,ULONG *iidCount,IID **iids) {
    return This->lpVtbl->GetIids(This,iidCount,iids);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetRuntimeClassName(__x_ABI_CWindows_CSystem_CIDispatcherQueueController* This,HSTRING *className) {
    return This->lpVtbl->GetRuntimeClassName(This,className);
}
static FORCEINLINE HRESULT __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetTrustLevel(__x_ABI_CWindows_CSystem_CIDispatcherQueueController* This,TrustLevel *trustLevel) {
    return This->lpVtbl->GetTrustLevel(This,trustLevel);
}
#endif
#ifdef WIDL_using_Windows_System
#define IID_IDispatcherQueueController IID___x_ABI_CWindows_CSystem_CIDispatcherQueueController
#define IDispatcherQueueControllerVtbl __x_ABI_CWindows_CSystem_CIDispatcherQueueControllerVtbl
#define IDispatcherQueueController __x_ABI_CWindows_CSystem_CIDispatcherQueueController
#define IDispatcherQueueController_QueryInterface __x_ABI_CWindows_CSystem_CIDispatcherQueueController_QueryInterface
#define IDispatcherQueueController_AddRef __x_ABI_CWindows_CSystem_CIDispatcherQueueController_AddRef
#define IDispatcherQueueController_Release __x_ABI_CWindows_CSystem_CIDispatcherQueueController_Release
#define IDispatcherQueueController_GetIids __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetIids
#define IDispatcherQueueController_GetRuntimeClassName __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetRuntimeClassName
#define IDispatcherQueueController_GetTrustLevel __x_ABI_CWindows_CSystem_CIDispatcherQueueController_GetTrustLevel
#endif /* WIDL_using_Windows_System */
#endif

#endif

#endif  /* ____x_ABI_CWindows_CSystem_CIDispatcherQueueController_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_system_h__ */
