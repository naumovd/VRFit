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

// proto.PhoneEvent/Types/GyroscopeEvent/Builder
struct Builder_t33558588;
// proto.PhoneEvent/Types/GyroscopeEvent
struct GyroscopeEvent_t182225200;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t1402851992;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1485221380;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeE182225200.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"

// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m3555488055 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::.ctor(proto.PhoneEvent/Types/GyroscopeEvent)
extern "C"  void Builder__ctor_m2821967937 (Builder_t33558588 * __this, GyroscopeEvent_t182225200 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t33558588 * Builder_get_ThisBuilder_m2850176250 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::PrepareBuilder()
extern "C"  GyroscopeEvent_t182225200 * Builder_PrepareBuilder_m1223767378 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m3023613300 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_MessageBeingBuilt()
extern "C"  GyroscopeEvent_t182225200 * Builder_get_MessageBeingBuilt_m3650865717 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::Clear()
extern "C"  Builder_t33558588 * Builder_Clear_m3062205829 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::Clone()
extern "C"  Builder_t33558588 * Builder_Clone_m3219764751 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_DefaultInstanceForType()
extern "C"  GyroscopeEvent_t182225200 * Builder_get_DefaultInstanceForType_m928220160 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent proto.PhoneEvent/Types/GyroscopeEvent/Builder::BuildPartial()
extern "C"  GyroscopeEvent_t182225200 * Builder_BuildPartial_m2132633903 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t33558588 * Builder_MergeFrom_m2104018830 (Builder_t33558588 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(proto.PhoneEvent/Types/GyroscopeEvent)
extern "C"  Builder_t33558588 * Builder_MergeFrom_m1915451252 (Builder_t33558588 * __this, GyroscopeEvent_t182225200 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t33558588 * Builder_MergeFrom_m2551345920 (Builder_t33558588 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t33558588 * Builder_MergeFrom_m1596577572 (Builder_t33558588 * __this, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m2994778148 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m2171899253 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m2575138496 (Builder_t33558588 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t33558588 * Builder_SetTimestamp_m2360427816 (Builder_t33558588 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearTimestamp()
extern "C"  Builder_t33558588 * Builder_ClearTimestamp_m1820357711 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasX()
extern "C"  bool Builder_get_HasX_m3301267264 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_X()
extern "C"  float Builder_get_X_m407831366 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_X(System.Single)
extern "C"  void Builder_set_X_m1328752815 (Builder_t33558588 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetX(System.Single)
extern "C"  Builder_t33558588 * Builder_SetX_m2842055803 (Builder_t33558588 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearX()
extern "C"  Builder_t33558588 * Builder_ClearX_m2137976361 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasY()
extern "C"  bool Builder_get_HasY_m3442429765 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_Y()
extern "C"  float Builder_get_Y_m3156917697 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Y(System.Single)
extern "C"  void Builder_set_Y_m1964020276 (Builder_t33558588 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetY(System.Single)
extern "C"  Builder_t33558588 * Builder_SetY_m4222789660 (Builder_t33558588 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearY()
extern "C"  Builder_t33558588 * Builder_ClearY_m2137976328 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_HasZ()
extern "C"  bool Builder_get_HasZ_m3583592266 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/GyroscopeEvent/Builder::get_Z()
extern "C"  float Builder_get_Z_m125506364 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/GyroscopeEvent/Builder::set_Z(System.Single)
extern "C"  void Builder_set_Z_m150986937 (Builder_t33558588 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::SetZ(System.Single)
extern "C"  Builder_t33558588 * Builder_SetZ_m2271816761 (Builder_t33558588 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/GyroscopeEvent/Builder proto.PhoneEvent/Types/GyroscopeEvent/Builder::ClearZ()
extern "C"  Builder_t33558588 * Builder_ClearZ_m2137976295 (Builder_t33558588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
