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

// System.Comparison`1<System.Object>
struct Comparison_1_t1832;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m11297_gshared (Comparison_1_t1832 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m11297(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1832 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m11297_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m11298_gshared (Comparison_1_t1832 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m11298(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1832 *, Object_t *, Object_t *, const MethodInfo*))Comparison_1_Invoke_m11298_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m11299_gshared (Comparison_1_t1832 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m11299(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1832 *, Object_t *, Object_t *, AsyncCallback_t15 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m11299_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m11300_gshared (Comparison_1_t1832 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m11300(__this, ___result, method) (( int32_t (*) (Comparison_1_t1832 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m11300_gshared)(__this, ___result, method)
