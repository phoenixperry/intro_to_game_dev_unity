#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t4287691406;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t765486855;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "mscorlib_System_Type2779229935.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t3267237648  : public Type_t
{
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t4287691406 * ___tbuilder_8;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t765486855 * ___mbuilder_9;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_10;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_11;
};
