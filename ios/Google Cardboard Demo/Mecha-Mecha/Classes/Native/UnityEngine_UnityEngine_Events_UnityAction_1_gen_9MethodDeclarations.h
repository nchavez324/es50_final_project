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

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t1971;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m13076_gshared (UnityAction_1_t1971 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m13076(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1971 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m13076_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13077_gshared (UnityAction_1_t1971 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13077(__this, ___arg0, method) (( void (*) (UnityAction_1_t1971 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m13077_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13078_gshared (UnityAction_1_t1971 * __this, int32_t ___arg0, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13078(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1971 *, int32_t, AsyncCallback_t15 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13078_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13079_gshared (UnityAction_1_t1971 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13079(__this, ___result, method) (( void (*) (UnityAction_1_t1971 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13079_gshared)(__this, ___result, method)
