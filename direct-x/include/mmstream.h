/*** Autogenerated by WIDL 1.3.2 from mmstream.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_MMSTREAM_H
#define __WIDL_MMSTREAM_H

/* Forward declarations */

#ifndef __IMultiMediaStream_FWD_DEFINED__
#define __IMultiMediaStream_FWD_DEFINED__
typedef interface IMultiMediaStream IMultiMediaStream;
#endif

#ifndef __IMediaStream_FWD_DEFINED__
#define __IMediaStream_FWD_DEFINED__
typedef interface IMediaStream IMediaStream;
#endif

#ifndef __IStreamSample_FWD_DEFINED__
#define __IStreamSample_FWD_DEFINED__
typedef interface IStreamSample IStreamSample;
#endif

/* Headers for imported files */

#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MS_ERROR_CODE(x)                  MAKE_HRESULT(1, FACILITY_ITF, (x) + 0x400)
#define MS_SUCCESS_CODE(x)                MAKE_HRESULT(0, FACILITY_ITF, x)
#define MS_S_PENDING                      MS_SUCCESS_CODE(1)
#define MS_S_NOUPDATE                     MS_SUCCESS_CODE(2)
#define MS_S_ENDOFSTREAM                  MS_SUCCESS_CODE(3)
#define MS_E_SAMPLEALLOC                  MS_ERROR_CODE(1)
#define MS_E_PURPOSEID                    MS_ERROR_CODE(2)
#define MS_E_NOSTREAM                     MS_ERROR_CODE(3)
#define MS_E_NOSEEKING                    MS_ERROR_CODE(4)
#define MS_E_INCOMPATIBLE                 MS_ERROR_CODE(5)
#define MS_E_BUSY                         MS_ERROR_CODE(6)
#define MS_E_NOTINIT                      MS_ERROR_CODE(7)
#define MS_E_SOURCEALREADYDEFINED         MS_ERROR_CODE(8)
#define MS_E_INVALIDSTREAMTYPE            MS_ERROR_CODE(9)
#define MS_E_NOTRUNNING                   MS_ERROR_CODE(10)
DEFINE_GUID(MSPID_PrimaryVideo,  0xa35ff56a, 0x9fda, 0x11d0, 0x8f, 0xdf, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
DEFINE_GUID(MSPID_PrimaryAudio,  0xa35ff56b, 0x9fda, 0x11d0, 0x8f, 0xdf, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0x9d);
#if 0
typedef void *PAPCFUNC;
#endif
typedef LONGLONG STREAM_TIME;
typedef GUID MSPID;
typedef REFGUID REFMSPID;
typedef enum __WIDL_mmstream_generated_name_00000000 {
    STREAMTYPE_READ = 0,
    STREAMTYPE_WRITE = 1,
    STREAMTYPE_TRANSFORM = 2
} STREAM_TYPE;
typedef enum __WIDL_mmstream_generated_name_00000001 {
    STREAMSTATE_STOP = 0,
    STREAMSTATE_RUN = 1
} STREAM_STATE;
typedef enum __WIDL_mmstream_generated_name_00000002 {
    COMPSTAT_NOUPDATEOK = 0x1,
    COMPSTAT_WAIT = 0x2,
    COMPSTAT_ABORT = 0x4
} COMPLETION_STATUS_FLAGS;
enum {
    MMSSF_HASCLOCK = 0x1,
    MMSSF_SUPPORTSEEK = 0x2,
    MMSSF_ASYNCHRONOUS = 0x4
};

enum {
    SSUPDATE_ASYNC = 0x1,
    SSUPDATE_CONTINUOUS = 0x2
};

#ifndef __IMultiMediaStream_FWD_DEFINED__
#define __IMultiMediaStream_FWD_DEFINED__
typedef interface IMultiMediaStream IMultiMediaStream;
#endif

#ifndef __IMediaStream_FWD_DEFINED__
#define __IMediaStream_FWD_DEFINED__
typedef interface IMediaStream IMediaStream;
#endif

#ifndef __IStreamSample_FWD_DEFINED__
#define __IStreamSample_FWD_DEFINED__
typedef interface IStreamSample IStreamSample;
#endif

/*****************************************************************************
 * IMultiMediaStream interface
 */
#ifndef __IMultiMediaStream_INTERFACE_DEFINED__
#define __IMultiMediaStream_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMultiMediaStream, 0xb502d1bc, 0x9a57, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IMultiMediaStream : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetInformation(
        DWORD *pdwFlags,
        STREAM_TYPE *pStreamType) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMediaStream(
        REFMSPID idPurpose,
        IMediaStream **ppMediaStream) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumMediaStreams(
        LONG Index,
        IMediaStream **ppMediaStream) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetState(
        STREAM_STATE *pCurrentState) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetState(
        STREAM_STATE NewState) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetTime(
        STREAM_TIME *pCurrentTime) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDuration(
        STREAM_TIME *pDuration) = 0;

    virtual HRESULT STDMETHODCALLTYPE Seek(
        STREAM_TIME SeekTime) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEndOfStreamEventHandle(
        HANDLE *phEOS) = 0;

};
#else
typedef struct IMultiMediaStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMultiMediaStream* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMultiMediaStream* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMultiMediaStream* This);

    /*** IMultiMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetInformation)(
        IMultiMediaStream* This,
        DWORD *pdwFlags,
        STREAM_TYPE *pStreamType);

    HRESULT (STDMETHODCALLTYPE *GetMediaStream)(
        IMultiMediaStream* This,
        REFMSPID idPurpose,
        IMediaStream **ppMediaStream);

    HRESULT (STDMETHODCALLTYPE *EnumMediaStreams)(
        IMultiMediaStream* This,
        LONG Index,
        IMediaStream **ppMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetState)(
        IMultiMediaStream* This,
        STREAM_STATE *pCurrentState);

    HRESULT (STDMETHODCALLTYPE *SetState)(
        IMultiMediaStream* This,
        STREAM_STATE NewState);

    HRESULT (STDMETHODCALLTYPE *GetTime)(
        IMultiMediaStream* This,
        STREAM_TIME *pCurrentTime);

    HRESULT (STDMETHODCALLTYPE *GetDuration)(
        IMultiMediaStream* This,
        STREAM_TIME *pDuration);

    HRESULT (STDMETHODCALLTYPE *Seek)(
        IMultiMediaStream* This,
        STREAM_TIME SeekTime);

    HRESULT (STDMETHODCALLTYPE *GetEndOfStreamEventHandle)(
        IMultiMediaStream* This,
        HANDLE *phEOS);

    END_INTERFACE
} IMultiMediaStreamVtbl;
interface IMultiMediaStream {
    CONST_VTBL IMultiMediaStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMultiMediaStream_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMultiMediaStream_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMultiMediaStream_Release(This) (This)->lpVtbl->Release(This)
/*** IMultiMediaStream methods ***/
#define IMultiMediaStream_GetInformation(This,pdwFlags,pStreamType) (This)->lpVtbl->GetInformation(This,pdwFlags,pStreamType)
#define IMultiMediaStream_GetMediaStream(This,idPurpose,ppMediaStream) (This)->lpVtbl->GetMediaStream(This,idPurpose,ppMediaStream)
#define IMultiMediaStream_EnumMediaStreams(This,Index,ppMediaStream) (This)->lpVtbl->EnumMediaStreams(This,Index,ppMediaStream)
#define IMultiMediaStream_GetState(This,pCurrentState) (This)->lpVtbl->GetState(This,pCurrentState)
#define IMultiMediaStream_SetState(This,NewState) (This)->lpVtbl->SetState(This,NewState)
#define IMultiMediaStream_GetTime(This,pCurrentTime) (This)->lpVtbl->GetTime(This,pCurrentTime)
#define IMultiMediaStream_GetDuration(This,pDuration) (This)->lpVtbl->GetDuration(This,pDuration)
#define IMultiMediaStream_Seek(This,SeekTime) (This)->lpVtbl->Seek(This,SeekTime)
#define IMultiMediaStream_GetEndOfStreamEventHandle(This,phEOS) (This)->lpVtbl->GetEndOfStreamEventHandle(This,phEOS)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMultiMediaStream_GetInformation_Proxy(
    IMultiMediaStream* This,
    DWORD *pdwFlags,
    STREAM_TYPE *pStreamType);
void __RPC_STUB IMultiMediaStream_GetInformation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_GetMediaStream_Proxy(
    IMultiMediaStream* This,
    REFMSPID idPurpose,
    IMediaStream **ppMediaStream);
void __RPC_STUB IMultiMediaStream_GetMediaStream_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_EnumMediaStreams_Proxy(
    IMultiMediaStream* This,
    LONG Index,
    IMediaStream **ppMediaStream);
void __RPC_STUB IMultiMediaStream_EnumMediaStreams_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_GetState_Proxy(
    IMultiMediaStream* This,
    STREAM_STATE *pCurrentState);
void __RPC_STUB IMultiMediaStream_GetState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_SetState_Proxy(
    IMultiMediaStream* This,
    STREAM_STATE NewState);
void __RPC_STUB IMultiMediaStream_SetState_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_GetTime_Proxy(
    IMultiMediaStream* This,
    STREAM_TIME *pCurrentTime);
void __RPC_STUB IMultiMediaStream_GetTime_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_GetDuration_Proxy(
    IMultiMediaStream* This,
    STREAM_TIME *pDuration);
void __RPC_STUB IMultiMediaStream_GetDuration_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_Seek_Proxy(
    IMultiMediaStream* This,
    STREAM_TIME SeekTime);
void __RPC_STUB IMultiMediaStream_Seek_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMultiMediaStream_GetEndOfStreamEventHandle_Proxy(
    IMultiMediaStream* This,
    HANDLE *phEOS);
void __RPC_STUB IMultiMediaStream_GetEndOfStreamEventHandle_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMultiMediaStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMediaStream interface
 */
#ifndef __IMediaStream_INTERFACE_DEFINED__
#define __IMediaStream_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMediaStream, 0xb502d1bd, 0x9a57, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IMediaStream : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetMultiMediaStream(
        IMultiMediaStream **ppMultiMediaStream) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInformation(
        MSPID *pPurposeId,
        STREAM_TYPE *pType) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSameFormat(
        IMediaStream *pStreamThatHasDesiredFormat,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE AllocateSample(
        DWORD dwFlags,
        IStreamSample **ppSample) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateSharedSample(
        IStreamSample *pExistingSample,
        DWORD dwFlags,
        IStreamSample **ppNewSample) = 0;

    virtual HRESULT STDMETHODCALLTYPE SendEndOfStream(
        DWORD dwFlags) = 0;

};
#else
typedef struct IMediaStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMediaStream* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMediaStream* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMediaStream* This);

    /*** IMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMultiMediaStream)(
        IMediaStream* This,
        IMultiMediaStream **ppMultiMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetInformation)(
        IMediaStream* This,
        MSPID *pPurposeId,
        STREAM_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *SetSameFormat)(
        IMediaStream* This,
        IMediaStream *pStreamThatHasDesiredFormat,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *AllocateSample)(
        IMediaStream* This,
        DWORD dwFlags,
        IStreamSample **ppSample);

    HRESULT (STDMETHODCALLTYPE *CreateSharedSample)(
        IMediaStream* This,
        IStreamSample *pExistingSample,
        DWORD dwFlags,
        IStreamSample **ppNewSample);

    HRESULT (STDMETHODCALLTYPE *SendEndOfStream)(
        IMediaStream* This,
        DWORD dwFlags);

    END_INTERFACE
} IMediaStreamVtbl;
interface IMediaStream {
    CONST_VTBL IMediaStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMediaStream_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMediaStream_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMediaStream_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaStream methods ***/
#define IMediaStream_GetMultiMediaStream(This,ppMultiMediaStream) (This)->lpVtbl->GetMultiMediaStream(This,ppMultiMediaStream)
#define IMediaStream_GetInformation(This,pPurposeId,pType) (This)->lpVtbl->GetInformation(This,pPurposeId,pType)
#define IMediaStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) (This)->lpVtbl->SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags)
#define IMediaStream_AllocateSample(This,dwFlags,ppSample) (This)->lpVtbl->AllocateSample(This,dwFlags,ppSample)
#define IMediaStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) (This)->lpVtbl->CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample)
#define IMediaStream_SendEndOfStream(This,dwFlags) (This)->lpVtbl->SendEndOfStream(This,dwFlags)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMediaStream_GetMultiMediaStream_Proxy(
    IMediaStream* This,
    IMultiMediaStream **ppMultiMediaStream);
void __RPC_STUB IMediaStream_GetMultiMediaStream_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMediaStream_GetInformation_Proxy(
    IMediaStream* This,
    MSPID *pPurposeId,
    STREAM_TYPE *pType);
void __RPC_STUB IMediaStream_GetInformation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMediaStream_SetSameFormat_Proxy(
    IMediaStream* This,
    IMediaStream *pStreamThatHasDesiredFormat,
    DWORD dwFlags);
void __RPC_STUB IMediaStream_SetSameFormat_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMediaStream_AllocateSample_Proxy(
    IMediaStream* This,
    DWORD dwFlags,
    IStreamSample **ppSample);
void __RPC_STUB IMediaStream_AllocateSample_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMediaStream_CreateSharedSample_Proxy(
    IMediaStream* This,
    IStreamSample *pExistingSample,
    DWORD dwFlags,
    IStreamSample **ppNewSample);
void __RPC_STUB IMediaStream_CreateSharedSample_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMediaStream_SendEndOfStream_Proxy(
    IMediaStream* This,
    DWORD dwFlags);
void __RPC_STUB IMediaStream_SendEndOfStream_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMediaStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IStreamSample interface
 */
#ifndef __IStreamSample_INTERFACE_DEFINED__
#define __IStreamSample_INTERFACE_DEFINED__

DEFINE_GUID(IID_IStreamSample, 0xb502d1be, 0x9a57, 0x11d0, 0x8f,0xde, 0x00,0xc0,0x4f,0xd9,0x18,0x9d);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IStreamSample : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetMediaStream(
        IMediaStream **ppMediaStream) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSampleTimes(
        STREAM_TIME *pStartTime,
        STREAM_TIME *pEndTime,
        STREAM_TIME *pCurrentTime) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSampleTimes(
        const STREAM_TIME *pStartTime,
        const STREAM_TIME *pEndTime) = 0;

    virtual HRESULT STDMETHODCALLTYPE Update(
        DWORD dwFlags,
        HANDLE hEvent,
        PAPCFUNC pfnAPC,
        DWORD dwAPCData) = 0;

    virtual HRESULT STDMETHODCALLTYPE CompletionStatus(
        DWORD dwFlags,
        DWORD dwMilliseconds) = 0;

};
#else
typedef struct IStreamSampleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IStreamSample* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IStreamSample* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IStreamSample* This);

    /*** IStreamSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaStream)(
        IStreamSample* This,
        IMediaStream **ppMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetSampleTimes)(
        IStreamSample* This,
        STREAM_TIME *pStartTime,
        STREAM_TIME *pEndTime,
        STREAM_TIME *pCurrentTime);

    HRESULT (STDMETHODCALLTYPE *SetSampleTimes)(
        IStreamSample* This,
        const STREAM_TIME *pStartTime,
        const STREAM_TIME *pEndTime);

    HRESULT (STDMETHODCALLTYPE *Update)(
        IStreamSample* This,
        DWORD dwFlags,
        HANDLE hEvent,
        PAPCFUNC pfnAPC,
        DWORD dwAPCData);

    HRESULT (STDMETHODCALLTYPE *CompletionStatus)(
        IStreamSample* This,
        DWORD dwFlags,
        DWORD dwMilliseconds);

    END_INTERFACE
} IStreamSampleVtbl;
interface IStreamSample {
    CONST_VTBL IStreamSampleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IStreamSample_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IStreamSample_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IStreamSample_Release(This) (This)->lpVtbl->Release(This)
/*** IStreamSample methods ***/
#define IStreamSample_GetMediaStream(This,ppMediaStream) (This)->lpVtbl->GetMediaStream(This,ppMediaStream)
#define IStreamSample_GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) (This)->lpVtbl->GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime)
#define IStreamSample_SetSampleTimes(This,pStartTime,pEndTime) (This)->lpVtbl->SetSampleTimes(This,pStartTime,pEndTime)
#define IStreamSample_Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) (This)->lpVtbl->Update(This,dwFlags,hEvent,pfnAPC,dwAPCData)
#define IStreamSample_CompletionStatus(This,dwFlags,dwMilliseconds) (This)->lpVtbl->CompletionStatus(This,dwFlags,dwMilliseconds)
#endif

#endif

HRESULT STDMETHODCALLTYPE IStreamSample_GetMediaStream_Proxy(
    IStreamSample* This,
    IMediaStream **ppMediaStream);
void __RPC_STUB IStreamSample_GetMediaStream_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IStreamSample_GetSampleTimes_Proxy(
    IStreamSample* This,
    STREAM_TIME *pStartTime,
    STREAM_TIME *pEndTime,
    STREAM_TIME *pCurrentTime);
void __RPC_STUB IStreamSample_GetSampleTimes_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IStreamSample_SetSampleTimes_Proxy(
    IStreamSample* This,
    const STREAM_TIME *pStartTime,
    const STREAM_TIME *pEndTime);
void __RPC_STUB IStreamSample_SetSampleTimes_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IStreamSample_Update_Proxy(
    IStreamSample* This,
    DWORD dwFlags,
    HANDLE hEvent,
    PAPCFUNC pfnAPC,
    DWORD dwAPCData);
void __RPC_STUB IStreamSample_Update_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IStreamSample_CompletionStatus_Proxy(
    IStreamSample* This,
    DWORD dwFlags,
    DWORD dwMilliseconds);
void __RPC_STUB IStreamSample_CompletionStatus_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IStreamSample_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_MMSTREAM_H */
