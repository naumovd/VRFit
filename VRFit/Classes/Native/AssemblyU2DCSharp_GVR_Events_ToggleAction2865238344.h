#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GVR.Events.ToggleAction
struct  ToggleAction_t2865238344  : public MonoBehaviour_t1158329972
{
public:
	// System.Single GVR.Events.ToggleAction::lastUsage
	float ___lastUsage_2;
	// System.Boolean GVR.Events.ToggleAction::on
	bool ___on_3;
	// UnityEngine.Events.UnityEvent GVR.Events.ToggleAction::OnToggleOn
	UnityEvent_t408735097 * ___OnToggleOn_4;
	// UnityEngine.Events.UnityEvent GVR.Events.ToggleAction::OnToggleOff
	UnityEvent_t408735097 * ___OnToggleOff_5;
	// System.Boolean GVR.Events.ToggleAction::InitialState
	bool ___InitialState_6;
	// System.Boolean GVR.Events.ToggleAction::RaiseEventForInitialState
	bool ___RaiseEventForInitialState_7;
	// System.Single GVR.Events.ToggleAction::Cooldown
	float ___Cooldown_8;

public:
	inline static int32_t get_offset_of_lastUsage_2() { return static_cast<int32_t>(offsetof(ToggleAction_t2865238344, ___lastUsage_2)); }
	inline float get_lastUsage_2() const { return ___lastUsage_2; }
	inline float* get_address_of_lastUsage_2() { return &___lastUsage_2; }
	inline void set_lastUsage_2(float value)
	{
		___lastUsage_2 = value;
	}

	inline static int32_t get_offset_of_on_3() { return static_cast<int32_t>(offsetof(ToggleAction_t2865238344, ___on_3)); }
	inline bool get_on_3() const { return ___on_3; }
	inline bool* get_address_of_on_3() { return &___on_3; }
	inline void set_on_3(bool value)
	{
		___on_3 = value;
	}

	inline static int32_t get_offset_of_OnToggleOn_4() { return static_cast<int32_t>(offsetof(ToggleAction_t2865238344, ___OnToggleOn_4)); }
	inline UnityEvent_t408735097 * get_OnToggleOn_4() const { return ___OnToggleOn_4; }
	inline UnityEvent_t408735097 ** get_address_of_OnToggleOn_4() { return &___OnToggleOn_4; }
	inline void set_OnToggleOn_4(UnityEvent_t408735097 * value)
	{
		___OnToggleOn_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnToggleOn_4, value);
	}

	inline static int32_t get_offset_of_OnToggleOff_5() { return static_cast<int32_t>(offsetof(ToggleAction_t2865238344, ___OnToggleOff_5)); }
	inline UnityEvent_t408735097 * get_OnToggleOff_5() const { return ___OnToggleOff_5; }
	inline UnityEvent_t408735097 ** get_address_of_OnToggleOff_5() { return &___OnToggleOff_5; }
	inline void set_OnToggleOff_5(UnityEvent_t408735097 * value)
	{
		___OnToggleOff_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnToggleOff_5, value);
	}

	inline static int32_t get_offset_of_InitialState_6() { return static_cast<int32_t>(offsetof(ToggleAction_t2865238344, ___InitialState_6)); }
	inline bool get_InitialState_6() const { return ___InitialState_6; }
	inline bool* get_address_of_InitialState_6() { return &___InitialState_6; }
	inline void set_InitialState_6(bool value)
	{
		___InitialState_6 = value;
	}

	inline static int32_t get_offset_of_RaiseEventForInitialState_7() { return static_cast<int32_t>(offsetof(ToggleAction_t2865238344, ___RaiseEventForInitialState_7)); }
	inline bool get_RaiseEventForInitialState_7() const { return ___RaiseEventForInitialState_7; }
	inline bool* get_address_of_RaiseEventForInitialState_7() { return &___RaiseEventForInitialState_7; }
	inline void set_RaiseEventForInitialState_7(bool value)
	{
		___RaiseEventForInitialState_7 = value;
	}

	inline static int32_t get_offset_of_Cooldown_8() { return static_cast<int32_t>(offsetof(ToggleAction_t2865238344, ___Cooldown_8)); }
	inline float get_Cooldown_8() const { return ___Cooldown_8; }
	inline float* get_address_of_Cooldown_8() { return &___Cooldown_8; }
	inline void set_Cooldown_8(float value)
	{
		___Cooldown_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
