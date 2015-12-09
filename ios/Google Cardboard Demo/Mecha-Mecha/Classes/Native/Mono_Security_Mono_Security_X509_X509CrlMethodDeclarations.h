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

// Mono.Security.X509.X509Crl
struct X509Crl_t774;
// System.Byte[]
struct ByteU5BU5D_t87;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t768;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t773;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t766;
// System.Security.Cryptography.DSA
struct DSA_t767;
// System.Security.Cryptography.RSA
struct RSA_t760;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t858;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m4216 (X509Crl_t774 * __this, ByteU5BU5D_t87* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m4217 (X509Crl_t774 * __this, ByteU5BU5D_t87* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t768 * X509Crl_get_Extensions_m4218 (X509Crl_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t87* X509Crl_get_Hash_m4219 (X509Crl_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m4220 (X509Crl_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t93  X509Crl_get_NextUpdate_m4221 (X509Crl_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m4222 (X509Crl_t774 * __this, ByteU5BU5D_t87* ___array1, ByteU5BU5D_t87* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t773 * X509Crl_GetCrlEntry_m4223 (X509Crl_t774 * __this, X509Certificate_t766 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t773 * X509Crl_GetCrlEntry_m4224 (X509Crl_t774 * __this, ByteU5BU5D_t87* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m4225 (X509Crl_t774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m4226 (X509Crl_t774 * __this, DSA_t767 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m4227 (X509Crl_t774 * __this, RSA_t760 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m4228 (X509Crl_t774 * __this, AsymmetricAlgorithm_t858 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
