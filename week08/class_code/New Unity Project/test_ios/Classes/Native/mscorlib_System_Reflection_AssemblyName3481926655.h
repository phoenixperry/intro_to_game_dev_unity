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
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t2760016869;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Version
struct Version_t497901645;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_AssemblyNameFlags1390978468.h"
#include "mscorlib_System_Configuration_Assemblies_AssemblyH3110870100.h"
#include "mscorlib_System_Configuration_Assemblies_AssemblyV3098689623.h"
#include "mscorlib_System_Reflection_ProcessorArchitecture2956520755.h"

// System.Reflection.AssemblyName
struct  AssemblyName_t3481926655  : public Object_t
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t3603717042 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t2760016869 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t58506160* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t58506160* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t497901645 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
};
