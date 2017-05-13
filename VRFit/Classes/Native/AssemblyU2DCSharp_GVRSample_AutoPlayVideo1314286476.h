#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t673526704;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GVRSample.AutoPlayVideo
struct  AutoPlayVideo_t1314286476  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GVRSample.AutoPlayVideo::done
	bool ___done_2;
	// System.Single GVRSample.AutoPlayVideo::t
	float ___t_3;
	// GvrVideoPlayerTexture GVRSample.AutoPlayVideo::player
	GvrVideoPlayerTexture_t673526704 * ___player_4;
	// System.Single GVRSample.AutoPlayVideo::delay
	float ___delay_5;
	// System.Boolean GVRSample.AutoPlayVideo::loop
	bool ___loop_6;

public:
	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(AutoPlayVideo_t1314286476, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}

	inline static int32_t get_offset_of_t_3() { return static_cast<int32_t>(offsetof(AutoPlayVideo_t1314286476, ___t_3)); }
	inline float get_t_3() const { return ___t_3; }
	inline float* get_address_of_t_3() { return &___t_3; }
	inline void set_t_3(float value)
	{
		___t_3 = value;
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(AutoPlayVideo_t1314286476, ___player_4)); }
	inline GvrVideoPlayerTexture_t673526704 * get_player_4() const { return ___player_4; }
	inline GvrVideoPlayerTexture_t673526704 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GvrVideoPlayerTexture_t673526704 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier(&___player_4, value);
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(AutoPlayVideo_t1314286476, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}

	inline static int32_t get_offset_of_loop_6() { return static_cast<int32_t>(offsetof(AutoPlayVideo_t1314286476, ___loop_6)); }
	inline bool get_loop_6() const { return ___loop_6; }
	inline bool* get_address_of_loop_6() { return &___loop_6; }
	inline void set_loop_6(bool value)
	{
		___loop_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
