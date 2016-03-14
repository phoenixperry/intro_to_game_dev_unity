#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1756857658;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t552897310;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t409518532;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t3800378272  : public UIBehaviour_t644839684
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t1756857658 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t552897310 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t409518532 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3547103726 * ___m_BaseEventData_5;
};
