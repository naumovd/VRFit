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

// GameObjectPool
struct GameObjectPool_t4074206773;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GameObjectPool::.ctor(UnityEngine.GameObject,System.Int32)
extern "C"  void GameObjectPool__ctor_m486088741 (GameObjectPool_t4074206773 * __this, GameObject_t1756533147 * ___prefab0, int32_t ___capacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::.ctor(UnityEngine.GameObject,System.Int32,System.Int32)
extern "C"  void GameObjectPool__ctor_m986672534 (GameObjectPool_t4074206773 * __this, GameObject_t1756533147 * ___prefab0, int32_t ___capacity1, int32_t ___preAllocateAmount2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::Dispose()
extern "C"  void GameObjectPool_Dispose_m2174999751 (GameObjectPool_t4074206773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::OnBorrowed(UnityEngine.GameObject)
extern "C"  void GameObjectPool_OnBorrowed_m830573541 (GameObjectPool_t4074206773 * __this, GameObject_t1756533147 * ___borrowedObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::OnPooled(UnityEngine.GameObject)
extern "C"  void GameObjectPool_OnPooled_m3997689112 (GameObjectPool_t4074206773 * __this, GameObject_t1756533147 * ___pooledObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::OnUnableToReturn(UnityEngine.GameObject)
extern "C"  void GameObjectPool_OnUnableToReturn_m2801959349 (GameObjectPool_t4074206773 * __this, GameObject_t1756533147 * ___returnedObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GameObjectPool::AllocateObject()
extern "C"  GameObject_t1756533147 * GameObjectPool_AllocateObject_m372494399 (GameObjectPool_t4074206773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
