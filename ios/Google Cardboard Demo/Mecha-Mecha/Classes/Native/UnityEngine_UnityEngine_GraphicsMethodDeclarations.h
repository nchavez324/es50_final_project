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

// UnityEngine.Mesh
struct Mesh_t47;
// UnityEngine.Texture
struct Texture_t20;
// UnityEngine.Material
struct Material_t48;
// UnityEngine.RenderTexture
struct RenderTexture_t18;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArguments.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Graphics_DrawMeshNow_m548 (Object_t * __this /* static, unused */, Mesh_t47 * ___mesh, Vector3_t5  ___position, Quaternion_t64  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C" void Graphics_Internal_DrawMeshNow1_m2722 (Object_t * __this /* static, unused */, Mesh_t47 * ___mesh, Vector3_t5  ___position, Quaternion_t64  ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C" void Graphics_INTERNAL_CALL_Internal_DrawMeshNow1_m2723 (Object_t * __this /* static, unused */, Mesh_t47 * ___mesh, Vector3_t5 * ___position, Quaternion_t64 * ___rotation, int32_t ___materialIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m659 (Object_t * __this /* static, unused */, Rect_t24  ___screenRect, Texture_t20 * ___texture, Material_t48 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2724 (Object_t * __this /* static, unused */, Rect_t24  ___screenRect, Texture_t20 * ___texture, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t48 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Material)
extern "C" void Graphics_DrawTexture_m2725 (Object_t * __this /* static, unused */, Rect_t24  ___screenRect, Texture_t20 * ___texture, Rect_t24  ___sourceRect, int32_t ___leftBorder, int32_t ___rightBorder, int32_t ___topBorder, int32_t ___bottomBorder, Material_t48 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C" void Graphics_DrawTexture_m2726 (Object_t * __this /* static, unused */, InternalDrawTextureArguments_t467 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C" void Graphics_Blit_m643 (Object_t * __this /* static, unused */, Texture_t20 * ___source, RenderTexture_t18 * ___dest, Material_t48 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C" void Graphics_Blit_m2727 (Object_t * __this /* static, unused */, Texture_t20 * ___source, RenderTexture_t18 * ___dest, Material_t48 * ___mat, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C" void Graphics_Internal_BlitMaterial_m2728 (Object_t * __this /* static, unused */, Texture_t20 * ___source, RenderTexture_t18 * ___dest, Material_t48 * ___mat, int32_t ___pass, bool ___setRT, const MethodInfo* method) IL2CPP_METHOD_ATTR;
