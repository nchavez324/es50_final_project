﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t764;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct  TlsServerCertificate_t851  : public HandshakeMessage_t822
{
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::certificates
	X509CertificateCollection_t764 * ___certificates_9;
};
