#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChildrenPageProvider
struct  ChildrenPageProvider_t958136491  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> ChildrenPageProvider::pages
	List_1_t2644239190 * ___pages_2;
	// System.Single ChildrenPageProvider::spacing
	float ___spacing_3;

public:
	inline static int32_t get_offset_of_pages_2() { return static_cast<int32_t>(offsetof(ChildrenPageProvider_t958136491, ___pages_2)); }
	inline List_1_t2644239190 * get_pages_2() const { return ___pages_2; }
	inline List_1_t2644239190 ** get_address_of_pages_2() { return &___pages_2; }
	inline void set_pages_2(List_1_t2644239190 * value)
	{
		___pages_2 = value;
		Il2CppCodeGenWriteBarrier(&___pages_2, value);
	}

	inline static int32_t get_offset_of_spacing_3() { return static_cast<int32_t>(offsetof(ChildrenPageProvider_t958136491, ___spacing_3)); }
	inline float get_spacing_3() const { return ___spacing_3; }
	inline float* get_address_of_spacing_3() { return &___spacing_3; }
	inline void set_spacing_3(float value)
	{
		___spacing_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
