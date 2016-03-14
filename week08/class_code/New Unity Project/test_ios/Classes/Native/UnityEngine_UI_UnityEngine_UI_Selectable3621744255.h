#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t123735928;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t513475400;
// UnityEngine.UI.Graphic
struct Graphic_t933884113;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2092881197;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour644839684.h"
#include "UnityEngine_UI_UnityEngine_UI_Navigation2845019197.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition269306229.h"
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock2245020947.h"
#include "UnityEngine_UI_UnityEngine_UI_SpriteState894177973.h"
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Selection1155221125.h"

// UnityEngine.UI.Selectable
struct  Selectable_t3621744255  : public UIBehaviour_t644839684
{
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t2845019197  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2245020947  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t894177973  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t513475400 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t933884113 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2092881197 * ___m_CanvasGroupCache_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_15;
};
struct Selectable_t3621744255_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t123735928 * ___s_List_2;
};
