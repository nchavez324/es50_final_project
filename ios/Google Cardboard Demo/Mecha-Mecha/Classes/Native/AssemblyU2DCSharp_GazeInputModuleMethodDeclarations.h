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

// GazeInputModule
struct GazeInputModule_t59;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void GazeInputModule::.ctor()
extern "C" void GazeInputModule__ctor_m208 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C" bool GazeInputModule_ShouldActivateModule_m209 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C" void GazeInputModule_DeactivateModule_m210 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool GazeInputModule_IsPointerOverGameObject_m211 (GazeInputModule_t59 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C" void GazeInputModule_Process_m212 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C" void GazeInputModule_CastRayFromGaze_m213 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C" void GazeInputModule_UpdateCurrentObject_m214 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::PlaceCursor()
extern "C" void GazeInputModule_PlaceCursor_m215 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleDrag()
extern "C" void GazeInputModule_HandleDrag_m216 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C" void GazeInputModule_HandlePendingClick_m217 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C" void GazeInputModule_HandleTrigger_m218 (GazeInputModule_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C" Vector2_t21  GazeInputModule_NormalizedCartesianToSpherical_m219 (GazeInputModule_t59 * __this, Vector3_t5  ___cartCoords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
