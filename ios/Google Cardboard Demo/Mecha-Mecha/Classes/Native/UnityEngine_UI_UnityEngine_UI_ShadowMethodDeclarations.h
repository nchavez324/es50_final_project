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

// UnityEngine.UI.Shadow
struct Shadow_t345;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t360;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t231;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
extern "C" void Shadow__ctor_m2048 (Shadow_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
extern "C" Color_t17  Shadow_get_effectColor_m2049 (Shadow_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
extern "C" void Shadow_set_effectColor_m2050 (Shadow_t345 * __this, Color_t17  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
extern "C" Vector2_t21  Shadow_get_effectDistance_m2051 (Shadow_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
extern "C" void Shadow_set_effectDistance_m2052 (Shadow_t345 * __this, Vector2_t21  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
extern "C" bool Shadow_get_useGraphicAlpha_m2053 (Shadow_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
extern "C" void Shadow_set_useGraphicAlpha_m2054 (Shadow_t345 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadowZeroAlloc(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C" void Shadow_ApplyShadowZeroAlloc_m2055 (Shadow_t345 * __this, List_1_t360 * ___verts, Color32_t362  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
extern "C" void Shadow_ApplyShadow_m2056 (Shadow_t345 * __this, List_1_t360 * ___verts, Color32_t362  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyMesh(UnityEngine.UI.VertexHelper)
extern "C" void Shadow_ModifyMesh_m2057 (Shadow_t345 * __this, VertexHelper_t231 * ___vh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
