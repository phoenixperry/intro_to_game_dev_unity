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
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String[]
struct StringU5BU5D_t2956870243;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t3796754476;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter2711684451.h"

// Mono.Security.Protocol.Tls.TlsServerSettings
struct  TlsServerSettings_t2090450521  : public Object_t
{
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::certificates
	X509CertificateCollection_t3336811651 * ___certificates_0;
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::certificateRSA
	RSA_t1557565273 * ___certificateRSA_1;
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::rsaParameters
	RSAParameters_t2711684451  ___rsaParameters_2;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsServerSettings::signedParams
	ByteU5BU5D_t58506160* ___signedParams_3;
	// System.String[] Mono.Security.Protocol.Tls.TlsServerSettings::distinguisedNames
	StringU5BU5D_t2956870243* ___distinguisedNames_4;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::serverKeyExchange
	bool ___serverKeyExchange_5;
	// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::certificateRequest
	bool ___certificateRequest_6;
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.TlsServerSettings::certificateTypes
	ClientCertificateTypeU5BU5D_t3796754476* ___certificateTypes_7;
};
