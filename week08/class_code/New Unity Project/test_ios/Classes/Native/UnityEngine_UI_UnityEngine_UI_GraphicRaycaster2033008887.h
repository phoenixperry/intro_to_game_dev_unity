#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t3534013893;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1730843082;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t3637558989;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas3819875680.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_Blo3349705471.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

// UnityEngine.UI.GraphicRaycaster
struct  GraphicRaycaster_t2033008887  : public BaseRaycaster_t3819875680
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_3;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_4;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t1862190090  ___m_BlockingMask_5;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t3534013893 * ___m_Canvas_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t1730843082 * ___m_RaycastResults_7;
};
struct GraphicRaycaster_t2033008887_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t1730843082 * ___s_SortedGraphics_8;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__am$cache6
	Comparison_1_t3637558989 * ___U3CU3Ef__amU24cache6_9;
};
