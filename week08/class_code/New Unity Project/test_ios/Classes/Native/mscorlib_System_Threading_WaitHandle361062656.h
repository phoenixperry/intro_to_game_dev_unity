#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t3630061075;

#include "mscorlib_System_MarshalByRefObject2055500882.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Threading.WaitHandle
struct  WaitHandle_t361062656  : public MarshalByRefObject_t2055500882
{
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t3630061075 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;
};
struct WaitHandle_t361062656_StaticFields{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t ___InvalidHandle_3;
};
