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

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2217;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16329_gshared (Predicate_1_t2217 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m16329(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2217 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m16329_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16330_gshared (Predicate_1_t2217 * __this, UICharInfo_t410  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m16330(__this, ___obj, method) (( bool (*) (Predicate_1_t2217 *, UICharInfo_t410 , const MethodInfo*))Predicate_1_Invoke_m16330_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16331_gshared (Predicate_1_t2217 * __this, UICharInfo_t410  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m16331(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2217 *, UICharInfo_t410 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m16331_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16332_gshared (Predicate_1_t2217 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m16332(__this, ___result, method) (( bool (*) (Predicate_1_t2217 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m16332_gshared)(__this, ___result, method)
