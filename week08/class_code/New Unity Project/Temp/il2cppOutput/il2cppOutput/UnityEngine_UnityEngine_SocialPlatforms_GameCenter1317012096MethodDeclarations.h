#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t581285621;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter1317012096.h"

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C"  Achievement_t581285621 * GcAchievementData_ToAchievement_m3239514930 (GcAchievementData_t1317012096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GcAchievementData_t1317012096;
struct GcAchievementData_t1317012096_marshaled;

extern "C" void GcAchievementData_t1317012096_marshal(const GcAchievementData_t1317012096& unmarshaled, GcAchievementData_t1317012096_marshaled& marshaled);
extern "C" void GcAchievementData_t1317012096_marshal_back(const GcAchievementData_t1317012096_marshaled& marshaled, GcAchievementData_t1317012096& unmarshaled);
extern "C" void GcAchievementData_t1317012096_marshal_cleanup(GcAchievementData_t1317012096_marshaled& marshaled);
