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

// GvrLaserPointerImpl
struct GvrLaserPointerImpl_t2141976067;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_LineRenderer849157671.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// System.Void GvrLaserPointerImpl::.ctor()
extern "C"  void GvrLaserPointerImpl__ctor_m2090733158 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrLaserPointerImpl::get_MainCamera()
extern "C"  Camera_t189460977 * GvrLaserPointerImpl_get_MainCamera_m3408232102 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_MainCamera(UnityEngine.Camera)
extern "C"  void GvrLaserPointerImpl_set_MainCamera_m957916287 (GvrLaserPointerImpl_t2141976067 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color GvrLaserPointerImpl::get_LaserColor()
extern "C"  Color_t2020392075  GvrLaserPointerImpl_get_LaserColor_m2924704266 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_LaserColor(UnityEngine.Color)
extern "C"  void GvrLaserPointerImpl_set_LaserColor_m4256875433 (GvrLaserPointerImpl_t2141976067 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LineRenderer GvrLaserPointerImpl::get_LaserLineRenderer()
extern "C"  LineRenderer_t849157671 * GvrLaserPointerImpl_get_LaserLineRenderer_m3046216770 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_LaserLineRenderer(UnityEngine.LineRenderer)
extern "C"  void GvrLaserPointerImpl_set_LaserLineRenderer_m949710001 (GvrLaserPointerImpl_t2141976067 * __this, LineRenderer_t849157671 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrLaserPointerImpl::get_MaxLaserDistance()
extern "C"  float GvrLaserPointerImpl_get_MaxLaserDistance_m3964575299 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_MaxLaserDistance(System.Single)
extern "C"  void GvrLaserPointerImpl_set_MaxLaserDistance_m3674615216 (GvrLaserPointerImpl_t2141976067 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrLaserPointerImpl::get_MaxReticleDistance()
extern "C"  float GvrLaserPointerImpl_get_MaxReticleDistance_m1514639426 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_MaxReticleDistance(System.Single)
extern "C"  void GvrLaserPointerImpl_set_MaxReticleDistance_m3254151873 (GvrLaserPointerImpl_t2141976067 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrLaserPointerImpl::get_Reticle()
extern "C"  GameObject_t1756533147 * GvrLaserPointerImpl_get_Reticle_m4077335888 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_Reticle(UnityEngine.GameObject)
extern "C"  void GvrLaserPointerImpl_set_Reticle_m1414756459 (GvrLaserPointerImpl_t2141976067 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrLaserPointerImpl::get_PointerIntersection()
extern "C"  Vector3_t2243707580  GvrLaserPointerImpl_get_PointerIntersection_m2453802311 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_PointerIntersection(UnityEngine.Vector3)
extern "C"  void GvrLaserPointerImpl_set_PointerIntersection_m3348663786 (GvrLaserPointerImpl_t2141976067 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrLaserPointerImpl::get_IsPointerIntersecting()
extern "C"  bool GvrLaserPointerImpl_get_IsPointerIntersecting_m1934345039 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_IsPointerIntersecting(System.Boolean)
extern "C"  void GvrLaserPointerImpl_set_IsPointerIntersecting_m2966439950 (GvrLaserPointerImpl_t2141976067 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray GvrLaserPointerImpl::get_PointerIntersectionRay()
extern "C"  Ray_t2469606224  GvrLaserPointerImpl_get_PointerIntersectionRay_m806724853 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::set_PointerIntersectionRay(UnityEngine.Ray)
extern "C"  void GvrLaserPointerImpl_set_PointerIntersectionRay_m2104986278 (GvrLaserPointerImpl_t2141976067 * __this, Ray_t2469606224  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrLaserPointerImpl::get_LineEndPoint()
extern "C"  Vector3_t2243707580  GvrLaserPointerImpl_get_LineEndPoint_m4109945936 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrLaserPointerImpl::get_MaxPointerDistance()
extern "C"  float GvrLaserPointerImpl_get_MaxPointerDistance_m3045271701 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnStart()
extern "C"  void GvrLaserPointerImpl_OnStart_m3557324591 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnInputModuleEnabled()
extern "C"  void GvrLaserPointerImpl_OnInputModuleEnabled_m197268720 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnInputModuleDisabled()
extern "C"  void GvrLaserPointerImpl_OnInputModuleDisabled_m460884883 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerEnter(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrLaserPointerImpl_OnPointerEnter_m3984850915 (GvrLaserPointerImpl_t2141976067 * __this, GameObject_t1756533147 * ___targetObject0, Vector3_t2243707580  ___intersectionPosition1, Ray_t2469606224  ___intersectionRay2, bool ___isInteractive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerHover(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrLaserPointerImpl_OnPointerHover_m1907226417 (GvrLaserPointerImpl_t2141976067 * __this, GameObject_t1756533147 * ___targetObject0, Vector3_t2243707580  ___intersectionPosition1, Ray_t2469606224  ___intersectionRay2, bool ___isInteractive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerExit(UnityEngine.GameObject)
extern "C"  void GvrLaserPointerImpl_OnPointerExit_m588516218 (GvrLaserPointerImpl_t2141976067 * __this, GameObject_t1756533147 * ___targetObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerClickDown()
extern "C"  void GvrLaserPointerImpl_OnPointerClickDown_m640898558 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::OnPointerClickUp()
extern "C"  void GvrLaserPointerImpl_OnPointerClickUp_m2141358135 (GvrLaserPointerImpl_t2141976067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrLaserPointerImpl::GetPointerRadius(System.Single&,System.Single&)
extern "C"  void GvrLaserPointerImpl_GetPointerRadius_m447704703 (GvrLaserPointerImpl_t2141976067 * __this, float* ___enterRadius0, float* ___exitRadius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
