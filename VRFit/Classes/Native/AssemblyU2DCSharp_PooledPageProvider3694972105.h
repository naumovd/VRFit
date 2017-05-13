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
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PooledPageProvider
struct  PooledPageProvider_t3694972105  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PooledPageProvider::pagePrefab
	GameObject_t1756533147 * ___pagePrefab_2;
	// System.Single PooledPageProvider::spacing
	float ___spacing_3;
	// System.Int32 PooledPageProvider::NumPages
	int32_t ___NumPages_4;
	// System.String PooledPageProvider::prefabName
	String_t* ___prefabName_5;

public:
	inline static int32_t get_offset_of_pagePrefab_2() { return static_cast<int32_t>(offsetof(PooledPageProvider_t3694972105, ___pagePrefab_2)); }
	inline GameObject_t1756533147 * get_pagePrefab_2() const { return ___pagePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_pagePrefab_2() { return &___pagePrefab_2; }
	inline void set_pagePrefab_2(GameObject_t1756533147 * value)
	{
		___pagePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___pagePrefab_2, value);
	}

	inline static int32_t get_offset_of_spacing_3() { return static_cast<int32_t>(offsetof(PooledPageProvider_t3694972105, ___spacing_3)); }
	inline float get_spacing_3() const { return ___spacing_3; }
	inline float* get_address_of_spacing_3() { return &___spacing_3; }
	inline void set_spacing_3(float value)
	{
		___spacing_3 = value;
	}

	inline static int32_t get_offset_of_NumPages_4() { return static_cast<int32_t>(offsetof(PooledPageProvider_t3694972105, ___NumPages_4)); }
	inline int32_t get_NumPages_4() const { return ___NumPages_4; }
	inline int32_t* get_address_of_NumPages_4() { return &___NumPages_4; }
	inline void set_NumPages_4(int32_t value)
	{
		___NumPages_4 = value;
	}

	inline static int32_t get_offset_of_prefabName_5() { return static_cast<int32_t>(offsetof(PooledPageProvider_t3694972105, ___prefabName_5)); }
	inline String_t* get_prefabName_5() const { return ___prefabName_5; }
	inline String_t** get_address_of_prefabName_5() { return &___prefabName_5; }
	inline void set_prefabName_5(String_t* value)
	{
		___prefabName_5 = value;
		Il2CppCodeGenWriteBarrier(&___prefabName_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
