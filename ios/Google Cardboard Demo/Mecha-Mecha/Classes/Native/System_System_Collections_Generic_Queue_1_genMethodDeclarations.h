﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t72;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2441;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// System.Int32[]
struct Int32U5BU5D_t73;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
extern "C" void Queue_1__ctor_m660_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1__ctor_m660(__this, method) (( void (*) (Queue_1_t72 *, const MethodInfo*))Queue_1__ctor_m660_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m11956_gshared (Queue_1_t72 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m11956(__this, ___array, ___idx, method) (( void (*) (Queue_1_t72 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m11956_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m11957_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m11957(__this, method) (( bool (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m11957_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m11958_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m11958(__this, method) (( Object_t * (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m11958_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11959_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11959(__this, method) (( Object_t* (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11959_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m11960_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m11960(__this, method) (( Object_t * (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m11960_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
extern "C" void Queue_1_Clear_m670_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_Clear_m670(__this, method) (( void (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_Clear_m670_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m669_gshared (Queue_1_t72 * __this, Int32U5BU5D_t73* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m669(__this, ___array, ___idx, method) (( void (*) (Queue_1_t72 *, Int32U5BU5D_t73*, int32_t, const MethodInfo*))Queue_1_CopyTo_m669_gshared)(__this, ___array, ___idx, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m672_gshared (Queue_1_t72 * __this, int32_t ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m672(__this, ___item, method) (( void (*) (Queue_1_t72 *, int32_t, const MethodInfo*))Queue_1_Enqueue_m672_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Int32>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m11961_gshared (Queue_1_t72 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m11961(__this, ___new_size, method) (( void (*) (Queue_1_t72 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m11961_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
extern "C" int32_t Queue_1_get_Count_m11962_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m11962(__this, method) (( int32_t (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_get_Count_m11962_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1890  Queue_1_GetEnumerator_m11963_gshared (Queue_1_t72 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m11963(__this, method) (( Enumerator_t1890  (*) (Queue_1_t72 *, const MethodInfo*))Queue_1_GetEnumerator_m11963_gshared)(__this, method)
