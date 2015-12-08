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

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t2134;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15438_gshared (Predicate_1_t2134 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15438(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2134 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15438_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15439_gshared (Predicate_1_t2134 * __this, Color32_t362  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15439(__this, ___obj, method) (( bool (*) (Predicate_1_t2134 *, Color32_t362 , const MethodInfo*))Predicate_1_Invoke_m15439_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15440_gshared (Predicate_1_t2134 * __this, Color32_t362  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15440(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2134 *, Color32_t362 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15440_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15441_gshared (Predicate_1_t2134 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15441(__this, ___result, method) (( bool (*) (Predicate_1_t2134 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15441_gshared)(__this, ___result, method)
