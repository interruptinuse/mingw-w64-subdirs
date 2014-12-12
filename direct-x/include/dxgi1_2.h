/*** Autogenerated by WIDL 1.6 from direct-x/include/dxgi1_2.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __dxgi1_2_h__
#define __dxgi1_2_h__

/* Forward declarations */

#ifndef __IDXGIDevice2_FWD_DEFINED__
#define __IDXGIDevice2_FWD_DEFINED__
typedef interface IDXGIDevice2 IDXGIDevice2;
#endif

#ifndef __IDXGISwapChain1_FWD_DEFINED__
#define __IDXGISwapChain1_FWD_DEFINED__
typedef interface IDXGISwapChain1 IDXGISwapChain1;
#endif

/* Headers for imported files */

#include <dxgi.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum _DXGI_OFFER_RESOURCE_PRIORITY {
    DXGI_OFFER_RESOURCE_PRIORITY_LOW = 1,
    DXGI_OFFER_RESOURCE_PRIORITY_NORMAL = 2,
    DXGI_OFFER_RESOURCE_PRIORITY_HIGH = 3
} DXGI_OFFER_RESOURCE_PRIORITY;
typedef enum DXGI_ALPHA_MODE {
    DXGI_ALPHA_MODE_UNSPECIFIED = 0,
    DXGI_ALPHA_MODE_PREMULTIPLIED = 1,
    DXGI_ALPHA_MODE_STRAIGHT = 2,
    DXGI_ALPHA_MODE_IGNORE = 3,
    DXGI_ALPHA_MODE_FORCE_DWORD = 0xffffffff
} DXGI_ALPHA_MODE;
/*****************************************************************************
 * IDXGIDevice2 interface
 */
#ifndef __IDXGIDevice2_INTERFACE_DEFINED__
#define __IDXGIDevice2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGIDevice2, 0x05008617, 0xfbfd, 0x4051, 0xa7,0x90, 0x14,0x48,0x84,0xb4,0xf6,0xa9);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("05008617-fbfd-4051-a790-144884b4f6a9")
IDXGIDevice2 : public IDXGIDevice1
{
    virtual HRESULT STDMETHODCALLTYPE OfferResources(
        UINT NumResources,
        IDXGIResource *const *ppResources,
        DXGI_OFFER_RESOURCE_PRIORITY Priority) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReclaimResources(
        UINT NumResources,
        IDXGIResource *const *ppResources,
        WINBOOL *pDiscarded) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnqueueSetEvent(
        HANDLE hEvent) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGIDevice2, 0x05008617, 0xfbfd, 0x4051, 0xa7,0x90, 0x14,0x48,0x84,0xb4,0xf6,0xa9)
#endif
#else
typedef struct IDXGIDevice2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGIDevice2* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGIDevice2* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGIDevice2* This);

    /*** IDXGIObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        IDXGIDevice2* This,
        REFGUID guid,
        UINT data_size,
        const void *data);

    HRESULT (STDMETHODCALLTYPE *SetPrivateDataInterface)(
        IDXGIDevice2* This,
        REFGUID guid,
        const IUnknown *object);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        IDXGIDevice2* This,
        REFGUID guid,
        UINT *data_size,
        void *data);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IDXGIDevice2* This,
        REFIID riid,
        void **parent);

    /*** IDXGIDevice methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAdapter)(
        IDXGIDevice2* This,
        IDXGIAdapter **adapter);

    HRESULT (STDMETHODCALLTYPE *CreateSurface)(
        IDXGIDevice2* This,
        const DXGI_SURFACE_DESC *desc,
        UINT surface_count,
        DXGI_USAGE usage,
        const DXGI_SHARED_RESOURCE *shared_resource,
        IDXGISurface **surface);

    HRESULT (STDMETHODCALLTYPE *QueryResourceResidency)(
        IDXGIDevice2* This,
        IUnknown *const *resources,
        DXGI_RESIDENCY *residency,
        UINT resource_count);

    HRESULT (STDMETHODCALLTYPE *SetGPUThreadPriority)(
        IDXGIDevice2* This,
        INT priority);

    HRESULT (STDMETHODCALLTYPE *GetGPUThreadPriority)(
        IDXGIDevice2* This,
        INT *priority);

    /*** IDXGIDevice1 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetMaximumFrameLatency)(
        IDXGIDevice2* This,
        UINT MaxLatency);

    HRESULT (STDMETHODCALLTYPE *GetMaximumFrameLatency)(
        IDXGIDevice2* This,
        UINT *pMaxLatency);

    /*** IDXGIDevice2 methods ***/
    HRESULT (STDMETHODCALLTYPE *OfferResources)(
        IDXGIDevice2* This,
        UINT NumResources,
        IDXGIResource *const *ppResources,
        DXGI_OFFER_RESOURCE_PRIORITY Priority);

    HRESULT (STDMETHODCALLTYPE *ReclaimResources)(
        IDXGIDevice2* This,
        UINT NumResources,
        IDXGIResource *const *ppResources,
        WINBOOL *pDiscarded);

    HRESULT (STDMETHODCALLTYPE *EnqueueSetEvent)(
        IDXGIDevice2* This,
        HANDLE hEvent);

    END_INTERFACE
} IDXGIDevice2Vtbl;
interface IDXGIDevice2 {
    CONST_VTBL IDXGIDevice2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGIDevice2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXGIDevice2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGIDevice2_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIObject methods ***/
#define IDXGIDevice2_SetPrivateData(This,guid,data_size,data) (This)->lpVtbl->SetPrivateData(This,guid,data_size,data)
#define IDXGIDevice2_SetPrivateDataInterface(This,guid,object) (This)->lpVtbl->SetPrivateDataInterface(This,guid,object)
#define IDXGIDevice2_GetPrivateData(This,guid,data_size,data) (This)->lpVtbl->GetPrivateData(This,guid,data_size,data)
#define IDXGIDevice2_GetParent(This,riid,parent) (This)->lpVtbl->GetParent(This,riid,parent)
/*** IDXGIDevice methods ***/
#define IDXGIDevice2_GetAdapter(This,adapter) (This)->lpVtbl->GetAdapter(This,adapter)
#define IDXGIDevice2_CreateSurface(This,desc,surface_count,usage,shared_resource,surface) (This)->lpVtbl->CreateSurface(This,desc,surface_count,usage,shared_resource,surface)
#define IDXGIDevice2_QueryResourceResidency(This,resources,residency,resource_count) (This)->lpVtbl->QueryResourceResidency(This,resources,residency,resource_count)
#define IDXGIDevice2_SetGPUThreadPriority(This,priority) (This)->lpVtbl->SetGPUThreadPriority(This,priority)
#define IDXGIDevice2_GetGPUThreadPriority(This,priority) (This)->lpVtbl->GetGPUThreadPriority(This,priority)
/*** IDXGIDevice1 methods ***/
#define IDXGIDevice2_SetMaximumFrameLatency(This,MaxLatency) (This)->lpVtbl->SetMaximumFrameLatency(This,MaxLatency)
#define IDXGIDevice2_GetMaximumFrameLatency(This,pMaxLatency) (This)->lpVtbl->GetMaximumFrameLatency(This,pMaxLatency)
/*** IDXGIDevice2 methods ***/
#define IDXGIDevice2_OfferResources(This,NumResources,ppResources,Priority) (This)->lpVtbl->OfferResources(This,NumResources,ppResources,Priority)
#define IDXGIDevice2_ReclaimResources(This,NumResources,ppResources,pDiscarded) (This)->lpVtbl->ReclaimResources(This,NumResources,ppResources,pDiscarded)
#define IDXGIDevice2_EnqueueSetEvent(This,hEvent) (This)->lpVtbl->EnqueueSetEvent(This,hEvent)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGIDevice2_QueryInterface(IDXGIDevice2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDXGIDevice2_AddRef(IDXGIDevice2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGIDevice2_Release(IDXGIDevice2* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIObject methods ***/
static FORCEINLINE HRESULT IDXGIDevice2_SetPrivateData(IDXGIDevice2* This,REFGUID guid,UINT data_size,const void *data) {
    return This->lpVtbl->SetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGIDevice2_SetPrivateDataInterface(IDXGIDevice2* This,REFGUID guid,const IUnknown *object) {
    return This->lpVtbl->SetPrivateDataInterface(This,guid,object);
}
static FORCEINLINE HRESULT IDXGIDevice2_GetPrivateData(IDXGIDevice2* This,REFGUID guid,UINT *data_size,void *data) {
    return This->lpVtbl->GetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGIDevice2_GetParent(IDXGIDevice2* This,REFIID riid,void **parent) {
    return This->lpVtbl->GetParent(This,riid,parent);
}
/*** IDXGIDevice methods ***/
static FORCEINLINE HRESULT IDXGIDevice2_GetAdapter(IDXGIDevice2* This,IDXGIAdapter **adapter) {
    return This->lpVtbl->GetAdapter(This,adapter);
}
static FORCEINLINE HRESULT IDXGIDevice2_CreateSurface(IDXGIDevice2* This,const DXGI_SURFACE_DESC *desc,UINT surface_count,DXGI_USAGE usage,const DXGI_SHARED_RESOURCE *shared_resource,IDXGISurface **surface) {
    return This->lpVtbl->CreateSurface(This,desc,surface_count,usage,shared_resource,surface);
}
static FORCEINLINE HRESULT IDXGIDevice2_QueryResourceResidency(IDXGIDevice2* This,IUnknown *const *resources,DXGI_RESIDENCY *residency,UINT resource_count) {
    return This->lpVtbl->QueryResourceResidency(This,resources,residency,resource_count);
}
static FORCEINLINE HRESULT IDXGIDevice2_SetGPUThreadPriority(IDXGIDevice2* This,INT priority) {
    return This->lpVtbl->SetGPUThreadPriority(This,priority);
}
static FORCEINLINE HRESULT IDXGIDevice2_GetGPUThreadPriority(IDXGIDevice2* This,INT *priority) {
    return This->lpVtbl->GetGPUThreadPriority(This,priority);
}
/*** IDXGIDevice1 methods ***/
static FORCEINLINE HRESULT IDXGIDevice2_SetMaximumFrameLatency(IDXGIDevice2* This,UINT MaxLatency) {
    return This->lpVtbl->SetMaximumFrameLatency(This,MaxLatency);
}
static FORCEINLINE HRESULT IDXGIDevice2_GetMaximumFrameLatency(IDXGIDevice2* This,UINT *pMaxLatency) {
    return This->lpVtbl->GetMaximumFrameLatency(This,pMaxLatency);
}
/*** IDXGIDevice2 methods ***/
static FORCEINLINE HRESULT IDXGIDevice2_OfferResources(IDXGIDevice2* This,UINT NumResources,IDXGIResource *const *ppResources,DXGI_OFFER_RESOURCE_PRIORITY Priority) {
    return This->lpVtbl->OfferResources(This,NumResources,ppResources,Priority);
}
static FORCEINLINE HRESULT IDXGIDevice2_ReclaimResources(IDXGIDevice2* This,UINT NumResources,IDXGIResource *const *ppResources,WINBOOL *pDiscarded) {
    return This->lpVtbl->ReclaimResources(This,NumResources,ppResources,pDiscarded);
}
static FORCEINLINE HRESULT IDXGIDevice2_EnqueueSetEvent(IDXGIDevice2* This,HANDLE hEvent) {
    return This->lpVtbl->EnqueueSetEvent(This,hEvent);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IDXGIDevice2_OfferResources_Proxy(
    IDXGIDevice2* This,
    UINT NumResources,
    IDXGIResource *const *ppResources,
    DXGI_OFFER_RESOURCE_PRIORITY Priority);
void __RPC_STUB IDXGIDevice2_OfferResources_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGIDevice2_ReclaimResources_Proxy(
    IDXGIDevice2* This,
    UINT NumResources,
    IDXGIResource *const *ppResources,
    WINBOOL *pDiscarded);
void __RPC_STUB IDXGIDevice2_ReclaimResources_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGIDevice2_EnqueueSetEvent_Proxy(
    IDXGIDevice2* This,
    HANDLE hEvent);
void __RPC_STUB IDXGIDevice2_EnqueueSetEvent_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDXGIDevice2_INTERFACE_DEFINED__ */

typedef enum DXGI_SCALING {
    DXGI_SCALING_STRETCH = 0,
    DXGI_SCALING_NONE = 1
} DXGI_SCALING;
typedef struct DXGI_SWAP_CHAIN_DESC1 {
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format;
    WINBOOL Stereo;
    DXGI_SAMPLE_DESC SampleDesc;
    DXGI_USAGE BufferUsage;
    UINT BufferCount;
    DXGI_SCALING Scaling;
    DXGI_SWAP_EFFECT SwapEffect;
    DXGI_ALPHA_MODE AlphaMode;
    UINT Flags;
} DXGI_SWAP_CHAIN_DESC1;
typedef struct DXGI_SWAP_CHAIN_FULLSCREEN_DESC {
    DXGI_RATIONAL RefreshRate;
    DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
    DXGI_MODE_SCALING Scaling;
    WINBOOL Windowed;
} DXGI_SWAP_CHAIN_FULLSCREEN_DESC;
typedef struct DXGI_PRESENT_PARAMETERS {
    UINT DirtyRectsCount;
    RECT *pDirtyRects;
    RECT *pScrollRect;
    POINT *pScrollOffset;
} DXGI_PRESENT_PARAMETERS;
/*****************************************************************************
 * IDXGISwapChain1 interface
 */
#ifndef __IDXGISwapChain1_INTERFACE_DEFINED__
#define __IDXGISwapChain1_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGISwapChain1, 0x790a45f7, 0x0d42, 0x4876, 0x98,0x3a, 0x0a,0x55,0xcf,0xe6,0xf4,0xaa);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("790a45f7-0d42-4876-983a-0a55cfe6f4aa")
IDXGISwapChain1 : public IDXGISwapChain
{
    virtual HRESULT STDMETHODCALLTYPE GetDesc1(
        DXGI_SWAP_CHAIN_DESC1 *pDesc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFullscreenDesc(
        DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetHwnd(
        HWND *pHwnd) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCoreWindow(
        REFIID refiid,
        void **ppUnk) = 0;

    virtual HRESULT STDMETHODCALLTYPE Present1(
        UINT SyncInterval,
        UINT PresentFlags,
        const DXGI_PRESENT_PARAMETERS *pPresentParameters) = 0;

    virtual WINBOOL STDMETHODCALLTYPE IsTemporaryMonoSupported(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRestrictToOutput(
        IDXGIOutput **ppRestrictToOutput) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBackgroundColor(
        const DXGI_RGBA *pColor) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBackgroundColor(
        DXGI_RGBA *pColor) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetRotation(
        DXGI_MODE_ROTATION Rotation) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRotation(
        DXGI_MODE_ROTATION *pRotation) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGISwapChain1, 0x790a45f7, 0x0d42, 0x4876, 0x98,0x3a, 0x0a,0x55,0xcf,0xe6,0xf4,0xaa)
#endif
#else
typedef struct IDXGISwapChain1Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGISwapChain1* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGISwapChain1* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGISwapChain1* This);

    /*** IDXGIObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        IDXGISwapChain1* This,
        REFGUID guid,
        UINT data_size,
        const void *data);

    HRESULT (STDMETHODCALLTYPE *SetPrivateDataInterface)(
        IDXGISwapChain1* This,
        REFGUID guid,
        const IUnknown *object);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        IDXGISwapChain1* This,
        REFGUID guid,
        UINT *data_size,
        void *data);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IDXGISwapChain1* This,
        REFIID riid,
        void **parent);

    /*** IDXGIDeviceSubObject methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDevice)(
        IDXGISwapChain1* This,
        REFIID riid,
        void **device);

    /*** IDXGISwapChain methods ***/
    HRESULT (STDMETHODCALLTYPE *Present)(
        IDXGISwapChain1* This,
        UINT sync_interval,
        UINT flags);

    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        IDXGISwapChain1* This,
        UINT buffer_idx,
        REFIID riid,
        void **surface);

    HRESULT (STDMETHODCALLTYPE *SetFullscreenState)(
        IDXGISwapChain1* This,
        WINBOOL fullscreen,
        IDXGIOutput *target);

    HRESULT (STDMETHODCALLTYPE *GetFullscreenState)(
        IDXGISwapChain1* This,
        WINBOOL *fullscreen,
        IDXGIOutput **target);

    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        IDXGISwapChain1* This,
        DXGI_SWAP_CHAIN_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *ResizeBuffers)(
        IDXGISwapChain1* This,
        UINT buffer_count,
        UINT width,
        UINT height,
        DXGI_FORMAT format,
        UINT flags);

    HRESULT (STDMETHODCALLTYPE *ResizeTarget)(
        IDXGISwapChain1* This,
        const DXGI_MODE_DESC *target_mode_desc);

    HRESULT (STDMETHODCALLTYPE *GetContainingOutput)(
        IDXGISwapChain1* This,
        IDXGIOutput **output);

    HRESULT (STDMETHODCALLTYPE *GetFrameStatistics)(
        IDXGISwapChain1* This,
        DXGI_FRAME_STATISTICS *stats);

    HRESULT (STDMETHODCALLTYPE *GetLastPresentCount)(
        IDXGISwapChain1* This,
        UINT *last_present_count);

    /*** IDXGISwapChain1 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc1)(
        IDXGISwapChain1* This,
        DXGI_SWAP_CHAIN_DESC1 *pDesc);

    HRESULT (STDMETHODCALLTYPE *GetFullscreenDesc)(
        IDXGISwapChain1* This,
        DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc);

    HRESULT (STDMETHODCALLTYPE *GetHwnd)(
        IDXGISwapChain1* This,
        HWND *pHwnd);

    HRESULT (STDMETHODCALLTYPE *GetCoreWindow)(
        IDXGISwapChain1* This,
        REFIID refiid,
        void **ppUnk);

    HRESULT (STDMETHODCALLTYPE *Present1)(
        IDXGISwapChain1* This,
        UINT SyncInterval,
        UINT PresentFlags,
        const DXGI_PRESENT_PARAMETERS *pPresentParameters);

    WINBOOL (STDMETHODCALLTYPE *IsTemporaryMonoSupported)(
        IDXGISwapChain1* This);

    HRESULT (STDMETHODCALLTYPE *GetRestrictToOutput)(
        IDXGISwapChain1* This,
        IDXGIOutput **ppRestrictToOutput);

    HRESULT (STDMETHODCALLTYPE *SetBackgroundColor)(
        IDXGISwapChain1* This,
        const DXGI_RGBA *pColor);

    HRESULT (STDMETHODCALLTYPE *GetBackgroundColor)(
        IDXGISwapChain1* This,
        DXGI_RGBA *pColor);

    HRESULT (STDMETHODCALLTYPE *SetRotation)(
        IDXGISwapChain1* This,
        DXGI_MODE_ROTATION Rotation);

    HRESULT (STDMETHODCALLTYPE *GetRotation)(
        IDXGISwapChain1* This,
        DXGI_MODE_ROTATION *pRotation);

    END_INTERFACE
} IDXGISwapChain1Vtbl;
interface IDXGISwapChain1 {
    CONST_VTBL IDXGISwapChain1Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGISwapChain1_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDXGISwapChain1_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGISwapChain1_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIObject methods ***/
#define IDXGISwapChain1_SetPrivateData(This,guid,data_size,data) (This)->lpVtbl->SetPrivateData(This,guid,data_size,data)
#define IDXGISwapChain1_SetPrivateDataInterface(This,guid,object) (This)->lpVtbl->SetPrivateDataInterface(This,guid,object)
#define IDXGISwapChain1_GetPrivateData(This,guid,data_size,data) (This)->lpVtbl->GetPrivateData(This,guid,data_size,data)
#define IDXGISwapChain1_GetParent(This,riid,parent) (This)->lpVtbl->GetParent(This,riid,parent)
/*** IDXGIDeviceSubObject methods ***/
#define IDXGISwapChain1_GetDevice(This,riid,device) (This)->lpVtbl->GetDevice(This,riid,device)
/*** IDXGISwapChain methods ***/
#define IDXGISwapChain1_Present(This,sync_interval,flags) (This)->lpVtbl->Present(This,sync_interval,flags)
#define IDXGISwapChain1_GetBuffer(This,buffer_idx,riid,surface) (This)->lpVtbl->GetBuffer(This,buffer_idx,riid,surface)
#define IDXGISwapChain1_SetFullscreenState(This,fullscreen,target) (This)->lpVtbl->SetFullscreenState(This,fullscreen,target)
#define IDXGISwapChain1_GetFullscreenState(This,fullscreen,target) (This)->lpVtbl->GetFullscreenState(This,fullscreen,target)
#define IDXGISwapChain1_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define IDXGISwapChain1_ResizeBuffers(This,buffer_count,width,height,format,flags) (This)->lpVtbl->ResizeBuffers(This,buffer_count,width,height,format,flags)
#define IDXGISwapChain1_ResizeTarget(This,target_mode_desc) (This)->lpVtbl->ResizeTarget(This,target_mode_desc)
#define IDXGISwapChain1_GetContainingOutput(This,output) (This)->lpVtbl->GetContainingOutput(This,output)
#define IDXGISwapChain1_GetFrameStatistics(This,stats) (This)->lpVtbl->GetFrameStatistics(This,stats)
#define IDXGISwapChain1_GetLastPresentCount(This,last_present_count) (This)->lpVtbl->GetLastPresentCount(This,last_present_count)
/*** IDXGISwapChain1 methods ***/
#define IDXGISwapChain1_GetDesc1(This,pDesc) (This)->lpVtbl->GetDesc1(This,pDesc)
#define IDXGISwapChain1_GetFullscreenDesc(This,pDesc) (This)->lpVtbl->GetFullscreenDesc(This,pDesc)
#define IDXGISwapChain1_GetHwnd(This,pHwnd) (This)->lpVtbl->GetHwnd(This,pHwnd)
#define IDXGISwapChain1_GetCoreWindow(This,refiid,ppUnk) (This)->lpVtbl->GetCoreWindow(This,refiid,ppUnk)
#define IDXGISwapChain1_Present1(This,SyncInterval,PresentFlags,pPresentParameters) (This)->lpVtbl->Present1(This,SyncInterval,PresentFlags,pPresentParameters)
#define IDXGISwapChain1_IsTemporaryMonoSupported(This) (This)->lpVtbl->IsTemporaryMonoSupported(This)
#define IDXGISwapChain1_GetRestrictToOutput(This,ppRestrictToOutput) (This)->lpVtbl->GetRestrictToOutput(This,ppRestrictToOutput)
#define IDXGISwapChain1_SetBackgroundColor(This,pColor) (This)->lpVtbl->SetBackgroundColor(This,pColor)
#define IDXGISwapChain1_GetBackgroundColor(This,pColor) (This)->lpVtbl->GetBackgroundColor(This,pColor)
#define IDXGISwapChain1_SetRotation(This,Rotation) (This)->lpVtbl->SetRotation(This,Rotation)
#define IDXGISwapChain1_GetRotation(This,pRotation) (This)->lpVtbl->GetRotation(This,pRotation)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGISwapChain1_QueryInterface(IDXGISwapChain1* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IDXGISwapChain1_AddRef(IDXGISwapChain1* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGISwapChain1_Release(IDXGISwapChain1* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIObject methods ***/
static FORCEINLINE HRESULT IDXGISwapChain1_SetPrivateData(IDXGISwapChain1* This,REFGUID guid,UINT data_size,const void *data) {
    return This->lpVtbl->SetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGISwapChain1_SetPrivateDataInterface(IDXGISwapChain1* This,REFGUID guid,const IUnknown *object) {
    return This->lpVtbl->SetPrivateDataInterface(This,guid,object);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetPrivateData(IDXGISwapChain1* This,REFGUID guid,UINT *data_size,void *data) {
    return This->lpVtbl->GetPrivateData(This,guid,data_size,data);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetParent(IDXGISwapChain1* This,REFIID riid,void **parent) {
    return This->lpVtbl->GetParent(This,riid,parent);
}
/*** IDXGIDeviceSubObject methods ***/
static FORCEINLINE HRESULT IDXGISwapChain1_GetDevice(IDXGISwapChain1* This,REFIID riid,void **device) {
    return This->lpVtbl->GetDevice(This,riid,device);
}
/*** IDXGISwapChain methods ***/
static FORCEINLINE HRESULT IDXGISwapChain1_Present(IDXGISwapChain1* This,UINT sync_interval,UINT flags) {
    return This->lpVtbl->Present(This,sync_interval,flags);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetBuffer(IDXGISwapChain1* This,UINT buffer_idx,REFIID riid,void **surface) {
    return This->lpVtbl->GetBuffer(This,buffer_idx,riid,surface);
}
static FORCEINLINE HRESULT IDXGISwapChain1_SetFullscreenState(IDXGISwapChain1* This,WINBOOL fullscreen,IDXGIOutput *target) {
    return This->lpVtbl->SetFullscreenState(This,fullscreen,target);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetFullscreenState(IDXGISwapChain1* This,WINBOOL *fullscreen,IDXGIOutput **target) {
    return This->lpVtbl->GetFullscreenState(This,fullscreen,target);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetDesc(IDXGISwapChain1* This,DXGI_SWAP_CHAIN_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static FORCEINLINE HRESULT IDXGISwapChain1_ResizeBuffers(IDXGISwapChain1* This,UINT buffer_count,UINT width,UINT height,DXGI_FORMAT format,UINT flags) {
    return This->lpVtbl->ResizeBuffers(This,buffer_count,width,height,format,flags);
}
static FORCEINLINE HRESULT IDXGISwapChain1_ResizeTarget(IDXGISwapChain1* This,const DXGI_MODE_DESC *target_mode_desc) {
    return This->lpVtbl->ResizeTarget(This,target_mode_desc);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetContainingOutput(IDXGISwapChain1* This,IDXGIOutput **output) {
    return This->lpVtbl->GetContainingOutput(This,output);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetFrameStatistics(IDXGISwapChain1* This,DXGI_FRAME_STATISTICS *stats) {
    return This->lpVtbl->GetFrameStatistics(This,stats);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetLastPresentCount(IDXGISwapChain1* This,UINT *last_present_count) {
    return This->lpVtbl->GetLastPresentCount(This,last_present_count);
}
/*** IDXGISwapChain1 methods ***/
static FORCEINLINE HRESULT IDXGISwapChain1_GetDesc1(IDXGISwapChain1* This,DXGI_SWAP_CHAIN_DESC1 *pDesc) {
    return This->lpVtbl->GetDesc1(This,pDesc);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetFullscreenDesc(IDXGISwapChain1* This,DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc) {
    return This->lpVtbl->GetFullscreenDesc(This,pDesc);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetHwnd(IDXGISwapChain1* This,HWND *pHwnd) {
    return This->lpVtbl->GetHwnd(This,pHwnd);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetCoreWindow(IDXGISwapChain1* This,REFIID refiid,void **ppUnk) {
    return This->lpVtbl->GetCoreWindow(This,refiid,ppUnk);
}
static FORCEINLINE HRESULT IDXGISwapChain1_Present1(IDXGISwapChain1* This,UINT SyncInterval,UINT PresentFlags,const DXGI_PRESENT_PARAMETERS *pPresentParameters) {
    return This->lpVtbl->Present1(This,SyncInterval,PresentFlags,pPresentParameters);
}
static FORCEINLINE WINBOOL IDXGISwapChain1_IsTemporaryMonoSupported(IDXGISwapChain1* This) {
    return This->lpVtbl->IsTemporaryMonoSupported(This);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetRestrictToOutput(IDXGISwapChain1* This,IDXGIOutput **ppRestrictToOutput) {
    return This->lpVtbl->GetRestrictToOutput(This,ppRestrictToOutput);
}
static FORCEINLINE HRESULT IDXGISwapChain1_SetBackgroundColor(IDXGISwapChain1* This,const DXGI_RGBA *pColor) {
    return This->lpVtbl->SetBackgroundColor(This,pColor);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetBackgroundColor(IDXGISwapChain1* This,DXGI_RGBA *pColor) {
    return This->lpVtbl->GetBackgroundColor(This,pColor);
}
static FORCEINLINE HRESULT IDXGISwapChain1_SetRotation(IDXGISwapChain1* This,DXGI_MODE_ROTATION Rotation) {
    return This->lpVtbl->SetRotation(This,Rotation);
}
static FORCEINLINE HRESULT IDXGISwapChain1_GetRotation(IDXGISwapChain1* This,DXGI_MODE_ROTATION *pRotation) {
    return This->lpVtbl->GetRotation(This,pRotation);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IDXGISwapChain1_GetDesc1_Proxy(
    IDXGISwapChain1* This,
    DXGI_SWAP_CHAIN_DESC1 *pDesc);
void __RPC_STUB IDXGISwapChain1_GetDesc1_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_GetFullscreenDesc_Proxy(
    IDXGISwapChain1* This,
    DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc);
void __RPC_STUB IDXGISwapChain1_GetFullscreenDesc_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_GetHwnd_Proxy(
    IDXGISwapChain1* This,
    HWND *pHwnd);
void __RPC_STUB IDXGISwapChain1_GetHwnd_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_GetCoreWindow_Proxy(
    IDXGISwapChain1* This,
    REFIID refiid,
    void **ppUnk);
void __RPC_STUB IDXGISwapChain1_GetCoreWindow_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_Present1_Proxy(
    IDXGISwapChain1* This,
    UINT SyncInterval,
    UINT PresentFlags,
    const DXGI_PRESENT_PARAMETERS *pPresentParameters);
void __RPC_STUB IDXGISwapChain1_Present1_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
WINBOOL STDMETHODCALLTYPE IDXGISwapChain1_IsTemporaryMonoSupported_Proxy(
    IDXGISwapChain1* This);
void __RPC_STUB IDXGISwapChain1_IsTemporaryMonoSupported_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_GetRestrictToOutput_Proxy(
    IDXGISwapChain1* This,
    IDXGIOutput **ppRestrictToOutput);
void __RPC_STUB IDXGISwapChain1_GetRestrictToOutput_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_SetBackgroundColor_Proxy(
    IDXGISwapChain1* This,
    const DXGI_RGBA *pColor);
void __RPC_STUB IDXGISwapChain1_SetBackgroundColor_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_GetBackgroundColor_Proxy(
    IDXGISwapChain1* This,
    DXGI_RGBA *pColor);
void __RPC_STUB IDXGISwapChain1_GetBackgroundColor_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_SetRotation_Proxy(
    IDXGISwapChain1* This,
    DXGI_MODE_ROTATION Rotation);
void __RPC_STUB IDXGISwapChain1_SetRotation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);
HRESULT STDMETHODCALLTYPE IDXGISwapChain1_GetRotation_Proxy(
    IDXGISwapChain1* This,
    DXGI_MODE_ROTATION *pRotation);
void __RPC_STUB IDXGISwapChain1_GetRotation_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IDXGISwapChain1_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __dxgi1_2_h__ */
