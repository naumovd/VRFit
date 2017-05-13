#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrReticlePointerImpl
struct GvrReticlePointerImpl_t3911945438;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrReticlePointer
struct  GvrReticlePointer_t2836438988  : public MonoBehaviour_t1158329972
{
public:
	// GvrReticlePointerImpl GvrReticlePointer::reticlePointerImpl
	GvrReticlePointerImpl_t3911945438 * ___reticlePointerImpl_2;
	// System.Int32 GvrReticlePointer::reticleSegments
	int32_t ___reticleSegments_3;
	// System.Single GvrReticlePointer::reticleGrowthSpeed
	float ___reticleGrowthSpeed_4;

public:
	inline static int32_t get_offset_of_reticlePointerImpl_2() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2836438988, ___reticlePointerImpl_2)); }
	inline GvrReticlePointerImpl_t3911945438 * get_reticlePointerImpl_2() const { return ___reticlePointerImpl_2; }
	inline GvrReticlePointerImpl_t3911945438 ** get_address_of_reticlePointerImpl_2() { return &___reticlePointerImpl_2; }
	inline void set_reticlePointerImpl_2(GvrReticlePointerImpl_t3911945438 * value)
	{
		___reticlePointerImpl_2 = value;
		Il2CppCodeGenWriteBarrier(&___reticlePointerImpl_2, value);
	}

	inline static int32_t get_offset_of_reticleSegments_3() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2836438988, ___reticleSegments_3)); }
	inline int32_t get_reticleSegments_3() const { return ___reticleSegments_3; }
	inline int32_t* get_address_of_reticleSegments_3() { return &___reticleSegments_3; }
	inline void set_reticleSegments_3(int32_t value)
	{
		___reticleSegments_3 = value;
	}

	inline static int32_t get_offset_of_reticleGrowthSpeed_4() { return static_cast<int32_t>(offsetof(GvrReticlePointer_t2836438988, ___reticleGrowthSpeed_4)); }
	inline float get_reticleGrowthSpeed_4() const { return ___reticleGrowthSpeed_4; }
	inline float* get_address_of_reticleGrowthSpeed_4() { return &___reticleGrowthSpeed_4; }
	inline void set_reticleGrowthSpeed_4(float value)
	{
		___reticleGrowthSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
