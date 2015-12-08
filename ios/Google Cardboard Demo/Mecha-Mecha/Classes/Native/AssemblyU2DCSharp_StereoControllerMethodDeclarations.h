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

// StereoController
struct StereoController_t37;
// CardboardEye[]
struct CardboardEyeU5BU5D_t68;
// CardboardHead
struct CardboardHead_t44;
// UnityEngine.Camera
struct Camera_t36;
// System.Collections.IEnumerator
struct IEnumerator_t79;
// CardboardEye
struct CardboardEye_t39;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void StereoController::.ctor()
extern "C" void StereoController__ctor_m246 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardEye[] StereoController::get_Eyes()
extern "C" CardboardEyeU5BU5D_t68* StereoController_get_Eyes_m247 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::get_Head()
extern "C" CardboardHead_t44 * StereoController_get_Head_m248 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C" void StereoController_InvalidateEyes_m249 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::UpdateStereoValues()
extern "C" void StereoController_UpdateStereoValues_m250 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_camera()
extern "C" Camera_t36 * StereoController_get_camera_m251 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_camera(UnityEngine.Camera)
extern "C" void StereoController_set_camera_m252 (StereoController_t37 * __this, Camera_t36 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C" void StereoController_Awake_m253 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C" void StereoController_AddStereoRig_m254 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(Cardboard/Eye)
extern "C" void StereoController_CreateEye_m255 (StereoController_t37 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(Cardboard/Eye,System.Single,System.Single)
extern "C" Vector3_t5  StereoController_ComputeStereoEyePosition_m256 (StereoController_t37 * __this, int32_t ___eye, float ___proj11, float ___zScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C" void StereoController_OnEnable_m257 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C" void StereoController_OnDisable_m258 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C" void StereoController_OnPreCull_m259 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C" Object_t * StereoController_EndOfFrame_m260 (StereoController_t37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(CardboardEye)
extern "C" bool StereoController_U3Cget_EyesU3Em__0_m261 (StereoController_t37 * __this, CardboardEye_t39 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardHead StereoController::<get_Head>m__1(CardboardEye)
extern "C" CardboardHead_t44 * StereoController_U3Cget_HeadU3Em__1_m262 (Object_t * __this /* static, unused */, CardboardEye_t39 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<AddStereoRig>m__2(CardboardEye)
extern "C" bool StereoController_U3CAddStereoRigU3Em__2_m263 (StereoController_t37 * __this, CardboardEye_t39 * ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
