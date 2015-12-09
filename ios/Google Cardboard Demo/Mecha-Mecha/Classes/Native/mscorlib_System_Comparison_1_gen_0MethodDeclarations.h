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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t185;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2153_gshared (Comparison_1_t185 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2153(__this, ___object, ___method, method) (( void (*) (Comparison_1_t185 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2153_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12705_gshared (Comparison_1_t185 * __this, RaycastHit_t96  ___x, RaycastHit_t96  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12705(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t185 *, RaycastHit_t96 , RaycastHit_t96 , const MethodInfo*))Comparison_1_Invoke_m12705_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12706_gshared (Comparison_1_t185 * __this, RaycastHit_t96  ___x, RaycastHit_t96  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12706(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t185 *, RaycastHit_t96 , RaycastHit_t96 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12706_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12707_gshared (Comparison_1_t185 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12707(__this, ___result, method) (( int32_t (*) (Comparison_1_t185 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12707_gshared)(__this, ___result, method)
