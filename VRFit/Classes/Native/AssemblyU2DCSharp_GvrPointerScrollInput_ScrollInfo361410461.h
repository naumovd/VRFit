#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerScrollInput/ScrollInfo
struct  ScrollInfo_t361410461  : public Il2CppObject
{
public:
	// System.Boolean GvrPointerScrollInput/ScrollInfo::isScrolling
	bool ___isScrolling_0;
	// UnityEngine.Vector2 GvrPointerScrollInput/ScrollInfo::initScroll
	Vector2_t2243707579  ___initScroll_1;
	// UnityEngine.Vector2 GvrPointerScrollInput/ScrollInfo::lastScroll
	Vector2_t2243707579  ___lastScroll_2;
	// UnityEngine.Vector2 GvrPointerScrollInput/ScrollInfo::scrollVelocity
	Vector2_t2243707579  ___scrollVelocity_3;

public:
	inline static int32_t get_offset_of_isScrolling_0() { return static_cast<int32_t>(offsetof(ScrollInfo_t361410461, ___isScrolling_0)); }
	inline bool get_isScrolling_0() const { return ___isScrolling_0; }
	inline bool* get_address_of_isScrolling_0() { return &___isScrolling_0; }
	inline void set_isScrolling_0(bool value)
	{
		___isScrolling_0 = value;
	}

	inline static int32_t get_offset_of_initScroll_1() { return static_cast<int32_t>(offsetof(ScrollInfo_t361410461, ___initScroll_1)); }
	inline Vector2_t2243707579  get_initScroll_1() const { return ___initScroll_1; }
	inline Vector2_t2243707579 * get_address_of_initScroll_1() { return &___initScroll_1; }
	inline void set_initScroll_1(Vector2_t2243707579  value)
	{
		___initScroll_1 = value;
	}

	inline static int32_t get_offset_of_lastScroll_2() { return static_cast<int32_t>(offsetof(ScrollInfo_t361410461, ___lastScroll_2)); }
	inline Vector2_t2243707579  get_lastScroll_2() const { return ___lastScroll_2; }
	inline Vector2_t2243707579 * get_address_of_lastScroll_2() { return &___lastScroll_2; }
	inline void set_lastScroll_2(Vector2_t2243707579  value)
	{
		___lastScroll_2 = value;
	}

	inline static int32_t get_offset_of_scrollVelocity_3() { return static_cast<int32_t>(offsetof(ScrollInfo_t361410461, ___scrollVelocity_3)); }
	inline Vector2_t2243707579  get_scrollVelocity_3() const { return ___scrollVelocity_3; }
	inline Vector2_t2243707579 * get_address_of_scrollVelocity_3() { return &___scrollVelocity_3; }
	inline void set_scrollVelocity_3(Vector2_t2243707579  value)
	{
		___scrollVelocity_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
