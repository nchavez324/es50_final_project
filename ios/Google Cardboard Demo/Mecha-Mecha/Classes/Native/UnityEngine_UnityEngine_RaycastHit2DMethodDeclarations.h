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

// UnityEngine.Collider2D
struct Collider2D_t384;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t520;
// UnityEngine.Transform
struct Transform_t45;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t21  RaycastHit2D_get_point_m2147 (RaycastHit2D_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t21  RaycastHit2D_get_normal_m2148 (RaycastHit2D_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m2304 (RaycastHit2D_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t384 * RaycastHit2D_get_collider_m2143 (RaycastHit2D_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t520 * RaycastHit2D_get_rigidbody_m3140 (RaycastHit2D_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t45 * RaycastHit2D_get_transform_m2145 (RaycastHit2D_t383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
