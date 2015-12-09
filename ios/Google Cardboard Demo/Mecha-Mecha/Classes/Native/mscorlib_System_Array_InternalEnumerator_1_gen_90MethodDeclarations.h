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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_90.h"
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17887_gshared (InternalEnumerator_1_t2367 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17887(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2367 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17887_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17888_gshared (InternalEnumerator_1_t2367 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17888(__this, method) (( void (*) (InternalEnumerator_1_t2367 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m17888_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17889_gshared (InternalEnumerator_1_t2367 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17889(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2367 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17889_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17890_gshared (InternalEnumerator_1_t2367 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17890(__this, method) (( void (*) (InternalEnumerator_1_t2367 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17890_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17891_gshared (InternalEnumerator_1_t2367 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17891(__this, method) (( bool (*) (InternalEnumerator_1_t2367 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17891_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t1286  InternalEnumerator_1_get_Current_m17892_gshared (InternalEnumerator_1_t2367 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17892(__this, method) (( ILTokenInfo_t1286  (*) (InternalEnumerator_1_t2367 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17892_gshared)(__this, method)
