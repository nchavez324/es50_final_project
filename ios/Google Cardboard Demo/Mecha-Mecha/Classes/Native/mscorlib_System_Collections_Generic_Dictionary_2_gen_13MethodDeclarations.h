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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2261;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t663;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2497;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2498;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t879;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2266;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m16900_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16900(__this, method) (( void (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2__ctor_m16900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16902_gshared (Dictionary_2_t2261 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16902(__this, ___comparer, method) (( void (*) (Dictionary_2_t2261 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16902_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16904_gshared (Dictionary_2_t2261 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16904(__this, ___capacity, method) (( void (*) (Dictionary_2_t2261 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16904_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16906_gshared (Dictionary_2_t2261 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16906(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2261 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2__ctor_m16906_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16908_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16908(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16908_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16910_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16910(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2261 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16910_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16912_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16912(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2261 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16912_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16914_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16914(__this, ___key, method) (( bool (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16914_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16916_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16916(__this, ___key, method) (( void (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16916_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16918_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16918(__this, method) (( bool (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16918_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16920_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16920(__this, method) (( Object_t * (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16920_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16922_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16922(__this, method) (( bool (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16924_gshared (Dictionary_2_t2261 * __this, KeyValuePair_2_t2263  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16924(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2261 *, KeyValuePair_2_t2263 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16924_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16926_gshared (Dictionary_2_t2261 * __this, KeyValuePair_2_t2263  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16926(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2261 *, KeyValuePair_2_t2263 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16926_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16928_gshared (Dictionary_2_t2261 * __this, KeyValuePair_2U5BU5D_t2497* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16928(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2261 *, KeyValuePair_2U5BU5D_t2497*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16928_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16930_gshared (Dictionary_2_t2261 * __this, KeyValuePair_2_t2263  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16930(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2261 *, KeyValuePair_2_t2263 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16930_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16932_gshared (Dictionary_2_t2261 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16932(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2261 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16932_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16934_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16934(__this, method) (( Object_t * (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16934_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16936_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16936(__this, method) (( Object_t* (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16936_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16938_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16938(__this, method) (( Object_t * (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16938_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16940_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16940(__this, method) (( int32_t (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_get_Count_m16940_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16942_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16942(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16942_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16944_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16944(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2261 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16944_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16946_gshared (Dictionary_2_t2261 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16946(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2261 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16946_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16948_gshared (Dictionary_2_t2261 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16948(__this, ___size, method) (( void (*) (Dictionary_2_t2261 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16948_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16950_gshared (Dictionary_2_t2261 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16950(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2261 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16950_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2263  Dictionary_2_make_pair_m16952_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16952(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2263  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16952_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16954_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16954(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16954_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16956_gshared (Dictionary_2_t2261 * __this, KeyValuePair_2U5BU5D_t2497* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2261 *, KeyValuePair_2U5BU5D_t2497*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16956_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m16958_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16958(__this, method) (( void (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_Resize_m16958_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16960_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16960(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2261 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16960_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m16962_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16962(__this, method) (( void (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_Clear_m16962_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16964_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16964(__this, ___key, method) (( bool (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16964_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16966_gshared (Dictionary_2_t2261 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16966(__this, ___value, method) (( bool (*) (Dictionary_2_t2261 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16966_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16968_gshared (Dictionary_2_t2261 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16968(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2261 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2_GetObjectData_m16968_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16970_gshared (Dictionary_2_t2261 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16970(__this, ___sender, method) (( void (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16970_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16972_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16972(__this, ___key, method) (( bool (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16972_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16974_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16974(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2261 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16974_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2266 * Dictionary_2_get_Values_m16976_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16976(__this, method) (( ValueCollection_t2266 * (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_get_Values_m16976_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16978_gshared (Dictionary_2_t2261 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16978(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16978_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16980_gshared (Dictionary_2_t2261 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16980(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2261 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16980_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16982_gshared (Dictionary_2_t2261 * __this, KeyValuePair_2_t2263  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16982(__this, ___pair, method) (( bool (*) (Dictionary_2_t2261 *, KeyValuePair_2_t2263 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16982_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2268  Dictionary_2_GetEnumerator_m16984_gshared (Dictionary_2_t2261 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16984(__this, method) (( Enumerator_t2268  (*) (Dictionary_2_t2261 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16984_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1065  Dictionary_2_U3CCopyToU3Em__0_m16986_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16986(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1065  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16986_gshared)(__this /* static, unused */, ___key, ___value, method)
