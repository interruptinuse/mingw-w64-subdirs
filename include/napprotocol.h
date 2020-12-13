/*** Autogenerated by WIDL 6.0-rc1 from include/napprotocol.idl - Do not edit ***/

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

#ifndef __napprotocol_h__
#define __napprotocol_h__

/* Forward declarations */

#ifndef __INapSoHConstructor_FWD_DEFINED__
#define __INapSoHConstructor_FWD_DEFINED__
typedef interface INapSoHConstructor INapSoHConstructor;
#ifdef __cplusplus
interface INapSoHConstructor;
#endif /* __cplusplus */
#endif

#ifndef __INapSoHProcessor_FWD_DEFINED__
#define __INapSoHProcessor_FWD_DEFINED__
typedef interface INapSoHProcessor INapSoHProcessor;
#ifdef __cplusplus
interface INapSoHProcessor;
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
/*****************************************************************************
 * INapSoHTypes interface (v0.0)
 */
#ifndef __INapSoHTypes_INTERFACE_DEFINED__
#define __INapSoHTypes_INTERFACE_DEFINED__

extern RPC_IF_HANDLE INapSoHTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE INapSoHTypes_v0_0_s_ifspec;
typedef enum tagSoHAttributeType {
    sohAttributeTypeSystemHealthId = 2,
    sohAttributeTypeIpv4FixupServers = 3,
    sohAttributeTypeComplianceResultCodes = 4,
    sohAttributeTypeTimeOfLastUpdate = 5,
    sohAttributeTypeClientId = 6,
    sohAttributeTypeVendorSpecific = 7,
    sohAttributeTypeHealthClass = 8,
    sohAttributeTypeSoftwareVersion = 9,
    sohAttributeTypeProductName = 10,
    sohAttributeTypeHealthClassStatus = 11,
    sohAttributeTypeSoHGenerationTime = 12,
    sohAttributeTypeErrorCodes = 13,
    sohAttributeTypeFailureCategory = 14,
    sohAttributeTypeIpv6FixupServers = 15,
    sohAttributeTypeExtendedIsolationState = 16
} SoHAttributeType;
typedef enum tagHealthClassValue {
    healthClassFirewall = 0,
    healthClassPatchLevel = 1,
    healthClassAntiVirus = 2,
    healthClassCriticalUpdate = 3,
    healthClassReserved = 128
} HealthClassValue;
typedef union tagSoHAttributeValue {
    SystemHealthEntityId idVal;
    struct tagIpv4Addresses {
        UINT16 count;
        Ipv4Address *addresses;
    } v4AddressesVal;
    struct tagIpv6Addresses {
        UINT16 count;
        Ipv6Address *addresses;
    } v6AddressesVal;
    ResultCodes codesVal;
    FILETIME dateTimeVal;
    struct tagVendorSpecific {
        UINT32 vendorId;
        UINT16 size;
        BYTE *vendorSpecificData;
    } vendorSpecificVal;
    UINT8 uint8Val;
    struct tagOctetString {
        UINT16 size;
        BYTE *data;
    } octetStringVal;
} SoHAttributeValue;

#endif  /* __INapSoHTypes_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapSoHConstructor interface
 */
#ifndef __INapSoHConstructor_INTERFACE_DEFINED__
#define __INapSoHConstructor_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSoHConstructor, 0x35298344, 0x96a6, 0x45e7, 0x9b,0x6b, 0x62,0xec,0xc6,0xe0,0x99,0x20);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("35298344-96a6-45e7-9b6b-62ecc6e09920")
INapSoHConstructor : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        SystemHealthEntityId id,
        WINBOOL isRequest) = 0;

    virtual HRESULT STDMETHODCALLTYPE AppendAttribute(
        SoHAttributeType type,
        const SoHAttributeValue *value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSoH(
        SoH **soh) = 0;

    virtual HRESULT STDMETHODCALLTYPE Validate(
        const SoH *soh,
        WINBOOL isRequest) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSoHConstructor, 0x35298344, 0x96a6, 0x45e7, 0x9b,0x6b, 0x62,0xec,0xc6,0xe0,0x99,0x20)
#endif
#else
typedef struct INapSoHConstructorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSoHConstructor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSoHConstructor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSoHConstructor *This);

    /*** INapSoHConstructor methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INapSoHConstructor *This,
        SystemHealthEntityId id,
        WINBOOL isRequest);

    HRESULT (STDMETHODCALLTYPE *AppendAttribute)(
        INapSoHConstructor *This,
        SoHAttributeType type,
        const SoHAttributeValue *value);

    HRESULT (STDMETHODCALLTYPE *GetSoH)(
        INapSoHConstructor *This,
        SoH **soh);

    HRESULT (STDMETHODCALLTYPE *Validate)(
        INapSoHConstructor *This,
        const SoH *soh,
        WINBOOL isRequest);

    END_INTERFACE
} INapSoHConstructorVtbl;

interface INapSoHConstructor {
    CONST_VTBL INapSoHConstructorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSoHConstructor_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSoHConstructor_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSoHConstructor_Release(This) (This)->lpVtbl->Release(This)
/*** INapSoHConstructor methods ***/
#define INapSoHConstructor_Initialize(This,id,isRequest) (This)->lpVtbl->Initialize(This,id,isRequest)
#define INapSoHConstructor_AppendAttribute(This,type,value) (This)->lpVtbl->AppendAttribute(This,type,value)
#define INapSoHConstructor_GetSoH(This,soh) (This)->lpVtbl->GetSoH(This,soh)
#define INapSoHConstructor_Validate(This,soh,isRequest) (This)->lpVtbl->Validate(This,soh,isRequest)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INapSoHConstructor_QueryInterface(INapSoHConstructor* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INapSoHConstructor_AddRef(INapSoHConstructor* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INapSoHConstructor_Release(INapSoHConstructor* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSoHConstructor methods ***/
static FORCEINLINE HRESULT INapSoHConstructor_Initialize(INapSoHConstructor* This,SystemHealthEntityId id,WINBOOL isRequest) {
    return This->lpVtbl->Initialize(This,id,isRequest);
}
static FORCEINLINE HRESULT INapSoHConstructor_AppendAttribute(INapSoHConstructor* This,SoHAttributeType type,const SoHAttributeValue *value) {
    return This->lpVtbl->AppendAttribute(This,type,value);
}
static FORCEINLINE HRESULT INapSoHConstructor_GetSoH(INapSoHConstructor* This,SoH **soh) {
    return This->lpVtbl->GetSoH(This,soh);
}
static FORCEINLINE HRESULT INapSoHConstructor_Validate(INapSoHConstructor* This,const SoH *soh,WINBOOL isRequest) {
    return This->lpVtbl->Validate(This,soh,isRequest);
}
#endif
#endif

#endif


#endif  /* __INapSoHConstructor_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapSoHProcessor interface
 */
#ifndef __INapSoHProcessor_INTERFACE_DEFINED__
#define __INapSoHProcessor_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSoHProcessor, 0xfb2fa8b0, 0x2cd5, 0x457d, 0xab,0xa8, 0x43,0x76,0xf6,0x3e,0xa1,0xc0);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("fb2fa8b0-2cd5-457d-aba8-4376f63ea1c0")
INapSoHProcessor : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        const SoH *soh,
        WINBOOL isRequest,
        SystemHealthEntityId *id) = 0;

    virtual HRESULT STDMETHODCALLTYPE FindNextAttribute(
        UINT16 fromLocation,
        SoHAttributeType type,
        UINT16 *attributeLocation) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetAttribute(
        UINT16 attributeLocation,
        SoHAttributeType *type,
        SoHAttributeValue **value) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetNumberOfAttributes(
        UINT16 *attributeCount) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSoHProcessor, 0xfb2fa8b0, 0x2cd5, 0x457d, 0xab,0xa8, 0x43,0x76,0xf6,0x3e,0xa1,0xc0)
#endif
#else
typedef struct INapSoHProcessorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSoHProcessor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSoHProcessor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSoHProcessor *This);

    /*** INapSoHProcessor methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INapSoHProcessor *This,
        const SoH *soh,
        WINBOOL isRequest,
        SystemHealthEntityId *id);

    HRESULT (STDMETHODCALLTYPE *FindNextAttribute)(
        INapSoHProcessor *This,
        UINT16 fromLocation,
        SoHAttributeType type,
        UINT16 *attributeLocation);

    HRESULT (STDMETHODCALLTYPE *GetAttribute)(
        INapSoHProcessor *This,
        UINT16 attributeLocation,
        SoHAttributeType *type,
        SoHAttributeValue **value);

    HRESULT (STDMETHODCALLTYPE *GetNumberOfAttributes)(
        INapSoHProcessor *This,
        UINT16 *attributeCount);

    END_INTERFACE
} INapSoHProcessorVtbl;

interface INapSoHProcessor {
    CONST_VTBL INapSoHProcessorVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSoHProcessor_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSoHProcessor_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSoHProcessor_Release(This) (This)->lpVtbl->Release(This)
/*** INapSoHProcessor methods ***/
#define INapSoHProcessor_Initialize(This,soh,isRequest,id) (This)->lpVtbl->Initialize(This,soh,isRequest,id)
#define INapSoHProcessor_FindNextAttribute(This,fromLocation,type,attributeLocation) (This)->lpVtbl->FindNextAttribute(This,fromLocation,type,attributeLocation)
#define INapSoHProcessor_GetAttribute(This,attributeLocation,type,value) (This)->lpVtbl->GetAttribute(This,attributeLocation,type,value)
#define INapSoHProcessor_GetNumberOfAttributes(This,attributeCount) (This)->lpVtbl->GetNumberOfAttributes(This,attributeCount)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT INapSoHProcessor_QueryInterface(INapSoHProcessor* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG INapSoHProcessor_AddRef(INapSoHProcessor* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG INapSoHProcessor_Release(INapSoHProcessor* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSoHProcessor methods ***/
static FORCEINLINE HRESULT INapSoHProcessor_Initialize(INapSoHProcessor* This,const SoH *soh,WINBOOL isRequest,SystemHealthEntityId *id) {
    return This->lpVtbl->Initialize(This,soh,isRequest,id);
}
static FORCEINLINE HRESULT INapSoHProcessor_FindNextAttribute(INapSoHProcessor* This,UINT16 fromLocation,SoHAttributeType type,UINT16 *attributeLocation) {
    return This->lpVtbl->FindNextAttribute(This,fromLocation,type,attributeLocation);
}
static FORCEINLINE HRESULT INapSoHProcessor_GetAttribute(INapSoHProcessor* This,UINT16 attributeLocation,SoHAttributeType *type,SoHAttributeValue **value) {
    return This->lpVtbl->GetAttribute(This,attributeLocation,type,value);
}
static FORCEINLINE HRESULT INapSoHProcessor_GetNumberOfAttributes(INapSoHProcessor* This,UINT16 *attributeCount) {
    return This->lpVtbl->GetNumberOfAttributes(This,attributeCount);
}
#endif
#endif

#endif


#endif  /* __INapSoHProcessor_INTERFACE_DEFINED__ */

EXTERN_C const CLSID CLSID_NapSoHConstructor;
EXTERN_C const CLSID CLSID_NapSoHProcessor;
#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __napprotocol_h__ */
