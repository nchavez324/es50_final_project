﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t73;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1919;
// System.String[]
struct StringU5BU5D_t91;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t571;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2046;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t663;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GUIStyle,System.Collections.DictionaryEntry>
struct Transform_1_t2242;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct  Dictionary_2_t572  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::table
	Int32U5BU5D_t73* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::linkSlots
	LinkU5BU5D_t1919* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::keySlots
	StringU5BU5D_t91* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::valueSlots
	GUIStyleU5BU5D_t571* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::serialization_info
	SerializationInfo_t663 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t572_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>::<>f__am$cacheB
	Transform_1_t2242 * ___U3CU3Ef__amU24cacheB_15;
};
