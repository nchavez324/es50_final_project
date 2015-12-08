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

// BaseCardboardDevice
struct BaseCardboardDevice_t71;
// System.Collections.Generic.List`1<System.String>
struct List_1_t86;
// System.Uri
struct Uri_t34;
// UnityEngine.RenderTexture
struct RenderTexture_t18;
// System.Single[]
struct SingleU5BU5D_t49;
// BaseCardboardDevice/VREventCallback
struct VREventCallback_t70;
// System.Byte[]
struct ByteU5BU5D_t87;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void BaseCardboardDevice::.ctor()
extern "C" void BaseCardboardDevice__ctor_m272 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool BaseCardboardDevice_SupportsNativeDistortionCorrection_m273 (BaseCardboardDevice_t71 * __this, List_1_t86 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetDistortionCorrectionEnabled_m274 (BaseCardboardDevice_t71 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelScale(System.Single)
extern "C" void BaseCardboardDevice_SetNeckModelScale_m275 (BaseCardboardDevice_t71 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetAutoDriftCorrectionEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetAutoDriftCorrectionEnabled_m276 (BaseCardboardDevice_t71 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetElectronicDisplayStabilizationEnabled(System.Boolean)
extern "C" void BaseCardboardDevice_SetElectronicDisplayStabilizationEnabled_m277 (BaseCardboardDevice_t71 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool BaseCardboardDevice_SetDefaultDeviceProfile_m278 (BaseCardboardDevice_t71 * __this, Uri_t34 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Init()
extern "C" void BaseCardboardDevice_Init_m279 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetStereoScreen(UnityEngine.RenderTexture)
extern "C" void BaseCardboardDevice_SetStereoScreen_m280 (BaseCardboardDevice_t71 * __this, RenderTexture_t18 * ___stereoScreen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateState()
extern "C" void BaseCardboardDevice_UpdateState_m281 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateScreenData()
extern "C" void BaseCardboardDevice_UpdateScreenData_m282 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Recenter()
extern "C" void BaseCardboardDevice_Recenter_m283 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::PostRender()
extern "C" void BaseCardboardDevice_PostRender_m284 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnPause(System.Boolean)
extern "C" void BaseCardboardDevice_OnPause_m285 (BaseCardboardDevice_t71 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnApplicationQuit()
extern "C" void BaseCardboardDevice_OnApplicationQuit_m286 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateView()
extern "C" void BaseCardboardDevice_UpdateView_m287 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::UpdateProfile()
extern "C" void BaseCardboardDevice_UpdateProfile_m288 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseCardboardDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C" int32_t BaseCardboardDevice_ExtractMatrix_m289 (Object_t * __this /* static, unused */, Matrix4x4_t42 * ___mat, SingleU5BU5D_t49* ___data, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ProcessEvents()
extern "C" void BaseCardboardDevice_ProcessEvents_m290 (BaseCardboardDevice_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::OnVREvent(System.Int32)
extern "C" void BaseCardboardDevice_OnVREvent_m291 (Object_t * __this /* static, unused */, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Start(System.Int32,System.Int32,System.Single,System.Single)
extern "C" void BaseCardboardDevice_Start_m292 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, float ___xdpi, float ___ydpi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetEventCallback(BaseCardboardDevice/VREventCallback)
extern "C" void BaseCardboardDevice_SetEventCallback_m293 (Object_t * __this /* static, unused */, VREventCallback_t70 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetTextureId(System.Int32)
extern "C" void BaseCardboardDevice_SetTextureId_m294 (Object_t * __this /* static, unused */, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseCardboardDevice::SetDefaultProfile(System.Byte[],System.Int32)
extern "C" bool BaseCardboardDevice_SetDefaultProfile_m295 (Object_t * __this /* static, unused */, ByteU5BU5D_t87* ___uri, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetUnityVersion(System.Byte[],System.Int32)
extern "C" void BaseCardboardDevice_SetUnityVersion_m296 (Object_t * __this /* static, unused */, ByteU5BU5D_t87* ___version_str, int32_t ___version_length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableDistortionCorrection(System.Boolean)
extern "C" void BaseCardboardDevice_EnableDistortionCorrection_m297 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableAutoDriftCorrection(System.Boolean)
extern "C" void BaseCardboardDevice_EnableAutoDriftCorrection_m298 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::EnableElectronicDisplayStabilization(System.Boolean)
extern "C" void BaseCardboardDevice_EnableElectronicDisplayStabilization_m299 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::SetNeckModelFactor(System.Single)
extern "C" void BaseCardboardDevice_SetNeckModelFactor_m300 (Object_t * __this /* static, unused */, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::ResetHeadTracker()
extern "C" void BaseCardboardDevice_ResetHeadTracker_m301 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetProfile(System.Single[])
extern "C" void BaseCardboardDevice_GetProfile_m302 (Object_t * __this /* static, unused */, SingleU5BU5D_t49* ___profile, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetHeadPose(System.Single[])
extern "C" void BaseCardboardDevice_GetHeadPose_m303 (Object_t * __this /* static, unused */, SingleU5BU5D_t49* ___pose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::GetViewParameters(System.Single[])
extern "C" void BaseCardboardDevice_GetViewParameters_m304 (Object_t * __this /* static, unused */, SingleU5BU5D_t49* ___viewParams, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Pause()
extern "C" void BaseCardboardDevice_Pause_m305 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Resume()
extern "C" void BaseCardboardDevice_Resume_m306 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseCardboardDevice::Stop()
extern "C" void BaseCardboardDevice_Stop_m307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
