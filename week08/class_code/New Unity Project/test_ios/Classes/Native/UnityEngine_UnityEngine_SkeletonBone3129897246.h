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

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// UnityEngine.SkeletonBone
struct  SkeletonBone_t3129897246 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t3525329789  ___position_1;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t1891715979  ___rotation_2;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t3525329789  ___scale_3;
	// System.Int32 UnityEngine.SkeletonBone::transformModified
	int32_t ___transformModified_4;
};
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct SkeletonBone_t3129897246_marshaled
{
	char* ___name_0;
	Vector3_t3525329789  ___position_1;
	Quaternion_t1891715979  ___rotation_2;
	Vector3_t3525329789  ___scale_3;
	int32_t ___transformModified_4;
};
