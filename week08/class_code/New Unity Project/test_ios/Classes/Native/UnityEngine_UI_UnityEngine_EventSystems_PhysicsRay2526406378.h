#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t2749896403;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas3819875680.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

// UnityEngine.EventSystems.PhysicsRaycaster
struct  PhysicsRaycaster_t2526406378  : public BaseRaycaster_t3819875680
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_t3533968274 * ___m_EventCamera_3;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t1862190090  ___m_EventMask_4;
};
struct PhysicsRaycaster_t2526406378_StaticFields{
	// System.Comparison`1<UnityEngine.RaycastHit> UnityEngine.EventSystems.PhysicsRaycaster::<>f__am$cache2
	Comparison_1_t2749896403 * ___U3CU3Ef__amU24cache2_5;
};
