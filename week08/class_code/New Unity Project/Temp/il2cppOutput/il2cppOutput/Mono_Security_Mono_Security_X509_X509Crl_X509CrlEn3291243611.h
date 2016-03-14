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
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692651;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t3291243611  : public Object_t
{
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t58506160* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t339033936  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t3528692651 * ___extensions_2;
};
