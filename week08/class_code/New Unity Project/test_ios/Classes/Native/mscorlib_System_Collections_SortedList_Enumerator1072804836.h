#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.SortedList
struct SortedList_t3322490541;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_SortedList_EnumeratorM3331444647.h"

// System.Collections.SortedList/Enumerator
struct  Enumerator_t1072804837  : public Object_t
{
	// System.Collections.SortedList System.Collections.SortedList/Enumerator::host
	SortedList_t3322490541 * ___host_0;
	// System.Int32 System.Collections.SortedList/Enumerator::stamp
	int32_t ___stamp_1;
	// System.Int32 System.Collections.SortedList/Enumerator::pos
	int32_t ___pos_2;
	// System.Int32 System.Collections.SortedList/Enumerator::size
	int32_t ___size_3;
	// System.Collections.SortedList/EnumeratorMode System.Collections.SortedList/Enumerator::mode
	int32_t ___mode_4;
	// System.Object System.Collections.SortedList/Enumerator::currentKey
	Object_t * ___currentKey_5;
	// System.Object System.Collections.SortedList/Enumerator::currentValue
	Object_t * ___currentValue_6;
	// System.Boolean System.Collections.SortedList/Enumerator::invalid
	bool ___invalid_7;
};
struct Enumerator_t1072804837_StaticFields{
	// System.String System.Collections.SortedList/Enumerator::xstr
	String_t* ___xstr_8;
};
