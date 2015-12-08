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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1923;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1922;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t663;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2443;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2444;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t879;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1928;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12396_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12396(__this, method) (( void (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2__ctor_m12396_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12398_gshared (Dictionary_2_t1923 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12398(__this, ___comparer, method) (( void (*) (Dictionary_2_t1923 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12398_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12400_gshared (Dictionary_2_t1923 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12400(__this, ___capacity, method) (( void (*) (Dictionary_2_t1923 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12400_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12402_gshared (Dictionary_2_t1923 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12402(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1923 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2__ctor_m12402_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12404_gshared (Dictionary_2_t1923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12404(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1923 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12404_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12406_gshared (Dictionary_2_t1923 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12406(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1923 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12406_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12408_gshared (Dictionary_2_t1923 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12408(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1923 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12408_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12410_gshared (Dictionary_2_t1923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12410(__this, ___key, method) (( bool (*) (Dictionary_2_t1923 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12410_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12412_gshared (Dictionary_2_t1923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12412(__this, ___key, method) (( void (*) (Dictionary_2_t1923 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12412_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12414_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12414(__this, method) (( bool (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12414_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12416_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12416(__this, method) (( Object_t * (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12416_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12418_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12418(__this, method) (( bool (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12418_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12420_gshared (Dictionary_2_t1923 * __this, KeyValuePair_2_t1925  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12420(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1923 *, KeyValuePair_2_t1925 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12420_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12422_gshared (Dictionary_2_t1923 * __this, KeyValuePair_2_t1925  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12422(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1923 *, KeyValuePair_2_t1925 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12422_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12424_gshared (Dictionary_2_t1923 * __this, KeyValuePair_2U5BU5D_t2443* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12424(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1923 *, KeyValuePair_2U5BU5D_t2443*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12424_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12426_gshared (Dictionary_2_t1923 * __this, KeyValuePair_2_t1925  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12426(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1923 *, KeyValuePair_2_t1925 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12426_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12428_gshared (Dictionary_2_t1923 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12428(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1923 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12428_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12430_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12430(__this, method) (( Object_t * (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12430_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12432_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12432(__this, method) (( Object_t* (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12432_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12434_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12434(__this, method) (( Object_t * (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12434_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12436_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12436(__this, method) (( int32_t (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_get_Count_m12436_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12438_gshared (Dictionary_2_t1923 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12438(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1923 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12438_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12440_gshared (Dictionary_2_t1923 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12440(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1923 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12440_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12442_gshared (Dictionary_2_t1923 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12442(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1923 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12442_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12444_gshared (Dictionary_2_t1923 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12444(__this, ___size, method) (( void (*) (Dictionary_2_t1923 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12444_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12446_gshared (Dictionary_2_t1923 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12446(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1923 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12446_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1925  Dictionary_2_make_pair_m12448_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12448(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1925  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12448_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12450_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12450(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12450_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12452_gshared (Dictionary_2_t1923 * __this, KeyValuePair_2U5BU5D_t2443* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12452(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1923 *, KeyValuePair_2U5BU5D_t2443*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12452_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12454_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12454(__this, method) (( void (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_Resize_m12454_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12456_gshared (Dictionary_2_t1923 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12456(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1923 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12456_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12458_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12458(__this, method) (( void (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_Clear_m12458_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12460_gshared (Dictionary_2_t1923 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12460(__this, ___key, method) (( bool (*) (Dictionary_2_t1923 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12460_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12462_gshared (Dictionary_2_t1923 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12462(__this, ___value, method) (( bool (*) (Dictionary_2_t1923 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12462_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12464_gshared (Dictionary_2_t1923 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12464(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1923 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2_GetObjectData_m12464_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12466_gshared (Dictionary_2_t1923 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12466(__this, ___sender, method) (( void (*) (Dictionary_2_t1923 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12466_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12468_gshared (Dictionary_2_t1923 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12468(__this, ___key, method) (( bool (*) (Dictionary_2_t1923 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12468_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12470_gshared (Dictionary_2_t1923 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12470(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1923 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12470_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1928 * Dictionary_2_get_Values_m12471_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12471(__this, method) (( ValueCollection_t1928 * (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_get_Values_m12471_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12473_gshared (Dictionary_2_t1923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12473(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1923 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12473_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12475_gshared (Dictionary_2_t1923 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12475(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1923 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12475_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12477_gshared (Dictionary_2_t1923 * __this, KeyValuePair_2_t1925  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12477(__this, ___pair, method) (( bool (*) (Dictionary_2_t1923 *, KeyValuePair_2_t1925 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12477_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1930  Dictionary_2_GetEnumerator_m12478_gshared (Dictionary_2_t1923 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12478(__this, method) (( Enumerator_t1930  (*) (Dictionary_2_t1923 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12478_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1065  Dictionary_2_U3CCopyToU3Em__0_m12480_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12480(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1065  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12480_gshared)(__this /* static, unused */, ___key, ___value, method)
