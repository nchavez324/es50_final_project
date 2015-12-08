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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2117;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15160_gshared (Comparison_1_t2117 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15160(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2117 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15160_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15161_gshared (Comparison_1_t2117 * __this, Vector3_t5  ___x, Vector3_t5  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15161(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2117 *, Vector3_t5 , Vector3_t5 , const MethodInfo*))Comparison_1_Invoke_m15161_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15162_gshared (Comparison_1_t2117 * __this, Vector3_t5  ___x, Vector3_t5  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15162(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2117 *, Vector3_t5 , Vector3_t5 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15162_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15163_gshared (Comparison_1_t2117 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15163(__this, ___result, method) (( int32_t (*) (Comparison_1_t2117 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15163_gshared)(__this, ___result, method)
