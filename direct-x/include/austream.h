/*** Autogenerated by WIDL from austream.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __WIDL_AUSTREAM_H
#define __WIDL_AUSTREAM_H

/* Forward declarations */

#ifndef __IAudioMediaStream_FWD_DEFINED__
#define __IAudioMediaStream_FWD_DEFINED__
typedef interface IAudioMediaStream IAudioMediaStream;
#endif

#ifndef __IAudioStreamSample_FWD_DEFINED__
#define __IAudioStreamSample_FWD_DEFINED__
typedef interface IAudioStreamSample IAudioStreamSample;
#endif

#ifndef __IMemoryData_FWD_DEFINED__
#define __IMemoryData_FWD_DEFINED__
typedef interface IMemoryData IMemoryData;
#endif

#ifndef __IAudioData_FWD_DEFINED__
#define __IAudioData_FWD_DEFINED__
typedef interface IAudioData IAudioData;
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <mmstream.h>

#ifdef __cplusplus
extern "C" {
#endif

#if 0
typedef struct tWAVEFORMATEX WAVEFORMATEX;
#endif
#ifndef __IAudioMediaStream_FWD_DEFINED__
#define __IAudioMediaStream_FWD_DEFINED__
typedef interface IAudioMediaStream IAudioMediaStream;
#endif

#ifndef __IAudioStreamSample_FWD_DEFINED__
#define __IAudioStreamSample_FWD_DEFINED__
typedef interface IAudioStreamSample IAudioStreamSample;
#endif

#ifndef __IMemoryData_FWD_DEFINED__
#define __IMemoryData_FWD_DEFINED__
typedef interface IMemoryData IMemoryData;
#endif

#ifndef __IAudioData_FWD_DEFINED__
#define __IAudioData_FWD_DEFINED__
typedef interface IAudioData IAudioData;
#endif

/*****************************************************************************
 * IAudioMediaStream interface
 */
#ifndef __IAudioMediaStream_INTERFACE_DEFINED__
#define __IAudioMediaStream_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAudioMediaStream, 0xf7537560, 0xa3be, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f7537560-a3be-11d0-8212-00c04fc32c45")
IAudioMediaStream : public IMediaStream
{
    virtual HRESULT STDMETHODCALLTYPE GetFormat(
        WAVEFORMATEX *pWaveFormatCurrent) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFormat(
        const WAVEFORMATEX *lpWaveFormat) = 0;

    virtual HRESULT STDMETHODCALLTYPE CreateSample(
        IAudioData *pAudioData,
        DWORD dwFlags,
        IAudioStreamSample **ppSample) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAudioMediaStream, 0xf7537560, 0xa3be, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45)
#endif
#else
typedef struct IAudioMediaStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAudioMediaStream* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAudioMediaStream* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAudioMediaStream* This);

    /*** IMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMultiMediaStream)(
        IAudioMediaStream* This,
        IMultiMediaStream **ppMultiMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetInformation)(
        IAudioMediaStream* This,
        MSPID *pPurposeId,
        STREAM_TYPE *pType);

    HRESULT (STDMETHODCALLTYPE *SetSameFormat)(
        IAudioMediaStream* This,
        IMediaStream *pStreamThatHasDesiredFormat,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *AllocateSample)(
        IAudioMediaStream* This,
        DWORD dwFlags,
        IStreamSample **ppSample);

    HRESULT (STDMETHODCALLTYPE *CreateSharedSample)(
        IAudioMediaStream* This,
        IStreamSample *pExistingSample,
        DWORD dwFlags,
        IStreamSample **ppNewSample);

    HRESULT (STDMETHODCALLTYPE *SendEndOfStream)(
        IAudioMediaStream* This,
        DWORD dwFlags);

    /*** IAudioMediaStream methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        IAudioMediaStream* This,
        WAVEFORMATEX *pWaveFormatCurrent);

    HRESULT (STDMETHODCALLTYPE *SetFormat)(
        IAudioMediaStream* This,
        const WAVEFORMATEX *lpWaveFormat);

    HRESULT (STDMETHODCALLTYPE *CreateSample)(
        IAudioMediaStream* This,
        IAudioData *pAudioData,
        DWORD dwFlags,
        IAudioStreamSample **ppSample);

    END_INTERFACE
} IAudioMediaStreamVtbl;
interface IAudioMediaStream {
    CONST_VTBL IAudioMediaStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAudioMediaStream_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioMediaStream_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioMediaStream_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaStream methods ***/
#define IAudioMediaStream_GetMultiMediaStream(This,ppMultiMediaStream) (This)->lpVtbl->GetMultiMediaStream(This,ppMultiMediaStream)
#define IAudioMediaStream_GetInformation(This,pPurposeId,pType) (This)->lpVtbl->GetInformation(This,pPurposeId,pType)
#define IAudioMediaStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) (This)->lpVtbl->SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags)
#define IAudioMediaStream_AllocateSample(This,dwFlags,ppSample) (This)->lpVtbl->AllocateSample(This,dwFlags,ppSample)
#define IAudioMediaStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) (This)->lpVtbl->CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample)
#define IAudioMediaStream_SendEndOfStream(This,dwFlags) (This)->lpVtbl->SendEndOfStream(This,dwFlags)
/*** IAudioMediaStream methods ***/
#define IAudioMediaStream_GetFormat(This,pWaveFormatCurrent) (This)->lpVtbl->GetFormat(This,pWaveFormatCurrent)
#define IAudioMediaStream_SetFormat(This,lpWaveFormat) (This)->lpVtbl->SetFormat(This,lpWaveFormat)
#define IAudioMediaStream_CreateSample(This,pAudioData,dwFlags,ppSample) (This)->lpVtbl->CreateSample(This,pAudioData,dwFlags,ppSample)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAudioMediaStream_GetFormat_Proxy(
    IAudioMediaStream* This,
    WAVEFORMATEX *pWaveFormatCurrent);
void __RPC_STUB IAudioMediaStream_GetFormat_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAudioMediaStream_SetFormat_Proxy(
    IAudioMediaStream* This,
    const WAVEFORMATEX *lpWaveFormat);
void __RPC_STUB IAudioMediaStream_SetFormat_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAudioMediaStream_CreateSample_Proxy(
    IAudioMediaStream* This,
    IAudioData *pAudioData,
    DWORD dwFlags,
    IAudioStreamSample **ppSample);
void __RPC_STUB IAudioMediaStream_CreateSample_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAudioMediaStream_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAudioStreamSample interface
 */
#ifndef __IAudioStreamSample_INTERFACE_DEFINED__
#define __IAudioStreamSample_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAudioStreamSample, 0x345fee00, 0xaba5, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("345fee00-aba5-11d0-8212-00c04fc32c45")
IAudioStreamSample : public IStreamSample
{
    virtual HRESULT STDMETHODCALLTYPE GetAudioData(
        IAudioData **ppAudio) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAudioStreamSample, 0x345fee00, 0xaba5, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45)
#endif
#else
typedef struct IAudioStreamSampleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAudioStreamSample* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAudioStreamSample* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAudioStreamSample* This);

    /*** IStreamSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMediaStream)(
        IAudioStreamSample* This,
        IMediaStream **ppMediaStream);

    HRESULT (STDMETHODCALLTYPE *GetSampleTimes)(
        IAudioStreamSample* This,
        STREAM_TIME *pStartTime,
        STREAM_TIME *pEndTime,
        STREAM_TIME *pCurrentTime);

    HRESULT (STDMETHODCALLTYPE *SetSampleTimes)(
        IAudioStreamSample* This,
        const STREAM_TIME *pStartTime,
        const STREAM_TIME *pEndTime);

    HRESULT (STDMETHODCALLTYPE *Update)(
        IAudioStreamSample* This,
        DWORD dwFlags,
        HANDLE hEvent,
        PAPCFUNC pfnAPC,
        DWORD dwAPCData);

    HRESULT (STDMETHODCALLTYPE *CompletionStatus)(
        IAudioStreamSample* This,
        DWORD dwFlags,
        DWORD dwMilliseconds);

    /*** IAudioStreamSample methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAudioData)(
        IAudioStreamSample* This,
        IAudioData **ppAudio);

    END_INTERFACE
} IAudioStreamSampleVtbl;
interface IAudioStreamSample {
    CONST_VTBL IAudioStreamSampleVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAudioStreamSample_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioStreamSample_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioStreamSample_Release(This) (This)->lpVtbl->Release(This)
/*** IStreamSample methods ***/
#define IAudioStreamSample_GetMediaStream(This,ppMediaStream) (This)->lpVtbl->GetMediaStream(This,ppMediaStream)
#define IAudioStreamSample_GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) (This)->lpVtbl->GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime)
#define IAudioStreamSample_SetSampleTimes(This,pStartTime,pEndTime) (This)->lpVtbl->SetSampleTimes(This,pStartTime,pEndTime)
#define IAudioStreamSample_Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) (This)->lpVtbl->Update(This,dwFlags,hEvent,pfnAPC,dwAPCData)
#define IAudioStreamSample_CompletionStatus(This,dwFlags,dwMilliseconds) (This)->lpVtbl->CompletionStatus(This,dwFlags,dwMilliseconds)
/*** IAudioStreamSample methods ***/
#define IAudioStreamSample_GetAudioData(This,ppAudio) (This)->lpVtbl->GetAudioData(This,ppAudio)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAudioStreamSample_GetAudioData_Proxy(
    IAudioStreamSample* This,
    IAudioData **ppAudio);
void __RPC_STUB IAudioStreamSample_GetAudioData_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAudioStreamSample_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMemoryData interface
 */
#ifndef __IMemoryData_INTERFACE_DEFINED__
#define __IMemoryData_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMemoryData, 0x327fc560, 0xaf60, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("327fc560-af60-11d0-8212-00c04fc32c45")
IMemoryData : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetBuffer(
        DWORD cbSize,
        BYTE *pbData,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInfo(
        DWORD *pdwLength,
        BYTE **ppbData,
        DWORD *pcbActualData) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetActual(
        DWORD cbDataValid) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMemoryData, 0x327fc560, 0xaf60, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45)
#endif
#else
typedef struct IMemoryDataVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMemoryData* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMemoryData* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMemoryData* This);

    /*** IMemoryData methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBuffer)(
        IMemoryData* This,
        DWORD cbSize,
        BYTE *pbData,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        IMemoryData* This,
        DWORD *pdwLength,
        BYTE **ppbData,
        DWORD *pcbActualData);

    HRESULT (STDMETHODCALLTYPE *SetActual)(
        IMemoryData* This,
        DWORD cbDataValid);

    END_INTERFACE
} IMemoryDataVtbl;
interface IMemoryData {
    CONST_VTBL IMemoryDataVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IMemoryData_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMemoryData_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMemoryData_Release(This) (This)->lpVtbl->Release(This)
/*** IMemoryData methods ***/
#define IMemoryData_SetBuffer(This,cbSize,pbData,dwFlags) (This)->lpVtbl->SetBuffer(This,cbSize,pbData,dwFlags)
#define IMemoryData_GetInfo(This,pdwLength,ppbData,pcbActualData) (This)->lpVtbl->GetInfo(This,pdwLength,ppbData,pcbActualData)
#define IMemoryData_SetActual(This,cbDataValid) (This)->lpVtbl->SetActual(This,cbDataValid)
#endif

#endif

HRESULT STDMETHODCALLTYPE IMemoryData_SetBuffer_Proxy(
    IMemoryData* This,
    DWORD cbSize,
    BYTE *pbData,
    DWORD dwFlags);
void __RPC_STUB IMemoryData_SetBuffer_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMemoryData_GetInfo_Proxy(
    IMemoryData* This,
    DWORD *pdwLength,
    BYTE **ppbData,
    DWORD *pcbActualData);
void __RPC_STUB IMemoryData_GetInfo_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IMemoryData_SetActual_Proxy(
    IMemoryData* This,
    DWORD cbDataValid);
void __RPC_STUB IMemoryData_SetActual_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IMemoryData_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAudioData interface
 */
#ifndef __IAudioData_INTERFACE_DEFINED__
#define __IAudioData_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAudioData, 0x54c719c0, 0xaf60, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("54c719c0-af60-11d0-8212-00c04fc32c45")
IAudioData : public IMemoryData
{
    virtual HRESULT STDMETHODCALLTYPE GetFormat(
        WAVEFORMATEX *pWaveFormatCurrent) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFormat(
        const WAVEFORMATEX *lpWaveFormat) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAudioData, 0x54c719c0, 0xaf60, 0x11d0, 0x82,0x12, 0x00,0xc0,0x4f,0xc3,0x2c,0x45)
#endif
#else
typedef struct IAudioDataVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAudioData* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAudioData* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAudioData* This);

    /*** IMemoryData methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBuffer)(
        IAudioData* This,
        DWORD cbSize,
        BYTE *pbData,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        IAudioData* This,
        DWORD *pdwLength,
        BYTE **ppbData,
        DWORD *pcbActualData);

    HRESULT (STDMETHODCALLTYPE *SetActual)(
        IAudioData* This,
        DWORD cbDataValid);

    /*** IAudioData methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        IAudioData* This,
        WAVEFORMATEX *pWaveFormatCurrent);

    HRESULT (STDMETHODCALLTYPE *SetFormat)(
        IAudioData* This,
        const WAVEFORMATEX *lpWaveFormat);

    END_INTERFACE
} IAudioDataVtbl;
interface IAudioData {
    CONST_VTBL IAudioDataVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IAudioData_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAudioData_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAudioData_Release(This) (This)->lpVtbl->Release(This)
/*** IMemoryData methods ***/
#define IAudioData_SetBuffer(This,cbSize,pbData,dwFlags) (This)->lpVtbl->SetBuffer(This,cbSize,pbData,dwFlags)
#define IAudioData_GetInfo(This,pdwLength,ppbData,pcbActualData) (This)->lpVtbl->GetInfo(This,pdwLength,ppbData,pcbActualData)
#define IAudioData_SetActual(This,cbDataValid) (This)->lpVtbl->SetActual(This,cbDataValid)
/*** IAudioData methods ***/
#define IAudioData_GetFormat(This,pWaveFormatCurrent) (This)->lpVtbl->GetFormat(This,pWaveFormatCurrent)
#define IAudioData_SetFormat(This,lpWaveFormat) (This)->lpVtbl->SetFormat(This,lpWaveFormat)
#endif

#endif

HRESULT STDMETHODCALLTYPE IAudioData_GetFormat_Proxy(
    IAudioData* This,
    WAVEFORMATEX *pWaveFormatCurrent);
void __RPC_STUB IAudioData_GetFormat_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IAudioData_SetFormat_Proxy(
    IAudioData* This,
    const WAVEFORMATEX *lpWaveFormat);
void __RPC_STUB IAudioData_SetFormat_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IAudioData_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_AUSTREAM_H */
