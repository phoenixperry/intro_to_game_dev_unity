#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t497901645;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_PlatformID2455152771.h"

// System.OperatingSystem
struct  OperatingSystem_t602923589  : public Object_t
{
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t497901645 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;
};
