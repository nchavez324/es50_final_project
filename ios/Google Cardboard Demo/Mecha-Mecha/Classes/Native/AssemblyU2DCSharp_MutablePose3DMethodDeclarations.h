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

// MutablePose3D
struct MutablePose3D_t65;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void MutablePose3D::.ctor()
extern "C" void MutablePose3D__ctor_m233 (MutablePose3D_t65 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void MutablePose3D_Set_m234 (MutablePose3D_t65 * __this, Vector3_t5  ___position, Quaternion_t64  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_Set_m235 (MutablePose3D_t65 * __this, Matrix4x4_t42  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern "C" void MutablePose3D_SetRightHanded_m236 (MutablePose3D_t65 * __this, Matrix4x4_t42  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
