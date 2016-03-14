#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t1013890471;
// UnityEngineInternal.GenericStack
struct GenericStack_t2344941421;

#include "mscorlib_System_Object837106420.h"

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t3653031512  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t1013890471 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t2344941421 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t1013890471 * ___windows_2;
};
