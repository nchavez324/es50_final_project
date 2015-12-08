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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t2397;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m18261_gshared (Comparison_1_t2397 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m18261(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2397 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m18261_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m18262_gshared (Comparison_1_t2397 * __this, CustomAttributeNamedArgument_t1332  ___x, CustomAttributeNamedArgument_t1332  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m18262(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2397 *, CustomAttributeNamedArgument_t1332 , CustomAttributeNamedArgument_t1332 , const MethodInfo*))Comparison_1_Invoke_m18262_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m18263_gshared (Comparison_1_t2397 * __this, CustomAttributeNamedArgument_t1332  ___x, CustomAttributeNamedArgument_t1332  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m18263(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2397 *, CustomAttributeNamedArgument_t1332 , CustomAttributeNamedArgument_t1332 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m18263_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m18264_gshared (Comparison_1_t2397 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m18264(__this, ___result, method) (( int32_t (*) (Comparison_1_t2397 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m18264_gshared)(__this, ___result, method)
