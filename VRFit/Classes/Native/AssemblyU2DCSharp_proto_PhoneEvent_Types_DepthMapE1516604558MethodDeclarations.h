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

// proto.PhoneEvent/Types/DepthMapEvent
struct DepthMapEvent_t1516604558;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t2617450533;
// Google.ProtocolBuffers.ICodedOutputStream
struct ICodedOutputStream_t2118369743;
// System.Object
struct Il2CppObject;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Google.ProtocolBuffers.ByteString
struct ByteString_t3153909979;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1485221380;
// proto.PhoneEvent/Types/DepthMapEvent/Builder
struct Builder_t3483346914;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3153909979.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE1516604558.h"

// System.Void proto.PhoneEvent/Types/DepthMapEvent::.ctor()
extern "C"  void DepthMapEvent__ctor_m2890738877 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent::.cctor()
extern "C"  void DepthMapEvent__cctor_m223095232 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::get_DefaultInstance()
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_get_DefaultInstance_m3558628951 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::get_DefaultInstanceForType()
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_get_DefaultInstanceForType_m1762846352 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::get_ThisMessage()
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_get_ThisMessage_m1607958006 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::get_HasTimestamp()
extern "C"  bool DepthMapEvent_get_HasTimestamp_m1669358218 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/DepthMapEvent::get_Timestamp()
extern "C"  int64_t DepthMapEvent_get_Timestamp_m3577809327 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::get_HasWidth()
extern "C"  bool DepthMapEvent_get_HasWidth_m1177603490 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::get_Width()
extern "C"  int32_t DepthMapEvent_get_Width_m258161344 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::get_HasHeight()
extern "C"  bool DepthMapEvent_get_HasHeight_m1289935597 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::get_Height()
extern "C"  int32_t DepthMapEvent_get_Height_m3719475953 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Single> proto.PhoneEvent/Types/DepthMapEvent::get_ZDistancesList()
extern "C"  Il2CppObject* DepthMapEvent_get_ZDistancesList_m1272646761 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::get_ZDistancesCount()
extern "C"  int32_t DepthMapEvent_get_ZDistancesCount_m1399007551 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/DepthMapEvent::GetZDistances(System.Int32)
extern "C"  float DepthMapEvent_GetZDistances_m44759324 (DepthMapEvent_t1516604558 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::get_IsInitialized()
extern "C"  bool DepthMapEvent_get_IsInitialized_m3655935450 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void DepthMapEvent_WriteTo_m1039017638 (DepthMapEvent_t1516604558 * __this, Il2CppObject * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::get_SerializedSize()
extern "C"  int32_t DepthMapEvent_get_SerializedSize_m739339081 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/DepthMapEvent::GetHashCode()
extern "C"  int32_t DepthMapEvent_GetHashCode_m1456161290 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/DepthMapEvent::Equals(System.Object)
extern "C"  bool DepthMapEvent_Equals_m2015247090 (DepthMapEvent_t1516604558 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/DepthMapEvent::PrintTo(System.IO.TextWriter)
extern "C"  void DepthMapEvent_PrintTo_m763832308 (DepthMapEvent_t1516604558 * __this, TextWriter_t4027217640 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m3288813784 (Il2CppObject * __this /* static, unused */, ByteString_t3153909979 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m328754780 (Il2CppObject * __this /* static, unused */, ByteString_t3153909979 * ___data0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(System.Byte[])
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m1765865188 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m651364304 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(System.IO.Stream)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m2787734510 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m271653586 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseDelimitedFrom(System.IO.Stream)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseDelimitedFrom_m3857534249 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseDelimitedFrom_m3225188277 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m4243275605 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_ParseFrom_m3471564281 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent proto.PhoneEvent/Types/DepthMapEvent::MakeReadOnly()
extern "C"  DepthMapEvent_t1516604558 * DepthMapEvent_MakeReadOnly_m2734324380 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent::CreateBuilder()
extern "C"  Builder_t3483346914 * DepthMapEvent_CreateBuilder_m2695818307 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent::ToBuilder()
extern "C"  Builder_t3483346914 * DepthMapEvent_ToBuilder_m2891681830 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent::CreateBuilderForType()
extern "C"  Builder_t3483346914 * DepthMapEvent_CreateBuilderForType_m847120074 (DepthMapEvent_t1516604558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/DepthMapEvent/Builder proto.PhoneEvent/Types/DepthMapEvent::CreateBuilder(proto.PhoneEvent/Types/DepthMapEvent)
extern "C"  Builder_t3483346914 * DepthMapEvent_CreateBuilder_m1551733453 (Il2CppObject * __this /* static, unused */, DepthMapEvent_t1516604558 * ___prototype0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
