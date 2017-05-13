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
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "AssemblyU2DCSharp_GvrBasePointer2150122635.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrLaserPointerImpl
struct  GvrLaserPointerImpl_t2141976067  : public GvrBasePointer_t2150122635
{
public:
	// UnityEngine.Camera GvrLaserPointerImpl::<MainCamera>k__BackingField
	Camera_t189460977 * ___U3CMainCameraU3Ek__BackingField_5;
	// UnityEngine.Color GvrLaserPointerImpl::<LaserColor>k__BackingField
	Color_t2020392075  ___U3CLaserColorU3Ek__BackingField_6;
	// UnityEngine.LineRenderer GvrLaserPointerImpl::<LaserLineRenderer>k__BackingField
	LineRenderer_t849157671 * ___U3CLaserLineRendererU3Ek__BackingField_7;
	// System.Single GvrLaserPointerImpl::<MaxLaserDistance>k__BackingField
	float ___U3CMaxLaserDistanceU3Ek__BackingField_8;
	// System.Single GvrLaserPointerImpl::<MaxReticleDistance>k__BackingField
	float ___U3CMaxReticleDistanceU3Ek__BackingField_9;
	// UnityEngine.GameObject GvrLaserPointerImpl::reticle
	GameObject_t1756533147 * ___reticle_10;
	// UnityEngine.Vector3 GvrLaserPointerImpl::<PointerIntersection>k__BackingField
	Vector3_t2243707580  ___U3CPointerIntersectionU3Ek__BackingField_11;
	// System.Boolean GvrLaserPointerImpl::<IsPointerIntersecting>k__BackingField
	bool ___U3CIsPointerIntersectingU3Ek__BackingField_12;
	// UnityEngine.Ray GvrLaserPointerImpl::<PointerIntersectionRay>k__BackingField
	Ray_t2469606224  ___U3CPointerIntersectionRayU3Ek__BackingField_13;
	// System.Single GvrLaserPointerImpl::reticleMeshSizeMeters
	float ___reticleMeshSizeMeters_14;
	// System.Single GvrLaserPointerImpl::reticleMeshSizeRatio
	float ___reticleMeshSizeRatio_15;
	// UnityEngine.Vector3 GvrLaserPointerImpl::lineEndPoint
	Vector3_t2243707580  ___lineEndPoint_16;

public:
	inline static int32_t get_offset_of_U3CMainCameraU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CMainCameraU3Ek__BackingField_5)); }
	inline Camera_t189460977 * get_U3CMainCameraU3Ek__BackingField_5() const { return ___U3CMainCameraU3Ek__BackingField_5; }
	inline Camera_t189460977 ** get_address_of_U3CMainCameraU3Ek__BackingField_5() { return &___U3CMainCameraU3Ek__BackingField_5; }
	inline void set_U3CMainCameraU3Ek__BackingField_5(Camera_t189460977 * value)
	{
		___U3CMainCameraU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMainCameraU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CLaserColorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CLaserColorU3Ek__BackingField_6)); }
	inline Color_t2020392075  get_U3CLaserColorU3Ek__BackingField_6() const { return ___U3CLaserColorU3Ek__BackingField_6; }
	inline Color_t2020392075 * get_address_of_U3CLaserColorU3Ek__BackingField_6() { return &___U3CLaserColorU3Ek__BackingField_6; }
	inline void set_U3CLaserColorU3Ek__BackingField_6(Color_t2020392075  value)
	{
		___U3CLaserColorU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CLaserLineRendererU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CLaserLineRendererU3Ek__BackingField_7)); }
	inline LineRenderer_t849157671 * get_U3CLaserLineRendererU3Ek__BackingField_7() const { return ___U3CLaserLineRendererU3Ek__BackingField_7; }
	inline LineRenderer_t849157671 ** get_address_of_U3CLaserLineRendererU3Ek__BackingField_7() { return &___U3CLaserLineRendererU3Ek__BackingField_7; }
	inline void set_U3CLaserLineRendererU3Ek__BackingField_7(LineRenderer_t849157671 * value)
	{
		___U3CLaserLineRendererU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLaserLineRendererU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CMaxLaserDistanceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CMaxLaserDistanceU3Ek__BackingField_8)); }
	inline float get_U3CMaxLaserDistanceU3Ek__BackingField_8() const { return ___U3CMaxLaserDistanceU3Ek__BackingField_8; }
	inline float* get_address_of_U3CMaxLaserDistanceU3Ek__BackingField_8() { return &___U3CMaxLaserDistanceU3Ek__BackingField_8; }
	inline void set_U3CMaxLaserDistanceU3Ek__BackingField_8(float value)
	{
		___U3CMaxLaserDistanceU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxReticleDistanceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CMaxReticleDistanceU3Ek__BackingField_9)); }
	inline float get_U3CMaxReticleDistanceU3Ek__BackingField_9() const { return ___U3CMaxReticleDistanceU3Ek__BackingField_9; }
	inline float* get_address_of_U3CMaxReticleDistanceU3Ek__BackingField_9() { return &___U3CMaxReticleDistanceU3Ek__BackingField_9; }
	inline void set_U3CMaxReticleDistanceU3Ek__BackingField_9(float value)
	{
		___U3CMaxReticleDistanceU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_reticle_10() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___reticle_10)); }
	inline GameObject_t1756533147 * get_reticle_10() const { return ___reticle_10; }
	inline GameObject_t1756533147 ** get_address_of_reticle_10() { return &___reticle_10; }
	inline void set_reticle_10(GameObject_t1756533147 * value)
	{
		___reticle_10 = value;
		Il2CppCodeGenWriteBarrier(&___reticle_10, value);
	}

	inline static int32_t get_offset_of_U3CPointerIntersectionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CPointerIntersectionU3Ek__BackingField_11)); }
	inline Vector3_t2243707580  get_U3CPointerIntersectionU3Ek__BackingField_11() const { return ___U3CPointerIntersectionU3Ek__BackingField_11; }
	inline Vector3_t2243707580 * get_address_of_U3CPointerIntersectionU3Ek__BackingField_11() { return &___U3CPointerIntersectionU3Ek__BackingField_11; }
	inline void set_U3CPointerIntersectionU3Ek__BackingField_11(Vector3_t2243707580  value)
	{
		___U3CPointerIntersectionU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CIsPointerIntersectingU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CIsPointerIntersectingU3Ek__BackingField_12)); }
	inline bool get_U3CIsPointerIntersectingU3Ek__BackingField_12() const { return ___U3CIsPointerIntersectingU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CIsPointerIntersectingU3Ek__BackingField_12() { return &___U3CIsPointerIntersectingU3Ek__BackingField_12; }
	inline void set_U3CIsPointerIntersectingU3Ek__BackingField_12(bool value)
	{
		___U3CIsPointerIntersectingU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CPointerIntersectionRayU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___U3CPointerIntersectionRayU3Ek__BackingField_13)); }
	inline Ray_t2469606224  get_U3CPointerIntersectionRayU3Ek__BackingField_13() const { return ___U3CPointerIntersectionRayU3Ek__BackingField_13; }
	inline Ray_t2469606224 * get_address_of_U3CPointerIntersectionRayU3Ek__BackingField_13() { return &___U3CPointerIntersectionRayU3Ek__BackingField_13; }
	inline void set_U3CPointerIntersectionRayU3Ek__BackingField_13(Ray_t2469606224  value)
	{
		___U3CPointerIntersectionRayU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_reticleMeshSizeMeters_14() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___reticleMeshSizeMeters_14)); }
	inline float get_reticleMeshSizeMeters_14() const { return ___reticleMeshSizeMeters_14; }
	inline float* get_address_of_reticleMeshSizeMeters_14() { return &___reticleMeshSizeMeters_14; }
	inline void set_reticleMeshSizeMeters_14(float value)
	{
		___reticleMeshSizeMeters_14 = value;
	}

	inline static int32_t get_offset_of_reticleMeshSizeRatio_15() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___reticleMeshSizeRatio_15)); }
	inline float get_reticleMeshSizeRatio_15() const { return ___reticleMeshSizeRatio_15; }
	inline float* get_address_of_reticleMeshSizeRatio_15() { return &___reticleMeshSizeRatio_15; }
	inline void set_reticleMeshSizeRatio_15(float value)
	{
		___reticleMeshSizeRatio_15 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_16() { return static_cast<int32_t>(offsetof(GvrLaserPointerImpl_t2141976067, ___lineEndPoint_16)); }
	inline Vector3_t2243707580  get_lineEndPoint_16() const { return ___lineEndPoint_16; }
	inline Vector3_t2243707580 * get_address_of_lineEndPoint_16() { return &___lineEndPoint_16; }
	inline void set_lineEndPoint_16(Vector3_t2243707580  value)
	{
		___lineEndPoint_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
