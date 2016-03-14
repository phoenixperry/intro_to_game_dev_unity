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
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled;
// UnityEngine.AnimationState
struct AnimationState_t3357637594;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_AnimationEventSource2022798750.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo4162640357.h"
#include "UnityEngine_UnityEngine_AnimatorClipInfo4255364242.h"

// UnityEngine.AnimationEvent
struct  AnimationEvent_t3344771555  : public Object_t
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_t3878351788 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t3357637594 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t4162640357  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t4255364242  ___m_AnimatorClipInfo_10;
};
