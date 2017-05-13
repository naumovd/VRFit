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

// GvrPointerGraphicRaycaster
struct GvrPointerGraphicRaycaster_t1649506702;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1795346708;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Canvas209405766.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic2426225576.h"

// System.Void GvrPointerGraphicRaycaster::.ctor()
extern "C"  void GvrPointerGraphicRaycaster__ctor_m3530556593 (GvrPointerGraphicRaycaster_t1649506702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrPointerGraphicRaycaster::get_eventCamera()
extern "C"  Camera_t189460977 * GvrPointerGraphicRaycaster_get_eventCamera_m1509916208 (GvrPointerGraphicRaycaster_t1649506702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas GvrPointerGraphicRaycaster::get_canvas()
extern "C"  Canvas_t209405766 * GvrPointerGraphicRaycaster_get_canvas_m2187105506 (GvrPointerGraphicRaycaster_t1649506702 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GvrPointerGraphicRaycaster_Raycast_m3134305649 (GvrPointerGraphicRaycaster_t1649506702 * __this, PointerEventData_t1599784723 * ___eventData0, List_1_t3685274804 * ___resultAppendList1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Ray,UnityEngine.Camera,System.Single,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>,UnityEngine.Ray&)
extern "C"  void GvrPointerGraphicRaycaster_Raycast_m3298424177 (Il2CppObject * __this /* static, unused */, Canvas_t209405766 * ___canvas0, Ray_t2469606224  ___ray1, Camera_t189460977 * ___cam2, float ___maxPointerDistance3, List_1_t1795346708 * ___results4, Ray_t2469606224 * ___finalRay5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerGraphicRaycaster::.cctor()
extern "C"  void GvrPointerGraphicRaycaster__cctor_m2098404160 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrPointerGraphicRaycaster::<Raycast>m__0(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C"  int32_t GvrPointerGraphicRaycaster_U3CRaycastU3Em__0_m3394965511 (Il2CppObject * __this /* static, unused */, Graphic_t2426225576 * ___g10, Graphic_t2426225576 * ___g21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
