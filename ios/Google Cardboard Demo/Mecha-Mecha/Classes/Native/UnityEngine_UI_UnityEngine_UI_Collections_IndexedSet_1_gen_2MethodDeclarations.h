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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1949;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1887;
// System.Object[]
struct ObjectU5BU5D_t94;
// System.Predicate`1<System.Object>
struct Predicate_1_t1826;
// System.Comparison`1<System.Object>
struct Comparison_1_t1832;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12735_gshared (IndexedSet_1_t1949 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12735(__this, method) (( void (*) (IndexedSet_1_t1949 *, const MethodInfo*))IndexedSet_1__ctor_m12735_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12737_gshared (IndexedSet_1_t1949 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12737(__this, method) (( Object_t * (*) (IndexedSet_1_t1949 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12737_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12739_gshared (IndexedSet_1_t1949 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12739(__this, ___item, method) (( void (*) (IndexedSet_1_t1949 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12739_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12741_gshared (IndexedSet_1_t1949 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12741(__this, ___item, method) (( bool (*) (IndexedSet_1_t1949 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12741_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12743_gshared (IndexedSet_1_t1949 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12743(__this, method) (( Object_t* (*) (IndexedSet_1_t1949 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12743_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12745_gshared (IndexedSet_1_t1949 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12745(__this, method) (( void (*) (IndexedSet_1_t1949 *, const MethodInfo*))IndexedSet_1_Clear_m12745_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12747_gshared (IndexedSet_1_t1949 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12747(__this, ___item, method) (( bool (*) (IndexedSet_1_t1949 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12747_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12749_gshared (IndexedSet_1_t1949 * __this, ObjectU5BU5D_t94* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12749(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1949 *, ObjectU5BU5D_t94*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12749_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12751_gshared (IndexedSet_1_t1949 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12751(__this, method) (( int32_t (*) (IndexedSet_1_t1949 *, const MethodInfo*))IndexedSet_1_get_Count_m12751_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12753_gshared (IndexedSet_1_t1949 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12753(__this, method) (( bool (*) (IndexedSet_1_t1949 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12753_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12755_gshared (IndexedSet_1_t1949 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12755(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1949 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12755_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12757_gshared (IndexedSet_1_t1949 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12757(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1949 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12757_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12759_gshared (IndexedSet_1_t1949 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12759(__this, ___index, method) (( void (*) (IndexedSet_1_t1949 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12759_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12761_gshared (IndexedSet_1_t1949 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12761(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1949 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12761_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12763_gshared (IndexedSet_1_t1949 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12763(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1949 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12763_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12765_gshared (IndexedSet_1_t1949 * __this, Predicate_1_t1826 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12765(__this, ___match, method) (( void (*) (IndexedSet_1_t1949 *, Predicate_1_t1826 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12765_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12766_gshared (IndexedSet_1_t1949 * __this, Comparison_1_t1832 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12766(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1949 *, Comparison_1_t1832 *, const MethodInfo*))IndexedSet_1_Sort_m12766_gshared)(__this, ___sortLayoutFunction, method)
