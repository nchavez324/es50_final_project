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

// System.Security.Cryptography.SHA1
struct SHA1_t884;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.SHA1::.ctor()
extern "C" void SHA1__ctor_m9608 (SHA1_t884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
extern "C" SHA1_t884 * SHA1_Create_m4846 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create(System.String)
extern "C" SHA1_t884 * SHA1_Create_m9609 (Object_t * __this /* static, unused */, String_t* ___hashName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
