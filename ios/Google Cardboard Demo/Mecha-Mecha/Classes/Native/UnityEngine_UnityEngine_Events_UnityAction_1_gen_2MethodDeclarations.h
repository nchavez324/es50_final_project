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

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t391;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m2236_gshared (UnityAction_1_t391 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m2236(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t391 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m2236_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m13293_gshared (UnityAction_1_t391 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m13293(__this, ___arg0, method) (( void (*) (UnityAction_1_t391 *, bool, const MethodInfo*))UnityAction_1_Invoke_m13293_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m13294_gshared (UnityAction_1_t391 * __this, bool ___arg0, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m13294(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t391 *, bool, AsyncCallback_t15 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m13294_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m13295_gshared (UnityAction_1_t391 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m13295(__this, ___result, method) (( void (*) (UnityAction_1_t391 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m13295_gshared)(__this, ___result, method)
