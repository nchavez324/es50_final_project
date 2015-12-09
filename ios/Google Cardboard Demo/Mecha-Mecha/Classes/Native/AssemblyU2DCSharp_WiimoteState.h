#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IRCoordinate[]
struct IRCoordinateU5BU5D_t10;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharp_ButtonState.h"

// WiimoteState
struct  WiimoteState_t9  : public Object_t
{
	// ButtonState WiimoteState::Buttons
	ButtonState_t7  ___Buttons_0;
	// IRCoordinate[] WiimoteState::IRCoordinates
	IRCoordinateU5BU5D_t10* ___IRCoordinates_1;
	// System.Int32 WiimoteState::PlayerIndex
	int32_t ___PlayerIndex_2;
};
