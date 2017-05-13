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
// System.Collections.Generic.IList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct IList_1_t1752698864;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t1211758263;
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
// proto.PhoneEvent/Types/MotionEvent/Builder
struct Builder_t3452538341;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3153909979.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"

// System.Void proto.PhoneEvent/Types/MotionEvent::.ctor()
extern "C"  void MotionEvent__ctor_m1370482110 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::.cctor()
extern "C"  void MotionEvent__cctor_m776633457 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_DefaultInstance()
extern "C"  MotionEvent_t4072706903 * MotionEvent_get_DefaultInstance_m2970727107 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_DefaultInstanceForType()
extern "C"  MotionEvent_t4072706903 * MotionEvent_get_DefaultInstanceForType_m4171486058 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_ThisMessage()
extern "C"  MotionEvent_t4072706903 * MotionEvent_get_ThisMessage_m476713380 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasTimestamp()
extern "C"  bool MotionEvent_get_HasTimestamp_m904910059 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/MotionEvent::get_Timestamp()
extern "C"  int64_t MotionEvent_get_Timestamp_m123845168 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasAction()
extern "C"  bool MotionEvent_get_HasAction_m3424479867 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_Action()
extern "C"  int32_t MotionEvent_get_Action_m469056995 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent::get_PointersList()
extern "C"  Il2CppObject* MotionEvent_get_PointersList_m1139498144 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_PointersCount()
extern "C"  int32_t MotionEvent_get_PointersCount_m1481377910 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent::GetPointers(System.Int32)
extern "C"  Pointer_t1211758263 * MotionEvent_GetPointers_m53246499 (MotionEvent_t4072706903 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_IsInitialized()
extern "C"  bool MotionEvent_get_IsInitialized_m3619038393 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void MotionEvent_WriteTo_m3535466587 (MotionEvent_t4072706903 * __this, Il2CppObject * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_SerializedSize()
extern "C"  int32_t MotionEvent_get_SerializedSize_m884392208 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::GetHashCode()
extern "C"  int32_t MotionEvent_GetHashCode_m1252520313 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::Equals(System.Object)
extern "C"  bool MotionEvent_Equals_m1385348767 (MotionEvent_t4072706903 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::PrintTo(System.IO.TextWriter)
extern "C"  void MotionEvent_PrintTo_m2516531009 (MotionEvent_t4072706903 * __this, TextWriter_t4027217640 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m3190428418 (Il2CppObject * __this /* static, unused */, ByteString_t3153909979 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m2523605278 (Il2CppObject * __this /* static, unused */, ByteString_t3153909979 * ___data0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.Byte[])
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m3798785942 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m1417692042 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.IO.Stream)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m2355402252 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m2507468808 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseDelimitedFrom(System.IO.Stream)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseDelimitedFrom_m3029241617 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseDelimitedFrom_m3040315493 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m1498294661 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t4072706903 * MotionEvent_ParseFrom_m1419767041 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::MakeReadOnly()
extern "C"  MotionEvent_t4072706903 * MotionEvent_MakeReadOnly_m67188126 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilder()
extern "C"  Builder_t3452538341 * MotionEvent_CreateBuilder_m4066719127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::ToBuilder()
extern "C"  Builder_t3452538341 * MotionEvent_ToBuilder_m300445908 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilderForType()
extern "C"  Builder_t3452538341 * MotionEvent_CreateBuilderForType_m290783216 (MotionEvent_t4072706903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilder(proto.PhoneEvent/Types/MotionEvent)
extern "C"  Builder_t3452538341 * MotionEvent_CreateBuilder_m814374862 (Il2CppObject * __this /* static, unused */, MotionEvent_t4072706903 * ___prototype0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
