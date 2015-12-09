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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t415;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t139;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1887;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2435;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1813;
// System.Object[]
struct ObjectU5BU5D_t94;
// System.Predicate`1<System.Object>
struct Predicate_1_t1826;
// System.Comparison`1<System.Object>
struct Comparison_1_t1832;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m11084_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1__ctor_m11084(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1__ctor_m11084_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m11086_gshared (List_1_t415 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m11086(__this, ___collection, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1__ctor_m11086_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m11088_gshared (List_1_t415 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m11088(__this, ___capacity, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1__ctor_m11088_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m11090_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m11090(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m11090_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11092_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11092(__this, method) (( Object_t* (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11092_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m11094_gshared (List_1_t415 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m11094(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t415 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m11094_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m11096_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11096(__this, method) (( Object_t * (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m11096_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m11098_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m11098(__this, ___item, method) (( int32_t (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m11098_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m11100_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m11100(__this, ___item, method) (( bool (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m11100_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m11102_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m11102(__this, ___item, method) (( int32_t (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m11102_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m11104_gshared (List_1_t415 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m11104(__this, ___index, ___item, method) (( void (*) (List_1_t415 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m11104_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m11106_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m11106(__this, ___item, method) (( void (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m11106_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11108_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11108(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11108_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m11110_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m11110(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m11110_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m11112_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m11112(__this, method) (( Object_t * (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m11112_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m11114_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m11114(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m11114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m11116_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m11116(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m11116_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m11118_gshared (List_1_t415 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m11118(__this, ___index, method) (( Object_t * (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m11118_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m11120_gshared (List_1_t415 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m11120(__this, ___index, ___value, method) (( void (*) (List_1_t415 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m11120_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m11122_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m11122(__this, ___item, method) (( void (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_Add_m11122_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m11124_gshared (List_1_t415 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m11124(__this, ___newCount, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m11124_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m11126_gshared (List_1_t415 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m11126(__this, ___collection, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_AddCollection_m11126_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m11128_gshared (List_1_t415 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m11128(__this, ___enumerable, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m11128_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m11130_gshared (List_1_t415 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m11130(__this, ___collection, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_AddRange_m11130_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1813 * List_1_AsReadOnly_m11132_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m11132(__this, method) (( ReadOnlyCollection_1_t1813 * (*) (List_1_t415 *, const MethodInfo*))List_1_AsReadOnly_m11132_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m11134_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_Clear_m11134(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_Clear_m11134_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m11136_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m11136(__this, ___item, method) (( bool (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_Contains_m11136_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m11138_gshared (List_1_t415 * __this, ObjectU5BU5D_t94* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m11138(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t415 *, ObjectU5BU5D_t94*, int32_t, const MethodInfo*))List_1_CopyTo_m11138_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m11140_gshared (List_1_t415 * __this, Predicate_1_t1826 * ___match, const MethodInfo* method);
#define List_1_Find_m11140(__this, ___match, method) (( Object_t * (*) (List_1_t415 *, Predicate_1_t1826 *, const MethodInfo*))List_1_Find_m11140_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m11142_gshared (Object_t * __this /* static, unused */, Predicate_1_t1826 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m11142(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1826 *, const MethodInfo*))List_1_CheckMatch_m11142_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m11144_gshared (List_1_t415 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1826 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m11144(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t415 *, int32_t, int32_t, Predicate_1_t1826 *, const MethodInfo*))List_1_GetIndex_m11144_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1820  List_1_GetEnumerator_m11146_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m11146(__this, method) (( Enumerator_t1820  (*) (List_1_t415 *, const MethodInfo*))List_1_GetEnumerator_m11146_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m11148_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m11148(__this, ___item, method) (( int32_t (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_IndexOf_m11148_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m11150_gshared (List_1_t415 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m11150(__this, ___start, ___delta, method) (( void (*) (List_1_t415 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m11150_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m11152_gshared (List_1_t415 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m11152(__this, ___index, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_CheckIndex_m11152_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m11154_gshared (List_1_t415 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m11154(__this, ___index, ___item, method) (( void (*) (List_1_t415 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m11154_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m11156_gshared (List_1_t415 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m11156(__this, ___collection, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m11156_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m11158_gshared (List_1_t415 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m11158(__this, ___item, method) (( bool (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_Remove_m11158_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m11160_gshared (List_1_t415 * __this, Predicate_1_t1826 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m11160(__this, ___match, method) (( int32_t (*) (List_1_t415 *, Predicate_1_t1826 *, const MethodInfo*))List_1_RemoveAll_m11160_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m11162_gshared (List_1_t415 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m11162(__this, ___index, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_RemoveAt_m11162_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m11164_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_Reverse_m11164(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_Reverse_m11164_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m11166_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_Sort_m11166(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_Sort_m11166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m11168_gshared (List_1_t415 * __this, Comparison_1_t1832 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m11168(__this, ___comparison, method) (( void (*) (List_1_t415 *, Comparison_1_t1832 *, const MethodInfo*))List_1_Sort_m11168_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t94* List_1_ToArray_m11169_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_ToArray_m11169(__this, method) (( ObjectU5BU5D_t94* (*) (List_1_t415 *, const MethodInfo*))List_1_ToArray_m11169_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m11171_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m11171(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_TrimExcess_m11171_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m11173_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m11173(__this, method) (( int32_t (*) (List_1_t415 *, const MethodInfo*))List_1_get_Capacity_m11173_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m11175_gshared (List_1_t415 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m11175(__this, ___value, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_set_Capacity_m11175_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m11177_gshared (List_1_t415 * __this, const MethodInfo* method);
#define List_1_get_Count_m11177(__this, method) (( int32_t (*) (List_1_t415 *, const MethodInfo*))List_1_get_Count_m11177_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m11179_gshared (List_1_t415 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m11179(__this, ___index, method) (( Object_t * (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_get_Item_m11179_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m11181_gshared (List_1_t415 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m11181(__this, ___index, ___value, method) (( void (*) (List_1_t415 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m11181_gshared)(__this, ___index, ___value, method)
