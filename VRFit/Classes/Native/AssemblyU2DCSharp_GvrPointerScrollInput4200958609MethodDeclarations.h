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

// GvrPointerScrollInput
struct GvrPointerScrollInput_t4200958609;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// GvrPointerScrollInput/ScrollInfo
struct ScrollInfo_t361410461;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1599784723.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_GvrPointerScrollInput_ScrollInfo361410461.h"

// System.Void GvrPointerScrollInput::.ctor()
extern "C"  void GvrPointerScrollInput__ctor_m2028379424 (GvrPointerScrollInput_t4200958609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::HandleScroll(UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData,System.Boolean)
extern "C"  void GvrPointerScrollInput_HandleScroll_m2772718148 (GvrPointerScrollInput_t4200958609 * __this, GameObject_t1756533147 * ___currentGameObject0, PointerEventData_t1599784723 * ___pointerData1, bool ___isPointerActiveAndAvailable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::OnTouchingScrollHandler(UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData,UnityEngine.Vector2)
extern "C"  void GvrPointerScrollInput_OnTouchingScrollHandler_m4126706409 (GvrPointerScrollInput_t4200958609 * __this, GameObject_t1756533147 * ___currentScrollHandler0, PointerEventData_t1599784723 * ___pointerData1, Vector2_t2243707579  ___currentScroll2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::OnReleaseScrollHandler(UnityEngine.GameObject)
extern "C"  void GvrPointerScrollInput_OnReleaseScrollHandler_m901549917 (GvrPointerScrollInput_t4200958609 * __this, GameObject_t1756533147 * ___currentScrollHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::UpdateVelocity(GvrPointerScrollInput/ScrollInfo,UnityEngine.Vector2)
extern "C"  void GvrPointerScrollInput_UpdateVelocity_m4210073505 (GvrPointerScrollInput_t4200958609 * __this, ScrollInfo_t361410461 * ___scrollInfo0, Vector2_t2243707579  ___currentScroll1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::StopScrollingIfNecessary(System.Boolean,UnityEngine.GameObject)
extern "C"  void GvrPointerScrollInput_StopScrollingIfNecessary_m3011539456 (GvrPointerScrollInput_t4200958609 * __this, bool ___touching0, GameObject_t1756533147 * ___currentScrollHandler1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::UpdateInertiaScrollHandlers(System.Boolean,UnityEngine.GameObject,UnityEngine.EventSystems.PointerEventData)
extern "C"  void GvrPointerScrollInput_UpdateInertiaScrollHandlers_m3158821646 (GvrPointerScrollInput_t4200958609 * __this, bool ___touching0, GameObject_t1756533147 * ___currentScrollHandler1, PointerEventData_t1599784723 * ___pointerData2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrPointerScrollInput/ScrollInfo GvrPointerScrollInput::AddScrollHandler(UnityEngine.GameObject,UnityEngine.Vector2)
extern "C"  ScrollInfo_t361410461 * GvrPointerScrollInput_AddScrollHandler_m2774143106 (GvrPointerScrollInput_t4200958609 * __this, GameObject_t1756533147 * ___scrollHandler0, Vector2_t2243707579  ___currentScroll1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerScrollInput::RemoveScrollHandler(UnityEngine.GameObject)
extern "C"  void GvrPointerScrollInput_RemoveScrollHandler_m392050987 (GvrPointerScrollInput_t4200958609 * __this, GameObject_t1756533147 * ___scrollHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrPointerScrollInput::CanScrollStart(GvrPointerScrollInput/ScrollInfo,UnityEngine.Vector2)
extern "C"  bool GvrPointerScrollInput_CanScrollStart_m4179029950 (Il2CppObject * __this /* static, unused */, ScrollInfo_t361410461 * ___scrollInfo0, Vector2_t2243707579  ___currentScroll1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
