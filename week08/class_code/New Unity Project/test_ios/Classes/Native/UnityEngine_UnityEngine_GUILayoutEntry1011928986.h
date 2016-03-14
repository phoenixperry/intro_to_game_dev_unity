#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t1011928986  : public Object_t
{
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t1525428817  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t1006925219 * ___m_Style_7;
};
struct GUILayoutEntry_t1011928986_StaticFields{
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t1525428817  ___kDummyRect_8;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_9;
};
