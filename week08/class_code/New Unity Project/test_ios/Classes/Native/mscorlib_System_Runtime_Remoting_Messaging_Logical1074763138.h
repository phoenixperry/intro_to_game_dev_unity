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
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t2632322424;

#include "mscorlib_System_Object837106420.h"

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t1074763138  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t3875263730 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t2632322424 * ____remotingData_1;
};
