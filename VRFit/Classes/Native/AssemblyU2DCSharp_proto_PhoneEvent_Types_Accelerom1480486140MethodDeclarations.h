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

// proto.PhoneEvent/Types/AccelerometerEvent/Builder
struct Builder_t1480486140;
// proto.PhoneEvent/Types/AccelerometerEvent
struct AccelerometerEvent_t1893725728;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t1402851992;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1485221380;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1893725728.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"

// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor()
extern "C"  void Builder__ctor_m3975823265 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::.ctor(proto.PhoneEvent/Types/AccelerometerEvent)
extern "C"  void Builder__ctor_m875527629 (Builder_t1480486140 * __this, AccelerometerEvent_t1893725728 * ___cloneFrom0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_ThisBuilder()
extern "C"  Builder_t1480486140 * Builder_get_ThisBuilder_m2287487994 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::PrepareBuilder()
extern "C"  AccelerometerEvent_t1893725728 * Builder_PrepareBuilder_m2640798034 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_IsInitialized()
extern "C"  bool Builder_get_IsInitialized_m1903883004 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_MessageBeingBuilt()
extern "C"  AccelerometerEvent_t1893725728 * Builder_get_MessageBeingBuilt_m1293992565 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::Clear()
extern "C"  Builder_t1480486140 * Builder_Clear_m2563565061 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::Clone()
extern "C"  Builder_t1480486140 * Builder_Clone_m4125842575 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_DefaultInstanceForType()
extern "C"  AccelerometerEvent_t1893725728 * Builder_get_DefaultInstanceForType_m3674630592 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent proto.PhoneEvent/Types/AccelerometerEvent/Builder::BuildPartial()
extern "C"  AccelerometerEvent_t1893725728 * Builder_BuildPartial_m3524391215 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.IMessageLite)
extern "C"  Builder_t1480486140 * Builder_MergeFrom_m3283793422 (Builder_t1480486140 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(proto.PhoneEvent/Types/AccelerometerEvent)
extern "C"  Builder_t1480486140 * Builder_MergeFrom_m2262550012 (Builder_t1480486140 * __this, AccelerometerEvent_t1893725728 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Builder_t1480486140 * Builder_MergeFrom_m2135147520 (Builder_t1480486140 * __this, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::MergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Builder_t1480486140 * Builder_MergeFrom_m4254744612 (Builder_t1480486140 * __this, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasTimestamp()
extern "C"  bool Builder_get_HasTimestamp_m570350848 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Timestamp()
extern "C"  int64_t Builder_get_Timestamp_m914519943 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Timestamp(System.Int64)
extern "C"  void Builder_set_Timestamp_m2606551492 (Builder_t1480486140 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetTimestamp(System.Int64)
extern "C"  Builder_t1480486140 * Builder_SetTimestamp_m399389480 (Builder_t1480486140 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearTimestamp()
extern "C"  Builder_t1480486140 * Builder_ClearTimestamp_m2095537231 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasX()
extern "C"  bool Builder_get_HasX_m40197704 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_X()
extern "C"  float Builder_get_X_m4095380118 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_X(System.Single)
extern "C"  void Builder_set_X_m4205054957 (Builder_t1480486140 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetX(System.Single)
extern "C"  Builder_t1480486140 * Builder_SetX_m1458424251 (Builder_t1480486140 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearX()
extern "C"  Builder_t1480486140 * Builder_ClearX_m2564455081 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasY()
extern "C"  bool Builder_get_HasY_m2789284035 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Y()
extern "C"  float Builder_get_Y_m1346293787 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Y(System.Single)
extern "C"  void Builder_set_Y_m3569787496 (Builder_t1480486140 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetY(System.Single)
extern "C"  Builder_t1480486140 * Builder_SetY_m947208156 (Builder_t1480486140 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearY()
extern "C"  Builder_t1480486140 * Builder_ClearY_m2564455176 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_HasZ()
extern "C"  bool Builder_get_HasZ_m322522706 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/AccelerometerEvent/Builder::get_Z()
extern "C"  float Builder_get_Z_m82737824 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/AccelerometerEvent/Builder::set_Z(System.Single)
extern "C"  void Builder_set_Z_m1087853539 (Builder_t1480486140 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::SetZ(System.Single)
extern "C"  Builder_t1480486140 * Builder_SetZ_m791503737 (Builder_t1480486140 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/AccelerometerEvent/Builder proto.PhoneEvent/Types/AccelerometerEvent/Builder::ClearZ()
extern "C"  Builder_t1480486140 * Builder_ClearZ_m2564455015 (Builder_t1480486140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
