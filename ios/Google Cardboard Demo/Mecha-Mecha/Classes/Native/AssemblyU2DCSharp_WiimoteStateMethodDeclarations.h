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

// WiimoteState
struct WiimoteState_t9;
// System.String
struct String_t;
// IRCoordinate[]
struct IRCoordinateU5BU5D_t10;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ButtonState.h"

// System.Void WiimoteState::.ctor()
extern "C" void WiimoteState__ctor_m19 (WiimoteState_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WiimoteState::.ctor(System.String)
extern "C" void WiimoteState__ctor_m20 (WiimoteState_t9 * __this, String_t* ___encodedStr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WiimoteState::.ctor(ButtonState,IRCoordinate[],System.Int32)
extern "C" void WiimoteState__ctor_m21 (WiimoteState_t9 * __this, ButtonState_t7  ___buttons, IRCoordinateU5BU5D_t10* ___irCoords, int32_t ___playerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WiimoteState::ToString()
extern "C" String_t* WiimoteState_ToString_m22 (WiimoteState_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
