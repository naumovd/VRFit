#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ObjectPoolManager
struct ObjectPoolManager_t3813236580;
// System.Collections.Generic.Dictionary`2<System.String,IObjectPool>
struct Dictionary_2_t983603312;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectPoolManager
struct  ObjectPoolManager_t3813236580  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,IObjectPool> ObjectPoolManager::pools
	Dictionary_2_t983603312 * ___pools_3;

public:
	inline static int32_t get_offset_of_pools_3() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t3813236580, ___pools_3)); }
	inline Dictionary_2_t983603312 * get_pools_3() const { return ___pools_3; }
	inline Dictionary_2_t983603312 ** get_address_of_pools_3() { return &___pools_3; }
	inline void set_pools_3(Dictionary_2_t983603312 * value)
	{
		___pools_3 = value;
		Il2CppCodeGenWriteBarrier(&___pools_3, value);
	}
};

struct ObjectPoolManager_t3813236580_StaticFields
{
public:
	// ObjectPoolManager ObjectPoolManager::instance
	ObjectPoolManager_t3813236580 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ObjectPoolManager_t3813236580_StaticFields, ___instance_2)); }
	inline ObjectPoolManager_t3813236580 * get_instance_2() const { return ___instance_2; }
	inline ObjectPoolManager_t3813236580 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ObjectPoolManager_t3813236580 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
