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

// GvrReticlePointerImpl
struct GvrReticlePointerImpl_t3911945438;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// System.Void GvrReticlePointerImpl::.ctor()
extern "C"  void GvrReticlePointerImpl__ctor_m3088794419 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointerImpl::get_ReticleGrowthSpeed()
extern "C"  float GvrReticlePointerImpl_get_ReticleGrowthSpeed_m2946132520 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::set_ReticleGrowthSpeed(System.Single)
extern "C"  void GvrReticlePointerImpl_set_ReticleGrowthSpeed_m930066293 (GvrReticlePointerImpl_t3911945438 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material GvrReticlePointerImpl::get_MaterialComp()
extern "C"  Material_t193706927 * GvrReticlePointerImpl_get_MaterialComp_m2016082783 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::set_MaterialComp(UnityEngine.Material)
extern "C"  void GvrReticlePointerImpl_set_MaterialComp_m1426986000 (GvrReticlePointerImpl_t3911945438 * __this, Material_t193706927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointerImpl::get_ReticleInnerAngle()
extern "C"  float GvrReticlePointerImpl_get_ReticleInnerAngle_m3976193307 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::set_ReticleInnerAngle(System.Single)
extern "C"  void GvrReticlePointerImpl_set_ReticleInnerAngle_m1372932382 (GvrReticlePointerImpl_t3911945438 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointerImpl::get_ReticleOuterAngle()
extern "C"  float GvrReticlePointerImpl_get_ReticleOuterAngle_m979247346 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::set_ReticleOuterAngle(System.Single)
extern "C"  void GvrReticlePointerImpl_set_ReticleOuterAngle_m530413551 (GvrReticlePointerImpl_t3911945438 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointerImpl::get_ReticleDistanceInMeters()
extern "C"  float GvrReticlePointerImpl_get_ReticleDistanceInMeters_m1574689686 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::set_ReticleDistanceInMeters(System.Single)
extern "C"  void GvrReticlePointerImpl_set_ReticleDistanceInMeters_m3280185827 (GvrReticlePointerImpl_t3911945438 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointerImpl::get_ReticleInnerDiameter()
extern "C"  float GvrReticlePointerImpl_get_ReticleInnerDiameter_m3343883425 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::set_ReticleInnerDiameter(System.Single)
extern "C"  void GvrReticlePointerImpl_set_ReticleInnerDiameter_m1746789140 (GvrReticlePointerImpl_t3911945438 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointerImpl::get_ReticleOuterDiameter()
extern "C"  float GvrReticlePointerImpl_get_ReticleOuterDiameter_m280700322 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::set_ReticleOuterDiameter(System.Single)
extern "C"  void GvrReticlePointerImpl_set_ReticleOuterDiameter_m2365117585 (GvrReticlePointerImpl_t3911945438 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrReticlePointerImpl::get_LineEndPoint()
extern "C"  Vector3_t2243707580  GvrReticlePointerImpl_get_LineEndPoint_m2321452461 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrReticlePointerImpl::get_MaxPointerDistance()
extern "C"  float GvrReticlePointerImpl_get_MaxPointerDistance_m4050816026 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnStart()
extern "C"  void GvrReticlePointerImpl_OnStart_m1184185482 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnInputModuleEnabled()
extern "C"  void GvrReticlePointerImpl_OnInputModuleEnabled_m1354407819 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnInputModuleDisabled()
extern "C"  void GvrReticlePointerImpl_OnInputModuleDisabled_m1116359414 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnPointerEnter(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrReticlePointerImpl_OnPointerEnter_m3243933558 (GvrReticlePointerImpl_t3911945438 * __this, GameObject_t1756533147 * ___targetObject0, Vector3_t2243707580  ___intersectionPosition1, Ray_t2469606224  ___intersectionRay2, bool ___isInteractive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnPointerHover(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Ray,System.Boolean)
extern "C"  void GvrReticlePointerImpl_OnPointerHover_m4228022358 (GvrReticlePointerImpl_t3911945438 * __this, GameObject_t1756533147 * ___targetObject0, Vector3_t2243707580  ___intersectionPosition1, Ray_t2469606224  ___intersectionRay2, bool ___isInteractive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnPointerExit(UnityEngine.GameObject)
extern "C"  void GvrReticlePointerImpl_OnPointerExit_m3719787661 (GvrReticlePointerImpl_t3911945438 * __this, GameObject_t1756533147 * ___targetObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnPointerClickDown()
extern "C"  void GvrReticlePointerImpl_OnPointerClickDown_m730784865 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::OnPointerClickUp()
extern "C"  void GvrReticlePointerImpl_OnPointerClickUp_m3541228562 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::GetPointerRadius(System.Single&,System.Single&)
extern "C"  void GvrReticlePointerImpl_GetPointerRadius_m2797999482 (GvrReticlePointerImpl_t3911945438 * __this, float* ___enterRadius0, float* ___exitRadius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrReticlePointerImpl::UpdateDiameters()
extern "C"  void GvrReticlePointerImpl_UpdateDiameters_m1145532150 (GvrReticlePointerImpl_t3911945438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrReticlePointerImpl::SetPointerTarget(UnityEngine.Vector3,System.Boolean)
extern "C"  bool GvrReticlePointerImpl_SetPointerTarget_m4027883553 (GvrReticlePointerImpl_t3911945438 * __this, Vector3_t2243707580  ___target0, bool ___interactive1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
