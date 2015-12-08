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

// UnityEngine.Shader
struct Shader_t103;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" Shader_t103 * Shader_Find_m438 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.String,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m2907 (Object_t * __this /* static, unused */, String_t* ___propertyName, Color_t17  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.Int32,UnityEngine.Color)
extern "C" void Shader_SetGlobalColor_m2908 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t17  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalColor(System.Int32,UnityEngine.Color&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalColor_m2909 (Object_t * __this /* static, unused */, int32_t ___nameID, Color_t17 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C" void Shader_SetGlobalVector_m511 (Object_t * __this /* static, unused */, String_t* ___propertyName, Vector4_t43  ___vec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.String,System.Single)
extern "C" void Shader_SetGlobalFloat_m512 (Object_t * __this /* static, unused */, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.Int32,System.Single)
extern "C" void Shader_SetGlobalFloat_m2910 (Object_t * __this /* static, unused */, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.String,UnityEngine.Matrix4x4)
extern "C" void Shader_SetGlobalMatrix_m510 (Object_t * __this /* static, unused */, String_t* ___propertyName, Matrix4x4_t42  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C" void Shader_SetGlobalMatrix_m2911 (Object_t * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t42  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalMatrix(System.Int32,UnityEngine.Matrix4x4&)
extern "C" void Shader_INTERNAL_CALL_SetGlobalMatrix_m2912 (Object_t * __this /* static, unused */, int32_t ___nameID, Matrix4x4_t42 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" int32_t Shader_PropertyToID_m2913 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
