#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
struct Dictionary_2_t576693949;

#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g65225247.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
struct  Enumerator_t343721890 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t576693949 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t65225247  ___current_3;
};
