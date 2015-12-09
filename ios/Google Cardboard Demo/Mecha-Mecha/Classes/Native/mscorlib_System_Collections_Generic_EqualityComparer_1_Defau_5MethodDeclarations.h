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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2143;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m15579_gshared (DefaultComparer_t2143 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m15579(__this, method) (( void (*) (DefaultComparer_t2143 *, const MethodInfo*))DefaultComparer__ctor_m15579_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m15580_gshared (DefaultComparer_t2143 * __this, Vector2_t21  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m15580(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2143 *, Vector2_t21 , const MethodInfo*))DefaultComparer_GetHashCode_m15580_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m15581_gshared (DefaultComparer_t2143 * __this, Vector2_t21  ___x, Vector2_t21  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m15581(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2143 *, Vector2_t21 , Vector2_t21 , const MethodInfo*))DefaultComparer_Equals_m15581_gshared)(__this, ___x, ___y, method)
