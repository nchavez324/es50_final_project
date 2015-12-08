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

// CardboardiOSDevice
struct CardboardiOSDevice_t75;
// System.Collections.Generic.List`1<System.String>
struct List_1_t86;
// System.Uri
struct Uri_t34;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BaseVRDevice_DisplayMetrics.h"

// System.Void CardboardiOSDevice::.ctor()
extern "C" void CardboardiOSDevice__ctor_m332 (CardboardiOSDevice_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseVRDevice/DisplayMetrics CardboardiOSDevice::GetDisplayMetrics()
extern "C" DisplayMetrics_t74  CardboardiOSDevice_GetDisplayMetrics_m333 (CardboardiOSDevice_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool CardboardiOSDevice_SupportsNativeDistortionCorrection_m334 (CardboardiOSDevice_t75 * __this, List_1_t86 * ___diagnostics, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetVRModeEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetVRModeEnabled_m335 (CardboardiOSDevice_t75 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetSettingsButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetSettingsButtonEnabled_m336 (CardboardiOSDevice_t75 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetAlignmentMarkerEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetAlignmentMarkerEnabled_m337 (CardboardiOSDevice_t75 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetVRBackButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_SetVRBackButtonEnabled_m338 (CardboardiOSDevice_t75 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetShowVrBackButtonOnlyInVR(System.Boolean)
extern "C" void CardboardiOSDevice_SetShowVrBackButtonOnlyInVR_m339 (CardboardiOSDevice_t75 * __this, bool ___only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::SetTapIsTrigger(System.Boolean)
extern "C" void CardboardiOSDevice_SetTapIsTrigger_m340 (CardboardiOSDevice_t75 * __this, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::SetDefaultDeviceProfile(System.Uri)
extern "C" bool CardboardiOSDevice_SetDefaultDeviceProfile_m341 (CardboardiOSDevice_t75 * __this, Uri_t34 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::Init()
extern "C" void CardboardiOSDevice_Init_m342 (CardboardiOSDevice_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::OnFocus(System.Boolean)
extern "C" void CardboardiOSDevice_OnFocus_m343 (CardboardiOSDevice_t75 * __this, bool ___focus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::ShowSettingsDialog()
extern "C" void CardboardiOSDevice_ShowSettingsDialog_m344 (CardboardiOSDevice_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOpenGLAPI()
extern "C" bool CardboardiOSDevice_isOpenGLAPI_m345 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setVRModeEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setVRModeEnabled_m346 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setShowVrBackButtonOnlyInVR(System.Boolean)
extern "C" void CardboardiOSDevice_setShowVrBackButtonOnlyInVR_m347 (Object_t * __this /* static, unused */, bool ___only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSettingsButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setSettingsButtonEnabled_m348 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setAlignmentMarkerEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setAlignmentMarkerEnabled_m349 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setVRBackButtonEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setVRBackButtonEnabled_m350 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C" void CardboardiOSDevice_setSyncWithCardboardEnabled_m351 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::setOnboardingDone()
extern "C" void CardboardiOSDevice_setOnboardingDone_m352 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CardboardiOSDevice::isOnboardingDone()
extern "C" bool CardboardiOSDevice_isOnboardingDone_m353 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchSettingsDialog()
extern "C" void CardboardiOSDevice_launchSettingsDialog_m354 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardiOSDevice::launchOnboardingDialog()
extern "C" void CardboardiOSDevice_launchOnboardingDialog_m355 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CardboardiOSDevice::getScreenDPI()
extern "C" float CardboardiOSDevice_getScreenDPI_m356 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
