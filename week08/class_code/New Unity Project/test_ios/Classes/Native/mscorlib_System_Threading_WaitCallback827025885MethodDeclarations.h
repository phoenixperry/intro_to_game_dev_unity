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

// System.Threading.WaitCallback
struct WaitCallback_t827025885;
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

// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void WaitCallback__ctor_m880874013 (WaitCallback_t827025885 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::Invoke(System.Object)
extern "C"  void WaitCallback_Invoke_m3979426365 (WaitCallback_t827025885 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WaitCallback_t827025885(Il2CppObject* delegate, Object_t * ___state);
// System.IAsyncResult System.Threading.WaitCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  Object_t * WaitCallback_BeginInvoke_m3299023334 (WaitCallback_t827025885 * __this, Object_t * ___state, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitCallback::EndInvoke(System.IAsyncResult)
extern "C"  void WaitCallback_EndInvoke_m2361662125 (WaitCallback_t827025885 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
