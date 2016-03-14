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
#include "UnityEngine_UnityEngine_NetworkPlayer1281137372.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.NetworkPlayer::.ctor(System.String,System.Int32)
extern "C"  void NetworkPlayer__ctor_m978047135 (NetworkPlayer_t1281137372 * __this, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetIPAddress(System.Int32)
extern "C"  String_t* NetworkPlayer_Internal_GetIPAddress_m2705922677 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPort(System.Int32)
extern "C"  int32_t NetworkPlayer_Internal_GetPort_m2646691040 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetExternalIP()
extern "C"  String_t* NetworkPlayer_Internal_GetExternalIP_m4147820797 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetExternalPort()
extern "C"  int32_t NetworkPlayer_Internal_GetExternalPort_m152642746 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalIP()
extern "C"  String_t* NetworkPlayer_Internal_GetLocalIP_m3142644809 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetLocalPort()
extern "C"  int32_t NetworkPlayer_Internal_GetLocalPort_m4290647008 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPlayerIndex()
extern "C"  int32_t NetworkPlayer_Internal_GetPlayerIndex_m1155344837 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetGUID(System.Int32)
extern "C"  String_t* NetworkPlayer_Internal_GetGUID_m82698821 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalGUID()
extern "C"  String_t* NetworkPlayer_Internal_GetLocalGUID_m668021995 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::GetHashCode()
extern "C"  int32_t NetworkPlayer_GetHashCode_m2832997817 (NetworkPlayer_t1281137372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::Equals(System.Object)
extern "C"  bool NetworkPlayer_Equals_m1380117345 (NetworkPlayer_t1281137372 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_ipAddress()
extern "C"  String_t* NetworkPlayer_get_ipAddress_m206939407 (NetworkPlayer_t1281137372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_port()
extern "C"  int32_t NetworkPlayer_get_port_m4260923428 (NetworkPlayer_t1281137372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_guid()
extern "C"  String_t* NetworkPlayer_get_guid_m1193250345 (NetworkPlayer_t1281137372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::ToString()
extern "C"  String_t* NetworkPlayer_ToString_m4115863651 (NetworkPlayer_t1281137372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_externalIP()
extern "C"  String_t* NetworkPlayer_get_externalIP_m420672594 (NetworkPlayer_t1281137372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_externalPort()
extern "C"  int32_t NetworkPlayer_get_externalPort_m2392166863 (NetworkPlayer_t1281137372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.NetworkPlayer::get_unassigned()
extern "C"  NetworkPlayer_t1281137372  NetworkPlayer_get_unassigned_m865556847 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Equality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C"  bool NetworkPlayer_op_Equality_m1190866952 (Object_t * __this /* static, unused */, NetworkPlayer_t1281137372  ___lhs, NetworkPlayer_t1281137372  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::op_Inequality(UnityEngine.NetworkPlayer,UnityEngine.NetworkPlayer)
extern "C"  bool NetworkPlayer_op_Inequality_m3921017795 (Object_t * __this /* static, unused */, NetworkPlayer_t1281137372  ___lhs, NetworkPlayer_t1281137372  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
