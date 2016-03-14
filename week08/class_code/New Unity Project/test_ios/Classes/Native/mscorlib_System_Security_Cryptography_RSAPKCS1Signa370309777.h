#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;

#include "mscorlib_System_Security_Cryptography_AsymmetricSign77133537.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t370309777  : public AsymmetricSignatureFormatter_t77133537
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t1557565273 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t24372250 * ___hash_1;
};
