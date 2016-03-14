#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "mscorlib_System_Object837106420.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4015394186.h"

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct  CipherSuiteCollection_t1023598115  : public Object_t
{
	// System.Collections.ArrayList Mono.Security.Protocol.Tls.CipherSuiteCollection::cipherSuites
	ArrayList_t2121638921 * ___cipherSuites_0;
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.CipherSuiteCollection::protocol
	int32_t ___protocol_1;
};
