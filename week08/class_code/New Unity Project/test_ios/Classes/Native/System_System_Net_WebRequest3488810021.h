#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t370358365;
// System.Net.IWebProxy
struct IWebProxy_t49946189;
// System.Object
struct Object_t;

#include "mscorlib_System_MarshalByRefObject2055500882.h"
#include "System_System_Net_Security_AuthenticationLevel2597042204.h"

// System.Net.WebRequest
struct  WebRequest_t3488810021  : public MarshalByRefObject_t2055500882
{
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::authentication_level
	int32_t ___authentication_level_4;
};
struct WebRequest_t3488810021_StaticFields{
	// System.Collections.Specialized.HybridDictionary System.Net.WebRequest::prefixes
	HybridDictionary_t370358365 * ___prefixes_1;
	// System.Boolean System.Net.WebRequest::isDefaultWebProxySet
	bool ___isDefaultWebProxySet_2;
	// System.Net.IWebProxy System.Net.WebRequest::defaultWebProxy
	Object_t * ___defaultWebProxy_3;
	// System.Object System.Net.WebRequest::lockobj
	Object_t * ___lockobj_5;
};
