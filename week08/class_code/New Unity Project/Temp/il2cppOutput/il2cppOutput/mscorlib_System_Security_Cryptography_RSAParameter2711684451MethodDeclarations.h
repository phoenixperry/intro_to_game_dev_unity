#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct RSAParameters_t2711684451;
struct RSAParameters_t2711684451_marshaled;

extern "C" void RSAParameters_t2711684451_marshal(const RSAParameters_t2711684451& unmarshaled, RSAParameters_t2711684451_marshaled& marshaled);
extern "C" void RSAParameters_t2711684451_marshal_back(const RSAParameters_t2711684451_marshaled& marshaled, RSAParameters_t2711684451& unmarshaled);
extern "C" void RSAParameters_t2711684451_marshal_cleanup(RSAParameters_t2711684451_marshaled& marshaled);
