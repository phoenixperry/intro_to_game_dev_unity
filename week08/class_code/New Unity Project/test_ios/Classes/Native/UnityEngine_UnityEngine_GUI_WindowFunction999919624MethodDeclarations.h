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

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t999919624;
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

// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C"  void WindowFunction__ctor_m732638321 (WindowFunction_t999919624 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::Invoke(System.Int32)
extern "C"  void WindowFunction_Invoke_m2798584028 (WindowFunction_t999919624 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WindowFunction_t999919624(Il2CppObject* delegate, int32_t ___id);
// System.IAsyncResult UnityEngine.GUI/WindowFunction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * WindowFunction_BeginInvoke_m526788181 (WindowFunction_t999919624 * __this, int32_t ___id, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI/WindowFunction::EndInvoke(System.IAsyncResult)
extern "C"  void WindowFunction_EndInvoke_m203456257 (WindowFunction_t999919624 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
