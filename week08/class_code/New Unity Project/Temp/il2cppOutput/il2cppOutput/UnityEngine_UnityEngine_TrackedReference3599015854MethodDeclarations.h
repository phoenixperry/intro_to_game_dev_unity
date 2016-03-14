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

// UnityEngine.TrackedReference
struct TrackedReference_t3599015854;
struct TrackedReference_t3599015854_marshaled;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_TrackedReference3599015854.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C"  bool TrackedReference_Equals_m732758423 (TrackedReference_t3599015854 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C"  int32_t TrackedReference_GetHashCode_m894516347 (TrackedReference_t3599015854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C"  bool TrackedReference_op_Equality_m4125598506 (Object_t * __this /* static, unused */, TrackedReference_t3599015854 * ___x, TrackedReference_t3599015854 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TrackedReference_t3599015854;
struct TrackedReference_t3599015854_marshaled;

extern "C" void TrackedReference_t3599015854_marshal(const TrackedReference_t3599015854& unmarshaled, TrackedReference_t3599015854_marshaled& marshaled);
extern "C" void TrackedReference_t3599015854_marshal_back(const TrackedReference_t3599015854_marshaled& marshaled, TrackedReference_t3599015854& unmarshaled);
extern "C" void TrackedReference_t3599015854_marshal_cleanup(TrackedReference_t3599015854_marshaled& marshaled);
