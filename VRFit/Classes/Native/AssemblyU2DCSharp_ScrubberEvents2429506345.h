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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// VideoControlsManager
struct VideoControlsManager_t3010523296;
// GvrPointerInputModule
struct GvrPointerInputModule_t1603976810;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrubberEvents
struct  ScrubberEvents_t2429506345  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ScrubberEvents::newPositionHandle
	GameObject_t1756533147 * ___newPositionHandle_2;
	// UnityEngine.Vector3[] ScrubberEvents::corners
	Vector3U5BU5D_t1172311765* ___corners_3;
	// UnityEngine.UI.Slider ScrubberEvents::slider
	Slider_t297367283 * ___slider_4;
	// VideoControlsManager ScrubberEvents::mgr
	VideoControlsManager_t3010523296 * ___mgr_5;
	// GvrPointerInputModule ScrubberEvents::inp
	GvrPointerInputModule_t1603976810 * ___inp_6;

public:
	inline static int32_t get_offset_of_newPositionHandle_2() { return static_cast<int32_t>(offsetof(ScrubberEvents_t2429506345, ___newPositionHandle_2)); }
	inline GameObject_t1756533147 * get_newPositionHandle_2() const { return ___newPositionHandle_2; }
	inline GameObject_t1756533147 ** get_address_of_newPositionHandle_2() { return &___newPositionHandle_2; }
	inline void set_newPositionHandle_2(GameObject_t1756533147 * value)
	{
		___newPositionHandle_2 = value;
		Il2CppCodeGenWriteBarrier(&___newPositionHandle_2, value);
	}

	inline static int32_t get_offset_of_corners_3() { return static_cast<int32_t>(offsetof(ScrubberEvents_t2429506345, ___corners_3)); }
	inline Vector3U5BU5D_t1172311765* get_corners_3() const { return ___corners_3; }
	inline Vector3U5BU5D_t1172311765** get_address_of_corners_3() { return &___corners_3; }
	inline void set_corners_3(Vector3U5BU5D_t1172311765* value)
	{
		___corners_3 = value;
		Il2CppCodeGenWriteBarrier(&___corners_3, value);
	}

	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(ScrubberEvents_t2429506345, ___slider_4)); }
	inline Slider_t297367283 * get_slider_4() const { return ___slider_4; }
	inline Slider_t297367283 ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_t297367283 * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier(&___slider_4, value);
	}

	inline static int32_t get_offset_of_mgr_5() { return static_cast<int32_t>(offsetof(ScrubberEvents_t2429506345, ___mgr_5)); }
	inline VideoControlsManager_t3010523296 * get_mgr_5() const { return ___mgr_5; }
	inline VideoControlsManager_t3010523296 ** get_address_of_mgr_5() { return &___mgr_5; }
	inline void set_mgr_5(VideoControlsManager_t3010523296 * value)
	{
		___mgr_5 = value;
		Il2CppCodeGenWriteBarrier(&___mgr_5, value);
	}

	inline static int32_t get_offset_of_inp_6() { return static_cast<int32_t>(offsetof(ScrubberEvents_t2429506345, ___inp_6)); }
	inline GvrPointerInputModule_t1603976810 * get_inp_6() const { return ___inp_6; }
	inline GvrPointerInputModule_t1603976810 ** get_address_of_inp_6() { return &___inp_6; }
	inline void set_inp_6(GvrPointerInputModule_t1603976810 * value)
	{
		___inp_6 = value;
		Il2CppCodeGenWriteBarrier(&___inp_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
