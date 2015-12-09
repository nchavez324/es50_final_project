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

// TrackSensorManager
struct TrackSensorManager_t6;
// System.String
struct String_t;
// WiimoteState[]
struct WiimoteStateU5BU5D_t78;

#include "codegen/il2cpp-codegen.h"

// System.Void TrackSensorManager::.ctor()
extern "C" void TrackSensorManager__ctor_m9 (TrackSensorManager_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackSensorManager::NativeHeadTracking_iOS_Start()
extern "C" bool TrackSensorManager_NativeHeadTracking_iOS_Start_m10 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackSensorManager::DebugMessage_iOS(System.String)
extern "C" void TrackSensorManager_DebugMessage_iOS_m11 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackSensorManager::NativeHeadTracking_iOS_End()
extern "C" bool TrackSensorManager_NativeHeadTracking_iOS_End_m12 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackSensorManager::Start()
extern "C" void TrackSensorManager_Start_m13 (TrackSensorManager_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackSensorManager::StartHeadTracking()
extern "C" void TrackSensorManager_StartHeadTracking_m14 (TrackSensorManager_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackSensorManager::SendNativeDebugMessage(System.String)
extern "C" void TrackSensorManager_SendNativeDebugMessage_m15 (TrackSensorManager_t6 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackSensorManager::Update()
extern "C" void TrackSensorManager_Update_m16 (TrackSensorManager_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackSensorManager::HeadTrackUpdate(System.String)
extern "C" void TrackSensorManager_HeadTrackUpdate_m17 (TrackSensorManager_t6 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WiimoteState[] TrackSensorManager::ParseMessage(System.String)
extern "C" WiimoteStateU5BU5D_t78* TrackSensorManager_ParseMessage_m18 (TrackSensorManager_t6 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
