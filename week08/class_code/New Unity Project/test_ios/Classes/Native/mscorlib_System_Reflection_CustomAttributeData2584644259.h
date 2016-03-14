#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2726907876;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2485227443;

#include "mscorlib_System_Object837106420.h"

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2584644259  : public Object_t
{
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t3542137334 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	Object_t* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	Object_t* ___namedArgs_2;
};
