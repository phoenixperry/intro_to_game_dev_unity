#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CompareInfo
struct CompareInfo_t4023832425;

#include "mscorlib_System_StringComparer4058118931.h"

// System.CultureAwareComparer
struct  CultureAwareComparer_t2876040530  : public StringComparer_t4058118931
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t4023832425 * ____compareInfo_5;
};
