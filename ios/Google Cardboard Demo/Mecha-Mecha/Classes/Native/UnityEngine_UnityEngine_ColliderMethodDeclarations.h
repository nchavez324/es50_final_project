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

// UnityEngine.Collider
struct Collider_t97;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Boolean UnityEngine.Collider::Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Internal_Raycast_m3131 (Object_t * __this /* static, unused */, Collider_t97 * ___col, Ray_t80  ___ray, RaycastHit_t96 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::INTERNAL_CALL_Internal_Raycast(UnityEngine.Collider,UnityEngine.Ray&,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_INTERNAL_CALL_Internal_Raycast_m3132 (Object_t * __this /* static, unused */, Collider_t97 * ___col, Ray_t80 * ___ray, RaycastHit_t96 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" bool Collider_Raycast_m397 (Collider_t97 * __this, Ray_t80  ___ray, RaycastHit_t96 * ___hitInfo, float ___maxDistance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
