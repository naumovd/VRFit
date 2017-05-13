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

// GameObjectPoolController
struct GameObjectPoolController_t2109978193;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GameObjectPoolController::.ctor()
extern "C"  void GameObjectPoolController__ctor_m3740921134 (GameObjectPoolController_t2109978193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::Initialize(System.Int32)
extern "C"  void GameObjectPoolController_Initialize_m1707273073 (GameObjectPoolController_t2109978193 * __this, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::OnBorrowed(UnityEngine.GameObject)
extern "C"  void GameObjectPoolController_OnBorrowed_m2449510917 (GameObjectPoolController_t2109978193 * __this, GameObject_t1756533147 * ___borrowedObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::OnPooled(UnityEngine.GameObject)
extern "C"  void GameObjectPoolController_OnPooled_m393555592 (GameObjectPoolController_t2109978193 * __this, GameObject_t1756533147 * ___pooledObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPoolController::LateUpdate()
extern "C"  void GameObjectPoolController_LateUpdate_m3552926721 (GameObjectPoolController_t2109978193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
