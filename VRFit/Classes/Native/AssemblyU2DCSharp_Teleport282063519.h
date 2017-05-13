#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Teleport
struct  Teleport_t282063519  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 Teleport::startingPosition
	Vector3_t2243707580  ___startingPosition_2;
	// UnityEngine.Material Teleport::inactiveMaterial
	Material_t193706927 * ___inactiveMaterial_3;
	// UnityEngine.Material Teleport::gazedAtMaterial
	Material_t193706927 * ___gazedAtMaterial_4;

public:
	inline static int32_t get_offset_of_startingPosition_2() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___startingPosition_2)); }
	inline Vector3_t2243707580  get_startingPosition_2() const { return ___startingPosition_2; }
	inline Vector3_t2243707580 * get_address_of_startingPosition_2() { return &___startingPosition_2; }
	inline void set_startingPosition_2(Vector3_t2243707580  value)
	{
		___startingPosition_2 = value;
	}

	inline static int32_t get_offset_of_inactiveMaterial_3() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___inactiveMaterial_3)); }
	inline Material_t193706927 * get_inactiveMaterial_3() const { return ___inactiveMaterial_3; }
	inline Material_t193706927 ** get_address_of_inactiveMaterial_3() { return &___inactiveMaterial_3; }
	inline void set_inactiveMaterial_3(Material_t193706927 * value)
	{
		___inactiveMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___inactiveMaterial_3, value);
	}

	inline static int32_t get_offset_of_gazedAtMaterial_4() { return static_cast<int32_t>(offsetof(Teleport_t282063519, ___gazedAtMaterial_4)); }
	inline Material_t193706927 * get_gazedAtMaterial_4() const { return ___gazedAtMaterial_4; }
	inline Material_t193706927 ** get_address_of_gazedAtMaterial_4() { return &___gazedAtMaterial_4; }
	inline void set_gazedAtMaterial_4(Material_t193706927 * value)
	{
		___gazedAtMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___gazedAtMaterial_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
