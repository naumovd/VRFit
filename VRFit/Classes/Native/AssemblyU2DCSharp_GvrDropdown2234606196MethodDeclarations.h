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

// GvrDropdown
struct GvrDropdown_t2234606196;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Canvas
struct Canvas_t209405766;
// GvrPointerGraphicRaycaster
struct GvrPointerGraphicRaycaster_t1649506702;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"
#include "UnityEngine_UnityEngine_Canvas209405766.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster1649506702.h"

// System.Void GvrDropdown::.ctor()
extern "C"  void GvrDropdown__ctor_m355199575 (GvrDropdown_t2234606196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void GvrDropdown_OnPointerClick_m898035059 (GvrDropdown_t2234606196 * __this, PointerEventData_t1599784723 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void GvrDropdown_OnSubmit_m2777299550 (GvrDropdown_t2234606196 * __this, BaseEventData_t2681005625 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::FixTemplateAndBlockerRaycasters()
extern "C"  void GvrDropdown_FixTemplateAndBlockerRaycasters_m3605751466 (GvrDropdown_t2234606196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrDropdown::CreateBlocker(UnityEngine.Canvas)
extern "C"  GameObject_t1756533147 * GvrDropdown_CreateBlocker_m1752141389 (GvrDropdown_t2234606196 * __this, Canvas_t209405766 * ___rootCanvas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GvrDropdown::CreateDropdownList(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * GvrDropdown_CreateDropdownList_m2420220213 (GvrDropdown_t2234606196 * __this, GameObject_t1756533147 * ___template0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::FixRaycaster(UnityEngine.GameObject,System.Boolean)
extern "C"  void GvrDropdown_FixRaycaster_m1697516107 (GvrDropdown_t2234606196 * __this, GameObject_t1756533147 * ___go0, bool ___shouldCopyProperties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrPointerGraphicRaycaster GvrDropdown::GetTemplateRaycaster()
extern "C"  GvrPointerGraphicRaycaster_t1649506702 * GvrDropdown_GetTemplateRaycaster_m2203793630 (GvrDropdown_t2234606196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrDropdown::CopyRaycasterProperties(GvrPointerGraphicRaycaster,GvrPointerGraphicRaycaster)
extern "C"  void GvrDropdown_CopyRaycasterProperties_m1926843691 (GvrDropdown_t2234606196 * __this, GvrPointerGraphicRaycaster_t1649506702 * ___source0, GvrPointerGraphicRaycaster_t1649506702 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
