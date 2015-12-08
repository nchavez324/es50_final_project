#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1170;
// System.Byte[]
struct ByteU5BU5D_t87;
// System.Security.Cryptography.DSA
struct DSA_t767;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1165;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t663;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C" void X509Certificate__ctor_m7142 (X509Certificate_t1170 * __this, ByteU5BU5D_t87* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C" void X509Certificate__cctor_m7143 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C" void X509Certificate_Parse_m7144 (X509Certificate_t1170 * __this, ByteU5BU5D_t87* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t87* X509Certificate_GetUnsignedBigInteger_m7145 (X509Certificate_t1170 * __this, ByteU5BU5D_t87* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C" DSA_t767 * X509Certificate_get_DSA_m7146 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C" String_t* X509Certificate_get_IssuerName_m7147 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C" ByteU5BU5D_t87* X509Certificate_get_KeyAlgorithmParameters_m7148 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C" ByteU5BU5D_t87* X509Certificate_get_PublicKey_m7149 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C" ByteU5BU5D_t87* X509Certificate_get_RawData_m7150 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C" String_t* X509Certificate_get_SubjectName_m7151 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C" DateTime_t93  X509Certificate_get_ValidFrom_m7152 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C" DateTime_t93  X509Certificate_get_ValidUntil_m7153 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C" ASN1_t1165 * X509Certificate_GetIssuerName_m7154 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C" ASN1_t1165 * X509Certificate_GetSubjectName_m7155 (X509Certificate_t1170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void X509Certificate_GetObjectData_m7156 (X509Certificate_t1170 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C" ByteU5BU5D_t87* X509Certificate_PEM_m7157 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t87* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
