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

// proto.PhoneEvent/Types/KeyEvent
struct KeyEvent_t639576718;
// Gvr.Internal.EmulatorButtonEvent
struct EmulatorButtonEvent_t156276569;
struct EmulatorButtonEvent_t156276569_marshaled_pinvoke;
struct EmulatorButtonEvent_t156276569_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent639576718.h"

// System.Void Gvr.Internal.EmulatorButtonEvent::.ctor(proto.PhoneEvent/Types/KeyEvent)
extern "C"  void EmulatorButtonEvent__ctor_m1309920830 (EmulatorButtonEvent_t156276569 * __this, KeyEvent_t639576718 * ___proto0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EmulatorButtonEvent_t156276569;
struct EmulatorButtonEvent_t156276569_marshaled_pinvoke;

extern "C" void EmulatorButtonEvent_t156276569_marshal_pinvoke(const EmulatorButtonEvent_t156276569& unmarshaled, EmulatorButtonEvent_t156276569_marshaled_pinvoke& marshaled);
extern "C" void EmulatorButtonEvent_t156276569_marshal_pinvoke_back(const EmulatorButtonEvent_t156276569_marshaled_pinvoke& marshaled, EmulatorButtonEvent_t156276569& unmarshaled);
extern "C" void EmulatorButtonEvent_t156276569_marshal_pinvoke_cleanup(EmulatorButtonEvent_t156276569_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EmulatorButtonEvent_t156276569;
struct EmulatorButtonEvent_t156276569_marshaled_com;

extern "C" void EmulatorButtonEvent_t156276569_marshal_com(const EmulatorButtonEvent_t156276569& unmarshaled, EmulatorButtonEvent_t156276569_marshaled_com& marshaled);
extern "C" void EmulatorButtonEvent_t156276569_marshal_com_back(const EmulatorButtonEvent_t156276569_marshaled_com& marshaled, EmulatorButtonEvent_t156276569& unmarshaled);
extern "C" void EmulatorButtonEvent_t156276569_marshal_com_cleanup(EmulatorButtonEvent_t156276569_marshaled_com& marshaled);
