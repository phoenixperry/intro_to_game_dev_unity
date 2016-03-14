#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Text.Encoding
struct Encoding_t180559927;

#include "mscorlib_System_Object837106420.h"

// System.Console
struct  Console_t1097803980  : public Object_t
{
};
struct Console_t1097803980_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1689927879 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1689927879 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1534522647 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t180559927 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t180559927 * ___outputEncoding_4;
};
