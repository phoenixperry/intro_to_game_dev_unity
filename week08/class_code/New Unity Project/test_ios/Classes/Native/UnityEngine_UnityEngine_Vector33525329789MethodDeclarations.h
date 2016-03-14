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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2926210380 (Vector3_t3525329789 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1846874791 (Vector3_t3525329789 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_Lerp_m650470329 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C"  float Vector3_get_Item_m108333500 (Vector3_t3525329789 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C"  void Vector3_set_Item_m1844835745 (Vector3_t3525329789 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m3912867704 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C"  bool Vector3_Equals_m3337192096 (Vector3_t3525329789 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Normalize_m3047997355 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3525329789  Vector3_get_normalized_m2650940353 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
extern "C"  String_t* Vector3_ToString_m3566373060 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m2370485424 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m3366690344 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C"  float Vector3_Magnitude_m995314358 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C"  float Vector3_SqrMagnitude_m1662776270 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1207423764 (Vector3_t3525329789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Min_m10392601 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Max_m545730887 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3525329789  Vector3_get_zero_m2017759730 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3525329789  Vector3_get_one_m886467710 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3525329789  Vector3_get_forward_m1039372701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C"  Vector3_t3525329789  Vector3_get_back_m1326515313 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3525329789  Vector3_get_up_m4046647141 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C"  Vector3_t3525329789  Vector3_get_down_m1397301612 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t3525329789  Vector3_get_left_m1616598929 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3525329789  Vector3_get_right_m4015137012 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Addition_m695438225 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Subtraction_m2842958165 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Multiply_m973638459 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Division_m4277988370 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m582817895 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m231387234 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
