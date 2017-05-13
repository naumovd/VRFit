#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GvrPointerScrollInput/ScrollInfo>
struct Dictionary_2_t3691755905;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerScrollInput
struct  GvrPointerScrollInput_t4200958609  : public Il2CppObject
{
public:
	// System.Boolean GvrPointerScrollInput::inertia
	bool ___inertia_2;
	// System.Single GvrPointerScrollInput::decelerationRate
	float ___decelerationRate_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,GvrPointerScrollInput/ScrollInfo> GvrPointerScrollInput::scrollHandlers
	Dictionary_2_t3691755905 * ___scrollHandlers_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GvrPointerScrollInput::scrollingObjects
	List_1_t1125654279 * ___scrollingObjects_16;

public:
	inline static int32_t get_offset_of_inertia_2() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t4200958609, ___inertia_2)); }
	inline bool get_inertia_2() const { return ___inertia_2; }
	inline bool* get_address_of_inertia_2() { return &___inertia_2; }
	inline void set_inertia_2(bool value)
	{
		___inertia_2 = value;
	}

	inline static int32_t get_offset_of_decelerationRate_3() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t4200958609, ___decelerationRate_3)); }
	inline float get_decelerationRate_3() const { return ___decelerationRate_3; }
	inline float* get_address_of_decelerationRate_3() { return &___decelerationRate_3; }
	inline void set_decelerationRate_3(float value)
	{
		___decelerationRate_3 = value;
	}

	inline static int32_t get_offset_of_scrollHandlers_15() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t4200958609, ___scrollHandlers_15)); }
	inline Dictionary_2_t3691755905 * get_scrollHandlers_15() const { return ___scrollHandlers_15; }
	inline Dictionary_2_t3691755905 ** get_address_of_scrollHandlers_15() { return &___scrollHandlers_15; }
	inline void set_scrollHandlers_15(Dictionary_2_t3691755905 * value)
	{
		___scrollHandlers_15 = value;
		Il2CppCodeGenWriteBarrier(&___scrollHandlers_15, value);
	}

	inline static int32_t get_offset_of_scrollingObjects_16() { return static_cast<int32_t>(offsetof(GvrPointerScrollInput_t4200958609, ___scrollingObjects_16)); }
	inline List_1_t1125654279 * get_scrollingObjects_16() const { return ___scrollingObjects_16; }
	inline List_1_t1125654279 ** get_address_of_scrollingObjects_16() { return &___scrollingObjects_16; }
	inline void set_scrollingObjects_16(List_1_t1125654279 * value)
	{
		___scrollingObjects_16 = value;
		Il2CppCodeGenWriteBarrier(&___scrollingObjects_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
