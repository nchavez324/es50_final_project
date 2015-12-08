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

// Cardboard
struct Cardboard_t33;
// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t31;
// System.Action
struct Action_t35;
// StereoController
struct StereoController_t37;
// UnityEngine.RenderTexture
struct RenderTexture_t18;
// CardboardProfile
struct CardboardProfile_t58;
// Pose3D
struct Pose3D_t63;
// System.Collections.IEnumerator
struct IEnumerator_t79;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Cardboard_DistortionCorrectionMethod.h"
#include "AssemblyU2DCSharp_Cardboard_BackButtonModes.h"
#include "AssemblyU2DCSharp_Cardboard_Eye.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "AssemblyU2DCSharp_Cardboard_Distortion.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Cardboard::.ctor()
extern "C" void Cardboard__ctor_m67 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::.cctor()
extern "C" void Cardboard__cctor_m68 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnStereoScreenChanged(Cardboard/StereoScreenChangeDelegate)
extern "C" void Cardboard_add_OnStereoScreenChanged_m69 (Cardboard_t33 * __this, StereoScreenChangeDelegate_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnStereoScreenChanged(Cardboard/StereoScreenChangeDelegate)
extern "C" void Cardboard_remove_OnStereoScreenChanged_m70 (Cardboard_t33 * __this, StereoScreenChangeDelegate_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTrigger(System.Action)
extern "C" void Cardboard_add_OnTrigger_m71 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTrigger(System.Action)
extern "C" void Cardboard_remove_OnTrigger_m72 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnTilt(System.Action)
extern "C" void Cardboard_add_OnTilt_m73 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnTilt(System.Action)
extern "C" void Cardboard_remove_OnTilt_m74 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnProfileChange(System.Action)
extern "C" void Cardboard_add_OnProfileChange_m75 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnProfileChange(System.Action)
extern "C" void Cardboard_remove_OnProfileChange_m76 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::add_OnBackButton(System.Action)
extern "C" void Cardboard_add_OnBackButton_m77 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::remove_OnBackButton(System.Action)
extern "C" void Cardboard_remove_OnBackButton_m78 (Cardboard_t33 * __this, Action_t35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard Cardboard::get_SDK()
extern "C" Cardboard_t33 * Cardboard_get_SDK_m79 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController Cardboard::get_Controller()
extern "C" StereoController_t37 * Cardboard_get_Controller_m80 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_VRModeEnabled()
extern "C" bool Cardboard_get_VRModeEnabled_m81 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_VRModeEnabled(System.Boolean)
extern "C" void Cardboard_set_VRModeEnabled_m82 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard/DistortionCorrectionMethod Cardboard::get_DistortionCorrection()
extern "C" int32_t Cardboard_get_DistortionCorrection_m83 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_DistortionCorrection(Cardboard/DistortionCorrectionMethod)
extern "C" void Cardboard_set_DistortionCorrection_m84 (Cardboard_t33 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableAlignmentMarker()
extern "C" bool Cardboard_get_EnableAlignmentMarker_m85 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableAlignmentMarker(System.Boolean)
extern "C" void Cardboard_set_EnableAlignmentMarker_m86 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_EnableSettingsButton()
extern "C" bool Cardboard_get_EnableSettingsButton_m87 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_EnableSettingsButton(System.Boolean)
extern "C" void Cardboard_set_EnableSettingsButton_m88 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Cardboard/BackButtonModes Cardboard::get_BackButtonMode()
extern "C" int32_t Cardboard_get_BackButtonMode_m89 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_BackButtonMode(Cardboard/BackButtonModes)
extern "C" void Cardboard_set_BackButtonMode_m90 (Cardboard_t33 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_TapIsTrigger()
extern "C" bool Cardboard_get_TapIsTrigger_m91 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_TapIsTrigger(System.Boolean)
extern "C" void Cardboard_set_TapIsTrigger_m92 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_NeckModelScale()
extern "C" float Cardboard_get_NeckModelScale_m93 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NeckModelScale(System.Single)
extern "C" void Cardboard_set_NeckModelScale_m94 (Cardboard_t33 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_AutoDriftCorrection()
extern "C" bool Cardboard_get_AutoDriftCorrection_m95 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_AutoDriftCorrection(System.Boolean)
extern "C" void Cardboard_set_AutoDriftCorrection_m96 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_ElectronicDisplayStabilization()
extern "C" bool Cardboard_get_ElectronicDisplayStabilization_m97 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_ElectronicDisplayStabilization(System.Boolean)
extern "C" void Cardboard_set_ElectronicDisplayStabilization_m98 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_SyncWithCardboardApp()
extern "C" bool Cardboard_get_SyncWithCardboardApp_m99 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_SyncWithCardboardApp(System.Boolean)
extern "C" void Cardboard_set_SyncWithCardboardApp_m100 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeDistortionCorrectionSupported()
extern "C" bool Cardboard_get_NativeDistortionCorrectionSupported_m101 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C" void Cardboard_set_NativeDistortionCorrectionSupported_m102 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_NativeUILayerSupported()
extern "C" bool Cardboard_get_NativeUILayerSupported_m103 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_NativeUILayerSupported(System.Boolean)
extern "C" void Cardboard_set_NativeUILayerSupported_m104 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_StereoScreenScale()
extern "C" float Cardboard_get_StereoScreenScale_m105 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreenScale(System.Single)
extern "C" void Cardboard_set_StereoScreenScale_m106 (Cardboard_t33 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Cardboard::get_StereoScreen()
extern "C" RenderTexture_t18 * Cardboard_get_StereoScreen_m107 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_StereoScreen(UnityEngine.RenderTexture)
extern "C" void Cardboard_set_StereoScreen_m108 (Cardboard_t33 * __this, RenderTexture_t18 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CardboardProfile Cardboard::get_Profile()
extern "C" CardboardProfile_t58 * Cardboard_get_Profile_m109 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::get_HeadPose()
extern "C" Pose3D_t63 * Cardboard_get_HeadPose_m110 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Cardboard::EyePose(Cardboard/Eye)
extern "C" Pose3D_t63 * Cardboard_EyePose_m111 (Cardboard_t33 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::Projection(Cardboard/Eye,Cardboard/Distortion)
extern "C" Matrix4x4_t42  Cardboard_Projection_m112 (Cardboard_t33 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::Viewport(Cardboard/Eye,Cardboard/Distortion)
extern "C" Rect_t24  Cardboard_Viewport_m113 (Cardboard_t33 * __this, int32_t ___eye, int32_t ___distortion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Cardboard::get_ComfortableViewingRange()
extern "C" Vector2_t21  Cardboard_get_ComfortableViewingRange_m114 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::InitDevice()
extern "C" void Cardboard_InitDevice_m115 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Awake()
extern "C" void Cardboard_Awake_m116 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::AddCardboardCamera()
extern "C" void Cardboard_AddCardboardCamera_m117 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Triggered()
extern "C" bool Cardboard_get_Triggered_m118 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Triggered(System.Boolean)
extern "C" void Cardboard_set_Triggered_m119 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_Tilted()
extern "C" bool Cardboard_get_Tilted_m120 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_Tilted(System.Boolean)
extern "C" void Cardboard_set_Tilted_m121 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_ProfileChanged()
extern "C" bool Cardboard_get_ProfileChanged_m122 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_ProfileChanged(System.Boolean)
extern "C" void Cardboard_set_ProfileChanged_m123 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_BackButtonPressed()
extern "C" bool Cardboard_get_BackButtonPressed_m124 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_BackButtonPressed(System.Boolean)
extern "C" void Cardboard_set_BackButtonPressed_m125 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::UpdateState()
extern "C" void Cardboard_UpdateState_m126 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::DispatchEvents()
extern "C" void Cardboard_DispatchEvents_m127 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Cardboard::EndOfFrame()
extern "C" Object_t * Cardboard_EndOfFrame_m128 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::PostRender()
extern "C" void Cardboard_PostRender_m129 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::Recenter()
extern "C" void Cardboard_Recenter_m130 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::SetTouchCoordinates(System.Int32,System.Int32)
extern "C" void Cardboard_SetTouchCoordinates_m131 (Cardboard_t33 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::ShowSettingsDialog()
extern "C" void Cardboard_ShowSettingsDialog_m132 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnEnable()
extern "C" void Cardboard_OnEnable_m133 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDisable()
extern "C" void Cardboard_OnDisable_m134 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationPause(System.Boolean)
extern "C" void Cardboard_OnApplicationPause_m135 (Cardboard_t33 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationFocus(System.Boolean)
extern "C" void Cardboard_OnApplicationFocus_m136 (Cardboard_t33 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnLevelWasLoaded(System.Int32)
extern "C" void Cardboard_OnLevelWasLoaded_m137 (Cardboard_t33 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnApplicationQuit()
extern "C" void Cardboard_OnApplicationQuit_m138 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::OnDestroy()
extern "C" void Cardboard_OnDestroy_m139 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_nativeDistortionCorrection()
extern "C" bool Cardboard_get_nativeDistortionCorrection_m140 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cardboard::set_nativeDistortionCorrection(System.Boolean)
extern "C" void Cardboard_set_nativeDistortionCorrection_m141 (Cardboard_t33 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_InCardboard()
extern "C" bool Cardboard_get_InCardboard_m142 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Cardboard::get_CardboardTriggered()
extern "C" bool Cardboard_get_CardboardTriggered_m143 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::get_HeadView()
extern "C" Matrix4x4_t42  Cardboard_get_HeadView_m144 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Cardboard::get_HeadRotation()
extern "C" Quaternion_t64  Cardboard_get_HeadRotation_m145 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::get_HeadPosition()
extern "C" Vector3_t5  Cardboard_get_HeadPosition_m146 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::EyeView(Cardboard/Eye)
extern "C" Matrix4x4_t42  Cardboard_EyeView_m147 (Cardboard_t33 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Cardboard::EyeOffset(Cardboard/Eye)
extern "C" Vector3_t5  Cardboard_EyeOffset_m148 (Cardboard_t33 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Cardboard::UndistortedProjection(Cardboard/Eye)
extern "C" Matrix4x4_t42  Cardboard_UndistortedProjection_m149 (Cardboard_t33 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Cardboard::EyeRect(Cardboard/Eye)
extern "C" Rect_t24  Cardboard_EyeRect_m150 (Cardboard_t33 * __this, int32_t ___eye, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MinimumComfortDistance()
extern "C" float Cardboard_get_MinimumComfortDistance_m151 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Cardboard::get_MaximumComfortDistance()
extern "C" float Cardboard_get_MaximumComfortDistance_m152 (Cardboard_t33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
