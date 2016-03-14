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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Security_Cryptography_AsymmetricSi3229527040.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t3446121365  : public AsymmetricSignatureDeformatter_t3229527040
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t1557565273 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t24372250 * ___hash_1;
};
struct RSASslSignatureDeformatter_t3446121365_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map15_2;
};
