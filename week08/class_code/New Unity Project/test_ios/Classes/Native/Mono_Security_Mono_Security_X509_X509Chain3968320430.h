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
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;

#include "mscorlib_System_Object837106420.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl2524654829.h"

// Mono.Security.X509.X509Chain
struct  X509Chain_t3968320430  : public Object_t
{
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t3336811651 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t3336811651 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t273828613 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t3336811651 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;
};
