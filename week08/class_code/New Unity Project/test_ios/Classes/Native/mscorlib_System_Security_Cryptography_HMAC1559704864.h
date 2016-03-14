#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t24372250;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t4111311066;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlg3076212156.h"

// System.Security.Cryptography.HMAC
struct  HMAC_t1559704864  : public KeyedHashAlgorithm_t3076212156
{
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t24372250 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t4111311066 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;
};
