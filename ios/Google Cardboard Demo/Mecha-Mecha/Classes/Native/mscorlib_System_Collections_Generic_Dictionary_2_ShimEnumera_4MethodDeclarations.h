﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2337;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t999;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17717_gshared (ShimEnumerator_t2337 * __this, Dictionary_2_t999 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17717(__this, ___host, method) (( void (*) (ShimEnumerator_t2337 *, Dictionary_2_t999 *, const MethodInfo*))ShimEnumerator__ctor_m17717_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17718_gshared (ShimEnumerator_t2337 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17718(__this, method) (( bool (*) (ShimEnumerator_t2337 *, const MethodInfo*))ShimEnumerator_MoveNext_m17718_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1065  ShimEnumerator_get_Entry_m17719_gshared (ShimEnumerator_t2337 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17719(__this, method) (( DictionaryEntry_t1065  (*) (ShimEnumerator_t2337 *, const MethodInfo*))ShimEnumerator_get_Entry_m17719_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17720_gshared (ShimEnumerator_t2337 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17720(__this, method) (( Object_t * (*) (ShimEnumerator_t2337 *, const MethodInfo*))ShimEnumerator_get_Key_m17720_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17721_gshared (ShimEnumerator_t2337 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17721(__this, method) (( Object_t * (*) (ShimEnumerator_t2337 *, const MethodInfo*))ShimEnumerator_get_Value_m17721_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17722_gshared (ShimEnumerator_t2337 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17722(__this, method) (( Object_t * (*) (ShimEnumerator_t2337 *, const MethodInfo*))ShimEnumerator_get_Current_m17722_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m17723_gshared (ShimEnumerator_t2337 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17723(__this, method) (( void (*) (ShimEnumerator_t2337 *, const MethodInfo*))ShimEnumerator_Reset_m17723_gshared)(__this, method)
