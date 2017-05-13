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
// GvrBasePointer
struct GvrBasePointer_t2150122635;
// UnityEngine.Camera
struct Camera_t189460977;
// IGvrGazeResponder
struct IGvrGazeResponder_t1981717083;
// System.Func`2<GvrBasePointer,GvrBasePointer>
struct Func_2_t4066506053;
// System.Func`2<GvrBasePointer,System.Boolean>
struct Func_2_t1446990840;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrGaze
struct  GvrGaze_t2249568644  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GvrGaze::pointerObject
	GameObject_t1756533147 * ___pointerObject_2;
	// GvrBasePointer GvrGaze::pointer
	GvrBasePointer_t2150122635 * ___pointer_3;
	// UnityEngine.Camera GvrGaze::<cam>k__BackingField
	Camera_t189460977 * ___U3CcamU3Ek__BackingField_4;
	// UnityEngine.LayerMask GvrGaze::mask
	LayerMask_t3188175821  ___mask_5;
	// IGvrGazeResponder GvrGaze::currentTarget
	Il2CppObject * ___currentTarget_6;
	// UnityEngine.GameObject GvrGaze::currentGazeObject
	GameObject_t1756533147 * ___currentGazeObject_7;
	// UnityEngine.Vector3 GvrGaze::lastIntersectPosition
	Vector3_t2243707580  ___lastIntersectPosition_8;
	// UnityEngine.Ray GvrGaze::lastIntersectionRay
	Ray_t2469606224  ___lastIntersectionRay_9;
	// System.Boolean GvrGaze::isTriggered
	bool ___isTriggered_10;

public:
	inline static int32_t get_offset_of_pointerObject_2() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___pointerObject_2)); }
	inline GameObject_t1756533147 * get_pointerObject_2() const { return ___pointerObject_2; }
	inline GameObject_t1756533147 ** get_address_of_pointerObject_2() { return &___pointerObject_2; }
	inline void set_pointerObject_2(GameObject_t1756533147 * value)
	{
		___pointerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointerObject_2, value);
	}

	inline static int32_t get_offset_of_pointer_3() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___pointer_3)); }
	inline GvrBasePointer_t2150122635 * get_pointer_3() const { return ___pointer_3; }
	inline GvrBasePointer_t2150122635 ** get_address_of_pointer_3() { return &___pointer_3; }
	inline void set_pointer_3(GvrBasePointer_t2150122635 * value)
	{
		___pointer_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_3, value);
	}

	inline static int32_t get_offset_of_U3CcamU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___U3CcamU3Ek__BackingField_4)); }
	inline Camera_t189460977 * get_U3CcamU3Ek__BackingField_4() const { return ___U3CcamU3Ek__BackingField_4; }
	inline Camera_t189460977 ** get_address_of_U3CcamU3Ek__BackingField_4() { return &___U3CcamU3Ek__BackingField_4; }
	inline void set_U3CcamU3Ek__BackingField_4(Camera_t189460977 * value)
	{
		___U3CcamU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcamU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_mask_5() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___mask_5)); }
	inline LayerMask_t3188175821  get_mask_5() const { return ___mask_5; }
	inline LayerMask_t3188175821 * get_address_of_mask_5() { return &___mask_5; }
	inline void set_mask_5(LayerMask_t3188175821  value)
	{
		___mask_5 = value;
	}

	inline static int32_t get_offset_of_currentTarget_6() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___currentTarget_6)); }
	inline Il2CppObject * get_currentTarget_6() const { return ___currentTarget_6; }
	inline Il2CppObject ** get_address_of_currentTarget_6() { return &___currentTarget_6; }
	inline void set_currentTarget_6(Il2CppObject * value)
	{
		___currentTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&___currentTarget_6, value);
	}

	inline static int32_t get_offset_of_currentGazeObject_7() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___currentGazeObject_7)); }
	inline GameObject_t1756533147 * get_currentGazeObject_7() const { return ___currentGazeObject_7; }
	inline GameObject_t1756533147 ** get_address_of_currentGazeObject_7() { return &___currentGazeObject_7; }
	inline void set_currentGazeObject_7(GameObject_t1756533147 * value)
	{
		___currentGazeObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentGazeObject_7, value);
	}

	inline static int32_t get_offset_of_lastIntersectPosition_8() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___lastIntersectPosition_8)); }
	inline Vector3_t2243707580  get_lastIntersectPosition_8() const { return ___lastIntersectPosition_8; }
	inline Vector3_t2243707580 * get_address_of_lastIntersectPosition_8() { return &___lastIntersectPosition_8; }
	inline void set_lastIntersectPosition_8(Vector3_t2243707580  value)
	{
		___lastIntersectPosition_8 = value;
	}

	inline static int32_t get_offset_of_lastIntersectionRay_9() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___lastIntersectionRay_9)); }
	inline Ray_t2469606224  get_lastIntersectionRay_9() const { return ___lastIntersectionRay_9; }
	inline Ray_t2469606224 * get_address_of_lastIntersectionRay_9() { return &___lastIntersectionRay_9; }
	inline void set_lastIntersectionRay_9(Ray_t2469606224  value)
	{
		___lastIntersectionRay_9 = value;
	}

	inline static int32_t get_offset_of_isTriggered_10() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644, ___isTriggered_10)); }
	inline bool get_isTriggered_10() const { return ___isTriggered_10; }
	inline bool* get_address_of_isTriggered_10() { return &___isTriggered_10; }
	inline void set_isTriggered_10(bool value)
	{
		___isTriggered_10 = value;
	}
};

struct GvrGaze_t2249568644_StaticFields
{
public:
	// System.Func`2<GvrBasePointer,GvrBasePointer> GvrGaze::<>f__am$cache0
	Func_2_t4066506053 * ___U3CU3Ef__amU24cache0_11;
	// System.Func`2<GvrBasePointer,System.Boolean> GvrGaze::<>f__am$cache1
	Func_2_t1446990840 * ___U3CU3Ef__amU24cache1_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t4066506053 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t4066506053 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t4066506053 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_12() { return static_cast<int32_t>(offsetof(GvrGaze_t2249568644_StaticFields, ___U3CU3Ef__amU24cache1_12)); }
	inline Func_2_t1446990840 * get_U3CU3Ef__amU24cache1_12() const { return ___U3CU3Ef__amU24cache1_12; }
	inline Func_2_t1446990840 ** get_address_of_U3CU3Ef__amU24cache1_12() { return &___U3CU3Ef__amU24cache1_12; }
	inline void set_U3CU3Ef__amU24cache1_12(Func_2_t1446990840 * value)
	{
		___U3CU3Ef__amU24cache1_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
