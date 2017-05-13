#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MirrorPositionHandler
struct  MirrorPositionHandler_t53561568  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture MirrorPositionHandler::mainTexture
	Texture_t2243626319 * ___mainTexture_2;
	// UnityEngine.Texture MirrorPositionHandler::aTexture
	Texture_t2243626319 * ___aTexture_3;

public:
	inline static int32_t get_offset_of_mainTexture_2() { return static_cast<int32_t>(offsetof(MirrorPositionHandler_t53561568, ___mainTexture_2)); }
	inline Texture_t2243626319 * get_mainTexture_2() const { return ___mainTexture_2; }
	inline Texture_t2243626319 ** get_address_of_mainTexture_2() { return &___mainTexture_2; }
	inline void set_mainTexture_2(Texture_t2243626319 * value)
	{
		___mainTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainTexture_2, value);
	}

	inline static int32_t get_offset_of_aTexture_3() { return static_cast<int32_t>(offsetof(MirrorPositionHandler_t53561568, ___aTexture_3)); }
	inline Texture_t2243626319 * get_aTexture_3() const { return ___aTexture_3; }
	inline Texture_t2243626319 ** get_address_of_aTexture_3() { return &___aTexture_3; }
	inline void set_aTexture_3(Texture_t2243626319 * value)
	{
		___aTexture_3 = value;
		Il2CppCodeGenWriteBarrier(&___aTexture_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
