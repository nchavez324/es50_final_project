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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t957;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t766;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t958;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t858;
// System.Security.Cryptography.Oid
struct Oid_t959;
// System.Byte[]
struct ByteU5BU5D_t87;
// System.Security.Cryptography.DSA
struct DSA_t767;
// System.Security.Cryptography.RSA
struct RSA_t760;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m5134 (PublicKey_t957 * __this, X509Certificate_t766 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t958 * PublicKey_get_EncodedKeyValue_m5135 (PublicKey_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t958 * PublicKey_get_EncodedParameters_m5136 (PublicKey_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t858 * PublicKey_get_Key_m5137 (PublicKey_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t959 * PublicKey_get_Oid_m5138 (PublicKey_t957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t87* PublicKey_GetUnsignedBigInteger_m5139 (Object_t * __this /* static, unused */, ByteU5BU5D_t87* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t767 * PublicKey_DecodeDSA_m5140 (Object_t * __this /* static, unused */, ByteU5BU5D_t87* ___rawPublicKey, ByteU5BU5D_t87* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t760 * PublicKey_DecodeRSA_m5141 (Object_t * __this /* static, unused */, ByteU5BU5D_t87* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
