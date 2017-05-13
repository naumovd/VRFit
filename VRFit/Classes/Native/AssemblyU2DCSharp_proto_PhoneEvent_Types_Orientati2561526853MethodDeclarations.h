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

// proto.PhoneEvent/Types/OrientationEvent/Builder
struct Builder_t2561526853;
// proto.PhoneEvent/Types/OrientationEvent
struct OrientationEvent_t2038376807;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t1402851992;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1485221380;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2038376807.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"

// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m3324312816 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::.ctor(proto.PhoneEvent/Types/OrientationEvent)
extern "C"  void Builder__ctor_m582532185 (Builder_t2561526853 * __this, OrientationEvent_t2038376807 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t2561526853 * Builder_get_ThisBuilder_m2269821690 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::PrepareBuilder()
extern "C"  OrientationEvent_t2038376807 * Builder_PrepareBuilder_m2913576274 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m1122336895 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_MessageBeingBuilt()
extern "C"  OrientationEvent_t2038376807 * Builder_get_MessageBeingBuilt_m3144215029 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clear()
extern "C"  Builder_t2561526853 * Builder_Clear_m1567368069 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::Clone()
extern "C"  Builder_t2561526853 * Builder_Clone_m3502788879 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::get_DefaultInstanceForType()
extern "C"  OrientationEvent_t2038376807 * Builder_get_DefaultInstanceForType_m3865572032 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent proto.PhoneEvent/Types/OrientationEvent/Builder::BuildPartial()
extern "C"  OrientationEvent_t2038376807 * Builder_BuildPartial_m2379891503 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t2561526853 * Builder_MergeFrom_m3672023310 (Builder_t2561526853 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(proto.PhoneEvent/Types/OrientationEvent)
extern "C"  Builder_t2561526853 * Builder_MergeFrom_m145426063 (Builder_t2561526853 * __this, OrientationEvent_t2038376807 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t2561526853 * Builder_MergeFrom_m2652367616 (Builder_t2561526853 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t2561526853 * Builder_MergeFrom_m2315791652 (Builder_t2561526853 * __this, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m266856861 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/OrientationEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m713800212 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m1251735645 (Builder_t2561526853 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t2561526853 * Builder_SetTimestamp_m2548254760 (Builder_t2561526853 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearTimestamp()
extern "C"  Builder_t2561526853 * Builder_ClearTimestamp_m854964175 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasX()
extern "C"  bool Builder_get_HasX_m1503918659 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_X()
extern "C"  float Builder_get_X_m1850029671 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_X(System.Single)
extern "C"  void Builder_set_X_m1783795380 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetX(System.Single)
extern "C"  Builder_t2561526853 * Builder_SetX_m1174486267 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearX()
extern "C"  Builder_t2561526853 * Builder_ClearX_m4202396585 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasY()
extern "C"  bool Builder_get_HasY_m1362756158 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Y()
extern "C"  float Builder_get_Y_m304148706 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Y(System.Single)
extern "C"  void Builder_set_Y_m2419062841 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetY(System.Single)
extern "C"  Builder_t2561526853 * Builder_SetY_m2555220124 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearY()
extern "C"  Builder_t2561526853 * Builder_ClearY_m4202396552 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasZ()
extern "C"  bool Builder_get_HasZ_m1786243661 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_Z()
extern "C"  float Builder_get_Z_m2132354673 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_Z(System.Single)
extern "C"  void Builder_set_Z_m2961561258 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetZ(System.Single)
extern "C"  Builder_t2561526853 * Builder_SetZ_m203691193 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearZ()
extern "C"  Builder_t2561526853 * Builder_ClearZ_m4202396519 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/OrientationEvent/Builder::get_HasW()
extern "C"  bool Builder_get_HasW_m3533637724 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/OrientationEvent/Builder::get_W()
extern "C"  float Builder_get_W_m1863584432 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/OrientationEvent/Builder::set_W(System.Single)
extern "C"  void Builder_set_W_m3591853811 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::SetW(System.Single)
extern "C"  Builder_t2561526853 * Builder_SetW_m268147678 (Builder_t2561526853 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/OrientationEvent/Builder proto.PhoneEvent/Types/OrientationEvent/Builder::ClearW()
extern "C"  Builder_t2561526853 * Builder_ClearW_m4202396106 (Builder_t2561526853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
