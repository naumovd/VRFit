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
struct Mesh_t1356156583;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_InternalDrawTextureArgumen1708329234.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Graphics_DrawMeshNow_m1246246447 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow1_m4040388283 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Vector3_t2243707580  ___position1, Quaternion_t4030073918  ___rotation2, int32_t ___materialIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow1(UnityEngine.Mesh,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow1_m3637013040 (Il2CppObject * __this /* static, unused */, Mesh_t1356156583 * ___mesh0, Vector3_t2243707580 * ___position1, Quaternion_t4030073918 * ___rotation2, int32_t ___materialIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
extern "C"  int32_t Graphics_Internal_GetMaxDrawMeshInstanceCount_m3046083541 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color,UnityEngine.Material)
extern "C"  void Graphics_DrawTexture_m1868031769 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___screenRect0, Texture_t2243626319 * ___texture1, Rect_t3681755626  ___sourceRect2, int32_t ___leftBorder3, int32_t ___rightBorder4, int32_t ___topBorder5, int32_t ___bottomBorder6, Color_t2020392075  ___color7, Material_t193706927 * ___mat8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_DrawTexture_m907251566 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___screenRect0, Texture_t2243626319 * ___texture1, Rect_t3681755626  ___sourceRect2, int32_t ___leftBorder3, int32_t ___rightBorder4, int32_t ___topBorder5, int32_t ___bottomBorder6, Color_t2020392075  ___color7, Material_t193706927 * ___mat8, int32_t ___pass9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawTexture(UnityEngine.InternalDrawTextureArguments&)
extern "C"  void Graphics_DrawTexture_m2939589060 (Il2CppObject * __this /* static, unused */, InternalDrawTextureArguments_t1708329234 * ___arguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::.cctor()
extern "C"  void Graphics__cctor_m3711221683 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
