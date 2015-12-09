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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>
struct DefaultComparer_t2382;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m18081_gshared (DefaultComparer_t2382 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18081(__this, method) (( void (*) (DefaultComparer_t2382 *, const MethodInfo*))DefaultComparer__ctor_m18081_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18082_gshared (DefaultComparer_t2382 * __this, CustomAttributeTypedArgument_t1333  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18082(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2382 *, CustomAttributeTypedArgument_t1333 , const MethodInfo*))DefaultComparer_GetHashCode_m18082_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18083_gshared (DefaultComparer_t2382 * __this, CustomAttributeTypedArgument_t1333  ___x, CustomAttributeTypedArgument_t1333  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18083(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2382 *, CustomAttributeTypedArgument_t1333 , CustomAttributeTypedArgument_t1333 , const MethodInfo*))DefaultComparer_Equals_m18083_gshared)(__this, ___x, ___y, method)
