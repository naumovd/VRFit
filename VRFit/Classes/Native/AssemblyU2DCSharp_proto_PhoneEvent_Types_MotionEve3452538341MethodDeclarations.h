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

// proto.PhoneEvent/Types/MotionEvent/Builder
struct Builder_t3452538341;
// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t4072706903;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t1402851992;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1485221380;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct IPopsicleList_1_t3199084401;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t1211758263;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder
struct Builder_t2701542133;
// System.Collections.Generic.IEnumerable`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct IEnumerable_1_t1503885308;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2701542133.h"

// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m3211667330 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::.ctor(proto.PhoneEvent/Types/MotionEvent)
extern "C"  void Builder__ctor_m904036233 (Builder_t3452538341 * __this, MotionEvent_t4072706903 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t3452538341 * Builder_get_ThisBuilder_m3083266208 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::PrepareBuilder()
extern "C"  MotionEvent_t4072706903 * Builder_PrepareBuilder_m3534543800 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m1794816047 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::get_MessageBeingBuilt()
extern "C"  MotionEvent_t4072706903 * Builder_get_MessageBeingBuilt_m1438482993 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::Clear()
extern "C"  Builder_t3452538341 * Builder_Clear_m1827777365 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::Clone()
extern "C"  Builder_t3452538341 * Builder_Clone_m265499851 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::get_DefaultInstanceForType()
extern "C"  MotionEvent_t4072706903 * Builder_get_DefaultInstanceForType_m303691290 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent/Builder::BuildPartial()
extern "C"  MotionEvent_t4072706903 * Builder_BuildPartial_m2008319123 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t3452538341 * Builder_MergeFrom_m851515372 (Builder_t3452538341 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(proto.PhoneEvent/Types/MotionEvent)
extern "C"  Builder_t3452538341 * Builder_MergeFrom_m812130943 (Builder_t3452538341 * __this, MotionEvent_t4072706903 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t3452538341 * Builder_MergeFrom_m3240351194 (Builder_t3452538341 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t3452538341 * Builder_MergeFrom_m3755766102 (Builder_t3452538341 * __this, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m2893973889 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/MotionEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m2543864908 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m2480455657 (Builder_t3452538341 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t3452538341 * Builder_SetTimestamp_m1927917778 (Builder_t3452538341 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::ClearTimestamp()
extern "C"  Builder_t3452538341 * Builder_ClearTimestamp_m1666879531 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Builder::get_HasAction()
extern "C"  bool Builder_get_HasAction_m4199029905 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Builder::get_Action()
extern "C"  int32_t Builder_get_Action_m1270036833 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent/Builder::set_Action(System.Int32)
extern "C"  void Builder_set_Action_m2048037342 (Builder_t3452538341 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetAction(System.Int32)
extern "C"  Builder_t3452538341 * Builder_SetAction_m3915956501 (Builder_t3452538341 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::ClearAction()
extern "C"  Builder_t3452538341 * Builder_ClearAction_m4247825915 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent/Builder::get_PointersList()
extern "C"  Il2CppObject* Builder_get_PointersList_m2436917469 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Builder::get_PointersCount()
extern "C"  int32_t Builder_get_PointersCount_m3129787594 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Builder::GetPointers(System.Int32)
extern "C"  Pointer_t1211758263 * Builder_GetPointers_m1559878469 (Builder_t3452538341 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetPointers(System.Int32,proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
extern "C"  Builder_t3452538341 * Builder_SetPointers_m2773415418 (Builder_t3452538341 * __this, int32_t ___index0, Pointer_t1211758263 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::SetPointers(System.Int32,proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder)
extern "C"  Builder_t3452538341 * Builder_SetPointers_m1716921458 (Builder_t3452538341 * __this, int32_t ___index0, Builder_t2701542133 * ___builderForValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::AddPointers(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
extern "C"  Builder_t3452538341 * Builder_AddPointers_m2818822884 (Builder_t3452538341 * __this, Pointer_t1211758263 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::AddPointers(proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder)
extern "C"  Builder_t3452538341 * Builder_AddPointers_m2423506944 (Builder_t3452538341 * __this, Builder_t2701542133 * ___builderForValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::AddRangePointers(System.Collections.Generic.IEnumerable`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>)
extern "C"  Builder_t3452538341 * Builder_AddRangePointers_m297649094 (Builder_t3452538341 * __this, Il2CppObject* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent/Builder::ClearPointers()
extern "C"  Builder_t3452538341 * Builder_ClearPointers_m2156543741 (Builder_t3452538341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
