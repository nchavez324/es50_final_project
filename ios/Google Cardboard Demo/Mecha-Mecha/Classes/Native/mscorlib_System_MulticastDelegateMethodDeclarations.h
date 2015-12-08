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

// System.MulticastDelegate
struct MulticastDelegate_t13;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t663;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1746;
// System.Delegate
struct Delegate_t99;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6467 (MulticastDelegate_t13 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6468 (MulticastDelegate_t13 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6469 (MulticastDelegate_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1746* MulticastDelegate_GetInvocationList_m6470 (MulticastDelegate_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t99 * MulticastDelegate_CombineImpl_m6471 (MulticastDelegate_t13 * __this, Delegate_t99 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6472 (MulticastDelegate_t13 * __this, MulticastDelegate_t13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t13 * MulticastDelegate_KPM_m6473 (Object_t * __this /* static, unused */, MulticastDelegate_t13 * ___needle, MulticastDelegate_t13 * ___haystack, MulticastDelegate_t13 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t99 * MulticastDelegate_RemoveImpl_m6474 (MulticastDelegate_t13 * __this, Delegate_t99 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
