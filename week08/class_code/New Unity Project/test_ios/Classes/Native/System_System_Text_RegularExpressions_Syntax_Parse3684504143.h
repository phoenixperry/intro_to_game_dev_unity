#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "mscorlib_System_Object837106420.h"

// System.Text.RegularExpressions.Syntax.Parser
struct  Parser_t3684504143  : public Object_t
{
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern_0;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr_1;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t2121638921 * ___caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t3875263730 * ___refs_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups_4;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap_5;
};
