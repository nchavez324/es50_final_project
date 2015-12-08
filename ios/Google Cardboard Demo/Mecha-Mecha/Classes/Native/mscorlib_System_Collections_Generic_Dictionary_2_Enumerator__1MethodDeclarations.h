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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1950;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12843_gshared (Enumerator_t1957 * __this, Dictionary_2_t1950 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12843(__this, ___dictionary, method) (( void (*) (Enumerator_t1957 *, Dictionary_2_t1950 *, const MethodInfo*))Enumerator__ctor_m12843_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12844_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12844(__this, method) (( Object_t * (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12844_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12845_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12845(__this, method) (( void (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12845_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1065  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12846_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12846(__this, method) (( DictionaryEntry_t1065  (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12846_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12847_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12847(__this, method) (( Object_t * (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12847_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12848_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12848(__this, method) (( Object_t * (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12848_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12849_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12849(__this, method) (( bool (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_MoveNext_m12849_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1953  Enumerator_get_Current_m12850_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12850(__this, method) (( KeyValuePair_2_t1953  (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_get_Current_m12850_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12851_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12851(__this, method) (( Object_t * (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_get_CurrentKey_m12851_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12852_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12852(__this, method) (( int32_t (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_get_CurrentValue_m12852_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m12853_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12853(__this, method) (( void (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_Reset_m12853_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12854_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12854(__this, method) (( void (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_VerifyState_m12854_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12855_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12855(__this, method) (( void (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_VerifyCurrent_m12855_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12856_gshared (Enumerator_t1957 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12856(__this, method) (( void (*) (Enumerator_t1957 *, const MethodInfo*))Enumerator_Dispose_m12856_gshared)(__this, method)
