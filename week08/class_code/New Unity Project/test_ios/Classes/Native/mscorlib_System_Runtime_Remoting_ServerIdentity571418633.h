#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t2055500882;
// System.Runtime.Remoting.Contexts.Context
struct Context_t305277133;

#include "mscorlib_System_Runtime_Remoting_Identity1467752358.h"

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t571418633  : public Identity_t1467752358
{
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t2055500882 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t305277133 * ____context_9;
};
