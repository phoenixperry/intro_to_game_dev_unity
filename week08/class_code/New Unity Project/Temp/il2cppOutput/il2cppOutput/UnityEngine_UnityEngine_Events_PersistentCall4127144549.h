#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2732610389;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerM1501524350.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState3123539646.h"

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t4127144549  : public Object_t
{
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t3878351788 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t2732610389 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;
};
