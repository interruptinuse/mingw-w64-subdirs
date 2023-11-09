/*** Autogenerated by WIDL 8.19 from include/napsystemhealthvalidator.idl - Do not edit ***/

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

#ifndef __napsystemhealthvalidator_h__
#define __napsystemhealthvalidator_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __INapSystemHealthValidator_FWD_DEFINED__
#define __INapSystemHealthValidator_FWD_DEFINED__
typedef interface INapSystemHealthValidator INapSystemHealthValidator;
#ifdef __cplusplus
interface INapSystemHealthValidator;
#endif /* __cplusplus */
#endif

#ifndef __AsyncINapSystemHealthValidator_FWD_DEFINED__
#define __AsyncINapSystemHealthValidator_FWD_DEFINED__
typedef interface AsyncINapSystemHealthValidator AsyncINapSystemHealthValidator;
#ifdef __cplusplus
interface AsyncINapSystemHealthValidator;
#endif /* __cplusplus */
#endif

#ifndef __INapServerCallback_FWD_DEFINED__
#define __INapServerCallback_FWD_DEFINED__
typedef interface INapServerCallback INapServerCallback;
#ifdef __cplusplus
interface INapServerCallback;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthValidationRequest_FWD_DEFINED__
#define __INapSystemHealthValidationRequest_FWD_DEFINED__
typedef interface INapSystemHealthValidationRequest INapSystemHealthValidationRequest;
#ifdef __cplusplus
interface INapSystemHealthValidationRequest;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthValidationRequest2_FWD_DEFINED__
#define __INapSystemHealthValidationRequest2_FWD_DEFINED__
typedef interface INapSystemHealthValidationRequest2 INapSystemHealthValidationRequest2;
#ifdef __cplusplus
interface INapSystemHealthValidationRequest2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <naptypes.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#ifndef __INapServerCallback_FWD_DEFINED__
#define __INapServerCallback_FWD_DEFINED__
typedef interface INapServerCallback INapServerCallback;
#ifdef __cplusplus
interface INapServerCallback;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthValidator_FWD_DEFINED__
#define __INapSystemHealthValidator_FWD_DEFINED__
typedef interface INapSystemHealthValidator INapSystemHealthValidator;
#ifdef __cplusplus
interface INapSystemHealthValidator;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthValidationRequest_FWD_DEFINED__
#define __INapSystemHealthValidationRequest_FWD_DEFINED__
typedef interface INapSystemHealthValidationRequest INapSystemHealthValidationRequest;
#ifdef __cplusplus
interface INapSystemHealthValidationRequest;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * INapSystemHealthValidator interface
 */
#ifndef __INapSystemHealthValidator_INTERFACE_DEFINED__
#define __INapSystemHealthValidator_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSystemHealthValidator, 0xef43d87c, 0x5b6d, 0x4820, 0x86,0x20, 0x86,0x89,0x07,0xfe,0x07,0xd3);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("ef43d87c-5b6d-4820-8620-868907fe07d3")
INapSystemHealthValidator : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Validate(
        INapSystemHealthValidationRequest *request,
        UINT32 hintTimeOutInMsec,
        INapServerCallback *callback) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSystemHealthValidator, 0xef43d87c, 0x5b6d, 0x4820, 0x86,0x20, 0x86,0x89,0x07,0xfe,0x07,0xd3)
#endif
#else
typedef struct INapSystemHealthValidatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSystemHealthValidator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSystemHealthValidator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSystemHealthValidator *This);

    /*** INapSystemHealthValidator methods ***/
    HRESULT (STDMETHODCALLTYPE *Validate)(
        INapSystemHealthValidator *This,
        INapSystemHealthValidationRequest *request,
        UINT32 hintTimeOutInMsec,
        INapServerCallback *callback);

    END_INTERFACE
} INapSystemHealthValidatorVtbl;

interface INapSystemHealthValidator {
    CONST_VTBL INapSystemHealthValidatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSystemHealthValidator_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSystemHealthValidator_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSystemHealthValidator_Release(This) (This)->lpVtbl->Release(This)
/*** INapSystemHealthValidator methods ***/
#define INapSystemHealthValidator_Validate(This,request,hintTimeOutInMsec,callback) (This)->lpVtbl->Validate(This,request,hintTimeOutInMsec,callback)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthValidator_QueryInterface(INapSystemHealthValidator* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapSystemHealthValidator_AddRef(INapSystemHealthValidator* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapSystemHealthValidator_Release(INapSystemHealthValidator* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSystemHealthValidator methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthValidator_Validate(INapSystemHealthValidator* This,INapSystemHealthValidationRequest *request,UINT32 hintTimeOutInMsec,INapServerCallback *callback) {
    return This->lpVtbl->Validate(This,request,hintTimeOutInMsec,callback);
}
#endif
#endif

#endif


#endif  /* __INapSystemHealthValidator_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncINapSystemHealthValidator interface
 */
#ifndef __AsyncINapSystemHealthValidator_INTERFACE_DEFINED__
#define __AsyncINapSystemHealthValidator_INTERFACE_DEFINED__

DEFINE_GUID(IID_AsyncINapSystemHealthValidator, 0x2516031a, 0xa391, 0x454d, 0xb5,0x3d, 0xc5,0xdc,0x84,0xc7,0xf2,0xdb);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("2516031a-a391-454d-b53d-c5dc84c7f2db")
AsyncINapSystemHealthValidator : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Begin_Validate(
        INapSystemHealthValidationRequest *request,
        UINT32 hintTimeOutInMsec,
        INapServerCallback *callback) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_Validate(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(AsyncINapSystemHealthValidator, 0x2516031a, 0xa391, 0x454d, 0xb5,0x3d, 0xc5,0xdc,0x84,0xc7,0xf2,0xdb)
#endif
#else
typedef struct AsyncINapSystemHealthValidatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncINapSystemHealthValidator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncINapSystemHealthValidator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncINapSystemHealthValidator *This);

    /*** AsyncINapSystemHealthValidator methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_Validate)(
        AsyncINapSystemHealthValidator *This,
        INapSystemHealthValidationRequest *request,
        UINT32 hintTimeOutInMsec,
        INapServerCallback *callback);

    HRESULT (STDMETHODCALLTYPE *Finish_Validate)(
        AsyncINapSystemHealthValidator *This);

    END_INTERFACE
} AsyncINapSystemHealthValidatorVtbl;

interface AsyncINapSystemHealthValidator {
    CONST_VTBL AsyncINapSystemHealthValidatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define AsyncINapSystemHealthValidator_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define AsyncINapSystemHealthValidator_AddRef(This) (This)->lpVtbl->AddRef(This)
#define AsyncINapSystemHealthValidator_Release(This) (This)->lpVtbl->Release(This)
/*** AsyncINapSystemHealthValidator methods ***/
#define AsyncINapSystemHealthValidator_Begin_Validate(This,request,hintTimeOutInMsec,callback) (This)->lpVtbl->Begin_Validate(This,request,hintTimeOutInMsec,callback)
#define AsyncINapSystemHealthValidator_Finish_Validate(This) (This)->lpVtbl->Finish_Validate(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT AsyncINapSystemHealthValidator_QueryInterface(AsyncINapSystemHealthValidator* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG AsyncINapSystemHealthValidator_AddRef(AsyncINapSystemHealthValidator* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG AsyncINapSystemHealthValidator_Release(AsyncINapSystemHealthValidator* This) {
    return This->lpVtbl->Release(This);
}
/*** AsyncINapSystemHealthValidator methods ***/
static __WIDL_INLINE HRESULT AsyncINapSystemHealthValidator_Begin_Validate(AsyncINapSystemHealthValidator* This,INapSystemHealthValidationRequest *request,UINT32 hintTimeOutInMsec,INapServerCallback *callback) {
    return This->lpVtbl->Begin_Validate(This,request,hintTimeOutInMsec,callback);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthValidator_Finish_Validate(AsyncINapSystemHealthValidator* This) {
    return This->lpVtbl->Finish_Validate(This);
}
#endif
#endif

#endif


#endif  /* __AsyncINapSystemHealthValidator_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapServerCallback interface
 */
#ifndef __INapServerCallback_INTERFACE_DEFINED__
#define __INapServerCallback_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapServerCallback, 0x09c20568, 0xf30c, 0x489b, 0xae,0x9c, 0x49,0x30,0xad,0x7f,0x16,0x5f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("09c20568-f30c-489b-ae9c-4930ad7f165f")
INapServerCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnComplete(
        INapSystemHealthValidationRequest *request,
        HRESULT errorCode) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapServerCallback, 0x09c20568, 0xf30c, 0x489b, 0xae,0x9c, 0x49,0x30,0xad,0x7f,0x16,0x5f)
#endif
#else
typedef struct INapServerCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapServerCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapServerCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapServerCallback *This);

    /*** INapServerCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnComplete)(
        INapServerCallback *This,
        INapSystemHealthValidationRequest *request,
        HRESULT errorCode);

    END_INTERFACE
} INapServerCallbackVtbl;

interface INapServerCallback {
    CONST_VTBL INapServerCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapServerCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapServerCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapServerCallback_Release(This) (This)->lpVtbl->Release(This)
/*** INapServerCallback methods ***/
#define INapServerCallback_OnComplete(This,request,errorCode) (This)->lpVtbl->OnComplete(This,request,errorCode)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapServerCallback_QueryInterface(INapServerCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapServerCallback_AddRef(INapServerCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapServerCallback_Release(INapServerCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** INapServerCallback methods ***/
static __WIDL_INLINE HRESULT INapServerCallback_OnComplete(INapServerCallback* This,INapSystemHealthValidationRequest *request,HRESULT errorCode) {
    return This->lpVtbl->OnComplete(This,request,errorCode);
}
#endif
#endif

#endif


#endif  /* __INapServerCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapSystemHealthValidationRequest interface
 */
#ifndef __INapSystemHealthValidationRequest_INTERFACE_DEFINED__
#define __INapSystemHealthValidationRequest_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSystemHealthValidationRequest, 0xadacb3a0, 0xd4f4, 0x4f17, 0x89,0x33, 0x51,0xd6,0x0f,0xcc,0xa6,0x06);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("adacb3a0-d4f4-4f17-8933-51d60fcca606")
INapSystemHealthValidationRequest : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCorrelationId(
        CorrelationId *correlationId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStringCorrelationId(
        StringCorrelationId **correlationId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMachineName(
        CountedString **machineName) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSoHRequest(
        SoHRequest **sohRequest,
        WINBOOL *napSystemGenerated) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSoHResponse(
        const SoHResponse *sohResponse) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSoHResponse(
        SoHResponse **sohResponse) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetPrivateData(
        const PrivateData *privateData) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPrivateData(
        PrivateData **privateData) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSystemHealthValidationRequest, 0xadacb3a0, 0xd4f4, 0x4f17, 0x89,0x33, 0x51,0xd6,0x0f,0xcc,0xa6,0x06)
#endif
#else
typedef struct INapSystemHealthValidationRequestVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSystemHealthValidationRequest *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSystemHealthValidationRequest *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSystemHealthValidationRequest *This);

    /*** INapSystemHealthValidationRequest methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCorrelationId)(
        INapSystemHealthValidationRequest *This,
        CorrelationId *correlationId);

    HRESULT (STDMETHODCALLTYPE *GetStringCorrelationId)(
        INapSystemHealthValidationRequest *This,
        StringCorrelationId **correlationId);

    HRESULT (STDMETHODCALLTYPE *GetMachineName)(
        INapSystemHealthValidationRequest *This,
        CountedString **machineName);

    HRESULT (STDMETHODCALLTYPE *GetSoHRequest)(
        INapSystemHealthValidationRequest *This,
        SoHRequest **sohRequest,
        WINBOOL *napSystemGenerated);

    HRESULT (STDMETHODCALLTYPE *SetSoHResponse)(
        INapSystemHealthValidationRequest *This,
        const SoHResponse *sohResponse);

    HRESULT (STDMETHODCALLTYPE *GetSoHResponse)(
        INapSystemHealthValidationRequest *This,
        SoHResponse **sohResponse);

    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        INapSystemHealthValidationRequest *This,
        const PrivateData *privateData);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        INapSystemHealthValidationRequest *This,
        PrivateData **privateData);

    END_INTERFACE
} INapSystemHealthValidationRequestVtbl;

interface INapSystemHealthValidationRequest {
    CONST_VTBL INapSystemHealthValidationRequestVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSystemHealthValidationRequest_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSystemHealthValidationRequest_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSystemHealthValidationRequest_Release(This) (This)->lpVtbl->Release(This)
/*** INapSystemHealthValidationRequest methods ***/
#define INapSystemHealthValidationRequest_GetCorrelationId(This,correlationId) (This)->lpVtbl->GetCorrelationId(This,correlationId)
#define INapSystemHealthValidationRequest_GetStringCorrelationId(This,correlationId) (This)->lpVtbl->GetStringCorrelationId(This,correlationId)
#define INapSystemHealthValidationRequest_GetMachineName(This,machineName) (This)->lpVtbl->GetMachineName(This,machineName)
#define INapSystemHealthValidationRequest_GetSoHRequest(This,sohRequest,napSystemGenerated) (This)->lpVtbl->GetSoHRequest(This,sohRequest,napSystemGenerated)
#define INapSystemHealthValidationRequest_SetSoHResponse(This,sohResponse) (This)->lpVtbl->SetSoHResponse(This,sohResponse)
#define INapSystemHealthValidationRequest_GetSoHResponse(This,sohResponse) (This)->lpVtbl->GetSoHResponse(This,sohResponse)
#define INapSystemHealthValidationRequest_SetPrivateData(This,privateData) (This)->lpVtbl->SetPrivateData(This,privateData)
#define INapSystemHealthValidationRequest_GetPrivateData(This,privateData) (This)->lpVtbl->GetPrivateData(This,privateData)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_QueryInterface(INapSystemHealthValidationRequest* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapSystemHealthValidationRequest_AddRef(INapSystemHealthValidationRequest* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapSystemHealthValidationRequest_Release(INapSystemHealthValidationRequest* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSystemHealthValidationRequest methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_GetCorrelationId(INapSystemHealthValidationRequest* This,CorrelationId *correlationId) {
    return This->lpVtbl->GetCorrelationId(This,correlationId);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_GetStringCorrelationId(INapSystemHealthValidationRequest* This,StringCorrelationId **correlationId) {
    return This->lpVtbl->GetStringCorrelationId(This,correlationId);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_GetMachineName(INapSystemHealthValidationRequest* This,CountedString **machineName) {
    return This->lpVtbl->GetMachineName(This,machineName);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_GetSoHRequest(INapSystemHealthValidationRequest* This,SoHRequest **sohRequest,WINBOOL *napSystemGenerated) {
    return This->lpVtbl->GetSoHRequest(This,sohRequest,napSystemGenerated);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_SetSoHResponse(INapSystemHealthValidationRequest* This,const SoHResponse *sohResponse) {
    return This->lpVtbl->SetSoHResponse(This,sohResponse);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_GetSoHResponse(INapSystemHealthValidationRequest* This,SoHResponse **sohResponse) {
    return This->lpVtbl->GetSoHResponse(This,sohResponse);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_SetPrivateData(INapSystemHealthValidationRequest* This,const PrivateData *privateData) {
    return This->lpVtbl->SetPrivateData(This,privateData);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest_GetPrivateData(INapSystemHealthValidationRequest* This,PrivateData **privateData) {
    return This->lpVtbl->GetPrivateData(This,privateData);
}
#endif
#endif

#endif


#endif  /* __INapSystemHealthValidationRequest_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapSystemHealthValidationRequest2 interface
 */
#ifndef __INapSystemHealthValidationRequest2_INTERFACE_DEFINED__
#define __INapSystemHealthValidationRequest2_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSystemHealthValidationRequest2, 0x91a5d706, 0x0cb4, 0x4a84, 0x83,0x15, 0x93,0x80,0xd4,0x53,0xe3,0x85);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("91a5d706-0cb4-4a84-8315-9380d453e385")
INapSystemHealthValidationRequest2 : public INapSystemHealthValidationRequest
{
    virtual HRESULT STDMETHODCALLTYPE GetConfigID(
        UINT32 *configID) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSystemHealthValidationRequest2, 0x91a5d706, 0x0cb4, 0x4a84, 0x83,0x15, 0x93,0x80,0xd4,0x53,0xe3,0x85)
#endif
#else
typedef struct INapSystemHealthValidationRequest2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSystemHealthValidationRequest2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSystemHealthValidationRequest2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSystemHealthValidationRequest2 *This);

    /*** INapSystemHealthValidationRequest methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCorrelationId)(
        INapSystemHealthValidationRequest2 *This,
        CorrelationId *correlationId);

    HRESULT (STDMETHODCALLTYPE *GetStringCorrelationId)(
        INapSystemHealthValidationRequest2 *This,
        StringCorrelationId **correlationId);

    HRESULT (STDMETHODCALLTYPE *GetMachineName)(
        INapSystemHealthValidationRequest2 *This,
        CountedString **machineName);

    HRESULT (STDMETHODCALLTYPE *GetSoHRequest)(
        INapSystemHealthValidationRequest2 *This,
        SoHRequest **sohRequest,
        WINBOOL *napSystemGenerated);

    HRESULT (STDMETHODCALLTYPE *SetSoHResponse)(
        INapSystemHealthValidationRequest2 *This,
        const SoHResponse *sohResponse);

    HRESULT (STDMETHODCALLTYPE *GetSoHResponse)(
        INapSystemHealthValidationRequest2 *This,
        SoHResponse **sohResponse);

    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        INapSystemHealthValidationRequest2 *This,
        const PrivateData *privateData);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        INapSystemHealthValidationRequest2 *This,
        PrivateData **privateData);

    /*** INapSystemHealthValidationRequest2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetConfigID)(
        INapSystemHealthValidationRequest2 *This,
        UINT32 *configID);

    END_INTERFACE
} INapSystemHealthValidationRequest2Vtbl;

interface INapSystemHealthValidationRequest2 {
    CONST_VTBL INapSystemHealthValidationRequest2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSystemHealthValidationRequest2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSystemHealthValidationRequest2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSystemHealthValidationRequest2_Release(This) (This)->lpVtbl->Release(This)
/*** INapSystemHealthValidationRequest methods ***/
#define INapSystemHealthValidationRequest2_GetCorrelationId(This,correlationId) (This)->lpVtbl->GetCorrelationId(This,correlationId)
#define INapSystemHealthValidationRequest2_GetStringCorrelationId(This,correlationId) (This)->lpVtbl->GetStringCorrelationId(This,correlationId)
#define INapSystemHealthValidationRequest2_GetMachineName(This,machineName) (This)->lpVtbl->GetMachineName(This,machineName)
#define INapSystemHealthValidationRequest2_GetSoHRequest(This,sohRequest,napSystemGenerated) (This)->lpVtbl->GetSoHRequest(This,sohRequest,napSystemGenerated)
#define INapSystemHealthValidationRequest2_SetSoHResponse(This,sohResponse) (This)->lpVtbl->SetSoHResponse(This,sohResponse)
#define INapSystemHealthValidationRequest2_GetSoHResponse(This,sohResponse) (This)->lpVtbl->GetSoHResponse(This,sohResponse)
#define INapSystemHealthValidationRequest2_SetPrivateData(This,privateData) (This)->lpVtbl->SetPrivateData(This,privateData)
#define INapSystemHealthValidationRequest2_GetPrivateData(This,privateData) (This)->lpVtbl->GetPrivateData(This,privateData)
/*** INapSystemHealthValidationRequest2 methods ***/
#define INapSystemHealthValidationRequest2_GetConfigID(This,configID) (This)->lpVtbl->GetConfigID(This,configID)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_QueryInterface(INapSystemHealthValidationRequest2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapSystemHealthValidationRequest2_AddRef(INapSystemHealthValidationRequest2* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapSystemHealthValidationRequest2_Release(INapSystemHealthValidationRequest2* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSystemHealthValidationRequest methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_GetCorrelationId(INapSystemHealthValidationRequest2* This,CorrelationId *correlationId) {
    return This->lpVtbl->GetCorrelationId(This,correlationId);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_GetStringCorrelationId(INapSystemHealthValidationRequest2* This,StringCorrelationId **correlationId) {
    return This->lpVtbl->GetStringCorrelationId(This,correlationId);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_GetMachineName(INapSystemHealthValidationRequest2* This,CountedString **machineName) {
    return This->lpVtbl->GetMachineName(This,machineName);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_GetSoHRequest(INapSystemHealthValidationRequest2* This,SoHRequest **sohRequest,WINBOOL *napSystemGenerated) {
    return This->lpVtbl->GetSoHRequest(This,sohRequest,napSystemGenerated);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_SetSoHResponse(INapSystemHealthValidationRequest2* This,const SoHResponse *sohResponse) {
    return This->lpVtbl->SetSoHResponse(This,sohResponse);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_GetSoHResponse(INapSystemHealthValidationRequest2* This,SoHResponse **sohResponse) {
    return This->lpVtbl->GetSoHResponse(This,sohResponse);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_SetPrivateData(INapSystemHealthValidationRequest2* This,const PrivateData *privateData) {
    return This->lpVtbl->SetPrivateData(This,privateData);
}
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_GetPrivateData(INapSystemHealthValidationRequest2* This,PrivateData **privateData) {
    return This->lpVtbl->GetPrivateData(This,privateData);
}
/*** INapSystemHealthValidationRequest2 methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthValidationRequest2_GetConfigID(INapSystemHealthValidationRequest2* This,UINT32 *configID) {
    return This->lpVtbl->GetConfigID(This,configID);
}
#endif
#endif

#endif


#endif  /* __INapSystemHealthValidationRequest2_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __napsystemhealthvalidator_h__ */
