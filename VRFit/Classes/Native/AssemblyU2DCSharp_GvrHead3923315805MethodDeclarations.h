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

// GvrHead
struct GvrHead_t3923315805;
// GvrHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t1289521902;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "AssemblyU2DCSharp_GvrHead_HeadUpdatedDelegate1289521902.h"

// System.Void GvrHead::.ctor()
extern "C"  void GvrHead__ctor_m1618878510 (GvrHead_t3923315805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray GvrHead::get_Gaze()
extern "C"  Ray_t2469606224  GvrHead_get_Gaze_m2487455538 (GvrHead_t3923315805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead::add_OnHeadUpdated(GvrHead/HeadUpdatedDelegate)
extern "C"  void GvrHead_add_OnHeadUpdated_m3023051996 (GvrHead_t3923315805 * __this, HeadUpdatedDelegate_t1289521902 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead::remove_OnHeadUpdated(GvrHead/HeadUpdatedDelegate)
extern "C"  void GvrHead_remove_OnHeadUpdated_m3173530787 (GvrHead_t3923315805 * __this, HeadUpdatedDelegate_t1289521902 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead::Awake()
extern "C"  void GvrHead_Awake_m71340397 (GvrHead_t3923315805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead::Update()
extern "C"  void GvrHead_Update_m3902790761 (GvrHead_t3923315805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead::LateUpdate()
extern "C"  void GvrHead_LateUpdate_m575038069 (GvrHead_t3923315805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead::UpdateHead()
extern "C"  void GvrHead_UpdateHead_m1684543261 (GvrHead_t3923315805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
