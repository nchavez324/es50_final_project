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

// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_t2282;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_4__ctor_m17121_gshared (UnityAction_4_t2282 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_4__ctor_m17121(__this, ___object, ___method, method) (( void (*) (UnityAction_4_t2282 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_4__ctor_m17121_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
extern "C" void UnityAction_4_Invoke_m17122_gshared (UnityAction_4_t2282 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, const MethodInfo* method);
#define UnityAction_4_Invoke_m17122(__this, ___arg0, ___arg1, ___arg2, ___arg3, method) (( void (*) (UnityAction_4_t2282 *, Object_t *, Object_t *, Object_t *, Object_t *, const MethodInfo*))UnityAction_4_Invoke_m17122_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_4_BeginInvoke_m17123_gshared (UnityAction_4_t2282 * __this, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, Object_t * ___arg3, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_4_BeginInvoke_m17123(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method) (( Object_t * (*) (UnityAction_4_t2282 *, Object_t *, Object_t *, Object_t *, Object_t *, AsyncCallback_t15 *, Object_t *, const MethodInfo*))UnityAction_4_BeginInvoke_m17123_gshared)(__this, ___arg0, ___arg1, ___arg2, ___arg3, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_4_EndInvoke_m17124_gshared (UnityAction_4_t2282 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_4_EndInvoke_m17124(__this, ___result, method) (( void (*) (UnityAction_4_t2282 *, Object_t *, const MethodInfo*))UnityAction_4_EndInvoke_m17124_gshared)(__this, ___result, method)
