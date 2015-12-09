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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1934;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1923;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12551_gshared (ShimEnumerator_t1934 * __this, Dictionary_2_t1923 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12551(__this, ___host, method) (( void (*) (ShimEnumerator_t1934 *, Dictionary_2_t1923 *, const MethodInfo*))ShimEnumerator__ctor_m12551_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12552_gshared (ShimEnumerator_t1934 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12552(__this, method) (( bool (*) (ShimEnumerator_t1934 *, const MethodInfo*))ShimEnumerator_MoveNext_m12552_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1065  ShimEnumerator_get_Entry_m12553_gshared (ShimEnumerator_t1934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12553(__this, method) (( DictionaryEntry_t1065  (*) (ShimEnumerator_t1934 *, const MethodInfo*))ShimEnumerator_get_Entry_m12553_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12554_gshared (ShimEnumerator_t1934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12554(__this, method) (( Object_t * (*) (ShimEnumerator_t1934 *, const MethodInfo*))ShimEnumerator_get_Key_m12554_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12555_gshared (ShimEnumerator_t1934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12555(__this, method) (( Object_t * (*) (ShimEnumerator_t1934 *, const MethodInfo*))ShimEnumerator_get_Value_m12555_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12556_gshared (ShimEnumerator_t1934 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12556(__this, method) (( Object_t * (*) (ShimEnumerator_t1934 *, const MethodInfo*))ShimEnumerator_get_Current_m12556_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12557_gshared (ShimEnumerator_t1934 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12557(__this, method) (( void (*) (ShimEnumerator_t1934 *, const MethodInfo*))ShimEnumerator_Reset_m12557_gshared)(__this, method)
