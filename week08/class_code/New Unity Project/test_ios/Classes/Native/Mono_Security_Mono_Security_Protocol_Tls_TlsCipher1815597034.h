#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Object_t;

#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit995991461.h"

// Mono.Security.Protocol.Tls.TlsCipherSuite
struct  TlsCipherSuite_t1815597034  : public CipherSuite_t995991461
{
	// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::header
	ByteU5BU5D_t58506160* ___header_21;
	// System.Object Mono.Security.Protocol.Tls.TlsCipherSuite::headerLock
	Object_t * ___headerLock_22;
};
