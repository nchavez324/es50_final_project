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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C" void GL_Vertex3_m566 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C" void GL_Begin_m564 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C" void GL_End_m567 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C" void GL_LoadOrtho_m562 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrixArgs(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrixArgs_m2729 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
extern "C" void GL_LoadPixelMatrix_m569 (Object_t * __this /* static, unused */, float ___left, float ___right, float ___bottom, float ___top, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
extern "C" void GL_MultMatrix_m563 (Object_t * __this /* static, unused */, Matrix4x4_t42  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_MultMatrix(UnityEngine.Matrix4x4&)
extern "C" void GL_INTERNAL_CALL_MultMatrix_m2730 (Object_t * __this /* static, unused */, Matrix4x4_t42 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C" void GL_PushMatrix_m561 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C" void GL_PopMatrix_m568 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C" void GL_Clear_m424 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17  ___backgroundColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Clear_m2731 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C" void GL_Internal_Clear_m2732 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C" void GL_INTERNAL_CALL_Internal_Clear_m2733 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t17 * ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::IssuePluginEvent(System.Int32)
extern "C" void GL_IssuePluginEvent_m666 (Object_t * __this /* static, unused */, int32_t ___eventID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
