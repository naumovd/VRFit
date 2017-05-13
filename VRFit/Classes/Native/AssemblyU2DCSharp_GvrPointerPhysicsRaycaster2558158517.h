#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t1348919171;

#include "AssemblyU2DCSharp_GvrBasePointerRaycaster1189534163.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerPhysicsRaycaster
struct  GvrPointerPhysicsRaycaster_t2558158517  : public GvrBasePointerRaycaster_t1189534163
{
public:
	// UnityEngine.LayerMask GvrPointerPhysicsRaycaster::raycasterEventMask
	LayerMask_t3188175821  ___raycasterEventMask_5;
	// UnityEngine.Camera GvrPointerPhysicsRaycaster::cachedEventCamera
	Camera_t189460977 * ___cachedEventCamera_6;

public:
	inline static int32_t get_offset_of_raycasterEventMask_5() { return static_cast<int32_t>(offsetof(GvrPointerPhysicsRaycaster_t2558158517, ___raycasterEventMask_5)); }
	inline LayerMask_t3188175821  get_raycasterEventMask_5() const { return ___raycasterEventMask_5; }
	inline LayerMask_t3188175821 * get_address_of_raycasterEventMask_5() { return &___raycasterEventMask_5; }
	inline void set_raycasterEventMask_5(LayerMask_t3188175821  value)
	{
		___raycasterEventMask_5 = value;
	}

	inline static int32_t get_offset_of_cachedEventCamera_6() { return static_cast<int32_t>(offsetof(GvrPointerPhysicsRaycaster_t2558158517, ___cachedEventCamera_6)); }
	inline Camera_t189460977 * get_cachedEventCamera_6() const { return ___cachedEventCamera_6; }
	inline Camera_t189460977 ** get_address_of_cachedEventCamera_6() { return &___cachedEventCamera_6; }
	inline void set_cachedEventCamera_6(Camera_t189460977 * value)
	{
		___cachedEventCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___cachedEventCamera_6, value);
	}
};

struct GvrPointerPhysicsRaycaster_t2558158517_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.RaycastHit> GvrPointerPhysicsRaycaster::<>f__am$cache0
	Comparison_1_t1348919171 * ___U3CU3Ef__amU24cache0_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_7() { return static_cast<int32_t>(offsetof(GvrPointerPhysicsRaycaster_t2558158517_StaticFields, ___U3CU3Ef__amU24cache0_7)); }
	inline Comparison_1_t1348919171 * get_U3CU3Ef__amU24cache0_7() const { return ___U3CU3Ef__amU24cache0_7; }
	inline Comparison_1_t1348919171 ** get_address_of_U3CU3Ef__amU24cache0_7() { return &___U3CU3Ef__amU24cache0_7; }
	inline void set_U3CU3Ef__amU24cache0_7(Comparison_1_t1348919171 * value)
	{
		___U3CU3Ef__amU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
