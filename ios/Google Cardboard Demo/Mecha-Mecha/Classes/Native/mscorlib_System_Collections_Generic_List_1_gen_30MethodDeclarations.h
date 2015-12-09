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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t547;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2491;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2492;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t412;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2222;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t660;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2226;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2229;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_33.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m16343_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1__ctor_m16343(__this, method) (( void (*) (List_1_t547 *, const MethodInfo*))List_1__ctor_m16343_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m16344_gshared (List_1_t547 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m16344(__this, ___collection, method) (( void (*) (List_1_t547 *, Object_t*, const MethodInfo*))List_1__ctor_m16344_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3779_gshared (List_1_t547 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3779(__this, ___capacity, method) (( void (*) (List_1_t547 *, int32_t, const MethodInfo*))List_1__ctor_m3779_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m16345_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m16345(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m16345_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16346_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16346(__this, method) (( Object_t* (*) (List_1_t547 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16346_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m16347_gshared (List_1_t547 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m16347(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t547 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m16347_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m16348_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16348(__this, method) (( Object_t * (*) (List_1_t547 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m16348_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m16349_gshared (List_1_t547 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m16349(__this, ___item, method) (( int32_t (*) (List_1_t547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m16349_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m16350_gshared (List_1_t547 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m16350(__this, ___item, method) (( bool (*) (List_1_t547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m16350_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m16351_gshared (List_1_t547 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m16351(__this, ___item, method) (( int32_t (*) (List_1_t547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m16351_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m16352_gshared (List_1_t547 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m16352(__this, ___index, ___item, method) (( void (*) (List_1_t547 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m16352_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m16353_gshared (List_1_t547 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m16353(__this, ___item, method) (( void (*) (List_1_t547 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m16353_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16354_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16354(__this, method) (( bool (*) (List_1_t547 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16354_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m16355_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16355(__this, method) (( bool (*) (List_1_t547 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m16355_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m16356_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m16356(__this, method) (( Object_t * (*) (List_1_t547 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m16356_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m16357_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m16357(__this, method) (( bool (*) (List_1_t547 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m16357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m16358_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m16358(__this, method) (( bool (*) (List_1_t547 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m16358_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m16359_gshared (List_1_t547 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m16359(__this, ___index, method) (( Object_t * (*) (List_1_t547 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m16359_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m16360_gshared (List_1_t547 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m16360(__this, ___index, ___value, method) (( void (*) (List_1_t547 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m16360_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m16361_gshared (List_1_t547 * __this, UILineInfo_t408  ___item, const MethodInfo* method);
#define List_1_Add_m16361(__this, ___item, method) (( void (*) (List_1_t547 *, UILineInfo_t408 , const MethodInfo*))List_1_Add_m16361_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m16362_gshared (List_1_t547 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m16362(__this, ___newCount, method) (( void (*) (List_1_t547 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m16362_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m16363_gshared (List_1_t547 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m16363(__this, ___collection, method) (( void (*) (List_1_t547 *, Object_t*, const MethodInfo*))List_1_AddCollection_m16363_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m16364_gshared (List_1_t547 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m16364(__this, ___enumerable, method) (( void (*) (List_1_t547 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m16364_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m16365_gshared (List_1_t547 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m16365(__this, ___collection, method) (( void (*) (List_1_t547 *, Object_t*, const MethodInfo*))List_1_AddRange_m16365_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2222 * List_1_AsReadOnly_m16366_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m16366(__this, method) (( ReadOnlyCollection_1_t2222 * (*) (List_1_t547 *, const MethodInfo*))List_1_AsReadOnly_m16366_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m16367_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_Clear_m16367(__this, method) (( void (*) (List_1_t547 *, const MethodInfo*))List_1_Clear_m16367_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m16368_gshared (List_1_t547 * __this, UILineInfo_t408  ___item, const MethodInfo* method);
#define List_1_Contains_m16368(__this, ___item, method) (( bool (*) (List_1_t547 *, UILineInfo_t408 , const MethodInfo*))List_1_Contains_m16368_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m16369_gshared (List_1_t547 * __this, UILineInfoU5BU5D_t660* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m16369(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t547 *, UILineInfoU5BU5D_t660*, int32_t, const MethodInfo*))List_1_CopyTo_m16369_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t408  List_1_Find_m16370_gshared (List_1_t547 * __this, Predicate_1_t2226 * ___match, const MethodInfo* method);
#define List_1_Find_m16370(__this, ___match, method) (( UILineInfo_t408  (*) (List_1_t547 *, Predicate_1_t2226 *, const MethodInfo*))List_1_Find_m16370_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m16371_gshared (Object_t * __this /* static, unused */, Predicate_1_t2226 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m16371(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2226 *, const MethodInfo*))List_1_CheckMatch_m16371_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m16372_gshared (List_1_t547 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2226 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m16372(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t547 *, int32_t, int32_t, Predicate_1_t2226 *, const MethodInfo*))List_1_GetIndex_m16372_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2221  List_1_GetEnumerator_m16373_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m16373(__this, method) (( Enumerator_t2221  (*) (List_1_t547 *, const MethodInfo*))List_1_GetEnumerator_m16373_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m16374_gshared (List_1_t547 * __this, UILineInfo_t408  ___item, const MethodInfo* method);
#define List_1_IndexOf_m16374(__this, ___item, method) (( int32_t (*) (List_1_t547 *, UILineInfo_t408 , const MethodInfo*))List_1_IndexOf_m16374_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m16375_gshared (List_1_t547 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m16375(__this, ___start, ___delta, method) (( void (*) (List_1_t547 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m16375_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m16376_gshared (List_1_t547 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m16376(__this, ___index, method) (( void (*) (List_1_t547 *, int32_t, const MethodInfo*))List_1_CheckIndex_m16376_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m16377_gshared (List_1_t547 * __this, int32_t ___index, UILineInfo_t408  ___item, const MethodInfo* method);
#define List_1_Insert_m16377(__this, ___index, ___item, method) (( void (*) (List_1_t547 *, int32_t, UILineInfo_t408 , const MethodInfo*))List_1_Insert_m16377_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m16378_gshared (List_1_t547 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m16378(__this, ___collection, method) (( void (*) (List_1_t547 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m16378_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m16379_gshared (List_1_t547 * __this, UILineInfo_t408  ___item, const MethodInfo* method);
#define List_1_Remove_m16379(__this, ___item, method) (( bool (*) (List_1_t547 *, UILineInfo_t408 , const MethodInfo*))List_1_Remove_m16379_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m16380_gshared (List_1_t547 * __this, Predicate_1_t2226 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m16380(__this, ___match, method) (( int32_t (*) (List_1_t547 *, Predicate_1_t2226 *, const MethodInfo*))List_1_RemoveAll_m16380_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m16381_gshared (List_1_t547 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m16381(__this, ___index, method) (( void (*) (List_1_t547 *, int32_t, const MethodInfo*))List_1_RemoveAt_m16381_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m16382_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_Reverse_m16382(__this, method) (( void (*) (List_1_t547 *, const MethodInfo*))List_1_Reverse_m16382_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m16383_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_Sort_m16383(__this, method) (( void (*) (List_1_t547 *, const MethodInfo*))List_1_Sort_m16383_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m16384_gshared (List_1_t547 * __this, Comparison_1_t2229 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m16384(__this, ___comparison, method) (( void (*) (List_1_t547 *, Comparison_1_t2229 *, const MethodInfo*))List_1_Sort_m16384_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t660* List_1_ToArray_m16385_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_ToArray_m16385(__this, method) (( UILineInfoU5BU5D_t660* (*) (List_1_t547 *, const MethodInfo*))List_1_ToArray_m16385_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m16386_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m16386(__this, method) (( void (*) (List_1_t547 *, const MethodInfo*))List_1_TrimExcess_m16386_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m16387_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m16387(__this, method) (( int32_t (*) (List_1_t547 *, const MethodInfo*))List_1_get_Capacity_m16387_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m16388_gshared (List_1_t547 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m16388(__this, ___value, method) (( void (*) (List_1_t547 *, int32_t, const MethodInfo*))List_1_set_Capacity_m16388_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m16389_gshared (List_1_t547 * __this, const MethodInfo* method);
#define List_1_get_Count_m16389(__this, method) (( int32_t (*) (List_1_t547 *, const MethodInfo*))List_1_get_Count_m16389_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t408  List_1_get_Item_m16390_gshared (List_1_t547 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m16390(__this, ___index, method) (( UILineInfo_t408  (*) (List_1_t547 *, int32_t, const MethodInfo*))List_1_get_Item_m16390_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m16391_gshared (List_1_t547 * __this, int32_t ___index, UILineInfo_t408  ___value, const MethodInfo* method);
#define List_1_set_Item_m16391(__this, ___index, ___value, method) (( void (*) (List_1_t547 *, int32_t, UILineInfo_t408 , const MethodInfo*))List_1_set_Item_m16391_gshared)(__this, ___index, ___value, method)
