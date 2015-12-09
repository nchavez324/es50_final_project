#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t45;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// CardboardHead
struct  CardboardHead_t44  : public MonoBehaviour_t2
{
	// System.Boolean CardboardHead::trackRotation
	bool ___trackRotation_2;
	// System.Boolean CardboardHead::trackPosition
	bool ___trackPosition_3;
	// UnityEngine.Transform CardboardHead::target
	Transform_t45 * ___target_4;
	// System.Boolean CardboardHead::updateEarly
	bool ___updateEarly_5;
	// System.Boolean CardboardHead::updated
	bool ___updated_6;
};
