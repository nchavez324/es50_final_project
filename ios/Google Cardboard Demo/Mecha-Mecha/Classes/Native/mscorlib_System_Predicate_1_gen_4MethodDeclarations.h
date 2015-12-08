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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1850;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11505_gshared (Predicate_1_t1850 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11505(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1850 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11505_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11506_gshared (Predicate_1_t1850 * __this, RaycastResult_t111  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11506(__this, ___obj, method) (( bool (*) (Predicate_1_t1850 *, RaycastResult_t111 , const MethodInfo*))Predicate_1_Invoke_m11506_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11507_gshared (Predicate_1_t1850 * __this, RaycastResult_t111  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11507(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1850 *, RaycastResult_t111 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11507_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11508_gshared (Predicate_1_t1850 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11508(__this, ___result, method) (( bool (*) (Predicate_1_t1850 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11508_gshared)(__this, ___result, method)
