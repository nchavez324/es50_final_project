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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2429;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m18507_gshared (DefaultComparer_t2429 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18507(__this, method) (( void (*) (DefaultComparer_t2429 *, const MethodInfo*))DefaultComparer__ctor_m18507_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18508_gshared (DefaultComparer_t2429 * __this, Guid_t1680  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18508(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2429 *, Guid_t1680 , const MethodInfo*))DefaultComparer_GetHashCode_m18508_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18509_gshared (DefaultComparer_t2429 * __this, Guid_t1680  ___x, Guid_t1680  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18509(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2429 *, Guid_t1680 , Guid_t1680 , const MethodInfo*))DefaultComparer_Equals_m18509_gshared)(__this, ___x, ___y, method)
