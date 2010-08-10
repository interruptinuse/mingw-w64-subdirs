/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef __AUTHZ_H__
#define __AUTHZ_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _AUTHZ_
#define AUTHZAPI DECLSPEC_IMPORT
#else
#define AUTHZAPI
#endif

#include <windows.h>
#include <adtgen.h>

#define AUTHZ_SKIP_TOKEN_GROUPS 0x2
#define AUTHZ_REQUIRE_S4U_LOGON 0x4

  DECLARE_HANDLE(AUTHZ_ACCESS_CHECK_RESULTS_HANDLE);
  DECLARE_HANDLE(AUTHZ_CLIENT_CONTEXT_HANDLE);
  DECLARE_HANDLE(AUTHZ_RESOURCE_MANAGER_HANDLE);
  DECLARE_HANDLE(AUTHZ_AUDIT_EVENT_HANDLE);
  DECLARE_HANDLE(AUTHZ_AUDIT_EVENT_TYPE_HANDLE);
  DECLARE_HANDLE(AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE);

  typedef AUTHZ_ACCESS_CHECK_RESULTS_HANDLE *PAUTHZ_ACCESS_CHECK_RESULTS_HANDLE;
  typedef AUTHZ_CLIENT_CONTEXT_HANDLE *PAUTHZ_CLIENT_CONTEXT_HANDLE;
  typedef AUTHZ_RESOURCE_MANAGER_HANDLE *PAUTHZ_RESOURCE_MANAGER_HANDLE;
  typedef AUTHZ_AUDIT_EVENT_HANDLE *PAUTHZ_AUDIT_EVENT_HANDLE;
  typedef AUTHZ_AUDIT_EVENT_TYPE_HANDLE *PAUTHZ_AUDIT_EVENT_TYPE_HANDLE;
  typedef AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE *PAUTHZ_SECURITY_EVENT_PROVIDER_HANDLE;

  typedef struct _AUTHZ_ACCESS_REQUEST {
    ACCESS_MASK DesiredAccess;
    PSID PrincipalSelfSid;
    POBJECT_TYPE_LIST ObjectTypeList;
    DWORD ObjectTypeListLength;
    PVOID OptionalArguments;
  } AUTHZ_ACCESS_REQUEST,*PAUTHZ_ACCESS_REQUEST;

#define AUTHZ_GENERATE_SUCCESS_AUDIT 0x1
#define AUTHZ_GENERATE_FAILURE_AUDIT 0x2

  typedef struct _AUTHZ_ACCESS_REPLY {
    DWORD ResultListLength;
    PACCESS_MASK GrantedAccessMask;
    PDWORD SaclEvaluationResults;
    PDWORD Error;
  } AUTHZ_ACCESS_REPLY,*PAUTHZ_ACCESS_REPLY;

  typedef WINBOOL (CALLBACK *PFN_AUTHZ_DYNAMIC_ACCESS_CHECK)(AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,PACE_HEADER pAce,PVOID pArgs,PBOOL pbAceApplicable);
  typedef WINBOOL (CALLBACK *PFN_AUTHZ_COMPUTE_DYNAMIC_GROUPS)(AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,PVOID Args,PSID_AND_ATTRIBUTES *pSidAttrArray,PDWORD pSidCount,PSID_AND_ATTRIBUTES *pRestrictedSidAttrArray,PDWORD pRestrictedSidCount);
  typedef VOID (CALLBACK *PFN_AUTHZ_FREE_DYNAMIC_GROUPS)(PSID_AND_ATTRIBUTES pSidAttrArray);

  typedef enum _AUTHZ_CONTEXT_INFORMATION_CLASS {
    AuthzContextInfoUserSid = 1,AuthzContextInfoGroupsSids,AuthzContextInfoRestrictedSids,AuthzContextInfoPrivileges,AuthzContextInfoExpirationTime,
    AuthzContextInfoServerContext,AuthzContextInfoIdentifier,AuthzContextInfoSource,AuthzContextInfoAll,AuthzContextInfoAuthenticationId
  } AUTHZ_CONTEXT_INFORMATION_CLASS;

  typedef enum _AUTHZ_AUDIT_EVENT_INFORMATION_CLASS {
    AuthzAuditEventInfoFlags = 1,AuthzAuditEventInfoOperationType,AuthzAuditEventInfoObjectType,AuthzAuditEventInfoObjectName,
    AuthzAuditEventInfoAdditionalInfo,
  } AUTHZ_AUDIT_EVENT_INFORMATION_CLASS;

#define AUTHZ_ACCESS_CHECK_NO_DEEP_COPY_SD 0x00000001

#define AUTHZ_RM_FLAG_NO_AUDIT 0x1
#define AUTHZ_RM_FLAG_INITIALIZE_UNDER_IMPERSONATION 0x2
#define AUTHZ_VALID_RM_INIT_FLAGS (AUTHZ_RM_FLAG_NO_AUDIT | AUTHZ_RM_FLAG_INITIALIZE_UNDER_IMPERSONATION)

#define AUTHZ_NO_SUCCESS_AUDIT 0x00000001
#define AUTHZ_NO_FAILURE_AUDIT 0x00000002
#define AUTHZ_NO_ALLOC_STRINGS 0x00000004
#define AUTHZ_VALID_OBJECT_ACCESS_AUDIT_FLAGS (AUTHZ_NO_SUCCESS_AUDIT | AUTHZ_NO_FAILURE_AUDIT | AUTHZ_NO_ALLOC_STRINGS)

  AUTHZAPI WINBOOL WINAPI AuthzAccessCheck(DWORD Flags,AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,PAUTHZ_ACCESS_REQUEST pRequest,AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent,PSECURITY_DESCRIPTOR pSecurityDescriptor,PSECURITY_DESCRIPTOR *OptionalSecurityDescriptorArray,DWORD OptionalSecurityDescriptorCount,PAUTHZ_ACCESS_REPLY pReply,PAUTHZ_ACCESS_CHECK_RESULTS_HANDLE phAccessCheckResults);
  AUTHZAPI WINBOOL WINAPI AuthzCachedAccessCheck(DWORD Flags,AUTHZ_ACCESS_CHECK_RESULTS_HANDLE hAccessCheckResults,PAUTHZ_ACCESS_REQUEST pRequest,AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent,PAUTHZ_ACCESS_REPLY pReply);
  AUTHZAPI WINBOOL WINAPI AuthzOpenObjectAudit(DWORD Flags,AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,PAUTHZ_ACCESS_REQUEST pRequest,AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent,PSECURITY_DESCRIPTOR pSecurityDescriptor,PSECURITY_DESCRIPTOR *OptionalSecurityDescriptorArray,DWORD OptionalSecurityDescriptorCount,PAUTHZ_ACCESS_REPLY pReply);
  AUTHZAPI WINBOOL WINAPI AuthzFreeHandle(AUTHZ_ACCESS_CHECK_RESULTS_HANDLE hAccessCheckResults);
  AUTHZAPI WINBOOL WINAPI AuthzInitializeResourceManager(DWORD Flags,PFN_AUTHZ_DYNAMIC_ACCESS_CHECK pfnDynamicAccessCheck,PFN_AUTHZ_COMPUTE_DYNAMIC_GROUPS pfnComputeDynamicGroups,PFN_AUTHZ_FREE_DYNAMIC_GROUPS pfnFreeDynamicGroups,PCWSTR szResourceManagerName,PAUTHZ_RESOURCE_MANAGER_HANDLE phAuthzResourceManager);
  AUTHZAPI WINBOOL WINAPI AuthzFreeResourceManager(AUTHZ_RESOURCE_MANAGER_HANDLE hAuthzResourceManager);
  AUTHZAPI WINBOOL WINAPI AuthzInitializeContextFromToken(DWORD Flags,HANDLE TokenHandle,AUTHZ_RESOURCE_MANAGER_HANDLE hAuthzResourceManager,PLARGE_INTEGER pExpirationTime,LUID Identifier,PVOID DynamicGroupArgs,PAUTHZ_CLIENT_CONTEXT_HANDLE phAuthzClientContext);
  AUTHZAPI WINBOOL WINAPI AuthzInitializeContextFromSid(DWORD Flags,PSID UserSid,AUTHZ_RESOURCE_MANAGER_HANDLE hAuthzResourceManager,PLARGE_INTEGER pExpirationTime,LUID Identifier,PVOID DynamicGroupArgs,PAUTHZ_CLIENT_CONTEXT_HANDLE phAuthzClientContext);
  AUTHZAPI WINBOOL WINAPI AuthzInitializeContextFromAuthzContext(DWORD Flags,AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,PLARGE_INTEGER pExpirationTime,LUID Identifier,PVOID DynamicGroupArgs,PAUTHZ_CLIENT_CONTEXT_HANDLE phNewAuthzClientContext);
  AUTHZAPI WINBOOL WINAPI AuthzAddSidsToContext(AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,PSID_AND_ATTRIBUTES Sids,DWORD SidCount,PSID_AND_ATTRIBUTES RestrictedSids,DWORD RestrictedSidCount,PAUTHZ_CLIENT_CONTEXT_HANDLE phNewAuthzClientContext);
  AUTHZAPI WINBOOL WINAPI AuthzGetInformationFromContext(AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,AUTHZ_CONTEXT_INFORMATION_CLASS InfoClass,DWORD BufferSize,PDWORD pSizeRequired,PVOID Buffer);
  AUTHZAPI WINBOOL WINAPI AuthzFreeContext(AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext);
  AUTHZAPI WINBOOL WINAPI AuthzInitializeObjectAccessAuditEvent(DWORD Flags,AUTHZ_AUDIT_EVENT_TYPE_HANDLE hAuditEventType,PWSTR szOperationType,PWSTR szObjectType,PWSTR szObjectName,PWSTR szAdditionalInfo,PAUTHZ_AUDIT_EVENT_HANDLE phAuditEvent,DWORD dwAdditionalParameterCount,...);
  AUTHZAPI WINBOOL WINAPI AuthzInitializeObjectAccessAuditEvent2(DWORD Flags,AUTHZ_AUDIT_EVENT_TYPE_HANDLE hAuditEventType,PWSTR szOperationType,PWSTR szObjectType,PWSTR szObjectName,PWSTR szAdditionalInfo,PWSTR szAdditionalInfo2,PAUTHZ_AUDIT_EVENT_HANDLE phAuditEvent,DWORD dwAdditionalParameterCount,...);
  AUTHZAPI WINBOOL WINAPI AuthzGetInformationFromAuditEvent(AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent,AUTHZ_AUDIT_EVENT_INFORMATION_CLASS InfoClass,DWORD BufferSize,PDWORD pSizeRequired,PVOID Buffer);
  AUTHZAPI WINBOOL WINAPI AuthzFreeAuditEvent(AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent);

  typedef struct _AUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET {
    PWSTR szObjectTypeName;
    DWORD dwOffset;
  } AUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET,*PAUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET;

  typedef struct _AUTHZ_SOURCE_SCHEMA_REGISTRATION {
    DWORD dwFlags;
    PWSTR szEventSourceName;
    PWSTR szEventMessageFile;
    PWSTR szEventSourceXmlSchemaFile;
    PWSTR szEventAccessStringsFile;
    PWSTR szExecutableImagePath;
    PVOID pReserved;
    DWORD dwObjectTypeNameCount;
    AUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET ObjectTypeNames[ANYSIZE_ARRAY];
  } AUTHZ_SOURCE_SCHEMA_REGISTRATION,*PAUTHZ_SOURCE_SCHEMA_REGISTRATION;

#define AUTHZ_FLAG_ALLOW_MULTIPLE_SOURCE_INSTANCES 0x1

  AUTHZAPI WINBOOL WINAPI AuthzInstallSecurityEventSource(DWORD dwFlags,PAUTHZ_SOURCE_SCHEMA_REGISTRATION pRegistration);
  AUTHZAPI WINBOOL WINAPI AuthzUninstallSecurityEventSource(DWORD dwFlags,PCWSTR szEventSourceName);
  AUTHZAPI WINBOOL WINAPI AuthzEnumerateSecurityEventSources(DWORD dwFlags,PAUTHZ_SOURCE_SCHEMA_REGISTRATION Buffer,PDWORD pdwCount,PDWORD pdwLength);
  AUTHZAPI WINBOOL WINAPI AuthzRegisterSecurityEventSource(DWORD dwFlags,PCWSTR szEventSourceName,PAUTHZ_SECURITY_EVENT_PROVIDER_HANDLE phEventProvider);
  AUTHZAPI WINBOOL WINAPI AuthzUnregisterSecurityEventSource(DWORD dwFlags,PAUTHZ_SECURITY_EVENT_PROVIDER_HANDLE phEventProvider);
  AUTHZAPI WINBOOL WINAPI AuthzReportSecurityEvent(DWORD dwFlags,AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE hEventProvider,DWORD dwAuditId,PSID pUserSid,DWORD dwCount,...);
  AUTHZAPI WINBOOL WINAPI AuthzReportSecurityEventFromParams(DWORD dwFlags,AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE hEventProvider,DWORD dwAuditId,PSID pUserSid,PAUDIT_PARAMS pParams);

#if (_WIN32_WINNT >= 0x0601)
typedef enum _AUTHZ_SECURITY_ATTRIBUTE_OPERATION {
  AUTHZ_SECURITY_ATTRIBUTE_OPERATION_NONE          = 0,
  AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE_ALL,
  AUTHZ_SECURITY_ATTRIBUTE_OPERATION_ADD,
  AUTHZ_SECURITY_ATTRIBUTE_OPERATION_DELETE,
  AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE 
} AUTHZ_SECURITY_ATTRIBUTE_OPERATION, *PAUTHZ_SECURITY_ATTRIBUTE_OPERATION;

typedef struct _AUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE {
  ULONG64 Version;
  PWSTR   pName;
} AUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE, *PAUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE;

typedef struct _AUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE {
  PVOID pValue;
  ULONG ValueLength;
} AUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE, *PAUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE;

#define AUTHZ_SECURITY_ATTRIBUTE_NON_INHERITABLE 0x0001
#define AUTHZ_SECURITY_ATTRIBUTE_VALUE_CASE_SENSITIVE 0x0002

typedef struct _AUTHZ_SECURITY_ATTRIBUTE_V1 {
  PWSTR  pName;
  USHORT ValueType;
  ULONG  Flags;
  ULONG  ValueCount;
  __MINGW_EXTENSION union {
    PLONG64                                      pInt64;
    PULONG64                                     pUint64;
    PWSTR                                        ppString;
    PAUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE         pFqbn;
    PAUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE pOctetString;
  } Values;
} AUTHZ_SECURITY_ATTRIBUTE_V1, *PAUTHZ_SECURITY_ATTRIBUTE_V1;

typedef struct _AUTHZ_SECURITY_ATTRIBUTES_INFORMATION {
  USHORT Version;
  USHORT Reserved;
  ULONG  AttributeCount;
  __MINGW_EXTENSION union {
    PAUTHZ_SECURITY_ATTRIBUTE_V1 pAttributeV1;
  } Attribute;
} AUTHZ_SECURITY_ATTRIBUTES_INFORMATION, *PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION;

AUTHZAPI WINBOOL WINAPI AuthzModifySecurityAttributes(
  AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
  PAUTHZ_SECURITY_ATTRIBUTE_OPERATION pOperations,
  PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION pAttributes
);
#endif /*(_WIN32_WINNT >= 0x0601)*/

#ifdef __cplusplus
}
#endif

#endif
