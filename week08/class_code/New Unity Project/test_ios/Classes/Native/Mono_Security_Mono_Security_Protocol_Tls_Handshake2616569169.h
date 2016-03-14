#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_276412187.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct  TlsServerCertificate_t2616569169  : public HandshakeMessage_t276412187
{
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::certificates
	X509CertificateCollection_t3336811651 * ___certificates_9;
};
