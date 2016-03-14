#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.FontData
struct FontData_t3713645250;
// System.String
struct String_t;
// UnityEngine.TextGenerator
struct TextGenerator_t2883685459;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t684414504;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic2806572971.h"

// UnityEngine.UI.Text
struct  Text_t3286458198  : public MaskableGraphic_t2806572971
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t3713645250 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t2883685459 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t2883685459 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t684414504* ___m_TempVerts_34;
};
struct Text_t3286458198_StaticFields{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t1886596500 * ___s_DefaultText_32;
};
