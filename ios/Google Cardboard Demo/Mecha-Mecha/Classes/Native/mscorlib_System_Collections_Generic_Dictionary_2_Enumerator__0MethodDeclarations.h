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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12519_gshared (Enumerator_t1930 * __this, Dictionary_2_t1923 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12519(__this, ___dictionary, method) (( void (*) (Enumerator_t1930 *, Dictionary_2_t1923 *, const MethodInfo*))Enumerator__ctor_m12519_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12520_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12520(__this, method) (( Object_t * (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12520_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12521_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12521(__this, method) (( void (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12521_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1065  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12522_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12522(__this, method) (( DictionaryEntry_t1065  (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12523_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12523(__this, method) (( Object_t * (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12523_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12524_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12524(__this, method) (( Object_t * (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12524_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12525_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12525(__this, method) (( bool (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_MoveNext_m12525_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1925  Enumerator_get_Current_m12526_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12526(__this, method) (( KeyValuePair_2_t1925  (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_get_Current_m12526_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12527_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12527(__this, method) (( int32_t (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_get_CurrentKey_m12527_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12528_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12528(__this, method) (( Object_t * (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_get_CurrentValue_m12528_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m12529_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12529(__this, method) (( void (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_Reset_m12529_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12530_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12530(__this, method) (( void (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_VerifyState_m12530_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12531_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12531(__this, method) (( void (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_VerifyCurrent_m12531_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12532_gshared (Enumerator_t1930 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12532(__this, method) (( void (*) (Enumerator_t1930 *, const MethodInfo*))Enumerator_Dispose_m12532_gshared)(__this, method)
