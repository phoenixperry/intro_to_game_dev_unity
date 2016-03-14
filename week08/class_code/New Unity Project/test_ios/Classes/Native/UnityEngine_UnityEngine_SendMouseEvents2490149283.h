#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t3030088988;
// UnityEngine.Camera[]
struct CameraU5BU5D_t458432999;

#include "mscorlib_System_Object837106420.h"

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t2490149283  : public Object_t
{
};
struct SendMouseEvents_t2490149283_StaticFields{
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t3030088988* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t3030088988* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t3030088988* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t458432999* ___m_Cameras_4;
};
