/*** Autogenerated by WIDL 3.20 from include/mfreadwrite.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __mfreadwrite_h__
#define __mfreadwrite_h__

/* Forward declarations */

#ifndef __IMFSourceReader_FWD_DEFINED__
#define __IMFSourceReader_FWD_DEFINED__
typedef interface IMFSourceReader IMFSourceReader;
#ifdef __cplusplus
interface IMFSourceReader;
#endif /* __cplusplus */
#endif

#ifndef __IMFSinkWriter_FWD_DEFINED__
#define __IMFSinkWriter_FWD_DEFINED__
typedef interface IMFSinkWriter IMFSinkWriter;
#ifdef __cplusplus
interface IMFSinkWriter;
#endif /* __cplusplus */
#endif

#ifndef __IMFSourceReaderCallback_FWD_DEFINED__
#define __IMFSourceReaderCallback_FWD_DEFINED__
typedef interface IMFSourceReaderCallback IMFSourceReaderCallback;
#ifdef __cplusplus
interface IMFSourceReaderCallback;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <mfobjects.h>

#ifdef __cplusplus
extern "C" {
#endif

EXTERN_GUID(MF_SOURCE_READER_ASYNC_CALLBACK, 0x1e3dbeac,0xbb43,0x4c35,0xb5,0x07,0xcd,0x64,0x44,0x64,0xc9,0x65);
EXTERN_GUID(MF_SOURCE_READER_D3D_MANAGER, 0xec822da2,0xe1e9,0x4b29,0xa0,0xd8,0x56,0x3c,0x71,0x9f,0x52,0x69);
EXTERN_GUID(MF_SOURCE_READER_DISABLE_DXVA, 0xaa456cfd,0x3943,0x4a1e,0xa7,0x7d,0x18,0x38,0xc0,0xea,0x2e,0x35);
EXTERN_GUID(MF_SOURCE_READER_MEDIASOURCE_CONFIG, 0x9085abeb,0x0354,0x48f9,0xab,0xb5,0x20,0x0d,0xf8,0x38,0xc6,0x8e);
EXTERN_GUID(MF_SOURCE_READER_MEDIASOURCE_CHARACTERISTICS, 0x6d23f5c8,0xc5d7,0x4a9b,0x99,0x71,0x5d,0x11,0xf8,0xbc,0xa8,0x80);
EXTERN_GUID(MF_SOURCE_READER_ENABLE_VIDEO_PROCESSING, 0xfb394f3d,0xccf1,0x42ee,0xbb,0xb3,0xf9,0xb8,0x45,0xd5,0x68,0x1d);
EXTERN_GUID(MF_SOURCE_READER_DISCONNECT_MEDIASOURCE_ON_SHUTDOWN, 0x56b67165,0x219e,0x456d,0xa2,0x2e,0x2d,0x30,0x04,0xc7,0xfe,0x56);
typedef enum MF_SOURCE_READER_FLAG {
    MF_SOURCE_READERF_ERROR = 0x1,
    MF_SOURCE_READERF_ENDOFSTREAM = 0x2,
    MF_SOURCE_READERF_NEWSTREAM = 0x4,
    MF_SOURCE_READERF_NATIVEMEDIATYPECHANGED = 0x10,
    MF_SOURCE_READERF_CURRENTMEDIATYPECHANGED = 0x20,
    MF_SOURCE_READERF_STREAMTICK = 0x100
} MF_SOURCE_READER_FLAG;
typedef struct _MF_SINK_WRITER_STATISTICS {
    DWORD cb;
    LONGLONG llLastTimestampReceived;
    LONGLONG llLastTimestampEncoded;
    LONGLONG llLastTimestampProcessed;
    LONGLONG llLastStreamTickReceived;
    LONGLONG llLastSinkSampleRequest;
    QWORD qwNumSamplesReceived;
    QWORD qwNumSamplesEncoded;
    QWORD qwNumSamplesProcessed;
    QWORD qwNumStreamTicksReceived;
    DWORD dwByteCountQueued;
    QWORD qwByteCountProcessed;
    DWORD dwNumOutstandingSinkSampleRequests;
    DWORD dwAverageSampleRateReceived;
    DWORD dwAverageSampleRateEncoded;
    DWORD dwAverageSampleRateProcessed;
} MF_SINK_WRITER_STATISTICS;
enum {
    MF_SOURCE_READER_INVALID_STREAM_INDEX = 0xffffffff,
    MF_SOURCE_READER_ALL_STREAMS = 0xfffffffe,
    MF_SOURCE_READER_ANY_STREAM = 0xfffffffe,
    MF_SOURCE_READER_FIRST_AUDIO_STREAM = 0xfffffffd,
    MF_SOURCE_READER_FIRST_VIDEO_STREAM = 0xfffffffc,
    MF_SOURCE_READER_MEDIASOURCE = 0xffffffff
};
/*****************************************************************************
 * IMFSourceReader interface
 */
#ifndef __IMFSourceReader_INTERFACE_DEFINED__
#define __IMFSourceReader_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFSourceReader, 0x70ae66f2, 0xc809, 0x4e4f, 0x89,0x15, 0xbd,0xcb,0x40,0x6b,0x79,0x93);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("70ae66f2-c809-4e4f-8915-bdcb406b7993")
IMFSourceReader : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetStreamSelection(
        DWORD dwStreamIndex,
        WINBOOL *pfSelected) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStreamSelection(
        DWORD dwStreamIndex,
        WINBOOL fSelected) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNativeMediaType(
        DWORD dwStreamIndex,
        DWORD dwMediaTypeIndex,
        IMFMediaType **ppMediaType) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCurrentMediaType(
        DWORD dwStreamIndex,
        IMFMediaType **ppMediaType) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetCurrentMediaType(
        DWORD dwStreamIndex,
        DWORD *pdwReserved,
        IMFMediaType *pMediaType) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetCurrentPosition(
        REFGUID guidTimeFormat,
        REFPROPVARIANT varPosition) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReadSample(
        DWORD dwStreamIndex,
        DWORD dwControlFlags,
        DWORD *pdwActualStreamIndex,
        DWORD *pdwStreamFlags,
        LONGLONG *pllTimestamp,
        IMFSample **ppSample) = 0;

    virtual HRESULT STDMETHODCALLTYPE Flush(
        DWORD dwStreamIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetServiceForStream(
        DWORD dwStreamIndex,
        REFGUID guidService,
        REFIID riid,
        LPVOID *ppvObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPresentationAttribute(
        DWORD dwStreamIndex,
        REFGUID guidAttribute,
        PROPVARIANT *pvarAttribute) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFSourceReader, 0x70ae66f2, 0xc809, 0x4e4f, 0x89,0x15, 0xbd,0xcb,0x40,0x6b,0x79,0x93)
#endif
#else
typedef struct IMFSourceReaderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSourceReader *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSourceReader *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSourceReader *This);

    /*** IMFSourceReader methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamSelection)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        WINBOOL *pfSelected);

    HRESULT (STDMETHODCALLTYPE *SetStreamSelection)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        WINBOOL fSelected);

    HRESULT (STDMETHODCALLTYPE *GetNativeMediaType)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        DWORD dwMediaTypeIndex,
        IMFMediaType **ppMediaType);

    HRESULT (STDMETHODCALLTYPE *GetCurrentMediaType)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        IMFMediaType **ppMediaType);

    HRESULT (STDMETHODCALLTYPE *SetCurrentMediaType)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        DWORD *pdwReserved,
        IMFMediaType *pMediaType);

    HRESULT (STDMETHODCALLTYPE *SetCurrentPosition)(
        IMFSourceReader *This,
        REFGUID guidTimeFormat,
        REFPROPVARIANT varPosition);

    HRESULT (STDMETHODCALLTYPE *ReadSample)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        DWORD dwControlFlags,
        DWORD *pdwActualStreamIndex,
        DWORD *pdwStreamFlags,
        LONGLONG *pllTimestamp,
        IMFSample **ppSample);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        IMFSourceReader *This,
        DWORD dwStreamIndex);

    HRESULT (STDMETHODCALLTYPE *GetServiceForStream)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        REFGUID guidService,
        REFIID riid,
        LPVOID *ppvObject);

    HRESULT (STDMETHODCALLTYPE *GetPresentationAttribute)(
        IMFSourceReader *This,
        DWORD dwStreamIndex,
        REFGUID guidAttribute,
        PROPVARIANT *pvarAttribute);

    END_INTERFACE
} IMFSourceReaderVtbl;

interface IMFSourceReader {
    CONST_VTBL IMFSourceReaderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFSourceReader_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFSourceReader_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFSourceReader_Release(This) (This)->lpVtbl->Release(This)
/*** IMFSourceReader methods ***/
#define IMFSourceReader_GetStreamSelection(This,dwStreamIndex,pfSelected) (This)->lpVtbl->GetStreamSelection(This,dwStreamIndex,pfSelected)
#define IMFSourceReader_SetStreamSelection(This,dwStreamIndex,fSelected) (This)->lpVtbl->SetStreamSelection(This,dwStreamIndex,fSelected)
#define IMFSourceReader_GetNativeMediaType(This,dwStreamIndex,dwMediaTypeIndex,ppMediaType) (This)->lpVtbl->GetNativeMediaType(This,dwStreamIndex,dwMediaTypeIndex,ppMediaType)
#define IMFSourceReader_GetCurrentMediaType(This,dwStreamIndex,ppMediaType) (This)->lpVtbl->GetCurrentMediaType(This,dwStreamIndex,ppMediaType)
#define IMFSourceReader_SetCurrentMediaType(This,dwStreamIndex,pdwReserved,pMediaType) (This)->lpVtbl->SetCurrentMediaType(This,dwStreamIndex,pdwReserved,pMediaType)
#define IMFSourceReader_SetCurrentPosition(This,guidTimeFormat,varPosition) (This)->lpVtbl->SetCurrentPosition(This,guidTimeFormat,varPosition)
#define IMFSourceReader_ReadSample(This,dwStreamIndex,dwControlFlags,pdwActualStreamIndex,pdwStreamFlags,pllTimestamp,ppSample) (This)->lpVtbl->ReadSample(This,dwStreamIndex,dwControlFlags,pdwActualStreamIndex,pdwStreamFlags,pllTimestamp,ppSample)
#define IMFSourceReader_Flush(This,dwStreamIndex) (This)->lpVtbl->Flush(This,dwStreamIndex)
#define IMFSourceReader_GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject) (This)->lpVtbl->GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject)
#define IMFSourceReader_GetPresentationAttribute(This,dwStreamIndex,guidAttribute,pvarAttribute) (This)->lpVtbl->GetPresentationAttribute(This,dwStreamIndex,guidAttribute,pvarAttribute)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMFSourceReader_QueryInterface(IMFSourceReader* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMFSourceReader_AddRef(IMFSourceReader* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMFSourceReader_Release(IMFSourceReader* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFSourceReader methods ***/
static FORCEINLINE HRESULT IMFSourceReader_GetStreamSelection(IMFSourceReader* This,DWORD dwStreamIndex,WINBOOL *pfSelected) {
    return This->lpVtbl->GetStreamSelection(This,dwStreamIndex,pfSelected);
}
static FORCEINLINE HRESULT IMFSourceReader_SetStreamSelection(IMFSourceReader* This,DWORD dwStreamIndex,WINBOOL fSelected) {
    return This->lpVtbl->SetStreamSelection(This,dwStreamIndex,fSelected);
}
static FORCEINLINE HRESULT IMFSourceReader_GetNativeMediaType(IMFSourceReader* This,DWORD dwStreamIndex,DWORD dwMediaTypeIndex,IMFMediaType **ppMediaType) {
    return This->lpVtbl->GetNativeMediaType(This,dwStreamIndex,dwMediaTypeIndex,ppMediaType);
}
static FORCEINLINE HRESULT IMFSourceReader_GetCurrentMediaType(IMFSourceReader* This,DWORD dwStreamIndex,IMFMediaType **ppMediaType) {
    return This->lpVtbl->GetCurrentMediaType(This,dwStreamIndex,ppMediaType);
}
static FORCEINLINE HRESULT IMFSourceReader_SetCurrentMediaType(IMFSourceReader* This,DWORD dwStreamIndex,DWORD *pdwReserved,IMFMediaType *pMediaType) {
    return This->lpVtbl->SetCurrentMediaType(This,dwStreamIndex,pdwReserved,pMediaType);
}
static FORCEINLINE HRESULT IMFSourceReader_SetCurrentPosition(IMFSourceReader* This,REFGUID guidTimeFormat,REFPROPVARIANT varPosition) {
    return This->lpVtbl->SetCurrentPosition(This,guidTimeFormat,varPosition);
}
static FORCEINLINE HRESULT IMFSourceReader_ReadSample(IMFSourceReader* This,DWORD dwStreamIndex,DWORD dwControlFlags,DWORD *pdwActualStreamIndex,DWORD *pdwStreamFlags,LONGLONG *pllTimestamp,IMFSample **ppSample) {
    return This->lpVtbl->ReadSample(This,dwStreamIndex,dwControlFlags,pdwActualStreamIndex,pdwStreamFlags,pllTimestamp,ppSample);
}
static FORCEINLINE HRESULT IMFSourceReader_Flush(IMFSourceReader* This,DWORD dwStreamIndex) {
    return This->lpVtbl->Flush(This,dwStreamIndex);
}
static FORCEINLINE HRESULT IMFSourceReader_GetServiceForStream(IMFSourceReader* This,DWORD dwStreamIndex,REFGUID guidService,REFIID riid,LPVOID *ppvObject) {
    return This->lpVtbl->GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject);
}
static FORCEINLINE HRESULT IMFSourceReader_GetPresentationAttribute(IMFSourceReader* This,DWORD dwStreamIndex,REFGUID guidAttribute,PROPVARIANT *pvarAttribute) {
    return This->lpVtbl->GetPresentationAttribute(This,dwStreamIndex,guidAttribute,pvarAttribute);
}
#endif
#endif

#endif


#endif  /* __IMFSourceReader_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSinkWriter interface
 */
#ifndef __IMFSinkWriter_INTERFACE_DEFINED__
#define __IMFSinkWriter_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFSinkWriter, 0x3137f1cd, 0xfe5e, 0x4805, 0xa5,0xd8, 0xfb,0x47,0x74,0x48,0xcb,0x3d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("3137f1cd-fe5e-4805-a5d8-fb477448cb3d")
IMFSinkWriter : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE AddStream(
        IMFMediaType *pTargetMediaType,
        DWORD *pdwStreamIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInputMediaType(
        DWORD dwStreamIndex,
        IMFMediaType *pInputMediaType,
        IMFAttributes *pEncodingParameters) = 0;

    virtual HRESULT STDMETHODCALLTYPE BeginWriting(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE WriteSample(
        DWORD dwStreamIndex,
        IMFSample *pSample) = 0;

    virtual HRESULT STDMETHODCALLTYPE SendStreamTick(
        DWORD dwStreamIndex,
        LONGLONG llTimestamp) = 0;

    virtual HRESULT STDMETHODCALLTYPE PlaceMarker(
        DWORD dwStreamIndex,
        LPVOID pvContext) = 0;

    virtual HRESULT STDMETHODCALLTYPE NotifyEndOfSegment(
        DWORD dwStreamIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE Flush(
        DWORD dwStreamIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finalize(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetServiceForStream(
        DWORD dwStreamIndex,
        REFGUID guidService,
        REFIID riid,
        LPVOID *ppvObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStatistics(
        DWORD dwStreamIndex,
        MF_SINK_WRITER_STATISTICS *pStats) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFSinkWriter, 0x3137f1cd, 0xfe5e, 0x4805, 0xa5,0xd8, 0xfb,0x47,0x74,0x48,0xcb,0x3d)
#endif
#else
typedef struct IMFSinkWriterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSinkWriter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSinkWriter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSinkWriter *This);

    /*** IMFSinkWriter methods ***/
    HRESULT (STDMETHODCALLTYPE *AddStream)(
        IMFSinkWriter *This,
        IMFMediaType *pTargetMediaType,
        DWORD *pdwStreamIndex);

    HRESULT (STDMETHODCALLTYPE *SetInputMediaType)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex,
        IMFMediaType *pInputMediaType,
        IMFAttributes *pEncodingParameters);

    HRESULT (STDMETHODCALLTYPE *BeginWriting)(
        IMFSinkWriter *This);

    HRESULT (STDMETHODCALLTYPE *WriteSample)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex,
        IMFSample *pSample);

    HRESULT (STDMETHODCALLTYPE *SendStreamTick)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex,
        LONGLONG llTimestamp);

    HRESULT (STDMETHODCALLTYPE *PlaceMarker)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex,
        LPVOID pvContext);

    HRESULT (STDMETHODCALLTYPE *NotifyEndOfSegment)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex);

    HRESULT (STDMETHODCALLTYPE *Finalize)(
        IMFSinkWriter *This);

    HRESULT (STDMETHODCALLTYPE *GetServiceForStream)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex,
        REFGUID guidService,
        REFIID riid,
        LPVOID *ppvObject);

    HRESULT (STDMETHODCALLTYPE *GetStatistics)(
        IMFSinkWriter *This,
        DWORD dwStreamIndex,
        MF_SINK_WRITER_STATISTICS *pStats);

    END_INTERFACE
} IMFSinkWriterVtbl;

interface IMFSinkWriter {
    CONST_VTBL IMFSinkWriterVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFSinkWriter_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFSinkWriter_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFSinkWriter_Release(This) (This)->lpVtbl->Release(This)
/*** IMFSinkWriter methods ***/
#define IMFSinkWriter_AddStream(This,pTargetMediaType,pdwStreamIndex) (This)->lpVtbl->AddStream(This,pTargetMediaType,pdwStreamIndex)
#define IMFSinkWriter_SetInputMediaType(This,dwStreamIndex,pInputMediaType,pEncodingParameters) (This)->lpVtbl->SetInputMediaType(This,dwStreamIndex,pInputMediaType,pEncodingParameters)
#define IMFSinkWriter_BeginWriting(This) (This)->lpVtbl->BeginWriting(This)
#define IMFSinkWriter_WriteSample(This,dwStreamIndex,pSample) (This)->lpVtbl->WriteSample(This,dwStreamIndex,pSample)
#define IMFSinkWriter_SendStreamTick(This,dwStreamIndex,llTimestamp) (This)->lpVtbl->SendStreamTick(This,dwStreamIndex,llTimestamp)
#define IMFSinkWriter_PlaceMarker(This,dwStreamIndex,pvContext) (This)->lpVtbl->PlaceMarker(This,dwStreamIndex,pvContext)
#define IMFSinkWriter_NotifyEndOfSegment(This,dwStreamIndex) (This)->lpVtbl->NotifyEndOfSegment(This,dwStreamIndex)
#define IMFSinkWriter_Flush(This,dwStreamIndex) (This)->lpVtbl->Flush(This,dwStreamIndex)
#define IMFSinkWriter_Finalize(This) (This)->lpVtbl->Finalize(This)
#define IMFSinkWriter_GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject) (This)->lpVtbl->GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject)
#define IMFSinkWriter_GetStatistics(This,dwStreamIndex,pStats) (This)->lpVtbl->GetStatistics(This,dwStreamIndex,pStats)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMFSinkWriter_QueryInterface(IMFSinkWriter* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMFSinkWriter_AddRef(IMFSinkWriter* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMFSinkWriter_Release(IMFSinkWriter* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFSinkWriter methods ***/
static FORCEINLINE HRESULT IMFSinkWriter_AddStream(IMFSinkWriter* This,IMFMediaType *pTargetMediaType,DWORD *pdwStreamIndex) {
    return This->lpVtbl->AddStream(This,pTargetMediaType,pdwStreamIndex);
}
static FORCEINLINE HRESULT IMFSinkWriter_SetInputMediaType(IMFSinkWriter* This,DWORD dwStreamIndex,IMFMediaType *pInputMediaType,IMFAttributes *pEncodingParameters) {
    return This->lpVtbl->SetInputMediaType(This,dwStreamIndex,pInputMediaType,pEncodingParameters);
}
static FORCEINLINE HRESULT IMFSinkWriter_BeginWriting(IMFSinkWriter* This) {
    return This->lpVtbl->BeginWriting(This);
}
static FORCEINLINE HRESULT IMFSinkWriter_WriteSample(IMFSinkWriter* This,DWORD dwStreamIndex,IMFSample *pSample) {
    return This->lpVtbl->WriteSample(This,dwStreamIndex,pSample);
}
static FORCEINLINE HRESULT IMFSinkWriter_SendStreamTick(IMFSinkWriter* This,DWORD dwStreamIndex,LONGLONG llTimestamp) {
    return This->lpVtbl->SendStreamTick(This,dwStreamIndex,llTimestamp);
}
static FORCEINLINE HRESULT IMFSinkWriter_PlaceMarker(IMFSinkWriter* This,DWORD dwStreamIndex,LPVOID pvContext) {
    return This->lpVtbl->PlaceMarker(This,dwStreamIndex,pvContext);
}
static FORCEINLINE HRESULT IMFSinkWriter_NotifyEndOfSegment(IMFSinkWriter* This,DWORD dwStreamIndex) {
    return This->lpVtbl->NotifyEndOfSegment(This,dwStreamIndex);
}
static FORCEINLINE HRESULT IMFSinkWriter_Flush(IMFSinkWriter* This,DWORD dwStreamIndex) {
    return This->lpVtbl->Flush(This,dwStreamIndex);
}
static FORCEINLINE HRESULT IMFSinkWriter_Finalize(IMFSinkWriter* This) {
    return This->lpVtbl->Finalize(This);
}
static FORCEINLINE HRESULT IMFSinkWriter_GetServiceForStream(IMFSinkWriter* This,DWORD dwStreamIndex,REFGUID guidService,REFIID riid,LPVOID *ppvObject) {
    return This->lpVtbl->GetServiceForStream(This,dwStreamIndex,guidService,riid,ppvObject);
}
static FORCEINLINE HRESULT IMFSinkWriter_GetStatistics(IMFSinkWriter* This,DWORD dwStreamIndex,MF_SINK_WRITER_STATISTICS *pStats) {
    return This->lpVtbl->GetStatistics(This,dwStreamIndex,pStats);
}
#endif
#endif

#endif


#endif  /* __IMFSinkWriter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMFSourceReaderCallback interface
 */
#ifndef __IMFSourceReaderCallback_INTERFACE_DEFINED__
#define __IMFSourceReaderCallback_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFSourceReaderCallback, 0xdeec8d99, 0xfa1d, 0x4d82, 0x84,0xc2, 0x2c,0x89,0x69,0x94,0x48,0x67);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("deec8d99-fa1d-4d82-84c2-2c8969944867")
IMFSourceReaderCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE OnReadSample(
        HRESULT hrStatus,
        DWORD dwStreamIndex,
        DWORD dwStreamFlags,
        LONGLONG llTimestamp,
        IMFSample *pSample) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnFlush(
        DWORD dwStreamIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE OnEvent(
        DWORD dwStreamIndex,
        IMFMediaEvent *pEvent) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFSourceReaderCallback, 0xdeec8d99, 0xfa1d, 0x4d82, 0x84,0xc2, 0x2c,0x89,0x69,0x94,0x48,0x67)
#endif
#else
typedef struct IMFSourceReaderCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFSourceReaderCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFSourceReaderCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFSourceReaderCallback *This);

    /*** IMFSourceReaderCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *OnReadSample)(
        IMFSourceReaderCallback *This,
        HRESULT hrStatus,
        DWORD dwStreamIndex,
        DWORD dwStreamFlags,
        LONGLONG llTimestamp,
        IMFSample *pSample);

    HRESULT (STDMETHODCALLTYPE *OnFlush)(
        IMFSourceReaderCallback *This,
        DWORD dwStreamIndex);

    HRESULT (STDMETHODCALLTYPE *OnEvent)(
        IMFSourceReaderCallback *This,
        DWORD dwStreamIndex,
        IMFMediaEvent *pEvent);

    END_INTERFACE
} IMFSourceReaderCallbackVtbl;

interface IMFSourceReaderCallback {
    CONST_VTBL IMFSourceReaderCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFSourceReaderCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFSourceReaderCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFSourceReaderCallback_Release(This) (This)->lpVtbl->Release(This)
/*** IMFSourceReaderCallback methods ***/
#define IMFSourceReaderCallback_OnReadSample(This,hrStatus,dwStreamIndex,dwStreamFlags,llTimestamp,pSample) (This)->lpVtbl->OnReadSample(This,hrStatus,dwStreamIndex,dwStreamFlags,llTimestamp,pSample)
#define IMFSourceReaderCallback_OnFlush(This,dwStreamIndex) (This)->lpVtbl->OnFlush(This,dwStreamIndex)
#define IMFSourceReaderCallback_OnEvent(This,dwStreamIndex,pEvent) (This)->lpVtbl->OnEvent(This,dwStreamIndex,pEvent)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IMFSourceReaderCallback_QueryInterface(IMFSourceReaderCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IMFSourceReaderCallback_AddRef(IMFSourceReaderCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IMFSourceReaderCallback_Release(IMFSourceReaderCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFSourceReaderCallback methods ***/
static FORCEINLINE HRESULT IMFSourceReaderCallback_OnReadSample(IMFSourceReaderCallback* This,HRESULT hrStatus,DWORD dwStreamIndex,DWORD dwStreamFlags,LONGLONG llTimestamp,IMFSample *pSample) {
    return This->lpVtbl->OnReadSample(This,hrStatus,dwStreamIndex,dwStreamFlags,llTimestamp,pSample);
}
static FORCEINLINE HRESULT IMFSourceReaderCallback_OnFlush(IMFSourceReaderCallback* This,DWORD dwStreamIndex) {
    return This->lpVtbl->OnFlush(This,dwStreamIndex);
}
static FORCEINLINE HRESULT IMFSourceReaderCallback_OnEvent(IMFSourceReaderCallback* This,DWORD dwStreamIndex,IMFMediaEvent *pEvent) {
    return This->lpVtbl->OnEvent(This,dwStreamIndex,pEvent);
}
#endif
#endif

#endif


#endif  /* __IMFSourceReaderCallback_INTERFACE_DEFINED__ */

HRESULT WINAPI MFCreateSinkWriterFromMediaSink(IMFMediaSink *pMediaSink,IMFAttributes *pAttributes,IMFSinkWriter **ppSinkWriter);
HRESULT WINAPI MFCreateSinkWriterFromURL(LPCWSTR pwszOutputURL,IMFByteStream *pByteStream,IMFAttributes *pAttributes,IMFSinkWriter **ppSinkWriter);
HRESULT WINAPI MFCreateSourceReaderFromByteStream(IMFByteStream *pByteStream,IMFAttributes *pAttributes,IMFSourceReader **ppSourceReader);
HRESULT WINAPI MFCreateSourceReaderFromMediaSource(IMFMediaSource *pMediaSource,IMFAttributes *pAttributes,IMFSourceReader **ppSourceReader);
HRESULT WINAPI MFCreateSourceReaderFromURL(LPCWSTR pwszURL,IMFAttributes *pAttributes,IMFSourceReader **ppSourceReader);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mfreadwrite_h__ */