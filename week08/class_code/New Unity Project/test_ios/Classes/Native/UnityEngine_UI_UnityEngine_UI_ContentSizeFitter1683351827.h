#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"
#include "UnityEngine_UI_UnityEngine_UI_ContentSizeFitter_Fit816341300.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker3675273953.h"

// UnityEngine.UI.ContentSizeFitter
struct  ContentSizeFitter_t1683351827  : public UIBehaviour_t644839684
{
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit_2;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit_3;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t3317474837 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_t3675273953  ___m_Tracker_5;
};
