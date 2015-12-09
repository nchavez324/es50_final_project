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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t2310;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17533_gshared (Transform_1_t2310 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17533(__this, ___object, ___method, method) (( void (*) (Transform_1_t2310 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17533_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1065  Transform_1_Invoke_m17534_gshared (Transform_1_t2310 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17534(__this, ___key, ___value, method) (( DictionaryEntry_t1065  (*) (Transform_1_t2310 *, Object_t *, bool, const MethodInfo*))Transform_1_Invoke_m17534_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17535_gshared (Transform_1_t2310 * __this, Object_t * ___key, bool ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17535(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2310 *, Object_t *, bool, AsyncCallback_t15 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17535_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Boolean,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1065  Transform_1_EndInvoke_m17536_gshared (Transform_1_t2310 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17536(__this, ___result, method) (( DictionaryEntry_t1065  (*) (Transform_1_t2310 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17536_gshared)(__this, ___result, method)
