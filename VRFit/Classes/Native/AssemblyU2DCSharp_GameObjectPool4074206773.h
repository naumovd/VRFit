#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameObjectPoolController
struct GameObjectPoolController_t2109978193;

#include "AssemblyU2DCSharp_ObjectPool_1_gen3376809258.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectPool
struct  GameObjectPool_t4074206773  : public ObjectPool_1_t3376809258
{
public:
	// UnityEngine.GameObject GameObjectPool::prefab
	GameObject_t1756533147 * ___prefab_2;
	// GameObjectPoolController GameObjectPool::poolController
	GameObjectPoolController_t2109978193 * ___poolController_3;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(GameObjectPool_t4074206773, ___prefab_2)); }
	inline GameObject_t1756533147 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_t1756533147 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_t1756533147 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_2, value);
	}

	inline static int32_t get_offset_of_poolController_3() { return static_cast<int32_t>(offsetof(GameObjectPool_t4074206773, ___poolController_3)); }
	inline GameObjectPoolController_t2109978193 * get_poolController_3() const { return ___poolController_3; }
	inline GameObjectPoolController_t2109978193 ** get_address_of_poolController_3() { return &___poolController_3; }
	inline void set_poolController_3(GameObjectPoolController_t2109978193 * value)
	{
		___poolController_3 = value;
		Il2CppCodeGenWriteBarrier(&___poolController_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
