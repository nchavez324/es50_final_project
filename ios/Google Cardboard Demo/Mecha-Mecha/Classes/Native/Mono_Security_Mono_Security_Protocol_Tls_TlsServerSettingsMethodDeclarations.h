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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t807;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t764;
// System.Security.Cryptography.RSA
struct RSA_t760;
// System.Byte[]
struct ByteU5BU5D_t87;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t843;
// System.String[]
struct StringU5BU5D_t91;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C" void TlsServerSettings__ctor_m4671 (TlsServerSettings_t807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C" bool TlsServerSettings_get_ServerKeyExchange_m4672 (TlsServerSettings_t807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C" void TlsServerSettings_set_ServerKeyExchange_m4673 (TlsServerSettings_t807 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C" X509CertificateCollection_t764 * TlsServerSettings_get_Certificates_m4674 (TlsServerSettings_t807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsServerSettings_set_Certificates_m4675 (TlsServerSettings_t807 * __this, X509CertificateCollection_t764 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C" RSA_t760 * TlsServerSettings_get_CertificateRSA_m4676 (TlsServerSettings_t807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C" RSAParameters_t842  TlsServerSettings_get_RsaParameters_m4677 (TlsServerSettings_t807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C" void TlsServerSettings_set_RsaParameters_m4678 (TlsServerSettings_t807 * __this, RSAParameters_t842  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C" void TlsServerSettings_set_SignedParams_m4679 (TlsServerSettings_t807 * __this, ByteU5BU5D_t87* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C" bool TlsServerSettings_get_CertificateRequest_m4680 (TlsServerSettings_t807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C" void TlsServerSettings_set_CertificateRequest_m4681 (TlsServerSettings_t807 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C" void TlsServerSettings_set_CertificateTypes_m4682 (TlsServerSettings_t807 * __this, ClientCertificateTypeU5BU5D_t843* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C" void TlsServerSettings_set_DistinguisedNames_m4683 (TlsServerSettings_t807 * __this, StringU5BU5D_t91* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C" void TlsServerSettings_UpdateCertificateRSA_m4684 (TlsServerSettings_t807 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
