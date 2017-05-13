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

// GvrPointerInputModule
struct GvrPointerInputModule_t1603976810;
// GvrPointerScrollInput
struct GvrPointerScrollInput_t4200958609;
// GvrBasePointer
struct GvrBasePointer_t2150122635;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"

// System.Void GvrPointerInputModule::.ctor()
extern "C"  void GvrPointerInputModule__ctor_m1529106631 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrPointerScrollInput GvrPointerInputModule::get_ScrollInput()
extern "C"  GvrPointerScrollInput_t4200958609 * GvrPointerInputModule_get_ScrollInput_m209404637 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrBasePointer GvrPointerInputModule::get_pointer()
extern "C"  GvrBasePointer_t2150122635 * GvrPointerInputModule_get_pointer_m3173654067 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerInputModule::ShouldActivateModule()
extern "C"  bool GvrPointerInputModule_ShouldActivateModule_m3919675513 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::DeactivateModule()
extern "C"  void GvrPointerInputModule_DeactivateModule_m3630502165 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerInputModule::IsPointerOverGameObject(System.Int32)
extern "C"  bool GvrPointerInputModule_IsPointerOverGameObject_m3600149256 (GvrPointerInputModule_t1603976810 * __this, int32_t ___pointerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::Process()
extern "C"  void GvrPointerInputModule_Process_m3375729016 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::CastRay()
extern "C"  void GvrPointerInputModule_CastRay_m1867579888 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::UpdateCurrentObject(UnityEngine.GameObject)
extern "C"  void GvrPointerInputModule_UpdateCurrentObject_m545124774 (GvrPointerInputModule_t1603976810 * __this, GameObject_t1756533147 * ___previousObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::UpdateReticle(UnityEngine.GameObject)
extern "C"  void GvrPointerInputModule_UpdateReticle_m1825975192 (GvrPointerInputModule_t1603976810 * __this, GameObject_t1756533147 * ___previousObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerInputModule::ShouldStartDrag(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean)
extern "C"  bool GvrPointerInputModule_ShouldStartDrag_m2027241336 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___pressPos0, Vector2_t2243707579  ___currentPos1, float ___threshold2, bool ___useDragThreshold3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::HandleDrag()
extern "C"  void GvrPointerInputModule_HandleDrag_m2282133809 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::HandlePendingClick()
extern "C"  void GvrPointerInputModule_HandlePendingClick_m3198537246 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::HandleTriggerDown()
extern "C"  void GvrPointerInputModule_HandleTriggerDown_m1473499143 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrPointerInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C"  Vector2_t2243707579  GvrPointerInputModule_NormalizedCartesianToSpherical_m1100147612 (GvrPointerInputModule_t1603976810 * __this, Vector3_t2243707580  ___cartCoords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrPointerInputModule::GetCurrentGameObject()
extern "C"  GameObject_t1756533147 * GvrPointerInputModule_GetCurrentGameObject_m2094345838 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray GvrPointerInputModule::GetLastRay()
extern "C"  Ray_t2469606224  GvrPointerInputModule_GetLastRay_m2341273551 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 GvrPointerInputModule::GetIntersectionPosition(UnityEngine.Camera,UnityEngine.EventSystems.RaycastResult)
extern "C"  Vector3_t2243707580  GvrPointerInputModule_GetIntersectionPosition_m4127225986 (GvrPointerInputModule_t1603976810 * __this, Camera_t189460977 * ___cam0, RaycastResult_t21186376  ___raycastResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerInputModule::DisablePointer()
extern "C"  void GvrPointerInputModule_DisablePointer_m4263108644 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrPointerInputModule::GetViewportCenter()
extern "C"  Vector2_t2243707579  GvrPointerInputModule_GetViewportCenter_m724278641 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerInputModule::IsPointerActiveAndAvailable()
extern "C"  bool GvrPointerInputModule_IsPointerActiveAndAvailable_m924688728 (GvrPointerInputModule_t1603976810 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
