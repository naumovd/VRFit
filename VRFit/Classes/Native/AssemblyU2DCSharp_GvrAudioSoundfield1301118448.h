#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioSoundfield
struct  GvrAudioSoundfield_t1301118448  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GvrAudioSoundfield::bypassRoomEffects
	bool ___bypassRoomEffects_2;
	// System.Single GvrAudioSoundfield::gainDb
	float ___gainDb_3;
	// System.Boolean GvrAudioSoundfield::playOnAwake
	bool ___playOnAwake_4;
	// UnityEngine.AudioClip GvrAudioSoundfield::soundfieldClip0102
	AudioClip_t1932558630 * ___soundfieldClip0102_5;
	// UnityEngine.AudioClip GvrAudioSoundfield::soundfieldClip0304
	AudioClip_t1932558630 * ___soundfieldClip0304_6;
	// System.Boolean GvrAudioSoundfield::soundfieldLoop
	bool ___soundfieldLoop_7;
	// System.Boolean GvrAudioSoundfield::soundfieldMute
	bool ___soundfieldMute_8;
	// System.Single GvrAudioSoundfield::soundfieldPitch
	float ___soundfieldPitch_9;
	// System.Int32 GvrAudioSoundfield::soundfieldPriority
	int32_t ___soundfieldPriority_10;
	// System.Single GvrAudioSoundfield::soundfieldVolume
	float ___soundfieldVolume_11;
	// System.Int32 GvrAudioSoundfield::id
	int32_t ___id_12;
	// UnityEngine.AudioSource[] GvrAudioSoundfield::audioSources
	AudioSourceU5BU5D_t1873220070* ___audioSources_13;
	// System.Boolean GvrAudioSoundfield::isPaused
	bool ___isPaused_14;

public:
	inline static int32_t get_offset_of_bypassRoomEffects_2() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___bypassRoomEffects_2)); }
	inline bool get_bypassRoomEffects_2() const { return ___bypassRoomEffects_2; }
	inline bool* get_address_of_bypassRoomEffects_2() { return &___bypassRoomEffects_2; }
	inline void set_bypassRoomEffects_2(bool value)
	{
		___bypassRoomEffects_2 = value;
	}

	inline static int32_t get_offset_of_gainDb_3() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___gainDb_3)); }
	inline float get_gainDb_3() const { return ___gainDb_3; }
	inline float* get_address_of_gainDb_3() { return &___gainDb_3; }
	inline void set_gainDb_3(float value)
	{
		___gainDb_3 = value;
	}

	inline static int32_t get_offset_of_playOnAwake_4() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___playOnAwake_4)); }
	inline bool get_playOnAwake_4() const { return ___playOnAwake_4; }
	inline bool* get_address_of_playOnAwake_4() { return &___playOnAwake_4; }
	inline void set_playOnAwake_4(bool value)
	{
		___playOnAwake_4 = value;
	}

	inline static int32_t get_offset_of_soundfieldClip0102_5() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldClip0102_5)); }
	inline AudioClip_t1932558630 * get_soundfieldClip0102_5() const { return ___soundfieldClip0102_5; }
	inline AudioClip_t1932558630 ** get_address_of_soundfieldClip0102_5() { return &___soundfieldClip0102_5; }
	inline void set_soundfieldClip0102_5(AudioClip_t1932558630 * value)
	{
		___soundfieldClip0102_5 = value;
		Il2CppCodeGenWriteBarrier(&___soundfieldClip0102_5, value);
	}

	inline static int32_t get_offset_of_soundfieldClip0304_6() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldClip0304_6)); }
	inline AudioClip_t1932558630 * get_soundfieldClip0304_6() const { return ___soundfieldClip0304_6; }
	inline AudioClip_t1932558630 ** get_address_of_soundfieldClip0304_6() { return &___soundfieldClip0304_6; }
	inline void set_soundfieldClip0304_6(AudioClip_t1932558630 * value)
	{
		___soundfieldClip0304_6 = value;
		Il2CppCodeGenWriteBarrier(&___soundfieldClip0304_6, value);
	}

	inline static int32_t get_offset_of_soundfieldLoop_7() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldLoop_7)); }
	inline bool get_soundfieldLoop_7() const { return ___soundfieldLoop_7; }
	inline bool* get_address_of_soundfieldLoop_7() { return &___soundfieldLoop_7; }
	inline void set_soundfieldLoop_7(bool value)
	{
		___soundfieldLoop_7 = value;
	}

	inline static int32_t get_offset_of_soundfieldMute_8() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldMute_8)); }
	inline bool get_soundfieldMute_8() const { return ___soundfieldMute_8; }
	inline bool* get_address_of_soundfieldMute_8() { return &___soundfieldMute_8; }
	inline void set_soundfieldMute_8(bool value)
	{
		___soundfieldMute_8 = value;
	}

	inline static int32_t get_offset_of_soundfieldPitch_9() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldPitch_9)); }
	inline float get_soundfieldPitch_9() const { return ___soundfieldPitch_9; }
	inline float* get_address_of_soundfieldPitch_9() { return &___soundfieldPitch_9; }
	inline void set_soundfieldPitch_9(float value)
	{
		___soundfieldPitch_9 = value;
	}

	inline static int32_t get_offset_of_soundfieldPriority_10() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldPriority_10)); }
	inline int32_t get_soundfieldPriority_10() const { return ___soundfieldPriority_10; }
	inline int32_t* get_address_of_soundfieldPriority_10() { return &___soundfieldPriority_10; }
	inline void set_soundfieldPriority_10(int32_t value)
	{
		___soundfieldPriority_10 = value;
	}

	inline static int32_t get_offset_of_soundfieldVolume_11() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldVolume_11)); }
	inline float get_soundfieldVolume_11() const { return ___soundfieldVolume_11; }
	inline float* get_address_of_soundfieldVolume_11() { return &___soundfieldVolume_11; }
	inline void set_soundfieldVolume_11(float value)
	{
		___soundfieldVolume_11 = value;
	}

	inline static int32_t get_offset_of_id_12() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___id_12)); }
	inline int32_t get_id_12() const { return ___id_12; }
	inline int32_t* get_address_of_id_12() { return &___id_12; }
	inline void set_id_12(int32_t value)
	{
		___id_12 = value;
	}

	inline static int32_t get_offset_of_audioSources_13() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___audioSources_13)); }
	inline AudioSourceU5BU5D_t1873220070* get_audioSources_13() const { return ___audioSources_13; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_audioSources_13() { return &___audioSources_13; }
	inline void set_audioSources_13(AudioSourceU5BU5D_t1873220070* value)
	{
		___audioSources_13 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_13, value);
	}

	inline static int32_t get_offset_of_isPaused_14() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___isPaused_14)); }
	inline bool get_isPaused_14() const { return ___isPaused_14; }
	inline bool* get_address_of_isPaused_14() { return &___isPaused_14; }
	inline void set_isPaused_14(bool value)
	{
		___isPaused_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
