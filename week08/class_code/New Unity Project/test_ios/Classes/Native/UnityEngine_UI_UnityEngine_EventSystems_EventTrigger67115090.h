#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct TriggerEvent_t516183010;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigge904435379.h"

// UnityEngine.EventSystems.EventTrigger/Entry
struct  Entry_t67115090  : public Object_t
{
	// UnityEngine.EventSystems.EventTriggerType UnityEngine.EventSystems.EventTrigger/Entry::eventID
	int32_t ___eventID_0;
	// UnityEngine.EventSystems.EventTrigger/TriggerEvent UnityEngine.EventSystems.EventTrigger/Entry::callback
	TriggerEvent_t516183010 * ___callback_1;
};
