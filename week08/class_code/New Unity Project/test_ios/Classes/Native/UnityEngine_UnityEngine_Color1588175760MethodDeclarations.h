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
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2252924356 (Color_t1588175760 * __this, float ___r, float ___g, float ___b, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m103496991 (Color_t1588175760 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Color::ToString()
extern "C"  String_t* Color_ToString_m2277845527 (Color_t1588175760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C"  int32_t Color_GetHashCode_m170503301 (Color_t1588175760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern "C"  bool Color_Equals_m3016668205 (Color_t1588175760 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t1588175760  Color_Lerp_m3494628845 (Object_t * __this /* static, unused */, Color_t1588175760  ___a, Color_t1588175760  ___b, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t1588175760  Color_get_red_m4288945411 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t1588175760  Color_get_white_m3038282331 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C"  Color_t1588175760  Color_get_black_m1687201969 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_clear()
extern "C"  Color_t1588175760  Color_get_clear_m2578346879 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
extern "C"  Color_t1588175760  Color_op_Multiply_m204757678 (Object_t * __this /* static, unused */, Color_t1588175760  ___a, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C"  Vector4_t3525329790  Color_op_Implicit_m2638307542 (Object_t * __this /* static, unused */, Color_t1588175760  ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
