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

// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t4072706903;
// System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>
struct List_1_t2369806134;
// System.String
struct String_t;
// Gvr.Internal.EmulatorTouchEvent
struct EmulatorTouchEvent_t1122923020;
struct EmulatorTouchEvent_t1122923020_marshaled_pinvoke;
struct EmulatorTouchEvent_t1122923020_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A936529327.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3000685002.h"

// System.Void Gvr.Internal.EmulatorTouchEvent::.ctor(proto.PhoneEvent/Types/MotionEvent,System.Int64)
extern "C"  void EmulatorTouchEvent__ctor_m2652666916 (EmulatorTouchEvent_t1122923020 * __this, MotionEvent_t4072706903 * ___proto0, int64_t ___lastDownTimeMs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorTouchEvent::.ctor(Gvr.Internal.EmulatorTouchEvent/Action,System.Int32,System.Int32,System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>)
extern "C"  void EmulatorTouchEvent__ctor_m41442020 (EmulatorTouchEvent_t1122923020 * __this, int32_t ___action0, int32_t ___pointerId1, int32_t ___relativeTimestamp2, List_1_t2369806134 * ___pointers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorTouchEvent/Action Gvr.Internal.EmulatorTouchEvent::getActionMasked()
extern "C"  int32_t EmulatorTouchEvent_getActionMasked_m1031363438 (EmulatorTouchEvent_t1122923020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorTouchEvent/Pointer Gvr.Internal.EmulatorTouchEvent::getActionPointer()
extern "C"  Pointer_t3000685002  EmulatorTouchEvent_getActionPointer_m3109644827 (EmulatorTouchEvent_t1122923020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorTouchEvent::getActionUnmasked(Gvr.Internal.EmulatorTouchEvent/Action,System.Int32)
extern "C"  int32_t EmulatorTouchEvent_getActionUnmasked_m2794616263 (Il2CppObject * __this /* static, unused */, int32_t ___action0, int32_t ___fingerIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorTouchEvent::findPointerIndex(System.Int32,System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>)
extern "C"  int32_t EmulatorTouchEvent_findPointerIndex_m3522089136 (Il2CppObject * __this /* static, unused */, int32_t ___fingerId0, List_1_t2369806134 * ___pointers1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Gvr.Internal.EmulatorTouchEvent::ToString()
extern "C"  String_t* EmulatorTouchEvent_ToString_m1236062672 (EmulatorTouchEvent_t1122923020 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorTouchEvent::.cctor()
extern "C"  void EmulatorTouchEvent__cctor_m3766555102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct EmulatorTouchEvent_t1122923020;
struct EmulatorTouchEvent_t1122923020_marshaled_pinvoke;

extern "C" void EmulatorTouchEvent_t1122923020_marshal_pinvoke(const EmulatorTouchEvent_t1122923020& unmarshaled, EmulatorTouchEvent_t1122923020_marshaled_pinvoke& marshaled);
extern "C" void EmulatorTouchEvent_t1122923020_marshal_pinvoke_back(const EmulatorTouchEvent_t1122923020_marshaled_pinvoke& marshaled, EmulatorTouchEvent_t1122923020& unmarshaled);
extern "C" void EmulatorTouchEvent_t1122923020_marshal_pinvoke_cleanup(EmulatorTouchEvent_t1122923020_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct EmulatorTouchEvent_t1122923020;
struct EmulatorTouchEvent_t1122923020_marshaled_com;

extern "C" void EmulatorTouchEvent_t1122923020_marshal_com(const EmulatorTouchEvent_t1122923020& unmarshaled, EmulatorTouchEvent_t1122923020_marshaled_com& marshaled);
extern "C" void EmulatorTouchEvent_t1122923020_marshal_com_back(const EmulatorTouchEvent_t1122923020_marshaled_com& marshaled, EmulatorTouchEvent_t1122923020& unmarshaled);
extern "C" void EmulatorTouchEvent_t1122923020_marshal_com_cleanup(EmulatorTouchEvent_t1122923020_marshaled_com& marshaled);
