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
// DemoInputManager
struct DemoInputManager_t2776755480;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GVRDemoManager
struct  GVRDemoManager_t2690453893  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GVRDemoManager::m_launchVrHomeButton
	GameObject_t1756533147 * ___m_launchVrHomeButton_2;
	// DemoInputManager GVRDemoManager::m_demoInputManager
	DemoInputManager_t2776755480 * ___m_demoInputManager_3;

public:
	inline static int32_t get_offset_of_m_launchVrHomeButton_2() { return static_cast<int32_t>(offsetof(GVRDemoManager_t2690453893, ___m_launchVrHomeButton_2)); }
	inline GameObject_t1756533147 * get_m_launchVrHomeButton_2() const { return ___m_launchVrHomeButton_2; }
	inline GameObject_t1756533147 ** get_address_of_m_launchVrHomeButton_2() { return &___m_launchVrHomeButton_2; }
	inline void set_m_launchVrHomeButton_2(GameObject_t1756533147 * value)
	{
		___m_launchVrHomeButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_launchVrHomeButton_2, value);
	}

	inline static int32_t get_offset_of_m_demoInputManager_3() { return static_cast<int32_t>(offsetof(GVRDemoManager_t2690453893, ___m_demoInputManager_3)); }
	inline DemoInputManager_t2776755480 * get_m_demoInputManager_3() const { return ___m_demoInputManager_3; }
	inline DemoInputManager_t2776755480 ** get_address_of_m_demoInputManager_3() { return &___m_demoInputManager_3; }
	inline void set_m_demoInputManager_3(DemoInputManager_t2776755480 * value)
	{
		___m_demoInputManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_demoInputManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
