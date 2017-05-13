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

// GvrPointerPhysicsRaycaster
struct GvrPointerPhysicsRaycaster_t2558158517;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

// System.Void GvrPointerPhysicsRaycaster::.ctor()
extern "C"  void GvrPointerPhysicsRaycaster__ctor_m3272360300 (GvrPointerPhysicsRaycaster_t2558158517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPointerPhysicsRaycaster::get_eventCamera()
extern "C"  Camera_t189460977 * GvrPointerPhysicsRaycaster_get_eventCamera_m449959721 (GvrPointerPhysicsRaycaster_t2558158517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerPhysicsRaycaster::get_finalEventMask()
extern "C"  int32_t GvrPointerPhysicsRaycaster_get_finalEventMask_m2496617043 (GvrPointerPhysicsRaycaster_t2558158517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask GvrPointerPhysicsRaycaster::get_eventMask()
extern "C"  LayerMask_t3188175821  GvrPointerPhysicsRaycaster_get_eventMask_m3993898916 (GvrPointerPhysicsRaycaster_t2558158517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerPhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
extern "C"  void GvrPointerPhysicsRaycaster_set_eventMask_m4174666085 (GvrPointerPhysicsRaycaster_t2558158517 * __this, LayerMask_t3188175821  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerPhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GvrPointerPhysicsRaycaster_Raycast_m1715473476 (GvrPointerPhysicsRaycaster_t2558158517 * __this, PointerEventData_t1599784723 * ___eventData0, List_1_t3685274804 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerPhysicsRaycaster::<Raycast>m__0(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
extern "C"  int32_t GvrPointerPhysicsRaycaster_U3CRaycastU3Em__0_m2457964362 (Il2CppObject * __this /* static, unused */, RaycastHit_t87180320  ___r10, RaycastHit_t87180320  ___r21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
