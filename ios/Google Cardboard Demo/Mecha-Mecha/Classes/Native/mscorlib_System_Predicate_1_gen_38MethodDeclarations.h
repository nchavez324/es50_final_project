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

// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct Predicate_1_t2383;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m18084_gshared (Predicate_1_t2383 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m18084(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2383 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m18084_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m18085_gshared (Predicate_1_t2383 * __this, CustomAttributeTypedArgument_t1333  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m18085(__this, ___obj, method) (( bool (*) (Predicate_1_t2383 *, CustomAttributeTypedArgument_t1333 , const MethodInfo*))Predicate_1_Invoke_m18085_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m18086_gshared (Predicate_1_t2383 * __this, CustomAttributeTypedArgument_t1333  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m18086(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2383 *, CustomAttributeTypedArgument_t1333 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m18086_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m18087_gshared (Predicate_1_t2383 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m18087(__this, ___result, method) (( bool (*) (Predicate_1_t2383 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m18087_gshared)(__this, ___result, method)
