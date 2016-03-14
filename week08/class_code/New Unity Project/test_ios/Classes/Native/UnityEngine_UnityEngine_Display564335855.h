#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Display[]
struct DisplayU5BU5D_t2401773174;
// UnityEngine.Display
struct Display_t564335855;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1240057615;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

// UnityEngine.Display
struct  Display_t564335855  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;
};
struct Display_t564335855_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2401773174* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t564335855 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1240057615 * ___onDisplaysUpdated_3;
};
