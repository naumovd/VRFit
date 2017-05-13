#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GvrAudioRoom>
struct List_1_t622563310;
// UnityEngine.Transform
struct Transform_t3275118058;
// MutablePose3D
struct MutablePose3D_t1015643808;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudio
struct  GvrAudio_t2627885619  : public Il2CppObject
{
public:

public:
};

struct GvrAudio_t2627885619_StaticFields
{
public:
	// System.Int32 GvrAudio::sampleRate
	int32_t ___sampleRate_0;
	// System.Int32 GvrAudio::numChannels
	int32_t ___numChannels_1;
	// System.Int32 GvrAudio::framesPerBuffer
	int32_t ___framesPerBuffer_2;
	// UnityEngine.Color GvrAudio::listenerDirectivityColor
	Color_t2020392075  ___listenerDirectivityColor_3;
	// UnityEngine.Color GvrAudio::sourceDirectivityColor
	Color_t2020392075  ___sourceDirectivityColor_4;
	// UnityEngine.Bounds GvrAudio::bounds
	Bounds_t3033363703  ___bounds_16;
	// System.Collections.Generic.List`1<GvrAudioRoom> GvrAudio::enabledRooms
	List_1_t622563310 * ___enabledRooms_17;
	// System.Boolean GvrAudio::initialized
	bool ___initialized_18;
	// UnityEngine.Transform GvrAudio::listenerTransform
	Transform_t3275118058 * ___listenerTransform_19;
	// System.Int32 GvrAudio::occlusionMaskValue
	int32_t ___occlusionMaskValue_20;
	// MutablePose3D GvrAudio::pose
	MutablePose3D_t1015643808 * ___pose_21;

public:
	inline static int32_t get_offset_of_sampleRate_0() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___sampleRate_0)); }
	inline int32_t get_sampleRate_0() const { return ___sampleRate_0; }
	inline int32_t* get_address_of_sampleRate_0() { return &___sampleRate_0; }
	inline void set_sampleRate_0(int32_t value)
	{
		___sampleRate_0 = value;
	}

	inline static int32_t get_offset_of_numChannels_1() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___numChannels_1)); }
	inline int32_t get_numChannels_1() const { return ___numChannels_1; }
	inline int32_t* get_address_of_numChannels_1() { return &___numChannels_1; }
	inline void set_numChannels_1(int32_t value)
	{
		___numChannels_1 = value;
	}

	inline static int32_t get_offset_of_framesPerBuffer_2() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___framesPerBuffer_2)); }
	inline int32_t get_framesPerBuffer_2() const { return ___framesPerBuffer_2; }
	inline int32_t* get_address_of_framesPerBuffer_2() { return &___framesPerBuffer_2; }
	inline void set_framesPerBuffer_2(int32_t value)
	{
		___framesPerBuffer_2 = value;
	}

	inline static int32_t get_offset_of_listenerDirectivityColor_3() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___listenerDirectivityColor_3)); }
	inline Color_t2020392075  get_listenerDirectivityColor_3() const { return ___listenerDirectivityColor_3; }
	inline Color_t2020392075 * get_address_of_listenerDirectivityColor_3() { return &___listenerDirectivityColor_3; }
	inline void set_listenerDirectivityColor_3(Color_t2020392075  value)
	{
		___listenerDirectivityColor_3 = value;
	}

	inline static int32_t get_offset_of_sourceDirectivityColor_4() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___sourceDirectivityColor_4)); }
	inline Color_t2020392075  get_sourceDirectivityColor_4() const { return ___sourceDirectivityColor_4; }
	inline Color_t2020392075 * get_address_of_sourceDirectivityColor_4() { return &___sourceDirectivityColor_4; }
	inline void set_sourceDirectivityColor_4(Color_t2020392075  value)
	{
		___sourceDirectivityColor_4 = value;
	}

	inline static int32_t get_offset_of_bounds_16() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___bounds_16)); }
	inline Bounds_t3033363703  get_bounds_16() const { return ___bounds_16; }
	inline Bounds_t3033363703 * get_address_of_bounds_16() { return &___bounds_16; }
	inline void set_bounds_16(Bounds_t3033363703  value)
	{
		___bounds_16 = value;
	}

	inline static int32_t get_offset_of_enabledRooms_17() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___enabledRooms_17)); }
	inline List_1_t622563310 * get_enabledRooms_17() const { return ___enabledRooms_17; }
	inline List_1_t622563310 ** get_address_of_enabledRooms_17() { return &___enabledRooms_17; }
	inline void set_enabledRooms_17(List_1_t622563310 * value)
	{
		___enabledRooms_17 = value;
		Il2CppCodeGenWriteBarrier(&___enabledRooms_17, value);
	}

	inline static int32_t get_offset_of_initialized_18() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___initialized_18)); }
	inline bool get_initialized_18() const { return ___initialized_18; }
	inline bool* get_address_of_initialized_18() { return &___initialized_18; }
	inline void set_initialized_18(bool value)
	{
		___initialized_18 = value;
	}

	inline static int32_t get_offset_of_listenerTransform_19() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___listenerTransform_19)); }
	inline Transform_t3275118058 * get_listenerTransform_19() const { return ___listenerTransform_19; }
	inline Transform_t3275118058 ** get_address_of_listenerTransform_19() { return &___listenerTransform_19; }
	inline void set_listenerTransform_19(Transform_t3275118058 * value)
	{
		___listenerTransform_19 = value;
		Il2CppCodeGenWriteBarrier(&___listenerTransform_19, value);
	}

	inline static int32_t get_offset_of_occlusionMaskValue_20() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___occlusionMaskValue_20)); }
	inline int32_t get_occlusionMaskValue_20() const { return ___occlusionMaskValue_20; }
	inline int32_t* get_address_of_occlusionMaskValue_20() { return &___occlusionMaskValue_20; }
	inline void set_occlusionMaskValue_20(int32_t value)
	{
		___occlusionMaskValue_20 = value;
	}

	inline static int32_t get_offset_of_pose_21() { return static_cast<int32_t>(offsetof(GvrAudio_t2627885619_StaticFields, ___pose_21)); }
	inline MutablePose3D_t1015643808 * get_pose_21() const { return ___pose_21; }
	inline MutablePose3D_t1015643808 ** get_address_of_pose_21() { return &___pose_21; }
	inline void set_pose_21(MutablePose3D_t1015643808 * value)
	{
		___pose_21 = value;
		Il2CppCodeGenWriteBarrier(&___pose_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
