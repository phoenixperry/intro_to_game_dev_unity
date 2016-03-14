#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t2715912548  : public Object_t
{
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t58506160* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t58506160* ____salt_6;
};
struct DeriveBytes_t2715912548_StaticFields{
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t58506160* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t58506160* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t58506160* ___macDiversifier_2;
};
