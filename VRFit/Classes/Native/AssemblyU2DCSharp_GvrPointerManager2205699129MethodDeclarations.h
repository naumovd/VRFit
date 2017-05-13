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

// GvrPointerManager
struct GvrPointerManager_t2205699129;
// GvrBasePointer
struct GvrBasePointer_t2150122635;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrBasePointer2150122635.h"

// System.Void GvrPointerManager::.ctor()
extern "C"  void GvrPointerManager__ctor_m2938703452 (GvrPointerManager_t2205699129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrBasePointer GvrPointerManager::get_Pointer()
extern "C"  GvrBasePointer_t2150122635 * GvrPointerManager_get_Pointer_m2011861714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerManager::set_Pointer(GvrBasePointer)
extern "C"  void GvrPointerManager_set_Pointer_m2743597351 (Il2CppObject * __this /* static, unused */, GvrBasePointer_t2150122635 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerManager::OnPointerCreated(GvrBasePointer)
extern "C"  void GvrPointerManager_OnPointerCreated_m1891135371 (Il2CppObject * __this /* static, unused */, GvrBasePointer_t2150122635 * ___createdPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerManager::Awake()
extern "C"  void GvrPointerManager_Awake_m4178990469 (GvrPointerManager_t2205699129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrPointerManager::OnDestroy()
extern "C"  void GvrPointerManager_OnDestroy_m3537033295 (GvrPointerManager_t2205699129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
