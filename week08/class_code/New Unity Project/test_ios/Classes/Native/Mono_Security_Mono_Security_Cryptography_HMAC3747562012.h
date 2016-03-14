#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlg3076212156.h"

// Mono.Security.Cryptography.HMAC
struct  HMAC_t3747562012  : public KeyedHashAlgorithm_t3076212156
{
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t24372250 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t58506160* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t58506160* ___outerPad_8;
};
