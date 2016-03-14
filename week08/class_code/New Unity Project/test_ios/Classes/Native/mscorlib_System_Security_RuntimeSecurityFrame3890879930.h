#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.AppDomain
struct AppDomain_t1551247802;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_RuntimeDeclSecurityEntry2302558261.h"

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t3890879930  : public Object_t
{
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t1551247802 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t2302558261  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t2302558261  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t2302558261  ___permitonly_4;
};
