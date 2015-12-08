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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1862;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1887;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m11626_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1__ctor_m11626(__this, method) (( void (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1__ctor_m11626_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m11627_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m11627(__this, method) (( bool (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m11627_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m11628_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m11628(__this, method) (( Object_t * (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m11628_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m11629_gshared (Stack_1_t1862 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m11629(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1862 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m11629_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11630_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11630(__this, method) (( Object_t* (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11630_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m11631_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m11631(__this, method) (( Object_t * (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m11631_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m11632_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_Peek_m11632(__this, method) (( Object_t * (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_Peek_m11632_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m11633_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_Pop_m11633(__this, method) (( Object_t * (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_Pop_m11633_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m11634_gshared (Stack_1_t1862 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m11634(__this, ___t, method) (( void (*) (Stack_1_t1862 *, Object_t *, const MethodInfo*))Stack_1_Push_m11634_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m11635_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m11635(__this, method) (( int32_t (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_get_Count_m11635_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1864  Stack_1_GetEnumerator_m11636_gshared (Stack_1_t1862 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m11636(__this, method) (( Enumerator_t1864  (*) (Stack_1_t1862 *, const MethodInfo*))Stack_1_GetEnumerator_m11636_gshared)(__this, method)
