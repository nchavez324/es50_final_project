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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t137;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t109;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m11793_gshared (EventFunction_1_t137 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m11793(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t137 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m11793_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m11795_gshared (EventFunction_1_t137 * __this, Object_t * ___handler, BaseEventData_t109 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m11795(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t137 *, Object_t *, BaseEventData_t109 *, const MethodInfo*))EventFunction_1_Invoke_m11795_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m11797_gshared (EventFunction_1_t137 * __this, Object_t * ___handler, BaseEventData_t109 * ___eventData, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m11797(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t137 *, Object_t *, BaseEventData_t109 *, AsyncCallback_t15 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m11797_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m11799_gshared (EventFunction_1_t137 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m11799(__this, ___result, method) (( void (*) (EventFunction_1_t137 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m11799_gshared)(__this, ___result, method)
