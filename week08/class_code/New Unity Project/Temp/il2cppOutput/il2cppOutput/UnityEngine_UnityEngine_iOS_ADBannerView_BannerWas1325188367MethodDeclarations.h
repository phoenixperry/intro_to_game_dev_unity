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

// UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate
struct BannerWasClickedDelegate_t1325188367;
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

// System.Void UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BannerWasClickedDelegate__ctor_m1483041906 (BannerWasClickedDelegate_t1325188367 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::Invoke()
extern "C"  void BannerWasClickedDelegate_Invoke_m1164690252 (BannerWasClickedDelegate_t1325188367 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_BannerWasClickedDelegate_t1325188367(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * BannerWasClickedDelegate_BeginInvoke_m2463719615 (BannerWasClickedDelegate_t1325188367 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADBannerView/BannerWasClickedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BannerWasClickedDelegate_EndInvoke_m2721376130 (BannerWasClickedDelegate_t1325188367 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
