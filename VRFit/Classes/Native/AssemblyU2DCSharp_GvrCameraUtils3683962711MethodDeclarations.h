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

// GvrCameraUtils
struct GvrCameraUtils_t3683962711;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void GvrCameraUtils::.ctor()
extern "C"  void GvrCameraUtils__ctor_m2507475914 (GvrCameraUtils_t3683962711 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrCameraUtils::FixProjection(UnityEngine.Rect,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void GvrCameraUtils_FixProjection_m1517035997 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___camRect0, float ___nearClipPlane1, float ___farClipPlane2, Matrix4x4_t2933234003 * ___proj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrCameraUtils::FixViewport(UnityEngine.Rect,UnityEngine.Rect,System.Boolean)
extern "C"  Rect_t3681755626  GvrCameraUtils_FixViewport_m811730616 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, Rect_t3681755626  ___viewport1, bool ___isRightEye2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrCameraUtils::FixEditorViewport(UnityEngine.Rect,System.Single,System.Single)
extern "C"  Rect_t3681755626  GvrCameraUtils_FixEditorViewport_m1007223735 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___rect0, float ___profileAspect1, float ___windowAspect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrCameraUtils::ZoomStereoCameras(System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
extern "C"  void GvrCameraUtils_ZoomStereoCameras_m770091414 (Il2CppObject * __this /* static, unused */, float ___matchByZoom0, float ___matchMonoFOV1, float ___monoProj112, Matrix4x4_t2933234003 * ___proj3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
