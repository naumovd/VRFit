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
// proto.PhoneEvent/Types/KeyEvent/Builder
struct Builder_t2056133158;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3153909979.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent639576718.h"

// System.Void proto.PhoneEvent/Types/KeyEvent::.ctor()
extern "C"  void KeyEvent__ctor_m1809405147 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/KeyEvent::.cctor()
extern "C"  void KeyEvent__cctor_m952648204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::get_DefaultInstance()
extern "C"  KeyEvent_t639576718 * KeyEvent_get_DefaultInstance_m1241931263 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::get_DefaultInstanceForType()
extern "C"  KeyEvent_t639576718 * KeyEvent_get_DefaultInstanceForType_m2028272900 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::get_ThisMessage()
extern "C"  KeyEvent_t639576718 * KeyEvent_get_ThisMessage_m2049973546 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_HasAction()
extern "C"  bool KeyEvent_get_HasAction_m2580193630 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_Action()
extern "C"  int32_t KeyEvent_get_Action_m3103875472 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_HasCode()
extern "C"  bool KeyEvent_get_HasCode_m2476254997 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_Code()
extern "C"  int32_t KeyEvent_get_Code_m4093277921 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::get_IsInitialized()
extern "C"  bool KeyEvent_get_IsInitialized_m1393852554 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/KeyEvent::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void KeyEvent_WriteTo_m2215457218 (KeyEvent_t639576718 * __this, Il2CppObject * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::get_SerializedSize()
extern "C"  int32_t KeyEvent_get_SerializedSize_m1537679335 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/KeyEvent::GetHashCode()
extern "C"  int32_t KeyEvent_GetHashCode_m72194838 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/KeyEvent::Equals(System.Object)
extern "C"  bool KeyEvent_Equals_m4257687746 (KeyEvent_t639576718 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/KeyEvent::PrintTo(System.IO.TextWriter)
extern "C"  void KeyEvent_PrintTo_m486274820 (KeyEvent_t639576718 * __this, TextWriter_t4027217640 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m2189411260 (Il2CppObject * __this /* static, unused */, ByteString_t3153909979 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m3725425784 (Il2CppObject * __this /* static, unused */, ByteString_t3153909979 * ___data0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.Byte[])
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m1421007280 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m1604085124 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___data0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.IO.Stream)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m1677947762 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m4051701902 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseDelimitedFrom(System.IO.Stream)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseDelimitedFrom_m2529904309 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseDelimitedFrom_m3744089769 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m3069781129 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  KeyEvent_t639576718 * KeyEvent_ParseFrom_m1650566693 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent proto.PhoneEvent/Types/KeyEvent::MakeReadOnly()
extern "C"  KeyEvent_t639576718 * KeyEvent_MakeReadOnly_m24586296 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::CreateBuilder()
extern "C"  Builder_t2056133158 * KeyEvent_CreateBuilder_m1575393603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::ToBuilder()
extern "C"  Builder_t2056133158 * KeyEvent_ToBuilder_m2550656134 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::CreateBuilderForType()
extern "C"  Builder_t2056133158 * KeyEvent_CreateBuilderForType_m2120744842 (KeyEvent_t639576718 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/KeyEvent/Builder proto.PhoneEvent/Types/KeyEvent::CreateBuilder(proto.PhoneEvent/Types/KeyEvent)
extern "C"  Builder_t2056133158 * KeyEvent_CreateBuilder_m1679307459 (Il2CppObject * __this /* static, unused */, KeyEvent_t639576718 * ___prototype0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
