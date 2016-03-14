#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object837106420.h"

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t645958682  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;
};
struct CrossAppDomainSink_t645958682_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t3875263730 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;
};
