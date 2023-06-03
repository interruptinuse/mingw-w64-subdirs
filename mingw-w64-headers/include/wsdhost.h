/*** Autogenerated by WIDL 8.9 from include/wsdhost.idl - Do not edit ***/

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

#ifndef __wsdhost_h__
#define __wsdhost_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IWSDDeviceHostNotify_FWD_DEFINED__
#define __IWSDDeviceHostNotify_FWD_DEFINED__
typedef interface IWSDDeviceHostNotify IWSDDeviceHostNotify;
#ifdef __cplusplus
interface IWSDDeviceHostNotify;
#endif /* __cplusplus */
#endif

#ifndef __IWSDServiceMessaging_FWD_DEFINED__
#define __IWSDServiceMessaging_FWD_DEFINED__
typedef interface IWSDServiceMessaging IWSDServiceMessaging;
#ifdef __cplusplus
interface IWSDServiceMessaging;
#endif /* __cplusplus */
#endif

#ifndef __IWSDDeviceHost_FWD_DEFINED__
#define __IWSDDeviceHost_FWD_DEFINED__
typedef interface IWSDDeviceHost IWSDDeviceHost;
#ifdef __cplusplus
interface IWSDDeviceHost;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <wsdxmldom.h>
#include <wsdtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef __IWSDAddress_FWD_DEFINED__
#define __IWSDAddress_FWD_DEFINED__
typedef interface IWSDAddress IWSDAddress;
#ifdef __cplusplus
interface IWSDAddress;
#endif /* __cplusplus */
#endif

#ifndef __IWSDXMLContext_FWD_DEFINED__
#define __IWSDXMLContext_FWD_DEFINED__
typedef interface IWSDXMLContext IWSDXMLContext;
#ifdef __cplusplus
interface IWSDXMLContext;
#endif /* __cplusplus */
#endif

#ifndef __IWSDDeviceHost_FWD_DEFINED__
#define __IWSDDeviceHost_FWD_DEFINED__
typedef interface IWSDDeviceHost IWSDDeviceHost;
#ifdef __cplusplus
interface IWSDDeviceHost;
#endif /* __cplusplus */
#endif

#ifndef __IWSDDeviceHostNotify_FWD_DEFINED__
#define __IWSDDeviceHostNotify_FWD_DEFINED__
typedef interface IWSDDeviceHostNotify IWSDDeviceHostNotify;
#ifdef __cplusplus
interface IWSDDeviceHostNotify;
#endif /* __cplusplus */
#endif

#ifndef __IWSDServiceMessaging_FWD_DEFINED__
#define __IWSDServiceMessaging_FWD_DEFINED__
typedef interface IWSDServiceMessaging IWSDServiceMessaging;
#ifdef __cplusplus
interface IWSDServiceMessaging;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IWSDDeviceHostNotify interface
 */
#ifndef __IWSDDeviceHostNotify_INTERFACE_DEFINED__
#define __IWSDDeviceHostNotify_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDDeviceHostNotify, 0xb5bee9f9, 0xeeda, 0x41fe, 0x96,0xf7, 0xf4,0x5e,0x14,0x99,0x0f,0xb0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("b5bee9f9-eeda-41fe-96f7-f45e14990fb0")
IWSDDeviceHostNotify : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetService(
        LPCWSTR pszServiceId,
        IUnknown **ppService) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDDeviceHostNotify, 0xb5bee9f9, 0xeeda, 0x41fe, 0x96,0xf7, 0xf4,0x5e,0x14,0x99,0x0f,0xb0)
#endif
#else
typedef struct IWSDDeviceHostNotifyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDDeviceHostNotify *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDDeviceHostNotify *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDDeviceHostNotify *This);

    /*** IWSDDeviceHostNotify methods ***/
    HRESULT (STDMETHODCALLTYPE *GetService)(
        IWSDDeviceHostNotify *This,
        LPCWSTR pszServiceId,
        IUnknown **ppService);

    END_INTERFACE
} IWSDDeviceHostNotifyVtbl;

interface IWSDDeviceHostNotify {
    CONST_VTBL IWSDDeviceHostNotifyVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDDeviceHostNotify_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDDeviceHostNotify_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDDeviceHostNotify_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDDeviceHostNotify methods ***/
#define IWSDDeviceHostNotify_GetService(This,pszServiceId,ppService) (This)->lpVtbl->GetService(This,pszServiceId,ppService)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWSDDeviceHostNotify_QueryInterface(IWSDDeviceHostNotify* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWSDDeviceHostNotify_AddRef(IWSDDeviceHostNotify* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWSDDeviceHostNotify_Release(IWSDDeviceHostNotify* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDDeviceHostNotify methods ***/
static __WIDL_INLINE HRESULT IWSDDeviceHostNotify_GetService(IWSDDeviceHostNotify* This,LPCWSTR pszServiceId,IUnknown **ppService) {
    return This->lpVtbl->GetService(This,pszServiceId,ppService);
}
#endif
#endif

#endif


#endif  /* __IWSDDeviceHostNotify_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWSDServiceMessaging interface
 */
#ifndef __IWSDServiceMessaging_INTERFACE_DEFINED__
#define __IWSDServiceMessaging_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDServiceMessaging, 0x94974cf4, 0x0cab, 0x460d, 0xa3,0xf6, 0x7a,0x0a,0xd6,0x23,0xc0,0xe6);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("94974cf4-0cab-460d-a3f6-7a0ad623c0e6")
IWSDServiceMessaging : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SendResponse(
        void *pBody,
        WSD_OPERATION *pOperation,
        IWSDMessageParameters *pMessageParameters) = 0;

    virtual HRESULT STDMETHODCALLTYPE FaultRequest(
        WSD_SOAP_HEADER *pRequestHeader,
        IWSDMessageParameters *pMessageParameters,
        WSD_SOAP_FAULT *pFault) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDServiceMessaging, 0x94974cf4, 0x0cab, 0x460d, 0xa3,0xf6, 0x7a,0x0a,0xd6,0x23,0xc0,0xe6)
#endif
#else
typedef struct IWSDServiceMessagingVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDServiceMessaging *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDServiceMessaging *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDServiceMessaging *This);

    /*** IWSDServiceMessaging methods ***/
    HRESULT (STDMETHODCALLTYPE *SendResponse)(
        IWSDServiceMessaging *This,
        void *pBody,
        WSD_OPERATION *pOperation,
        IWSDMessageParameters *pMessageParameters);

    HRESULT (STDMETHODCALLTYPE *FaultRequest)(
        IWSDServiceMessaging *This,
        WSD_SOAP_HEADER *pRequestHeader,
        IWSDMessageParameters *pMessageParameters,
        WSD_SOAP_FAULT *pFault);

    END_INTERFACE
} IWSDServiceMessagingVtbl;

interface IWSDServiceMessaging {
    CONST_VTBL IWSDServiceMessagingVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDServiceMessaging_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDServiceMessaging_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDServiceMessaging_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDServiceMessaging methods ***/
#define IWSDServiceMessaging_SendResponse(This,pBody,pOperation,pMessageParameters) (This)->lpVtbl->SendResponse(This,pBody,pOperation,pMessageParameters)
#define IWSDServiceMessaging_FaultRequest(This,pRequestHeader,pMessageParameters,pFault) (This)->lpVtbl->FaultRequest(This,pRequestHeader,pMessageParameters,pFault)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWSDServiceMessaging_QueryInterface(IWSDServiceMessaging* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWSDServiceMessaging_AddRef(IWSDServiceMessaging* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWSDServiceMessaging_Release(IWSDServiceMessaging* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDServiceMessaging methods ***/
static __WIDL_INLINE HRESULT IWSDServiceMessaging_SendResponse(IWSDServiceMessaging* This,void *pBody,WSD_OPERATION *pOperation,IWSDMessageParameters *pMessageParameters) {
    return This->lpVtbl->SendResponse(This,pBody,pOperation,pMessageParameters);
}
static __WIDL_INLINE HRESULT IWSDServiceMessaging_FaultRequest(IWSDServiceMessaging* This,WSD_SOAP_HEADER *pRequestHeader,IWSDMessageParameters *pMessageParameters,WSD_SOAP_FAULT *pFault) {
    return This->lpVtbl->FaultRequest(This,pRequestHeader,pMessageParameters,pFault);
}
#endif
#endif

#endif


#endif  /* __IWSDServiceMessaging_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWSDDeviceHost interface
 */
#ifndef __IWSDDeviceHost_INTERFACE_DEFINED__
#define __IWSDDeviceHost_INTERFACE_DEFINED__

DEFINE_GUID(IID_IWSDDeviceHost, 0x917fe891, 0x3d13, 0x4138, 0x98,0x09, 0x93,0x4c,0x8a,0xbe,0xb1,0x2c);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("917fe891-3d13-4138-9809-934c8abeb12c")
IWSDDeviceHost : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Init(
        LPCWSTR pszLocalId,
        IWSDXMLContext *pContext,
        IWSDAddress **ppHostAddresses,
        DWORD dwHostAddressCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE Start(
        ULONGLONG ullInstanceId,
        const WSD_URI_LIST *pScopeList,
        IWSDDeviceHostNotify *pNotificationSink) = 0;

    virtual HRESULT STDMETHODCALLTYPE Stop(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Terminate(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterPortType(
        const WSD_PORT_TYPE *pPortType) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetMetadata(
        const WSD_THIS_MODEL_METADATA *pThisModelMetadata,
        const WSD_THIS_DEVICE_METADATA *pThisDeviceMetadata,
        const WSD_HOST_METADATA *pHostMetadata,
        const WSD_METADATA_SECTION_LIST *pCustomMetadata) = 0;

    virtual HRESULT STDMETHODCALLTYPE RegisterService(
        LPCWSTR pszServiceId,
        IUnknown *pService) = 0;

    virtual HRESULT STDMETHODCALLTYPE RetireService(
        LPCWSTR pszServiceId) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddDynamicService(
        LPCWSTR pszServiceId,
        LPCWSTR pszEndpointAddress,
        const WSD_PORT_TYPE *pPortType,
        const WSDXML_NAME *pPortName,
        const WSDXML_ELEMENT *pAny,
        IUnknown *pService) = 0;

    virtual HRESULT STDMETHODCALLTYPE RemoveDynamicService(
        LPCWSTR pszServiceId) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetServiceDiscoverable(
        LPCWSTR pszServiceId,
        WINBOOL fDiscoverable) = 0;

    virtual HRESULT STDMETHODCALLTYPE SignalEvent(
        LPCWSTR pszServiceId,
        const void *pBody,
        const WSD_OPERATION *pOperation) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IWSDDeviceHost, 0x917fe891, 0x3d13, 0x4138, 0x98,0x09, 0x93,0x4c,0x8a,0xbe,0xb1,0x2c)
#endif
#else
typedef struct IWSDDeviceHostVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWSDDeviceHost *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWSDDeviceHost *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWSDDeviceHost *This);

    /*** IWSDDeviceHost methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        IWSDDeviceHost *This,
        LPCWSTR pszLocalId,
        IWSDXMLContext *pContext,
        IWSDAddress **ppHostAddresses,
        DWORD dwHostAddressCount);

    HRESULT (STDMETHODCALLTYPE *Start)(
        IWSDDeviceHost *This,
        ULONGLONG ullInstanceId,
        const WSD_URI_LIST *pScopeList,
        IWSDDeviceHostNotify *pNotificationSink);

    HRESULT (STDMETHODCALLTYPE *Stop)(
        IWSDDeviceHost *This);

    HRESULT (STDMETHODCALLTYPE *Terminate)(
        IWSDDeviceHost *This);

    HRESULT (STDMETHODCALLTYPE *RegisterPortType)(
        IWSDDeviceHost *This,
        const WSD_PORT_TYPE *pPortType);

    HRESULT (STDMETHODCALLTYPE *SetMetadata)(
        IWSDDeviceHost *This,
        const WSD_THIS_MODEL_METADATA *pThisModelMetadata,
        const WSD_THIS_DEVICE_METADATA *pThisDeviceMetadata,
        const WSD_HOST_METADATA *pHostMetadata,
        const WSD_METADATA_SECTION_LIST *pCustomMetadata);

    HRESULT (STDMETHODCALLTYPE *RegisterService)(
        IWSDDeviceHost *This,
        LPCWSTR pszServiceId,
        IUnknown *pService);

    HRESULT (STDMETHODCALLTYPE *RetireService)(
        IWSDDeviceHost *This,
        LPCWSTR pszServiceId);

    HRESULT (STDMETHODCALLTYPE *AddDynamicService)(
        IWSDDeviceHost *This,
        LPCWSTR pszServiceId,
        LPCWSTR pszEndpointAddress,
        const WSD_PORT_TYPE *pPortType,
        const WSDXML_NAME *pPortName,
        const WSDXML_ELEMENT *pAny,
        IUnknown *pService);

    HRESULT (STDMETHODCALLTYPE *RemoveDynamicService)(
        IWSDDeviceHost *This,
        LPCWSTR pszServiceId);

    HRESULT (STDMETHODCALLTYPE *SetServiceDiscoverable)(
        IWSDDeviceHost *This,
        LPCWSTR pszServiceId,
        WINBOOL fDiscoverable);

    HRESULT (STDMETHODCALLTYPE *SignalEvent)(
        IWSDDeviceHost *This,
        LPCWSTR pszServiceId,
        const void *pBody,
        const WSD_OPERATION *pOperation);

    END_INTERFACE
} IWSDDeviceHostVtbl;

interface IWSDDeviceHost {
    CONST_VTBL IWSDDeviceHostVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IWSDDeviceHost_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IWSDDeviceHost_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IWSDDeviceHost_Release(This) (This)->lpVtbl->Release(This)
/*** IWSDDeviceHost methods ***/
#define IWSDDeviceHost_Init(This,pszLocalId,pContext,ppHostAddresses,dwHostAddressCount) (This)->lpVtbl->Init(This,pszLocalId,pContext,ppHostAddresses,dwHostAddressCount)
#define IWSDDeviceHost_Start(This,ullInstanceId,pScopeList,pNotificationSink) (This)->lpVtbl->Start(This,ullInstanceId,pScopeList,pNotificationSink)
#define IWSDDeviceHost_Stop(This) (This)->lpVtbl->Stop(This)
#define IWSDDeviceHost_Terminate(This) (This)->lpVtbl->Terminate(This)
#define IWSDDeviceHost_RegisterPortType(This,pPortType) (This)->lpVtbl->RegisterPortType(This,pPortType)
#define IWSDDeviceHost_SetMetadata(This,pThisModelMetadata,pThisDeviceMetadata,pHostMetadata,pCustomMetadata) (This)->lpVtbl->SetMetadata(This,pThisModelMetadata,pThisDeviceMetadata,pHostMetadata,pCustomMetadata)
#define IWSDDeviceHost_RegisterService(This,pszServiceId,pService) (This)->lpVtbl->RegisterService(This,pszServiceId,pService)
#define IWSDDeviceHost_RetireService(This,pszServiceId) (This)->lpVtbl->RetireService(This,pszServiceId)
#define IWSDDeviceHost_AddDynamicService(This,pszServiceId,pszEndpointAddress,pPortType,pPortName,pAny,pService) (This)->lpVtbl->AddDynamicService(This,pszServiceId,pszEndpointAddress,pPortType,pPortName,pAny,pService)
#define IWSDDeviceHost_RemoveDynamicService(This,pszServiceId) (This)->lpVtbl->RemoveDynamicService(This,pszServiceId)
#define IWSDDeviceHost_SetServiceDiscoverable(This,pszServiceId,fDiscoverable) (This)->lpVtbl->SetServiceDiscoverable(This,pszServiceId,fDiscoverable)
#define IWSDDeviceHost_SignalEvent(This,pszServiceId,pBody,pOperation) (This)->lpVtbl->SignalEvent(This,pszServiceId,pBody,pOperation)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IWSDDeviceHost_QueryInterface(IWSDDeviceHost* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IWSDDeviceHost_AddRef(IWSDDeviceHost* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IWSDDeviceHost_Release(IWSDDeviceHost* This) {
    return This->lpVtbl->Release(This);
}
/*** IWSDDeviceHost methods ***/
static __WIDL_INLINE HRESULT IWSDDeviceHost_Init(IWSDDeviceHost* This,LPCWSTR pszLocalId,IWSDXMLContext *pContext,IWSDAddress **ppHostAddresses,DWORD dwHostAddressCount) {
    return This->lpVtbl->Init(This,pszLocalId,pContext,ppHostAddresses,dwHostAddressCount);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_Start(IWSDDeviceHost* This,ULONGLONG ullInstanceId,const WSD_URI_LIST *pScopeList,IWSDDeviceHostNotify *pNotificationSink) {
    return This->lpVtbl->Start(This,ullInstanceId,pScopeList,pNotificationSink);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_Stop(IWSDDeviceHost* This) {
    return This->lpVtbl->Stop(This);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_Terminate(IWSDDeviceHost* This) {
    return This->lpVtbl->Terminate(This);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_RegisterPortType(IWSDDeviceHost* This,const WSD_PORT_TYPE *pPortType) {
    return This->lpVtbl->RegisterPortType(This,pPortType);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_SetMetadata(IWSDDeviceHost* This,const WSD_THIS_MODEL_METADATA *pThisModelMetadata,const WSD_THIS_DEVICE_METADATA *pThisDeviceMetadata,const WSD_HOST_METADATA *pHostMetadata,const WSD_METADATA_SECTION_LIST *pCustomMetadata) {
    return This->lpVtbl->SetMetadata(This,pThisModelMetadata,pThisDeviceMetadata,pHostMetadata,pCustomMetadata);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_RegisterService(IWSDDeviceHost* This,LPCWSTR pszServiceId,IUnknown *pService) {
    return This->lpVtbl->RegisterService(This,pszServiceId,pService);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_RetireService(IWSDDeviceHost* This,LPCWSTR pszServiceId) {
    return This->lpVtbl->RetireService(This,pszServiceId);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_AddDynamicService(IWSDDeviceHost* This,LPCWSTR pszServiceId,LPCWSTR pszEndpointAddress,const WSD_PORT_TYPE *pPortType,const WSDXML_NAME *pPortName,const WSDXML_ELEMENT *pAny,IUnknown *pService) {
    return This->lpVtbl->AddDynamicService(This,pszServiceId,pszEndpointAddress,pPortType,pPortName,pAny,pService);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_RemoveDynamicService(IWSDDeviceHost* This,LPCWSTR pszServiceId) {
    return This->lpVtbl->RemoveDynamicService(This,pszServiceId);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_SetServiceDiscoverable(IWSDDeviceHost* This,LPCWSTR pszServiceId,WINBOOL fDiscoverable) {
    return This->lpVtbl->SetServiceDiscoverable(This,pszServiceId,fDiscoverable);
}
static __WIDL_INLINE HRESULT IWSDDeviceHost_SignalEvent(IWSDDeviceHost* This,LPCWSTR pszServiceId,const void *pBody,const WSD_OPERATION *pOperation) {
    return This->lpVtbl->SignalEvent(This,pszServiceId,pBody,pOperation);
}
#endif
#endif

#endif


#endif  /* __IWSDDeviceHost_INTERFACE_DEFINED__ */

HRESULT WINAPI WSDCreateDeviceHost(LPCWSTR pszLocalId, IWSDXMLContext *pContext, IWSDDeviceHost **ppDeviceHost);
#if WINVER >= 0x601
HRESULT WINAPI WSDCreateDeviceHost2(LPCWSTR pszLocalId, IWSDXMLContext *pContext, WSD_CONFIG_PARAM *pConfigParams, DWORD dwConfigParamCount, IWSDDeviceHost **ppDeviceHost);
#endif
HRESULT WINAPI WSDCreateDeviceHostAdvanced(LPCWSTR pszLocalId, IWSDXMLContext *pContext, IWSDAddress** ppHostAddresses, DWORD dwHostAddressCount, IWSDDeviceHost **ppDeviceHost);
#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __wsdhost_h__ */
