﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.MD5
struct MD5_t883;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.MD5::.ctor()
extern "C" void MD5__ctor_m9497 (MD5_t883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
extern "C" MD5_t883 * MD5_Create_m4845 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create(System.String)
extern "C" MD5_t883 * MD5_Create_m9498 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;