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

// CardboardEye
struct CardboardEye_t39;
// StereoController
struct StereoController_t37;
// CardboardHead
struct CardboardHead_t44;
// UnityEngine.Camera
struct Camera_t36;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void CardboardEye::.ctor()
extern "C" void CardboardEye__ctor_m153 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController CardboardEye::get_Controller()
extern "C" StereoController_t37 * CardboardEye_get_Controller_m154 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead CardboardEye::get_Head()
extern "C" CardboardHead_t44 * CardboardEye_get_Head_m155 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardEye::get_camera()
extern "C" Camera_t36 * CardboardEye_get_camera_m156 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::set_camera(UnityEngine.Camera)
extern "C" void CardboardEye_set_camera_m157 (CardboardEye_t39 * __this, Camera_t36 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Awake()
extern "C" void CardboardEye_Awake_m158 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::Start()
extern "C" void CardboardEye_Start_m159 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::FixProjection(UnityEngine.Matrix4x4&)
extern "C" void CardboardEye_FixProjection_m160 (CardboardEye_t39 * __this, Matrix4x4_t42 * ___proj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect CardboardEye::FixViewport(UnityEngine.Rect)
extern "C" Rect_t24  CardboardEye_FixViewport_m161 (CardboardEye_t39 * __this, Rect_t24  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::UpdateStereoValues()
extern "C" void CardboardEye_UpdateStereoValues_m162 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::SetupStereo()
extern "C" void CardboardEye_SetupStereo_m163 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::OnPreCull()
extern "C" void CardboardEye_OnPreCull_m164 (CardboardEye_t39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C" void CardboardEye_CopyCameraAndMakeSideBySide_m165 (CardboardEye_t39 * __this, StereoController_t37 * ___controller, float ___parx, float ___pary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
