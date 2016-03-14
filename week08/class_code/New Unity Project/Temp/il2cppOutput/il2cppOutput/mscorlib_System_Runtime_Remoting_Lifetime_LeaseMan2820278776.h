#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Threading.Timer
struct Timer_t3546110984;

#include "mscorlib_System_Object837106420.h"

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t2820278776  : public Object_t
{
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t2121638921 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t3546110984 * ____timer_1;
};
