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

// proto.PhoneEvent/Types/DepthMapEvent/Builder
struct Builder_t3483346914;
// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t1516604558;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t1402851992;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1485221380;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<System.Single>
struct IPopsicleList_1_t4063836070;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2368636977;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE1516604558.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"

// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m1492711591 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::.ctor(proto.PhoneEvent/Types/DepthMapEvent)
extern "C"  void Builder__ctor_m2328970537 (Builder_t3483346914 * __this, DepthMapEvent_t1516604558 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t3483346914 * Builder_get_ThisBuilder_m3565787194 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::PrepareBuilder()
extern "C"  DepthMapEvent_t1516604558 * Builder_PrepareBuilder_m777757826 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m2893629922 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::get_MessageBeingBuilt()
extern "C"  DepthMapEvent_t1516604558 * Builder_get_MessageBeingBuilt_m2759364905 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::Clear()
extern "C"  Builder_t3483346914 * Builder_Clear_m2814990949 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::Clone()
extern "C"  Builder_t3483346914 * Builder_Clone_m4155035727 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::get_DefaultInstanceForType()
extern "C"  DepthMapEvent_t1516604558 * Builder_get_DefaultInstanceForType_m1923867616 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent/Builder::BuildPartial()
extern "C"  DepthMapEvent_t1516604558 * Builder_BuildPartial_m4042263015 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t3483346914 * Builder_MergeFrom_m2401537134 (Builder_t3483346914 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(proto.PhoneEvent/Types/DepthMapEvent)
extern "C"  Builder_t3483346914 * Builder_MergeFrom_m3214886604 (Builder_t3483346914 * __this, DepthMapEvent_t1516604558 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t3483346914 * Builder_MergeFrom_m2418994240 (Builder_t3483346914 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t3483346914 * Builder_MergeFrom_m1490318820 (Builder_t3483346914 * __this, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m688213902 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m3186485433 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m3174055738 (Builder_t3483346914 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t3483346914 * Builder_SetTimestamp_m2663431560 (Builder_t3483346914 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearTimestamp()
extern "C"  Builder_t3483346914 * Builder_ClearTimestamp_m920363503 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasWidth()
extern "C"  bool Builder_get_HasWidth_m1544493350 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Width()
extern "C"  int32_t Builder_get_Width_m2559122112 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Width(System.Int32)
extern "C"  void Builder_set_Width_m411884049 (Builder_t3483346914 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetWidth(System.Int32)
extern "C"  Builder_t3483346914 * Builder_SetWidth_m2437155585 (Builder_t3483346914 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearWidth()
extern "C"  Builder_t3483346914 * Builder_ClearWidth_m3678722439 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent/Builder::get_HasHeight()
extern "C"  bool Builder_get_HasHeight_m1463184711 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_Height()
extern "C"  int32_t Builder_get_Height_m1833855211 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent/Builder::set_Height(System.Int32)
extern "C"  void Builder_set_Height_m3628898586 (Builder_t3483346914 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetHeight(System.Int32)
extern "C"  Builder_t3483346914 * Builder_SetHeight_m3273219960 (Builder_t3483346914 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearHeight()
extern "C"  Builder_t3483346914 * Builder_ClearHeight_m2257223320 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.Collections.IPopsicleList`1<System.Single> proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ZDistancesList()
extern "C"  Il2CppObject* Builder_get_ZDistancesList_m1338479272 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent/Builder::get_ZDistancesCount()
extern "C"  int32_t Builder_get_ZDistancesCount_m3737356261 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/DepthMapEvent/Builder::GetZDistances(System.Int32)
extern "C"  float Builder_GetZDistances_m3795564568 (Builder_t3483346914 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::SetZDistances(System.Int32,System.Single)
extern "C"  Builder_t3483346914 * Builder_SetZDistances_m1288449422 (Builder_t3483346914 * __this, int32_t ___index0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::AddZDistances(System.Single)
extern "C"  Builder_t3483346914 * Builder_AddZDistances_m641894332 (Builder_t3483346914 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::AddRangeZDistances(System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C"  Builder_t3483346914 * Builder_AddRangeZDistances_m2851220090 (Builder_t3483346914 * __this, Il2CppObject* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent/Builder::ClearZDistances()
extern "C"  Builder_t3483346914 * Builder_ClearZDistances_m2902758787 (Builder_t3483346914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
