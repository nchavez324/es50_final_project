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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2220;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16339_gshared (Comparison_1_t2220 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16339(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2220 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16339_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16340_gshared (Comparison_1_t2220 * __this, UICharInfo_t410  ___x, UICharInfo_t410  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16340(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2220 *, UICharInfo_t410 , UICharInfo_t410 , const MethodInfo*))Comparison_1_Invoke_m16340_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16341_gshared (Comparison_1_t2220 * __this, UICharInfo_t410  ___x, UICharInfo_t410  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16341(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2220 *, UICharInfo_t410 , UICharInfo_t410 , AsyncCallback_t15 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16341_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16342_gshared (Comparison_1_t2220 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16342(__this, ___result, method) (( int32_t (*) (Comparison_1_t2220 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16342_gshared)(__this, ___result, method)
