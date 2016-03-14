#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t563003706;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1439411180;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3148194463;

#include "System_System_Text_RegularExpressions_Syntax_Assert324477170.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t1074818188  : public Assertion_t324477170
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t563003706 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1439411180 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t3148194463 * ___literal_3;
};
