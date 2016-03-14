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

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Ray__ctor_m2662468509 (Ray_t1522967639 * __this, Vector3_t3525329789  ___origin, Vector3_t3525329789  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C"  Vector3_t3525329789  Ray_get_origin_m3064983562 (Ray_t1522967639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t3525329789  Ray_get_direction_m3201866877 (Ray_t1522967639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C"  Vector3_t3525329789  Ray_GetPoint_m1171104822 (Ray_t1522967639 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
extern "C"  String_t* Ray_ToString_m1391619614 (Ray_t1522967639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
