#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t3796754476;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_276412187.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct  TlsServerCertificateRequest_t3177402414  : public HandshakeMessage_t276412187
{
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::certificateTypes
	ClientCertificateTypeU5BU5D_t3796754476* ___certificateTypes_9;
	// System.String[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::distinguisedNames
	StringU5BU5D_t2956870243* ___distinguisedNames_10;
};
