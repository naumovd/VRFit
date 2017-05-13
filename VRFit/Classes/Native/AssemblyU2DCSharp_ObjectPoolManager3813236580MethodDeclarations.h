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

// ObjectPoolManager
struct ObjectPoolManager_t3813236580;
// System.String
struct String_t;
// IObjectPool
struct IObjectPool_t3363791346;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ObjectPoolManager::.ctor()
extern "C"  void ObjectPoolManager__ctor_m1822775089 (ObjectPoolManager_t3813236580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ObjectPoolManager ObjectPoolManager::get_Instance()
extern "C"  ObjectPoolManager_t3813236580 * ObjectPoolManager_get_Instance_m165726130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjectPoolManager::ContainsPool(System.String)
extern "C"  bool ObjectPoolManager_ContainsPool_m149362464 (ObjectPoolManager_t3813236580 * __this, String_t* ___poolName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::AddPool(System.String,IObjectPool)
extern "C"  void ObjectPoolManager_AddPool_m1156490590 (ObjectPoolManager_t3813236580 * __this, String_t* ___poolName0, Il2CppObject * ___pool1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::RemovePool(System.String)
extern "C"  void ObjectPoolManager_RemovePool_m3962295821 (ObjectPoolManager_t3813236580 * __this, String_t* ___poolName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::RemoveAllPools()
extern "C"  void ObjectPoolManager_RemoveAllPools_m281969025 (ObjectPoolManager_t3813236580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::Awake()
extern "C"  void ObjectPoolManager_Awake_m3596487360 (ObjectPoolManager_t3813236580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjectPoolManager::OnDestroy()
extern "C"  void ObjectPoolManager_OnDestroy_m1544753914 (ObjectPoolManager_t3813236580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
