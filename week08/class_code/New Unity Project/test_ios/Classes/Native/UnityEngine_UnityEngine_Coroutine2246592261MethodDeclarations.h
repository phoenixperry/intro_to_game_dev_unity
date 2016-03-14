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

// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C"  void Coroutine__ctor_m3143611649 (Coroutine_t2246592261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C"  void Coroutine_ReleaseCoroutine_m3084231540 (Coroutine_t2246592261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C"  void Coroutine_Finalize_m3970219969 (Coroutine_t2246592261 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled;

extern "C" void Coroutine_t2246592261_marshal(const Coroutine_t2246592261& unmarshaled, Coroutine_t2246592261_marshaled& marshaled);
extern "C" void Coroutine_t2246592261_marshal_back(const Coroutine_t2246592261_marshaled& marshaled, Coroutine_t2246592261& unmarshaled);
extern "C" void Coroutine_t2246592261_marshal_cleanup(Coroutine_t2246592261_marshaled& marshaled);
