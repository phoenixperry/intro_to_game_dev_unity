#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t2133601851;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;

#include "mscorlib_System_Object837106420.h"

// Mono.Math.BigInteger
struct  BigInteger_t1694088928  : public Object_t
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2133601851* ___data_1;
};
struct BigInteger_t1694088928_StaticFields{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2133601851* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2174318432 * ___rng_3;
};
