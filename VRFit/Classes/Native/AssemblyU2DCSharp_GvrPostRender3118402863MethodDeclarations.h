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

// GvrPostRender
struct GvrPostRender_t3118402863;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// System.Void GvrPostRender::.ctor()
extern "C"  void GvrPostRender__ctor_m2044349382 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPostRender::get_cam()
extern "C"  Camera_t189460977 * GvrPostRender_get_cam_m3511957665 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::set_cam(UnityEngine.Camera)
extern "C"  void GvrPostRender_set_cam_m412675150 (GvrPostRender_t3118402863 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::Reset()
extern "C"  void GvrPostRender_Reset_m3552744827 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::Awake()
extern "C"  void GvrPostRender_Awake_m2127890511 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::OnRenderObject()
extern "C"  void GvrPostRender_OnRenderObject_m4182735842 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::RebuildDistortionMesh()
extern "C"  void GvrPostRender_RebuildDistortionMesh_m1296171427 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C"  void GvrPostRender_ComputeMeshPoints_m2844100249 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, bool ___distortVertices2, Vector3U5BU5D_t1172311765** ___vertices3, Vector2U5BU5D_t686124026** ___tex4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] GvrPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C"  ColorU5BU5D_t672350442* GvrPostRender_ComputeMeshColors_m2562327671 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, Vector2U5BU5D_t686124026* ___tex2, Int32U5BU5D_t3030399641* ___indices3, bool ___distortVertices4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] GvrPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C"  Int32U5BU5D_t3030399641* GvrPostRender_ComputeMeshIndices_m3806724052 (Il2CppObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, bool ___distortVertices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawUILayer()
extern "C"  void GvrPostRender_DrawUILayer_m4003549693 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::ComputeUIMatrix()
extern "C"  void GvrPostRender_ComputeUIMatrix_m2561962368 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawSettingsButton()
extern "C"  void GvrPostRender_DrawSettingsButton_m3721258801 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawAlignmentMarker()
extern "C"  void GvrPostRender_DrawAlignmentMarker_m1134591431 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::DrawVRBackButton()
extern "C"  void GvrPostRender_DrawVRBackButton_m1863050027 (GvrPostRender_t3118402863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPostRender::.cctor()
extern "C"  void GvrPostRender__cctor_m3740051429 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
