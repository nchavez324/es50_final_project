﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t958;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t87;
// System.Security.Cryptography.Oid
struct Oid_t959;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
extern "C" void AsnEncodedData__ctor_m5319 (AsnEncodedData_t958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
extern "C" void AsnEncodedData__ctor_m5320 (AsnEncodedData_t958 * __this, String_t* ___oid, ByteU5BU5D_t87* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.Security.Cryptography.Oid,System.Byte[])
extern "C" void AsnEncodedData__ctor_m5321 (AsnEncodedData_t958 * __this, Oid_t959 * ___oid, ByteU5BU5D_t87* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::get_Oid()
extern "C" Oid_t959 * AsnEncodedData_get_Oid_m5322 (AsnEncodedData_t958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
extern "C" void AsnEncodedData_set_Oid_m5323 (AsnEncodedData_t958 * __this, Oid_t959 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
extern "C" ByteU5BU5D_t87* AsnEncodedData_get_RawData_m5324 (AsnEncodedData_t958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
extern "C" void AsnEncodedData_set_RawData_m5325 (AsnEncodedData_t958 * __this, ByteU5BU5D_t87* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void AsnEncodedData_CopyFrom_m5326 (AsnEncodedData_t958 * __this, AsnEncodedData_t958 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
extern "C" String_t* AsnEncodedData_ToString_m5327 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
extern "C" String_t* AsnEncodedData_Default_m5328 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_BasicConstraintsExtension_m5329 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_EnhancedKeyUsageExtension_m5330 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_KeyUsageExtension_m5331 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m5332 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
extern "C" String_t* AsnEncodedData_SubjectAltName_m5333 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
extern "C" String_t* AsnEncodedData_NetscapeCertType_m5334 (AsnEncodedData_t958 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
