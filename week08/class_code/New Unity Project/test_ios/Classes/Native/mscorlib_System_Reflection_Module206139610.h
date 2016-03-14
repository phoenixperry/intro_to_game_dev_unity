#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.TypeFilter
struct TypeFilter_t2379296192;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Reflection.Module
struct  Module_t206139610  : public Object_t
{
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t1882292308 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;
};
struct Module_t206139610_StaticFields{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2379296192 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2379296192 * ___FilterTypeNameIgnoreCase_2;
};
