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

// Gvr.Internal.EmulatorManager
struct EmulatorManager_t3364249716;
// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1804908545;
// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t1967739812;
// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t4143287487;
// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t602701282;
// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t358370788;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// proto.PhoneEvent
struct PhoneEvent_t2572128318;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1804908545.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1967739812.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnT4143287487.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnOr602701282.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnBu358370788.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2572128318.h"

// System.Void Gvr.Internal.EmulatorManager::.ctor()
extern "C"  void EmulatorManager__ctor_m2902830753 (EmulatorManager_t3364249716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorManager Gvr.Internal.EmulatorManager::get_Instance()
extern "C"  EmulatorManager_t3364249716 * EmulatorManager_get_Instance_m2672610894 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_gyroEventListeners(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_add_gyroEventListeners_m3470864766 (EmulatorManager_t3364249716 * __this, OnGyroEvent_t1804908545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_gyroEventListeners(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_remove_gyroEventListeners_m2633060857 (EmulatorManager_t3364249716 * __this, OnGyroEvent_t1804908545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_accelEventListeners(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_add_accelEventListeners_m270640740 (EmulatorManager_t3364249716 * __this, OnAccelEvent_t1967739812 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_accelEventListeners(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_remove_accelEventListeners_m2032519549 (EmulatorManager_t3364249716 * __this, OnAccelEvent_t1967739812 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_touchEventListeners(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_add_touchEventListeners_m1614012878 (EmulatorManager_t3364249716 * __this, OnTouchEvent_t4143287487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_touchEventListeners(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_remove_touchEventListeners_m2841481457 (EmulatorManager_t3364249716 * __this, OnTouchEvent_t4143287487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_orientationEventListeners(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_add_orientationEventListeners_m354605180 (EmulatorManager_t3364249716 * __this, OnOrientationEvent_t602701282 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_orientationEventListeners(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_remove_orientationEventListeners_m4008957729 (EmulatorManager_t3364249716 * __this, OnOrientationEvent_t602701282 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_buttonEventListeners(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_add_buttonEventListeners_m2575451646 (EmulatorManager_t3364249716 * __this, OnButtonEvent_t358370788 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_buttonEventListeners(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_remove_buttonEventListeners_m3693896249 (EmulatorManager_t3364249716 * __this, OnButtonEvent_t358370788 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onGyroEvent(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void EmulatorManager_onGyroEvent_m4150320277 (EmulatorManager_t3364249716 * __this, EmulatorGyroEvent_t1858389926  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onAccelEvent(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void EmulatorManager_onAccelEvent_m2853352313 (EmulatorManager_t3364249716 * __this, EmulatorAccelEvent_t621139879  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onTouchEvent(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void EmulatorManager_onTouchEvent_m4049017849 (EmulatorManager_t3364249716 * __this, EmulatorTouchEvent_t1122923020  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onOrientationEvent(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void EmulatorManager_onOrientationEvent_m1122700761 (EmulatorManager_t3364249716 * __this, EmulatorOrientationEvent_t4153005117  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onButtonEvent(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void EmulatorManager_onButtonEvent_m3245651489 (EmulatorManager_t3364249716 * __this, EmulatorButtonEvent_t156276569  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_gyroEventListenersInternal(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_add_gyroEventListenersInternal_m3017450141 (EmulatorManager_t3364249716 * __this, OnGyroEvent_t1804908545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_gyroEventListenersInternal(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_remove_gyroEventListenersInternal_m1959037462 (EmulatorManager_t3364249716 * __this, OnGyroEvent_t1804908545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_accelEventListenersInternal(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_add_accelEventListenersInternal_m3372572737 (EmulatorManager_t3364249716 * __this, OnAccelEvent_t1967739812 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_accelEventListenersInternal(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_remove_accelEventListenersInternal_m2962477662 (EmulatorManager_t3364249716 * __this, OnAccelEvent_t1967739812 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_touchEventListenersInternal(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_add_touchEventListenersInternal_m4176544517 (EmulatorManager_t3364249716 * __this, OnTouchEvent_t4143287487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_touchEventListenersInternal(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_remove_touchEventListenersInternal_m1405523860 (EmulatorManager_t3364249716 * __this, OnTouchEvent_t4143287487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_orientationEventListenersInternal(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_add_orientationEventListenersInternal_m3579286333 (EmulatorManager_t3364249716 * __this, OnOrientationEvent_t602701282 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_orientationEventListenersInternal(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_remove_orientationEventListenersInternal_m3190711766 (EmulatorManager_t3364249716 * __this, OnOrientationEvent_t602701282 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_buttonEventListenersInternal(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_add_buttonEventListenersInternal_m1124036221 (EmulatorManager_t3364249716 * __this, OnButtonEvent_t358370788 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_buttonEventListenersInternal(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_remove_buttonEventListenersInternal_m1787312118 (EmulatorManager_t3364249716 * __this, OnButtonEvent_t358370788 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.EmulatorManager::get_Connected()
extern "C"  bool EmulatorManager_get_Connected_m2151749703 (EmulatorManager_t3364249716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::Awake()
extern "C"  void EmulatorManager_Awake_m2269357796 (EmulatorManager_t3364249716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::Start()
extern "C"  void EmulatorManager_Start_m411591913 (EmulatorManager_t3364249716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Gvr.Internal.EmulatorManager::EndOfFrame()
extern "C"  Il2CppObject * EmulatorManager_EndOfFrame_m2267188258 (EmulatorManager_t3364249716 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::OnPhoneEvent(proto.PhoneEvent)
extern "C"  void EmulatorManager_OnPhoneEvent_m187935926 (EmulatorManager_t3364249716 * __this, PhoneEvent_t2572128318 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::ProcessEventAtEndOfFrame(proto.PhoneEvent)
extern "C"  void EmulatorManager_ProcessEventAtEndOfFrame_m2018354264 (EmulatorManager_t3364249716 * __this, PhoneEvent_t2572128318 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::.cctor()
extern "C"  void EmulatorManager__cctor_m2262768450 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
