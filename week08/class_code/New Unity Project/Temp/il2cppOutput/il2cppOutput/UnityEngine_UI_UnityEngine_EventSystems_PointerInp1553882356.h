#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t3695912417;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t2990183180;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM3800378272.h"

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t1553882356  : public BaseInputModule_t3800378272
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t3695912417 * ___m_PointerData_10;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t2990183180 * ___m_MouseState_11;
};
