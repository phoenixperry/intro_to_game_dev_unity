#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Collections.Stack
struct Stack_t1623036922;

#include "mscorlib_Mono_Xml_SmallXmlParser1795169203.h"

// Mono.Xml.SecurityParser
struct  SecurityParser_t1534246243  : public SmallXmlParser_t1795169203
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2475331585 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2475331585 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1623036922 * ___stack_15;
};
