#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SocialPlatforms.IScore
struct IScore_t3029734269;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t684312048;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope3192006877.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Range938821841.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope2889143067.h"

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t1422561091  : public Object_t
{
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	Object_t * ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t684312048* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t2956870243* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t938821841  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;
};
