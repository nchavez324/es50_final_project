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

// UnityEngine.Camera
struct Camera_t36;
// UnityEngine.RenderTexture
struct RenderTexture_t18;
// UnityEngine.Camera[]
struct CameraU5BU5D_t613;
// UnityEngine.GameObject
struct GameObject_t61;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"

// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C" void Camera_set_fieldOfView_m501 (Camera_t36 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m489 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m490 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m543 (Camera_t36 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
extern "C" void Camera_set_orthographic_m542 (Camera_t36 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m521 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_depth(System.Single)
extern "C" void Camera_set_depth_m522 (Camera_t36 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m518 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
extern "C" void Camera_set_cullingMask_m520 (Camera_t36 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m2966 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
extern "C" void Camera_set_backgroundColor_m541 (Camera_t36 * __this, Color_t17  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_backgroundColor(UnityEngine.Color&)
extern "C" void Camera_INTERNAL_set_backgroundColor_m2967 (Camera_t36 * __this, Color_t17 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_rect()
extern "C" Rect_t24  Camera_get_rect_m487 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
extern "C" void Camera_set_rect_m504 (Camera_t36 * __this, Rect_t24  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_rect_m2968 (Camera_t36 * __this, Rect_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_rect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_set_rect_m2969 (Camera_t36 * __this, Rect_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t24  Camera_get_pixelRect_m658 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m2970 (Camera_t36 * __this, Rect_t24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t18 * Camera_get_targetTexture_m502 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
extern "C" void Camera_set_targetTexture_m503 (Camera_t36 * __this, RenderTexture_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_cameraToWorldMatrix()
extern "C" Matrix4x4_t42  Camera_get_cameraToWorldMatrix_m507 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_cameraToWorldMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_cameraToWorldMatrix_m2971 (Camera_t36 * __this, Matrix4x4_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
extern "C" Matrix4x4_t42  Camera_get_projectionMatrix_m499 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
extern "C" void Camera_set_projectionMatrix_m500 (Camera_t36 * __this, Matrix4x4_t42  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_get_projectionMatrix_m2972 (Camera_t36 * __this, Matrix4x4_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_set_projectionMatrix(UnityEngine.Matrix4x4&)
extern "C" void Camera_INTERNAL_set_projectionMatrix_m2973 (Camera_t36 * __this, Matrix4x4_t42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m2974 (Camera_t36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
extern "C" void Camera_set_clearFlags_m539 (Camera_t36 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t5  Camera_ScreenToViewportPoint_m2301 (Camera_t36 * __this, Vector3_t5  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Vector3_t5  Camera_INTERNAL_CALL_ScreenToViewportPoint_m2975 (Object_t * __this /* static, unused */, Camera_t36 * ___self, Vector3_t5 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t80  Camera_ScreenPointToRay_m2139 (Camera_t36 * __this, Vector3_t5  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" Ray_t80  Camera_INTERNAL_CALL_ScreenPointToRay_m2976 (Object_t * __this /* static, unused */, Camera_t36 * ___self, Vector3_t5 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t36 * Camera_get_main_m457 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_current()
extern "C" Camera_t36 * Camera_get_current_m546 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m2977 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m2978 (Object_t * __this /* static, unused */, CameraU5BU5D_t613* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m2979 (Object_t * __this /* static, unused */, Camera_t36 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m2980 (Object_t * __this /* static, unused */, Camera_t36 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m2981 (Object_t * __this /* static, unused */, Camera_t36 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
extern "C" void Camera_set_useOcclusionCulling_m544 (Camera_t36 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
extern "C" void Camera_CopyFrom_m517 (Camera_t36 * __this, Camera_t36 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t61 * Camera_RaycastTry_m2982 (Camera_t36 * __this, Ray_t80  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" GameObject_t61 * Camera_INTERNAL_CALL_RaycastTry_m2983 (Object_t * __this /* static, unused */, Camera_t36 * ___self, Ray_t80 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t61 * Camera_RaycastTry2D_m2984 (Camera_t36 * __this, Ray_t80  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t61 * Camera_INTERNAL_CALL_RaycastTry2D_m2985 (Object_t * __this /* static, unused */, Camera_t36 * ___self, Ray_t80 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
