#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t302369945;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t3800378272;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3663573565;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t409518532;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t409518532  : public UIBehaviour_t644839684
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t302369945 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t3800378272 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t4012695102 * ___m_FirstSelected_4;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_5;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t4012695102 * ___m_CurrentSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_8;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3547103726 * ___m_DummyData_9;
};
struct EventSystem_t409518532_StaticFields{
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3663573565 * ___s_RaycastComparer_10;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::<current>k__BackingField
	EventSystem_t409518532 * ___U3CcurrentU3Ek__BackingField_11;
};
