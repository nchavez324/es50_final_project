﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t20;
// UnityEngine.GUIContent
struct GUIContent_t557;

#include "mscorlib_System_Object.h"

// UnityEngine.GUIContent
struct  GUIContent_t557  : public Object_t
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t20 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};
struct GUIContent_t557_StaticFields{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t557 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t557 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t557 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t557 * ___none_6;
};
