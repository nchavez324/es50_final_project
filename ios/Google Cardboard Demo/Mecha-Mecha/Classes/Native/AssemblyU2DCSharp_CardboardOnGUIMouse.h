#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t20;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// CardboardOnGUIMouse
struct  CardboardOnGUIMouse_t19  : public MonoBehaviour_t2
{
	// UnityEngine.Texture CardboardOnGUIMouse::pointerImage
	Texture_t20 * ___pointerImage_2;
	// UnityEngine.Vector2 CardboardOnGUIMouse::pointerSize
	Vector2_t21  ___pointerSize_3;
	// UnityEngine.Vector2 CardboardOnGUIMouse::pointerSpot
	Vector2_t21  ___pointerSpot_4;
	// System.Boolean CardboardOnGUIMouse::pointerVisible
	bool ___pointerVisible_5;
	// System.Int32 CardboardOnGUIMouse::pointerX
	int32_t ___pointerX_6;
	// System.Int32 CardboardOnGUIMouse::pointerY
	int32_t ___pointerY_7;
};
