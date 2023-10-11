/*** Autogenerated by WIDL 8.17 from include/servprov.idl - Do not edit ***/

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

#ifndef __servprov_h__
#define __servprov_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IServiceProvider_FWD_DEFINED__
#define __IServiceProvider_FWD_DEFINED__
typedef interface IServiceProvider IServiceProvider;
#ifdef __cplusplus
interface IServiceProvider;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


#ifndef __IServiceProvider_FWD_DEFINED__
#define __IServiceProvider_FWD_DEFINED__
typedef interface IServiceProvider IServiceProvider;
#ifdef __cplusplus
interface IServiceProvider;
#endif /* __cplusplus */
#endif


/*****************************************************************************
 * IServiceProvider interface
 */
#ifndef __IServiceProvider_INTERFACE_DEFINED__
#define __IServiceProvider_INTERFACE_DEFINED__

typedef IServiceProvider *LPSERVICEPROVIDER;
#if defined(__cplusplus) && !defined(CINTERFACE)
EXTERN_C const IID IID_IServiceProvider;
extern "C++" {
MIDL_INTERFACE("6d5140c1-7436-11ce-8034-00aa006009fa")
IServiceProvider : public IUnknown {
public:
virtual  HRESULT STDMETHODCALLTYPE QueryService(REFGUID guidService, REFIID riid, void **ppvObject) = 0;

template <class Q>
HRESULT STDMETHODCALLTYPE QueryService(REFGUID guidService, Q **pp) {
  return QueryService(guidService, __uuidof(Q), (void **)pp);
}
};
}

HRESULT STDMETHODCALLTYPE IServiceProvider_RemoteQueryService_Proxy(IServiceProvider *This, REFGUID guidService, REFIID riid, IUnknown **ppvObject);
void __RPC_STUB IServiceProvider_RemoteQueryService_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IServiceProvider, 0x6d5140c1, 0x7436, 0x11ce, 0x80,0x34, 0x00,0xaa,0x00,0x60,0x09,0xfa)
#endif
#else
DEFINE_GUID(IID_IServiceProvider, 0x6d5140c1, 0x7436, 0x11ce, 0x80,0x34, 0x00,0xaa,0x00,0x60,0x09,0xfa);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("6d5140c1-7436-11ce-8034-00aa006009fa")
IServiceProvider : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE QueryService(
        REFGUID guidService,
        REFIID riid,
        void **ppvObject) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IServiceProvider, 0x6d5140c1, 0x7436, 0x11ce, 0x80,0x34, 0x00,0xaa,0x00,0x60,0x09,0xfa)
#endif
#else
typedef struct IServiceProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IServiceProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IServiceProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IServiceProvider *This);

    /*** IServiceProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryService)(
        IServiceProvider *This,
        REFGUID guidService,
        REFIID riid,
        void **ppvObject);

    END_INTERFACE
} IServiceProviderVtbl;

interface IServiceProvider {
    CONST_VTBL IServiceProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IServiceProvider_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IServiceProvider_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IServiceProvider_Release(This) (This)->lpVtbl->Release(This)
/*** IServiceProvider methods ***/
#define IServiceProvider_QueryService(This,guidService,riid,ppvObject) (This)->lpVtbl->QueryService(This,guidService,riid,ppvObject)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IServiceProvider_QueryInterface(IServiceProvider* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IServiceProvider_AddRef(IServiceProvider* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IServiceProvider_Release(IServiceProvider* This) {
    return This->lpVtbl->Release(This);
}
/*** IServiceProvider methods ***/
static __WIDL_INLINE HRESULT IServiceProvider_QueryService(IServiceProvider* This,REFGUID guidService,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryService(This,guidService,riid,ppvObject);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IServiceProvider_RemoteQueryService_Proxy(
    IServiceProvider* This,
    REFGUID guidService,
    REFIID riid,
    IUnknown **ppvObject);
void __RPC_STUB IServiceProvider_RemoteQueryService_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT CALLBACK IServiceProvider_QueryService_Proxy(
    IServiceProvider* This,
    REFGUID guidService,
    REFIID riid,
    void **ppvObject);
HRESULT __RPC_STUB IServiceProvider_QueryService_Stub(
    IServiceProvider* This,
    REFGUID guidService,
    REFIID riid,
    IUnknown **ppvObject);

#endif  /* __IServiceProvider_INTERFACE_DEFINED__ */

#endif

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __servprov_h__ */
