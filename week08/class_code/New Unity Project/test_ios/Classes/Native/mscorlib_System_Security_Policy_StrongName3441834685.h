#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2864573480;
// System.String
struct String_t;
// System.Version
struct Version_t497901645;

#include "mscorlib_System_Object837106420.h"

// System.Security.Policy.StrongName
struct  StrongName_t3441834685  : public Object_t
{
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t2864573480 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t497901645 * ___version_2;
};
