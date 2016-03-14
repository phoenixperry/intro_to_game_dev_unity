#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2269718975;
// System.Char[]
struct CharU5BU5D_t3416858730;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Graphic
struct Graphic_t933884113;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1697462594;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t3894605131;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3303221397;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t684414504;
// UnityEngine.TextGenerator
struct TextGenerator_t2883685459;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3626201768;
// UnityEngine.Mesh
struct Mesh_t1525280346;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled;
// UnityEngine.Event
struct Event_t1590224583;
struct Event_t1590224583_marshaled;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "UnityEngine_UI_UnityEngine_UI_Selectable3621744255.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentTy1278737203.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType3710944772.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType1816994841.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType1253309806.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_Character4120610914.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// UnityEngine.UI.InputField
struct  InputField_t2345609593  : public Selectable_t3621744255
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t2269718975 * ___m_Keyboard_19;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t3286458198 * ___m_TextComponent_21;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t933884113 * ___m_Placeholder_22;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_23;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_24;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	uint16_t ___m_AsteriskChar_25;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_26;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_27;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_28;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_29;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_30;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t1697462594 * ___m_OnEndEdit_31;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t3894605131 * ___m_OnValueChanged_32;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t3303221397 * ___m_OnValidateInput_33;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t1588175760  ___m_CaretColor_34;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t1588175760  ___m_SelectionColor_36;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_37;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_39;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_42;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3317474837 * ___caretRectTrans_43;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t684414504* ___m_CursorVerts_44;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t2883685459 * ___m_InputTextCache_45;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t3626201768 * ___m_CachedInputRenderer_46;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_47;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t1525280346 * ___m_Mesh_48;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_49;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_50;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_51;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_52;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_53;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t2246592261 * ___m_BlinkCoroutine_54;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_56;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t2246592261 * ___m_DragCoroutine_58;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_59;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_60;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_61;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t1590224583 * ___m_ProcessingEvent_62;
};
struct InputField_t2345609593_StaticFields{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3416858730* ___kSeparators_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.UI.InputField::<>f__switch$map0
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map0_63;
};
