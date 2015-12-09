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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2001;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t663;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2451;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2452;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t879;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2005;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m13304_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13304(__this, method) (( void (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2__ctor_m13304_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13306_gshared (Dictionary_2_t2001 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13306(__this, ___comparer, method) (( void (*) (Dictionary_2_t2001 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13306_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13308_gshared (Dictionary_2_t2001 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13308(__this, ___capacity, method) (( void (*) (Dictionary_2_t2001 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13308_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13310_gshared (Dictionary_2_t2001 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13310(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2001 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2__ctor_m13310_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13312_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13312(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13312_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13314_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2001 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13314_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13316_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13316(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2001 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13316_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13318_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13318(__this, ___key, method) (( bool (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13318_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13320_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13320(__this, ___key, method) (( void (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13320_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13322_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13322(__this, method) (( bool (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13322_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13324_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13324(__this, method) (( Object_t * (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13324_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13326_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13326(__this, method) (( bool (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13328_gshared (Dictionary_2_t2001 * __this, KeyValuePair_2_t2003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13328(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2001 *, KeyValuePair_2_t2003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13328_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13330_gshared (Dictionary_2_t2001 * __this, KeyValuePair_2_t2003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13330(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2001 *, KeyValuePair_2_t2003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13330_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13332_gshared (Dictionary_2_t2001 * __this, KeyValuePair_2U5BU5D_t2451* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13332(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2001 *, KeyValuePair_2U5BU5D_t2451*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13332_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13334_gshared (Dictionary_2_t2001 * __this, KeyValuePair_2_t2003  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13334(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2001 *, KeyValuePair_2_t2003 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13334_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13336_gshared (Dictionary_2_t2001 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13336(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2001 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13336_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13338_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13338(__this, method) (( Object_t * (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13338_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13340_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13340(__this, method) (( Object_t* (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13340_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13342_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13342(__this, method) (( Object_t * (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13342_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13344_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13344(__this, method) (( int32_t (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_get_Count_m13344_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13346_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13346(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13346_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13348_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13348(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2001 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13348_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13350_gshared (Dictionary_2_t2001 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13350(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2001 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13350_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13352_gshared (Dictionary_2_t2001 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13352(__this, ___size, method) (( void (*) (Dictionary_2_t2001 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13352_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13354_gshared (Dictionary_2_t2001 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13354(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2001 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13354_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2003  Dictionary_2_make_pair_m13356_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13356(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2003  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13356_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13358_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13358(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13358_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13360_gshared (Dictionary_2_t2001 * __this, KeyValuePair_2U5BU5D_t2451* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13360(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2001 *, KeyValuePair_2U5BU5D_t2451*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13360_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13362_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13362(__this, method) (( void (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_Resize_m13362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13364_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13364(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2001 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m13364_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13366_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13366(__this, method) (( void (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_Clear_m13366_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13368_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13368(__this, ___key, method) (( bool (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13368_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13370_gshared (Dictionary_2_t2001 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13370(__this, ___value, method) (( bool (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13370_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13372_gshared (Dictionary_2_t2001 * __this, SerializationInfo_t663 * ___info, StreamingContext_t664  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13372(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2001 *, SerializationInfo_t663 *, StreamingContext_t664 , const MethodInfo*))Dictionary_2_GetObjectData_m13372_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13374_gshared (Dictionary_2_t2001 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13374(__this, ___sender, method) (( void (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13374_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13376_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13376(__this, ___key, method) (( bool (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13376_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13378_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13378(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2001 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13378_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2005 * Dictionary_2_get_Values_m13380_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13380(__this, method) (( ValueCollection_t2005 * (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_get_Values_m13380_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13382_gshared (Dictionary_2_t2001 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13382(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13382_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13384_gshared (Dictionary_2_t2001 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13384(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2001 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13384_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13386_gshared (Dictionary_2_t2001 * __this, KeyValuePair_2_t2003  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13386(__this, ___pair, method) (( bool (*) (Dictionary_2_t2001 *, KeyValuePair_2_t2003 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13386_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2007  Dictionary_2_GetEnumerator_m13388_gshared (Dictionary_2_t2001 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13388(__this, method) (( Enumerator_t2007  (*) (Dictionary_2_t2001 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13388_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1065  Dictionary_2_U3CCopyToU3Em__0_m13390_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13390(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1065  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13390_gshared)(__this /* static, unused */, ___key, ___value, method)
