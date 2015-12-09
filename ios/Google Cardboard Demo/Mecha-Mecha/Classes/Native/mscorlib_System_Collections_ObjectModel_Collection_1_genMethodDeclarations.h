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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1822;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t94;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1887;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1821;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m11219_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1__ctor_m11219(__this, method) (( void (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1__ctor_m11219_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11220_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11220(__this, method) (( bool (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11220_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m11221_gshared (Collection_1_t1822 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m11221(__this, ___array, ___index, method) (( void (*) (Collection_1_t1822 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m11221_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m11222_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m11222(__this, method) (( Object_t * (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m11222_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m11223_gshared (Collection_1_t1822 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m11223(__this, ___value, method) (( int32_t (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m11223_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m11224_gshared (Collection_1_t1822 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m11224(__this, ___value, method) (( bool (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m11224_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m11225_gshared (Collection_1_t1822 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m11225(__this, ___value, method) (( int32_t (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m11225_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m11226_gshared (Collection_1_t1822 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m11226(__this, ___index, ___value, method) (( void (*) (Collection_1_t1822 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m11226_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m11227_gshared (Collection_1_t1822 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m11227(__this, ___value, method) (( void (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m11227_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m11228_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m11228(__this, method) (( bool (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m11228_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m11229_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m11229(__this, method) (( Object_t * (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m11229_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m11230_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m11230(__this, method) (( bool (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m11230_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m11231_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m11231(__this, method) (( bool (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m11231_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m11232_gshared (Collection_1_t1822 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m11232(__this, ___index, method) (( Object_t * (*) (Collection_1_t1822 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m11232_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m11233_gshared (Collection_1_t1822 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m11233(__this, ___index, ___value, method) (( void (*) (Collection_1_t1822 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m11233_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m11234_gshared (Collection_1_t1822 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m11234(__this, ___item, method) (( void (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_Add_m11234_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m11235_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_Clear_m11235(__this, method) (( void (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_Clear_m11235_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m11236_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m11236(__this, method) (( void (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_ClearItems_m11236_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m11237_gshared (Collection_1_t1822 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m11237(__this, ___item, method) (( bool (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_Contains_m11237_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m11238_gshared (Collection_1_t1822 * __this, ObjectU5BU5D_t94* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m11238(__this, ___array, ___index, method) (( void (*) (Collection_1_t1822 *, ObjectU5BU5D_t94*, int32_t, const MethodInfo*))Collection_1_CopyTo_m11238_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m11239_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m11239(__this, method) (( Object_t* (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_GetEnumerator_m11239_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m11240_gshared (Collection_1_t1822 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m11240(__this, ___item, method) (( int32_t (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m11240_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m11241_gshared (Collection_1_t1822 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m11241(__this, ___index, ___item, method) (( void (*) (Collection_1_t1822 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m11241_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m11242_gshared (Collection_1_t1822 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m11242(__this, ___index, ___item, method) (( void (*) (Collection_1_t1822 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m11242_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m11243_gshared (Collection_1_t1822 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m11243(__this, ___item, method) (( bool (*) (Collection_1_t1822 *, Object_t *, const MethodInfo*))Collection_1_Remove_m11243_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m11244_gshared (Collection_1_t1822 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m11244(__this, ___index, method) (( void (*) (Collection_1_t1822 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m11244_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11245_gshared (Collection_1_t1822 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11245(__this, ___index, method) (( void (*) (Collection_1_t1822 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11245_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11246_gshared (Collection_1_t1822 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11246(__this, method) (( int32_t (*) (Collection_1_t1822 *, const MethodInfo*))Collection_1_get_Count_m11246_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11247_gshared (Collection_1_t1822 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11247(__this, ___index, method) (( Object_t * (*) (Collection_1_t1822 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11247_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11248_gshared (Collection_1_t1822 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11248(__this, ___index, ___value, method) (( void (*) (Collection_1_t1822 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11248_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11249_gshared (Collection_1_t1822 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11249(__this, ___index, ___item, method) (( void (*) (Collection_1_t1822 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11249_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11250_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11250(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11250_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11251_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11251(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11251_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11252_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11252(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11252_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11253_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11253(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11253_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11254_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11254(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11254_gshared)(__this /* static, unused */, ___list, method)
