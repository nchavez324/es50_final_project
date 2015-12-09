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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2401;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m18291_gshared (StaticGetter_1_t2401 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m18291(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2401 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m18291_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m18292_gshared (StaticGetter_1_t2401 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m18292(__this, method) (( Object_t * (*) (StaticGetter_1_t2401 *, const MethodInfo*))StaticGetter_1_Invoke_m18292_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m18293_gshared (StaticGetter_1_t2401 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m18293(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2401 *, AsyncCallback_t15 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m18293_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m18294_gshared (StaticGetter_1_t2401 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m18294(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2401 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m18294_gshared)(__this, ___result, method)
