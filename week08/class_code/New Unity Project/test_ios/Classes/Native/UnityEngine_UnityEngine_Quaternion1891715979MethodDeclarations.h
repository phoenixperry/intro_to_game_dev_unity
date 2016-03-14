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
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Dot_m580284 (Object_t * __this /* static, unused */, Quaternion_t1891715979  ___a, Quaternion_t1891715979  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t1891715979  Quaternion_Inverse_m3542515566 (Object_t * __this /* static, unused */, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m4175627710 (Object_t * __this /* static, unused */, Quaternion_t1891715979 * ___rotation, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m1793285860 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m3823258238 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3843409946 (Quaternion_t1891715979 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Quaternion_op_Multiply_m3771288979 (Object_t * __this /* static, unused */, Quaternion_t1891715979  ___rotation, Vector3_t3525329789  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Quaternion_op_Inequality_m4197259746 (Object_t * __this /* static, unused */, Quaternion_t1891715979  ___lhs, Quaternion_t1891715979  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
