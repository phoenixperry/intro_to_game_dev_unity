#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.TripleDES
struct TripleDES_t3174934509;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1910042165;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlg3076212156.h"

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t3405144990  : public KeyedHashAlgorithm_t3076212156
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3174934509 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t1910042165 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;
};
