#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1539766221;

#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21028297519.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct  Enumerator_t1306794163 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1539766221 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1028297519  ___current_3;
};
