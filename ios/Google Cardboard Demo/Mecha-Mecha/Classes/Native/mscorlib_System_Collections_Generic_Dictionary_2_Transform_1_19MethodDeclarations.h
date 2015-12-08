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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct Transform_1_t2270;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17047_gshared (Transform_1_t2270 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17047(__this, ___object, ___method, method) (( void (*) (Transform_1_t2270 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17047_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2263  Transform_1_Invoke_m17048_gshared (Transform_1_t2270 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17048(__this, ___key, ___value, method) (( KeyValuePair_2_t2263  (*) (Transform_1_t2270 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m17048_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17049_gshared (Transform_1_t2270 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t15 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17049(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2270 *, Object_t *, int32_t, AsyncCallback_t15 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17049_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.TextEditor/TextEditOp,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2263  Transform_1_EndInvoke_m17050_gshared (Transform_1_t2270 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17050(__this, ___result, method) (( KeyValuePair_2_t2263  (*) (Transform_1_t2270 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17050_gshared)(__this, ___result, method)
