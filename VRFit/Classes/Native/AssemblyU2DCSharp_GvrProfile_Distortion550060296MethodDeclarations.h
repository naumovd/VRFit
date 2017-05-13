#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Single[]
struct SingleU5BU5D_t577127397;
// GvrProfile/Distortion
struct Distortion_t550060296;
struct Distortion_t550060296_marshaled_pinvoke;
struct Distortion_t550060296_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion550060296.h"

// System.Single[] GvrProfile/Distortion::get_Coef()
extern "C"  SingleU5BU5D_t577127397* Distortion_get_Coef_m3046001801 (Distortion_t550060296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile/Distortion::set_Coef(System.Single[])
extern "C"  void Distortion_set_Coef_m586170824 (Distortion_t550060296 * __this, SingleU5BU5D_t577127397* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile/Distortion::distort(System.Single)
extern "C"  float Distortion_distort_m1547245695 (Distortion_t550060296 * __this, float ___r0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile/Distortion::distortInv(System.Single)
extern "C"  float Distortion_distortInv_m2356602000 (Distortion_t550060296 * __this, float ___radius0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Distortion_t550060296;
struct Distortion_t550060296_marshaled_pinvoke;

extern "C" void Distortion_t550060296_marshal_pinvoke(const Distortion_t550060296& unmarshaled, Distortion_t550060296_marshaled_pinvoke& marshaled);
extern "C" void Distortion_t550060296_marshal_pinvoke_back(const Distortion_t550060296_marshaled_pinvoke& marshaled, Distortion_t550060296& unmarshaled);
extern "C" void Distortion_t550060296_marshal_pinvoke_cleanup(Distortion_t550060296_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Distortion_t550060296;
struct Distortion_t550060296_marshaled_com;

extern "C" void Distortion_t550060296_marshal_com(const Distortion_t550060296& unmarshaled, Distortion_t550060296_marshaled_com& marshaled);
extern "C" void Distortion_t550060296_marshal_com_back(const Distortion_t550060296_marshaled_com& marshaled, Distortion_t550060296& unmarshaled);
extern "C" void Distortion_t550060296_marshal_com_cleanup(Distortion_t550060296_marshaled_com& marshaled);
