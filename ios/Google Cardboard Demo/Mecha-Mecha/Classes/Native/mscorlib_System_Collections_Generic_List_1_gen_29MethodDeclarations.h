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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t546;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2488;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2489;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2490;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2213;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t659;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2217;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2220;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_32.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m16199_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1__ctor_m16199(__this, method) (( void (*) (List_1_t546 *, const MethodInfo*))List_1__ctor_m16199_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16200_gshared (List_1_t546 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16200(__this, ___collection, method) (( void (*) (List_1_t546 *, Object_t*, const MethodInfo*))List_1__ctor_m16200_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3778_gshared (List_1_t546 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3778(__this, ___capacity, method) (( void (*) (List_1_t546 *, int32_t, const MethodInfo*))List_1__ctor_m3778_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m16201_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16201(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16201_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16202_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16202(__this, method) (( Object_t* (*) (List_1_t546 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16202_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16203_gshared (List_1_t546 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16203(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t546 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16203_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16204_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16204(__this, method) (( Object_t * (*) (List_1_t546 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16204_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16205_gshared (List_1_t546 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16205(__this, ___item, method) (( int32_t (*) (List_1_t546 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16205_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16206_gshared (List_1_t546 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16206(__this, ___item, method) (( bool (*) (List_1_t546 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16206_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16207_gshared (List_1_t546 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16207(__this, ___item, method) (( int32_t (*) (List_1_t546 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16207_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16208_gshared (List_1_t546 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16208(__this, ___index, ___item, method) (( void (*) (List_1_t546 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16208_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16209_gshared (List_1_t546 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16209(__this, ___item, method) (( void (*) (List_1_t546 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16209_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16210_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16210(__this, method) (( bool (*) (List_1_t546 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16210_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16211_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16211(__this, method) (( bool (*) (List_1_t546 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16211_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16212_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16212(__this, method) (( Object_t * (*) (List_1_t546 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16213_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16213(__this, method) (( bool (*) (List_1_t546 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16213_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16214_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16214(__this, method) (( bool (*) (List_1_t546 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16214_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16215_gshared (List_1_t546 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16215(__this, ___index, method) (( Object_t * (*) (List_1_t546 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16215_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16216_gshared (List_1_t546 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16216(__this, ___index, ___value, method) (( void (*) (List_1_t546 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16216_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m16217_gshared (List_1_t546 * __this, UICharInfo_t410  ___item, const MethodInfo* method);
#define List_1_Add_m16217(__this, ___item, method) (( void (*) (List_1_t546 *, UICharInfo_t410 , const MethodInfo*))List_1_Add_m16217_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16218_gshared (List_1_t546 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16218(__this, ___newCount, method) (( void (*) (List_1_t546 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16218_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16219_gshared (List_1_t546 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16219(__this, ___collection, method) (( void (*) (List_1_t546 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16219_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16220_gshared (List_1_t546 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16220(__this, ___enumerable, method) (( void (*) (List_1_t546 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16220_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16221_gshared (List_1_t546 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16221(__this, ___collection, method) (( void (*) (List_1_t546 *, Object_t*, const MethodInfo*))List_1_AddRange_m16221_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2213 * List_1_AsReadOnly_m16222_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16222(__this, method) (( ReadOnlyCollection_1_t2213 * (*) (List_1_t546 *, const MethodInfo*))List_1_AsReadOnly_m16222_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m16223_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_Clear_m16223(__this, method) (( void (*) (List_1_t546 *, const MethodInfo*))List_1_Clear_m16223_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m16224_gshared (List_1_t546 * __this, UICharInfo_t410  ___item, const MethodInfo* method);
#define List_1_Contains_m16224(__this, ___item, method) (( bool (*) (List_1_t546 *, UICharInfo_t410 , const MethodInfo*))List_1_Contains_m16224_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16225_gshared (List_1_t546 * __this, UICharInfoU5BU5D_t659* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16225(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t546 *, UICharInfoU5BU5D_t659*, int32_t, const MethodInfo*))List_1_CopyTo_m16225_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t410  List_1_Find_m16226_gshared (List_1_t546 * __this, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_Find_m16226(__this, ___match, method) (( UICharInfo_t410  (*) (List_1_t546 *, Predicate_1_t2217 *, const MethodInfo*))List_1_Find_m16226_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16227_gshared (Object_t * __this /* static, unused */, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16227(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2217 *, const MethodInfo*))List_1_CheckMatch_m16227_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16228_gshared (List_1_t546 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16228(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t546 *, int32_t, int32_t, Predicate_1_t2217 *, const MethodInfo*))List_1_GetIndex_m16228_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2212  List_1_GetEnumerator_m16229_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16229(__this, method) (( Enumerator_t2212  (*) (List_1_t546 *, const MethodInfo*))List_1_GetEnumerator_m16229_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16230_gshared (List_1_t546 * __this, UICharInfo_t410  ___item, const MethodInfo* method);
#define List_1_IndexOf_m16230(__this, ___item, method) (( int32_t (*) (List_1_t546 *, UICharInfo_t410 , const MethodInfo*))List_1_IndexOf_m16230_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16231_gshared (List_1_t546 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16231(__this, ___start, ___delta, method) (( void (*) (List_1_t546 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16231_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16232_gshared (List_1_t546 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16232(__this, ___index, method) (( void (*) (List_1_t546 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16232_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16233_gshared (List_1_t546 * __this, int32_t ___index, UICharInfo_t410  ___item, const MethodInfo* method);
#define List_1_Insert_m16233(__this, ___index, ___item, method) (( void (*) (List_1_t546 *, int32_t, UICharInfo_t410 , const MethodInfo*))List_1_Insert_m16233_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16234_gshared (List_1_t546 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16234(__this, ___collection, method) (( void (*) (List_1_t546 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16234_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m16235_gshared (List_1_t546 * __this, UICharInfo_t410  ___item, const MethodInfo* method);
#define List_1_Remove_m16235(__this, ___item, method) (( bool (*) (List_1_t546 *, UICharInfo_t410 , const MethodInfo*))List_1_Remove_m16235_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16236_gshared (List_1_t546 * __this, Predicate_1_t2217 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16236(__this, ___match, method) (( int32_t (*) (List_1_t546 *, Predicate_1_t2217 *, const MethodInfo*))List_1_RemoveAll_m16236_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16237_gshared (List_1_t546 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16237(__this, ___index, method) (( void (*) (List_1_t546 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16237_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m16238_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_Reverse_m16238(__this, method) (( void (*) (List_1_t546 *, const MethodInfo*))List_1_Reverse_m16238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m16239_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_Sort_m16239(__this, method) (( void (*) (List_1_t546 *, const MethodInfo*))List_1_Sort_m16239_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16240_gshared (List_1_t546 * __this, Comparison_1_t2220 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16240(__this, ___comparison, method) (( void (*) (List_1_t546 *, Comparison_1_t2220 *, const MethodInfo*))List_1_Sort_m16240_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t659* List_1_ToArray_m16241_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_ToArray_m16241(__this, method) (( UICharInfoU5BU5D_t659* (*) (List_1_t546 *, const MethodInfo*))List_1_ToArray_m16241_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m16242_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16242(__this, method) (( void (*) (List_1_t546 *, const MethodInfo*))List_1_TrimExcess_m16242_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16243_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16243(__this, method) (( int32_t (*) (List_1_t546 *, const MethodInfo*))List_1_get_Capacity_m16243_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16244_gshared (List_1_t546 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16244(__this, ___value, method) (( void (*) (List_1_t546 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16244_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m16245_gshared (List_1_t546 * __this, const MethodInfo* method);
#define List_1_get_Count_m16245(__this, method) (( int32_t (*) (List_1_t546 *, const MethodInfo*))List_1_get_Count_m16245_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t410  List_1_get_Item_m16246_gshared (List_1_t546 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16246(__this, ___index, method) (( UICharInfo_t410  (*) (List_1_t546 *, int32_t, const MethodInfo*))List_1_get_Item_m16246_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16247_gshared (List_1_t546 * __this, int32_t ___index, UICharInfo_t410  ___value, const MethodInfo* method);
#define List_1_set_Item_m16247(__this, ___index, ___value, method) (( void (*) (List_1_t546 *, int32_t, UICharInfo_t410 , const MethodInfo*))List_1_set_Item_m16247_gshared)(__this, ___index, ___value, method)
