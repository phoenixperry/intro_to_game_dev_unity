#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;

#include "mscorlib_System_Object837106420.h"

// System.UriParser
struct  UriParser_t1660745760  : public Object_t
{
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;
};
struct UriParser_t1660745760_StaticFields{
	// System.Object System.UriParser::lock_object
	Object_t * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t3875263730 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t3802381858 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t3802381858 * ___auth_regex_5;
};
