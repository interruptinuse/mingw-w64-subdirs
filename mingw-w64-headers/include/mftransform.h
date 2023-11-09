/*** Autogenerated by WIDL 8.19 from include/mftransform.idl - Do not edit ***/

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

#ifndef __mftransform_h__
#define __mftransform_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IMFTransform_FWD_DEFINED__
#define __IMFTransform_FWD_DEFINED__
typedef interface IMFTransform IMFTransform;
#ifdef __cplusplus
interface IMFTransform;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <mfobjects.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MFT_OUTPUT_BOUND_LOWER_UNBOUNDED MINLONGLONG
#define MFT_OUTPUT_BOUND_UPPER_UNBOUNDED MAXLONGLONG
typedef enum _MFT_MESSAGE_TYPE {
    MFT_MESSAGE_COMMAND_FLUSH = 0x0,
    MFT_MESSAGE_COMMAND_DRAIN = 0x1,
    MFT_MESSAGE_SET_D3D_MANAGER = 0x2,
    MFT_MESSAGE_DROP_SAMPLES = 0x3,
    MFT_MESSAGE_COMMAND_TICK = 0x4,
    MFT_MESSAGE_NOTIFY_BEGIN_STREAMING = 0x10000000,
    MFT_MESSAGE_NOTIFY_END_STREAMING = 0x10000001,
    MFT_MESSAGE_NOTIFY_END_OF_STREAM = 0x10000002,
    MFT_MESSAGE_NOTIFY_START_OF_STREAM = 0x10000003,
    MFT_MESSAGE_NOTIFY_RELEASE_RESOURCES = 0x10000004,
    MFT_MESSAGE_NOTIFY_REACQUIRE_RESOURCES = 0x10000005,
    MFT_MESSAGE_NOTIFY_EVENT = 0x10000006,
    MFT_MESSAGE_COMMAND_SET_OUTPUT_STREAM_STATE = 0x10000007,
    MFT_MESSAGE_COMMAND_FLUSH_OUTPUT_STREAM = 0x10000008,
    MFT_MESSAGE_COMMAND_MARKER = 0x20000000
} MFT_MESSAGE_TYPE;
enum _MFT_SET_TYPE_FLAGS {
    MFT_SET_TYPE_TEST_ONLY = 0x1
};
enum _MFT_INPUT_STREAM_INFO_FLAGS {
    MFT_INPUT_STREAM_WHOLE_SAMPLES = 0x1,
    MFT_INPUT_STREAM_SINGLE_SAMPLE_PER_BUFFER = 0x2,
    MFT_INPUT_STREAM_FIXED_SAMPLE_SIZE = 0x4,
    MFT_INPUT_STREAM_HOLDS_BUFFERS = 0x8,
    MFT_INPUT_STREAM_DOES_NOT_ADDREF = 0x100,
    MFT_INPUT_STREAM_REMOVABLE = 0x200,
    MFT_INPUT_STREAM_OPTIONAL = 0x400,
    MFT_INPUT_STREAM_PROCESSES_IN_PLACE = 0x800
};
enum _MFT_INPUT_STATUS_FLAGS {
    MFT_INPUT_STATUS_ACCEPT_DATA = 0x1
};
enum _MFT_INPUT_DATA_BUFFER_FLAGS {
    MFT_INPUT_DATA_BUFFER_PLACEHOLDER = 0xffffffff
};
enum _MFT_OUTPUT_STREAM_INFO_FLAGS {
    MFT_OUTPUT_STREAM_WHOLE_SAMPLES = 0x1,
    MFT_OUTPUT_STREAM_SINGLE_SAMPLE_PER_BUFFER = 0x2,
    MFT_OUTPUT_STREAM_FIXED_SAMPLE_SIZE = 0x4,
    MFT_OUTPUT_STREAM_DISCARDABLE = 0x8,
    MFT_OUTPUT_STREAM_OPTIONAL = 0x10,
    MFT_OUTPUT_STREAM_PROVIDES_SAMPLES = 0x100,
    MFT_OUTPUT_STREAM_CAN_PROVIDE_SAMPLES = 0x200,
    MFT_OUTPUT_STREAM_LAZY_READ = 0x400,
    MFT_OUTPUT_STREAM_REMOVABLE = 0x800
};
enum _MFT_OUTPUT_DATA_BUFFER_FLAGS {
    MFT_OUTPUT_DATA_BUFFER_INCOMPLETE = 0x1000000,
    MFT_OUTPUT_DATA_BUFFER_FORMAT_CHANGE = 0x100,
    MFT_OUTPUT_DATA_BUFFER_STREAM_END = 0x200,
    MFT_OUTPUT_DATA_BUFFER_NO_SAMPLE = 0x300
};
enum _MFT_OUTPUT_STATUS_FLAGS {
    MFT_OUTPUT_STATUS_SAMPLE_READY = 0x1
};
enum _MFT_PROCESS_OUTPUT_FLAGS {
    MFT_PROCESS_OUTPUT_DISCARD_WHEN_NO_BUFFER = 0x1,
    MFT_PROCESS_OUTPUT_REGENERATE_LAST_OUTPUT = 0x2
};
enum _MFT_PROCESS_OUTPUT_STATUS {
    MFT_PROCESS_OUTPUT_STATUS_NEW_STREAMS = 0x100
};
enum _MFT_DRAIN_TYPE {
    MFT_DRAIN_PRODUCE_TAILS = 0x0,
    MFT_DRAIN_NO_TAILS = 0x1
};
typedef enum _MF3DVideoOutputType {
    MF3DVideoOutputType_BaseView = 0,
    MF3DVideoOutputType_Stereo = 1
} MF3DVideoOutputType;
typedef struct _MFT_INPUT_STREAM_INFO {
    LONGLONG hnsMaxLatency;
    DWORD dwFlags;
    DWORD cbSize;
    DWORD cbMaxLookahead;
    DWORD cbAlignment;
} MFT_INPUT_STREAM_INFO;
typedef struct _MFT_OUTPUT_STREAM_INFO {
    DWORD dwFlags;
    DWORD cbSize;
    DWORD cbAlignment;
} MFT_OUTPUT_STREAM_INFO;
typedef struct _MFT_OUTPUT_DATA_BUFFER {
    DWORD dwStreamID;
    IMFSample *pSample;
    DWORD dwStatus;
    IMFCollection *pEvents;
} MFT_OUTPUT_DATA_BUFFER;
typedef struct _MFT_OUTPUT_DATA_BUFFER *PMFT_OUTPUT_DATA_BUFFER;
/*****************************************************************************
 * IMFTransform interface
 */
#ifndef __IMFTransform_INTERFACE_DEFINED__
#define __IMFTransform_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMFTransform, 0xbf94c121, 0x5b05, 0x4e6f, 0x80,0x00, 0xba,0x59,0x89,0x61,0x41,0x4d);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("bf94c121-5b05-4e6f-8000-ba598961414d")
IMFTransform : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetStreamLimits(
        DWORD *input_minimum,
        DWORD *input_maximum,
        DWORD *output_minimum,
        DWORD *output_maximum) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStreamCount(
        DWORD *inputs,
        DWORD *outputs) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStreamIDs(
        DWORD input_size,
        DWORD *inputs,
        DWORD output_size,
        DWORD *outputs) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputStreamInfo(
        DWORD id,
        MFT_INPUT_STREAM_INFO *info) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputStreamInfo(
        DWORD id,
        MFT_OUTPUT_STREAM_INFO *info) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAttributes(
        IMFAttributes **attributes) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputStreamAttributes(
        DWORD id,
        IMFAttributes **attributes) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputStreamAttributes(
        DWORD id,
        IMFAttributes **attributes) = 0;

    virtual HRESULT STDMETHODCALLTYPE DeleteInputStream(
        DWORD id) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddInputStreams(
        DWORD streams,
        DWORD *ids) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputAvailableType(
        DWORD id,
        DWORD index,
        IMFMediaType **type) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputAvailableType(
        DWORD id,
        DWORD index,
        IMFMediaType **type) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInputType(
        DWORD id,
        IMFMediaType *type,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOutputType(
        DWORD id,
        IMFMediaType *type,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputCurrentType(
        DWORD id,
        IMFMediaType **type) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputCurrentType(
        DWORD id,
        IMFMediaType **type) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputStatus(
        DWORD id,
        DWORD *flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputStatus(
        DWORD *flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOutputBounds(
        LONGLONG lower,
        LONGLONG upper) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessEvent(
        DWORD id,
        IMFMediaEvent *event) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessMessage(
        MFT_MESSAGE_TYPE message,
        ULONG_PTR param) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessInput(
        DWORD id,
        IMFSample *sample,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessOutput(
        DWORD flags,
        DWORD count,
        MFT_OUTPUT_DATA_BUFFER *samples,
        DWORD *status) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMFTransform, 0xbf94c121, 0x5b05, 0x4e6f, 0x80,0x00, 0xba,0x59,0x89,0x61,0x41,0x4d)
#endif
#else
typedef struct IMFTransformVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMFTransform *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMFTransform *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMFTransform *This);

    /*** IMFTransform methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamLimits)(
        IMFTransform *This,
        DWORD *input_minimum,
        DWORD *input_maximum,
        DWORD *output_minimum,
        DWORD *output_maximum);

    HRESULT (STDMETHODCALLTYPE *GetStreamCount)(
        IMFTransform *This,
        DWORD *inputs,
        DWORD *outputs);

    HRESULT (STDMETHODCALLTYPE *GetStreamIDs)(
        IMFTransform *This,
        DWORD input_size,
        DWORD *inputs,
        DWORD output_size,
        DWORD *outputs);

    HRESULT (STDMETHODCALLTYPE *GetInputStreamInfo)(
        IMFTransform *This,
        DWORD id,
        MFT_INPUT_STREAM_INFO *info);

    HRESULT (STDMETHODCALLTYPE *GetOutputStreamInfo)(
        IMFTransform *This,
        DWORD id,
        MFT_OUTPUT_STREAM_INFO *info);

    HRESULT (STDMETHODCALLTYPE *GetAttributes)(
        IMFTransform *This,
        IMFAttributes **attributes);

    HRESULT (STDMETHODCALLTYPE *GetInputStreamAttributes)(
        IMFTransform *This,
        DWORD id,
        IMFAttributes **attributes);

    HRESULT (STDMETHODCALLTYPE *GetOutputStreamAttributes)(
        IMFTransform *This,
        DWORD id,
        IMFAttributes **attributes);

    HRESULT (STDMETHODCALLTYPE *DeleteInputStream)(
        IMFTransform *This,
        DWORD id);

    HRESULT (STDMETHODCALLTYPE *AddInputStreams)(
        IMFTransform *This,
        DWORD streams,
        DWORD *ids);

    HRESULT (STDMETHODCALLTYPE *GetInputAvailableType)(
        IMFTransform *This,
        DWORD id,
        DWORD index,
        IMFMediaType **type);

    HRESULT (STDMETHODCALLTYPE *GetOutputAvailableType)(
        IMFTransform *This,
        DWORD id,
        DWORD index,
        IMFMediaType **type);

    HRESULT (STDMETHODCALLTYPE *SetInputType)(
        IMFTransform *This,
        DWORD id,
        IMFMediaType *type,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *SetOutputType)(
        IMFTransform *This,
        DWORD id,
        IMFMediaType *type,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *GetInputCurrentType)(
        IMFTransform *This,
        DWORD id,
        IMFMediaType **type);

    HRESULT (STDMETHODCALLTYPE *GetOutputCurrentType)(
        IMFTransform *This,
        DWORD id,
        IMFMediaType **type);

    HRESULT (STDMETHODCALLTYPE *GetInputStatus)(
        IMFTransform *This,
        DWORD id,
        DWORD *flags);

    HRESULT (STDMETHODCALLTYPE *GetOutputStatus)(
        IMFTransform *This,
        DWORD *flags);

    HRESULT (STDMETHODCALLTYPE *SetOutputBounds)(
        IMFTransform *This,
        LONGLONG lower,
        LONGLONG upper);

    HRESULT (STDMETHODCALLTYPE *ProcessEvent)(
        IMFTransform *This,
        DWORD id,
        IMFMediaEvent *event);

    HRESULT (STDMETHODCALLTYPE *ProcessMessage)(
        IMFTransform *This,
        MFT_MESSAGE_TYPE message,
        ULONG_PTR param);

    HRESULT (STDMETHODCALLTYPE *ProcessInput)(
        IMFTransform *This,
        DWORD id,
        IMFSample *sample,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *ProcessOutput)(
        IMFTransform *This,
        DWORD flags,
        DWORD count,
        MFT_OUTPUT_DATA_BUFFER *samples,
        DWORD *status);

    END_INTERFACE
} IMFTransformVtbl;

interface IMFTransform {
    CONST_VTBL IMFTransformVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMFTransform_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMFTransform_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMFTransform_Release(This) (This)->lpVtbl->Release(This)
/*** IMFTransform methods ***/
#define IMFTransform_GetStreamLimits(This,input_minimum,input_maximum,output_minimum,output_maximum) (This)->lpVtbl->GetStreamLimits(This,input_minimum,input_maximum,output_minimum,output_maximum)
#define IMFTransform_GetStreamCount(This,inputs,outputs) (This)->lpVtbl->GetStreamCount(This,inputs,outputs)
#define IMFTransform_GetStreamIDs(This,input_size,inputs,output_size,outputs) (This)->lpVtbl->GetStreamIDs(This,input_size,inputs,output_size,outputs)
#define IMFTransform_GetInputStreamInfo(This,id,info) (This)->lpVtbl->GetInputStreamInfo(This,id,info)
#define IMFTransform_GetOutputStreamInfo(This,id,info) (This)->lpVtbl->GetOutputStreamInfo(This,id,info)
#define IMFTransform_GetAttributes(This,attributes) (This)->lpVtbl->GetAttributes(This,attributes)
#define IMFTransform_GetInputStreamAttributes(This,id,attributes) (This)->lpVtbl->GetInputStreamAttributes(This,id,attributes)
#define IMFTransform_GetOutputStreamAttributes(This,id,attributes) (This)->lpVtbl->GetOutputStreamAttributes(This,id,attributes)
#define IMFTransform_DeleteInputStream(This,id) (This)->lpVtbl->DeleteInputStream(This,id)
#define IMFTransform_AddInputStreams(This,streams,ids) (This)->lpVtbl->AddInputStreams(This,streams,ids)
#define IMFTransform_GetInputAvailableType(This,id,index,type) (This)->lpVtbl->GetInputAvailableType(This,id,index,type)
#define IMFTransform_GetOutputAvailableType(This,id,index,type) (This)->lpVtbl->GetOutputAvailableType(This,id,index,type)
#define IMFTransform_SetInputType(This,id,type,flags) (This)->lpVtbl->SetInputType(This,id,type,flags)
#define IMFTransform_SetOutputType(This,id,type,flags) (This)->lpVtbl->SetOutputType(This,id,type,flags)
#define IMFTransform_GetInputCurrentType(This,id,type) (This)->lpVtbl->GetInputCurrentType(This,id,type)
#define IMFTransform_GetOutputCurrentType(This,id,type) (This)->lpVtbl->GetOutputCurrentType(This,id,type)
#define IMFTransform_GetInputStatus(This,id,flags) (This)->lpVtbl->GetInputStatus(This,id,flags)
#define IMFTransform_GetOutputStatus(This,flags) (This)->lpVtbl->GetOutputStatus(This,flags)
#define IMFTransform_SetOutputBounds(This,lower,upper) (This)->lpVtbl->SetOutputBounds(This,lower,upper)
#define IMFTransform_ProcessEvent(This,id,event) (This)->lpVtbl->ProcessEvent(This,id,event)
#define IMFTransform_ProcessMessage(This,message,param) (This)->lpVtbl->ProcessMessage(This,message,param)
#define IMFTransform_ProcessInput(This,id,sample,flags) (This)->lpVtbl->ProcessInput(This,id,sample,flags)
#define IMFTransform_ProcessOutput(This,flags,count,samples,status) (This)->lpVtbl->ProcessOutput(This,flags,count,samples,status)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMFTransform_QueryInterface(IMFTransform* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMFTransform_AddRef(IMFTransform* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMFTransform_Release(IMFTransform* This) {
    return This->lpVtbl->Release(This);
}
/*** IMFTransform methods ***/
static __WIDL_INLINE HRESULT IMFTransform_GetStreamLimits(IMFTransform* This,DWORD *input_minimum,DWORD *input_maximum,DWORD *output_minimum,DWORD *output_maximum) {
    return This->lpVtbl->GetStreamLimits(This,input_minimum,input_maximum,output_minimum,output_maximum);
}
static __WIDL_INLINE HRESULT IMFTransform_GetStreamCount(IMFTransform* This,DWORD *inputs,DWORD *outputs) {
    return This->lpVtbl->GetStreamCount(This,inputs,outputs);
}
static __WIDL_INLINE HRESULT IMFTransform_GetStreamIDs(IMFTransform* This,DWORD input_size,DWORD *inputs,DWORD output_size,DWORD *outputs) {
    return This->lpVtbl->GetStreamIDs(This,input_size,inputs,output_size,outputs);
}
static __WIDL_INLINE HRESULT IMFTransform_GetInputStreamInfo(IMFTransform* This,DWORD id,MFT_INPUT_STREAM_INFO *info) {
    return This->lpVtbl->GetInputStreamInfo(This,id,info);
}
static __WIDL_INLINE HRESULT IMFTransform_GetOutputStreamInfo(IMFTransform* This,DWORD id,MFT_OUTPUT_STREAM_INFO *info) {
    return This->lpVtbl->GetOutputStreamInfo(This,id,info);
}
static __WIDL_INLINE HRESULT IMFTransform_GetAttributes(IMFTransform* This,IMFAttributes **attributes) {
    return This->lpVtbl->GetAttributes(This,attributes);
}
static __WIDL_INLINE HRESULT IMFTransform_GetInputStreamAttributes(IMFTransform* This,DWORD id,IMFAttributes **attributes) {
    return This->lpVtbl->GetInputStreamAttributes(This,id,attributes);
}
static __WIDL_INLINE HRESULT IMFTransform_GetOutputStreamAttributes(IMFTransform* This,DWORD id,IMFAttributes **attributes) {
    return This->lpVtbl->GetOutputStreamAttributes(This,id,attributes);
}
static __WIDL_INLINE HRESULT IMFTransform_DeleteInputStream(IMFTransform* This,DWORD id) {
    return This->lpVtbl->DeleteInputStream(This,id);
}
static __WIDL_INLINE HRESULT IMFTransform_AddInputStreams(IMFTransform* This,DWORD streams,DWORD *ids) {
    return This->lpVtbl->AddInputStreams(This,streams,ids);
}
static __WIDL_INLINE HRESULT IMFTransform_GetInputAvailableType(IMFTransform* This,DWORD id,DWORD index,IMFMediaType **type) {
    return This->lpVtbl->GetInputAvailableType(This,id,index,type);
}
static __WIDL_INLINE HRESULT IMFTransform_GetOutputAvailableType(IMFTransform* This,DWORD id,DWORD index,IMFMediaType **type) {
    return This->lpVtbl->GetOutputAvailableType(This,id,index,type);
}
static __WIDL_INLINE HRESULT IMFTransform_SetInputType(IMFTransform* This,DWORD id,IMFMediaType *type,DWORD flags) {
    return This->lpVtbl->SetInputType(This,id,type,flags);
}
static __WIDL_INLINE HRESULT IMFTransform_SetOutputType(IMFTransform* This,DWORD id,IMFMediaType *type,DWORD flags) {
    return This->lpVtbl->SetOutputType(This,id,type,flags);
}
static __WIDL_INLINE HRESULT IMFTransform_GetInputCurrentType(IMFTransform* This,DWORD id,IMFMediaType **type) {
    return This->lpVtbl->GetInputCurrentType(This,id,type);
}
static __WIDL_INLINE HRESULT IMFTransform_GetOutputCurrentType(IMFTransform* This,DWORD id,IMFMediaType **type) {
    return This->lpVtbl->GetOutputCurrentType(This,id,type);
}
static __WIDL_INLINE HRESULT IMFTransform_GetInputStatus(IMFTransform* This,DWORD id,DWORD *flags) {
    return This->lpVtbl->GetInputStatus(This,id,flags);
}
static __WIDL_INLINE HRESULT IMFTransform_GetOutputStatus(IMFTransform* This,DWORD *flags) {
    return This->lpVtbl->GetOutputStatus(This,flags);
}
static __WIDL_INLINE HRESULT IMFTransform_SetOutputBounds(IMFTransform* This,LONGLONG lower,LONGLONG upper) {
    return This->lpVtbl->SetOutputBounds(This,lower,upper);
}
static __WIDL_INLINE HRESULT IMFTransform_ProcessEvent(IMFTransform* This,DWORD id,IMFMediaEvent *event) {
    return This->lpVtbl->ProcessEvent(This,id,event);
}
static __WIDL_INLINE HRESULT IMFTransform_ProcessMessage(IMFTransform* This,MFT_MESSAGE_TYPE message,ULONG_PTR param) {
    return This->lpVtbl->ProcessMessage(This,message,param);
}
static __WIDL_INLINE HRESULT IMFTransform_ProcessInput(IMFTransform* This,DWORD id,IMFSample *sample,DWORD flags) {
    return This->lpVtbl->ProcessInput(This,id,sample,flags);
}
static __WIDL_INLINE HRESULT IMFTransform_ProcessOutput(IMFTransform* This,DWORD flags,DWORD count,MFT_OUTPUT_DATA_BUFFER *samples,DWORD *status) {
    return This->lpVtbl->ProcessOutput(This,flags,count,samples,status);
}
#endif
#endif

#endif


#endif  /* __IMFTransform_INTERFACE_DEFINED__ */

HRESULT WINAPI MFCreateTransformActivate(IMFActivate **activate);
EXTERN_GUID(MF_SA_BUFFERS_PER_SAMPLE,              0x873c5171, 0x1e3d, 0x4e25, 0x98, 0x8d, 0xb4, 0x33, 0xce, 0x04, 0x19, 0x83);
EXTERN_GUID(MF_SA_D3D_AWARE,                       0xeaa35c29, 0x775e, 0x488e, 0x9b, 0x61, 0xb3, 0x28, 0x3e, 0x49, 0x58, 0x3b);
EXTERN_GUID(MF_SA_D3D11_ALLOW_DYNAMIC_YUV_TEXTURE, 0xce06d49f, 0x0613, 0x4b9d, 0x86, 0xa6, 0xd8, 0xc4, 0xf9, 0xc1, 0x00, 0x75);
EXTERN_GUID(MF_SA_D3D11_AWARE,                0x206b4fc8, 0xfcf9, 0x4c51, 0xaf, 0xe3, 0x97, 0x64, 0x36, 0x9e, 0x33, 0xa0);
EXTERN_GUID(MF_SA_D3D11_BINDFLAGS,            0xeacf97ad, 0x065c, 0x4408, 0xbe, 0xe3, 0xfd, 0xcb, 0xfd, 0x12, 0x8b, 0xe2);
EXTERN_GUID(MF_SA_D3D11_HW_PROTECTED,         0x3a8ba9d9, 0x92ca, 0x4307, 0xa3, 0x91, 0x69, 0x99, 0xdb, 0xf3, 0xb6, 0xce);
EXTERN_GUID(MF_SA_D3D11_SHARED,               0x7b8f32c3, 0x6d96, 0x4b89, 0x92, 0x03, 0xdd, 0x38, 0xb6, 0x14, 0x14, 0xf3);
EXTERN_GUID(MF_SA_D3D11_SHARED_WITHOUT_MUTEX, 0x39dbd44d, 0x2e44, 0x4931, 0xa4, 0xc8, 0x35, 0x2d, 0x3d, 0xc4, 0x21, 0x15);
EXTERN_GUID(MF_SA_D3D11_USAGE,                0xe85fe442, 0x2ca3, 0x486e, 0xa9, 0xc7, 0x10, 0x9d, 0xda, 0x60, 0x98, 0x80);
EXTERN_GUID(MF_SA_REQUIRED_SAMPLE_COUNT,     0x18802c61, 0x324b, 0x4952, 0xab, 0xd0, 0x17, 0x6f, 0xf5, 0xc6, 0x96, 0xff);
EXTERN_GUID(MF_SA_REQUIRED_SAMPLE_COUNT_PROGRESSIVE, 0xb172d58e, 0xfa77, 0x4e48, 0x8d, 0x2a, 0x1d, 0xf2, 0xd8, 0x50, 0xea, 0xc2);
EXTERN_GUID(MF_SA_MINIMUM_OUTPUT_SAMPLE_COUNT, 0x851745d5, 0xc3d6, 0x476d, 0x95, 0x27, 0x49, 0x8e, 0xf2, 0xd1, 0x0d, 0x18);
EXTERN_GUID(MF_SA_MINIMUM_OUTPUT_SAMPLE_COUNT_PROGRESSIVE, 0x0f5523a5, 0x1cb2, 0x47c5, 0xa5, 0x50, 0x2e, 0xeb, 0x84, 0xb4, 0xd1, 0x4a);
EXTERN_GUID(MF_TRANSFORM_ASYNC,              0xf81a699a, 0x649a, 0x497d, 0x8c, 0x73, 0x29, 0xf8, 0xfe, 0xd6, 0xad, 0x7a);
EXTERN_GUID(MF_TRANSFORM_ASYNC_UNLOCK,       0xe5666d6b, 0x3422, 0x4eb6, 0xa4, 0x21, 0xda, 0x7d, 0xb1, 0xf8, 0xe2, 0x07);
EXTERN_GUID(MF_TRANSFORM_CATEGORY_Attribute, 0xceabba49, 0x506d, 0x4757, 0xa6, 0xff, 0x66, 0xc1, 0x84, 0x98, 0x7e, 0x4e);
EXTERN_GUID(MF_TRANSFORM_FLAGS_Attribute,    0x9359bb7e, 0x6275, 0x46c4, 0xa0, 0x25, 0x1c, 0x01, 0xe4, 0x5f, 0x1a, 0x86);
EXTERN_GUID(MFT_CODEC_MERIT_Attribute,       0x88a7cb15, 0x7b07, 0x4a34, 0x91, 0x28, 0xe6, 0x4c, 0x67, 0x03, 0xc4, 0xd3);
EXTERN_GUID(MFT_CONNECTED_STREAM_ATTRIBUTE,  0x71eeb820, 0xa59f, 0x4de2, 0xbc, 0xec, 0x38, 0xdb, 0x1d, 0xd6, 0x11, 0xa4);
EXTERN_GUID(MFT_CONNECTED_TO_HW_STREAM,      0x34e6e728, 0x06d6, 0x4491, 0xa5, 0x53, 0x47, 0x95, 0x65, 0x0d, 0xb9, 0x12);
EXTERN_GUID(MFT_DECODER_EXPOSE_OUTPUT_TYPES_IN_NATIVE_ORDER, 0xef80833f, 0xf8fa, 0x44d9, 0x80, 0xd8, 0x41, 0xed, 0x62, 0x32, 0x67, 0x0c);
EXTERN_GUID(MFT_DECODER_FINAL_VIDEO_RESOLUTION_HINT, 0xdc2f8496, 0x15c4, 0x407a, 0xb6, 0xf0, 0x1b, 0x66, 0xab, 0x5f, 0xbf, 0x53);
EXTERN_GUID(MFT_ENCODER_SUPPORTS_CONFIG_EVENT,       0x86a355ae, 0x3a77, 0x4ec4, 0x9f, 0x31, 0x01, 0x14, 0x9a, 0x4e, 0x92, 0xde);
EXTERN_GUID(MFT_ENUM_HARDWARE_URL_Attribute,         0x2fb866ac, 0xb078, 0x4942, 0xab, 0x6c, 0x00, 0x3d, 0x05, 0xcd, 0xa6, 0x74);
EXTERN_GUID(MFT_ENUM_HARDWARE_VENDOR_ID_Attribute,   0x3aecb0cc, 0x035b, 0x4bcc, 0x81, 0x85, 0x2b, 0x8d, 0x55, 0x1e, 0xf3, 0xaf);
EXTERN_GUID(MFT_ENUM_TRANSCODE_ONLY_ATTRIBUTE,       0x111ea8cd, 0xb62a, 0x4bdb, 0x89, 0xf6, 0x67, 0xff, 0xcd, 0xc2, 0x45, 0x8b);
EXTERN_GUID(MFT_FIELDOFUSE_UNLOCK_Attribute,         0x8ec2e9fd, 0x9148, 0x410d, 0x83, 0x1e, 0x70, 0x24, 0x39, 0x46, 0x1a, 0x8e);
EXTERN_GUID(MFT_FRIENDLY_NAME_Attribute,             0x314ffbae, 0x5b41, 0x4c95, 0x9c, 0x19, 0x4e, 0x7d, 0x58, 0x6f, 0xac, 0xe3);
EXTERN_GUID(MFT_INPUT_TYPES_Attributes,              0x4276c9b1, 0x759d, 0x4bf3, 0x9c, 0xd0, 0x0d, 0x72, 0x3d, 0x13, 0x8f, 0x96);
EXTERN_GUID(MFT_OUTPUT_TYPES_Attributes,             0x8eae8cf3, 0xa44f, 0x4306, 0xba, 0x5c, 0xbf, 0x5d, 0xda, 0x24, 0x28, 0x18);
EXTERN_GUID(MFT_PREFERRED_ENCODER_PROFILE,           0x53004909, 0x1ef5, 0x46d7, 0xa1, 0x8e, 0x5a, 0x75, 0xf8, 0xb5, 0x90, 0x5f);
EXTERN_GUID(MFT_PREFERRED_OUTPUTTYPE_Attribute,      0x7e700499, 0x396a, 0x49ee, 0xb1, 0xb4, 0xf6, 0x28, 0x02, 0x1e, 0x8c, 0x9d);
EXTERN_GUID(MFT_PROCESS_LOCAL_Attribute,             0x543186e4, 0x4649, 0x4e65, 0xb5, 0x88, 0x4a, 0xa3, 0x52, 0xaf, 0xf3, 0x79);
EXTERN_GUID(MFT_REMUX_MARK_I_PICTURE_AS_CLEAN_POINT, 0x364e8f85, 0x3f2e, 0x436c, 0xb2, 0xa2, 0x44, 0x40, 0xa0, 0x12, 0xa9, 0xe8);
EXTERN_GUID(MFT_SUPPORT_3DVIDEO,                     0x093f81b1, 0x4f2e, 0x4631, 0x81, 0x68, 0x79, 0x34, 0x03, 0x2a, 0x01, 0xd3);
EXTERN_GUID(MFT_TRANSFORM_CLSID_Attribute,           0x6821c42b, 0x65a4, 0x4e82, 0x99, 0xbc, 0x9a, 0x88, 0x20, 0x5e, 0xcd, 0x0c);
DEFINE_PROPERTYKEY(MFPKEY_CLSID,                     0xc57a84c0, 0x1a80, 0x40a3, 0x97, 0xb5, 0x92, 0x72, 0xa4, 0x03, 0xc8, 0xae, 1);
DEFINE_PROPERTYKEY(MFPKEY_CATEGORY,                  0xc57a84c0, 0x1a80, 0x40a3, 0x97, 0xb5, 0x92, 0x72, 0xa4, 0x03, 0xc8, 0xae, 2);
DEFINE_PROPERTYKEY(MFPKEY_EXATTRIBUTE_SUPPORTED,     0x456fe843, 0x3c87, 0x40c0, 0x94, 0x9d, 0x14, 0x09, 0xc9, 0x7d, 0xab, 0x2c, 1);
DEFINE_PROPERTYKEY(MFPKEY_MULTICHANNEL_CHANNEL_MASK, 0x58bdaf8c, 0x3224, 0x4692, 0x86, 0xd0, 0x44, 0xd6, 0x5c, 0x5b, 0xf8, 0x2b, 1);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mftransform_h__ */
