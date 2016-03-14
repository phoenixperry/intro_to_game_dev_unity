#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.OidCollection
struct OidCollection_t1467909409;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "System_System_Security_Cryptography_X509Certificate374235568.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu3002376501.h"

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t3396220024  : public X509Extension_t374235568
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t1467909409 * ____enhKeyUsage_4;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_5;
};
struct X509EnhancedKeyUsageExtension_t3396220024_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::<>f__switch$mapE
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24mapE_6;
};
