﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice635821333.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.iOSDevice
struct  iOSDevice_t1373308423  : public GvrDevice_t635821333
{
public:
	// System.Boolean Gvr.Internal.iOSDevice::isOpenGL
	bool ___isOpenGL_32;

public:
	inline static int32_t get_offset_of_isOpenGL_32() { return static_cast<int32_t>(offsetof(iOSDevice_t1373308423, ___isOpenGL_32)); }
	inline bool get_isOpenGL_32() const { return ___isOpenGL_32; }
	inline bool* get_address_of_isOpenGL_32() { return &___isOpenGL_32; }
	inline void set_isOpenGL_32(bool value)
	{
		___isOpenGL_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
