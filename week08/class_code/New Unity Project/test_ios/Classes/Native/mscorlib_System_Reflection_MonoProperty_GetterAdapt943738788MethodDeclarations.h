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

// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t943738788;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern "C"  void GetterAdapter__ctor_m1690259617 (GetterAdapter_t943738788 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern "C"  Object_t * GetterAdapter_Invoke_m1039216292 (GetterAdapter_t943738788 * __this, Object_t * ____this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t943738788(Il2CppObject* delegate, Object_t * ____this);
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Object_t * GetterAdapter_BeginInvoke_m183730010 (GetterAdapter_t943738788 * __this, Object_t * ____this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * GetterAdapter_EndInvoke_m3963824678 (GetterAdapter_t943738788 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
