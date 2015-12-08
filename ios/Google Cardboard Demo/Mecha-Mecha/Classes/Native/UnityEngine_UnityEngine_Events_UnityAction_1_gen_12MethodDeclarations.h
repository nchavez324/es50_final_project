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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2065;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m14359_gshared (UnityAction_1_t2065 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m14359(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2065 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m14359_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m14360_gshared (UnityAction_1_t2065 * __this, Vector2_t21  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m14360(__this, ___arg0, method) (( void (*) (UnityAction_1_t2065 *, Vector2_t21 , const MethodInfo*))UnityAction_1_Invoke_m14360_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m14361_gshared (UnityAction_1_t2065 * __this, Vector2_t21  ___arg0, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14361(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2065 *, Vector2_t21 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m14361_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m14362_gshared (UnityAction_1_t2065 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m14362(__this, ___result, method) (( void (*) (UnityAction_1_t2065 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m14362_gshared)(__this, ___result, method)
