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

// UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate
struct InterstitialWasViewedDelegate_t402653446;
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

// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InterstitialWasViewedDelegate__ctor_m2752017695 (InterstitialWasViewedDelegate_t402653446 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::Invoke()
extern "C"  void InterstitialWasViewedDelegate_Invoke_m3038628409 (InterstitialWasViewedDelegate_t402653446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InterstitialWasViewedDelegate_t402653446(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * InterstitialWasViewedDelegate_BeginInvoke_m3141305002 (InterstitialWasViewedDelegate_t402653446 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.ADInterstitialAd/InterstitialWasViewedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InterstitialWasViewedDelegate_EndInvoke_m971591343 (InterstitialWasViewedDelegate_t402653446 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
