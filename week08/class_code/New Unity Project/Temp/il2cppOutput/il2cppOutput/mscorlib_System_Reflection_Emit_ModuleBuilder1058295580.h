#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t2520789883;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t3642540642;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Reflection.Emit.ModuleBuilderTokenGenerator
struct ModuleBuilderTokenGenerator_t2206799318;
// System.Char[]
struct CharU5BU5D_t3416858730;

#include "mscorlib_System_Reflection_Module206139610.h"

// System.Reflection.Emit.ModuleBuilder
struct  ModuleBuilder_t1058295580  : public Module_t206139610
{
	// System.Int32 System.Reflection.Emit.ModuleBuilder::num_types
	int32_t ___num_types_10;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.ModuleBuilder::types
	TypeBuilderU5BU5D_t2520789883* ___types_11;
	// System.Reflection.Emit.AssemblyBuilder System.Reflection.Emit.ModuleBuilder::assemblyb
	AssemblyBuilder_t3642540642 * ___assemblyb_12;
	// System.Int32[] System.Reflection.Emit.ModuleBuilder::table_indexes
	Int32U5BU5D_t1809983122* ___table_indexes_13;
	// System.Reflection.Emit.ModuleBuilderTokenGenerator System.Reflection.Emit.ModuleBuilder::token_gen
	ModuleBuilderTokenGenerator_t2206799318 * ___token_gen_14;
};
struct ModuleBuilder_t1058295580_StaticFields{
	// System.Char[] System.Reflection.Emit.ModuleBuilder::type_modifiers
	CharU5BU5D_t3416858730* ___type_modifiers_15;
};
