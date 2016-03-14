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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkViewID1450258043.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1281137372.h"
#include "mscorlib_System_Object837106420.h"

// UnityEngine.NetworkViewID UnityEngine.NetworkViewID::get_unassigned()
extern "C"  NetworkViewID_t1450258043  NetworkViewID_get_unassigned_m2302461037 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_get_unassigned(UnityEngine.NetworkViewID&)
extern "C"  void NetworkViewID_INTERNAL_get_unassigned_m3953385100 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_IsMine(UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_Internal_IsMine_m619939661 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_IsMine(UnityEngine.NetworkViewID&)
extern "C"  bool NetworkViewID_INTERNAL_CALL_Internal_IsMine_m2052798080 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::Internal_GetOwner(UnityEngine.NetworkViewID,UnityEngine.NetworkPlayer&)
extern "C"  void NetworkViewID_Internal_GetOwner_m874421061 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043  ___value, NetworkPlayer_t1281137372 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetOwner(UnityEngine.NetworkViewID&,UnityEngine.NetworkPlayer&)
extern "C"  void NetworkViewID_INTERNAL_CALL_Internal_GetOwner_m2405750590 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043 * ___value, NetworkPlayer_t1281137372 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::Internal_GetString(UnityEngine.NetworkViewID)
extern "C"  String_t* NetworkViewID_Internal_GetString_m679444096 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_GetString(UnityEngine.NetworkViewID&)
extern "C"  String_t* NetworkViewID_INTERNAL_CALL_Internal_GetString_m1523080203 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Internal_Compare(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_Internal_Compare_m2541220858 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043  ___lhs, NetworkViewID_t1450258043  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::INTERNAL_CALL_Internal_Compare(UnityEngine.NetworkViewID&,UnityEngine.NetworkViewID&)
extern "C"  bool NetworkViewID_INTERNAL_CALL_Internal_Compare_m1319175441 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043 * ___lhs, NetworkViewID_t1450258043 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkViewID::GetHashCode()
extern "C"  int32_t NetworkViewID_GetHashCode_m2420635706 (NetworkViewID_t1450258043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::Equals(System.Object)
extern "C"  bool NetworkViewID_Equals_m2612049122 (NetworkViewID_t1450258043 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::get_isMine()
extern "C"  bool NetworkViewID_get_isMine_m2754407673 (NetworkViewID_t1450258043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkViewID::get_owner()
extern "C"  NetworkPlayer_t1281137372  NetworkViewID_get_owner_m576069262 (NetworkViewID_t1450258043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkViewID::ToString()
extern "C"  String_t* NetworkViewID_ToString_m3783538050 (NetworkViewID_t1450258043 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Equality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_op_Equality_m776200489 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043  ___lhs, NetworkViewID_t1450258043  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkViewID::op_Inequality(UnityEngine.NetworkViewID,UnityEngine.NetworkViewID)
extern "C"  bool NetworkViewID_op_Inequality_m4224856356 (Object_t * __this /* static, unused */, NetworkViewID_t1450258043  ___lhs, NetworkViewID_t1450258043  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
