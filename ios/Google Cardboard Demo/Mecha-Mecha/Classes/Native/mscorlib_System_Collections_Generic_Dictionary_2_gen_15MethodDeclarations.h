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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t999;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1922;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t663;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2506;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2507;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t879;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2332;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17615_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17615(__this, method) (( void (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2__ctor_m17615_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17616_gshared (Dictionary_2_t999 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17616(__this, ___comparer, method) (( void (*) (Dictionary_2_t999 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17616_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17617_gshared (Dictionary_2_t999 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17617(__this, ___capacity, method) (( void (*) (Dictionary_2_t999 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17617_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17618_gshared (Dictionary_2_t999 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17618(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t999 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2__ctor_m17618_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17619_gshared (Dictionary_2_t999 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17619(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t999 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17619_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17620_gshared (Dictionary_2_t999 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17620(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t999 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17620_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17621_gshared (Dictionary_2_t999 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17621(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t999 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17621_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17622_gshared (Dictionary_2_t999 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17622(__this, ___key, method) (( bool (*) (Dictionary_2_t999 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17622_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17623_gshared (Dictionary_2_t999 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17623(__this, ___key, method) (( void (*) (Dictionary_2_t999 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17623_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17624_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17624(__this, method) (( bool (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17624_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17625_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17625(__this, method) (( Object_t * (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17625_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17626_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17626(__this, method) (( bool (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17627_gshared (Dictionary_2_t999 * __this, KeyValuePair_2_t2330  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17627(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t999 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17627_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17628_gshared (Dictionary_2_t999 * __this, KeyValuePair_2_t2330  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17628(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t999 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17628_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17629_gshared (Dictionary_2_t999 * __this, KeyValuePair_2U5BU5D_t2506* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17629(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t999 *, KeyValuePair_2U5BU5D_t2506*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17629_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17630_gshared (Dictionary_2_t999 * __this, KeyValuePair_2_t2330  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17630(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t999 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17630_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17631_gshared (Dictionary_2_t999 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17631(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t999 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17631_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17632_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17632(__this, method) (( Object_t * (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17632_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633(__this, method) (( Object_t* (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17633_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17634_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17634(__this, method) (( Object_t * (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17634_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17635_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17635(__this, method) (( int32_t (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_get_Count_m17635_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17636_gshared (Dictionary_2_t999 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17636(__this, ___key, method) (( int32_t (*) (Dictionary_2_t999 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17636_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17637_gshared (Dictionary_2_t999 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17637(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t999 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17637_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17638_gshared (Dictionary_2_t999 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17638(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t999 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17638_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17639_gshared (Dictionary_2_t999 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17639(__this, ___size, method) (( void (*) (Dictionary_2_t999 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17639_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17640_gshared (Dictionary_2_t999 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17640(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t999 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17640_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2330  Dictionary_2_make_pair_m17641_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17641(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2330  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17641_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17642_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17642(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17642_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17643_gshared (Dictionary_2_t999 * __this, KeyValuePair_2U5BU5D_t2506* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17643(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t999 *, KeyValuePair_2U5BU5D_t2506*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17643_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17644_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17644(__this, method) (( void (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_Resize_m17644_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17645_gshared (Dictionary_2_t999 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17645(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t999 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m17645_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17646_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17646(__this, method) (( void (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_Clear_m17646_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17647_gshared (Dictionary_2_t999 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17647(__this, ___key, method) (( bool (*) (Dictionary_2_t999 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17647_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17648_gshared (Dictionary_2_t999 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17648(__this, ___value, method) (( bool (*) (Dictionary_2_t999 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17648_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17649_gshared (Dictionary_2_t999 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17649(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t999 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2_GetObjectData_m17649_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17650_gshared (Dictionary_2_t999 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17650(__this, ___sender, method) (( void (*) (Dictionary_2_t999 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17650_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17651_gshared (Dictionary_2_t999 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17651(__this, ___key, method) (( bool (*) (Dictionary_2_t999 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17651_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17652_gshared (Dictionary_2_t999 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17652(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t999 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17652_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2332 * Dictionary_2_get_Values_m17653_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17653(__this, method) (( ValueCollection_t2332 * (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_get_Values_m17653_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17654_gshared (Dictionary_2_t999 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17654(__this, ___key, method) (( int32_t (*) (Dictionary_2_t999 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17654_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17655_gshared (Dictionary_2_t999 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17655(__this, ___value, method) (( int32_t (*) (Dictionary_2_t999 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17655_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17656_gshared (Dictionary_2_t999 * __this, KeyValuePair_2_t2330  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17656(__this, ___pair, method) (( bool (*) (Dictionary_2_t999 *, KeyValuePair_2_t2330 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17656_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2334  Dictionary_2_GetEnumerator_m17657_gshared (Dictionary_2_t999 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17657(__this, method) (( Enumerator_t2334  (*) (Dictionary_2_t999 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17657_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1065  Dictionary_2_U3CCopyToU3Em__0_m17658_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17658(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1065  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17658_gshared)(__this /* static, unused */, ___key, ___value, method)
