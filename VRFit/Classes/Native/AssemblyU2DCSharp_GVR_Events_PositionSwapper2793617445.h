#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GVR.Events.PositionSwapper
struct  PositionSwapper_t2793617445  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 GVR.Events.PositionSwapper::currentIndex
	int32_t ___currentIndex_2;
	// UnityEngine.Vector3[] GVR.Events.PositionSwapper::Positions
	Vector3U5BU5D_t1172311765* ___Positions_3;

public:
	inline static int32_t get_offset_of_currentIndex_2() { return static_cast<int32_t>(offsetof(PositionSwapper_t2793617445, ___currentIndex_2)); }
	inline int32_t get_currentIndex_2() const { return ___currentIndex_2; }
	inline int32_t* get_address_of_currentIndex_2() { return &___currentIndex_2; }
	inline void set_currentIndex_2(int32_t value)
	{
		___currentIndex_2 = value;
	}

	inline static int32_t get_offset_of_Positions_3() { return static_cast<int32_t>(offsetof(PositionSwapper_t2793617445, ___Positions_3)); }
	inline Vector3U5BU5D_t1172311765* get_Positions_3() const { return ___Positions_3; }
	inline Vector3U5BU5D_t1172311765** get_address_of_Positions_3() { return &___Positions_3; }
	inline void set_Positions_3(Vector3U5BU5D_t1172311765* value)
	{
		___Positions_3 = value;
		Il2CppCodeGenWriteBarrier(&___Positions_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
