#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2776692961;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1099177929;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t49946189;

#include "System_System_Net_WebRequest3488810021.h"
#include "mscorlib_System_IO_FileAccess995838663.h"

// System.Net.FileWebRequest
struct  FileWebRequest_t1669470913  : public WebRequest_t3488810021
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t2776692961 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t1099177929 * ___webHeaders_7;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_8;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_9;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_10;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_11;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy_12;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_13;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_14;
};
