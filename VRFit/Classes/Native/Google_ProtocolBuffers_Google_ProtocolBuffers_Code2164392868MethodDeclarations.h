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

// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2164392868;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t1402851992;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t2368636977;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Wire3893746254.h"

// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream__ctor_m2032274124 (CodedOutputStream_t2164392868 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
extern "C"  int32_t CodedOutputStream_get_SpaceLeft_m253136591 (CodedOutputStream_t2164392868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
extern "C"  int32_t CodedOutputStream_ComputeFloatSize_m3136056045 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt64Size(System.Int32,System.Int64)
extern "C"  int32_t CodedOutputStream_ComputeInt64Size_m3962209615 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeInt32Size_m2872106863 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeMessageSize(System.Int32,Google.ProtocolBuffers.IMessageLite)
extern "C"  int32_t CodedOutputStream_ComputeMessageSize_m3985314209 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSize(System.Int32,System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeEnumSize_m3642523100 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeInt32SizeNoTag_m4180574901 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeEnumSizeNoTag_m1503603994 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint32Size_m2475440900 (Il2CppObject * __this /* static, unused */, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint64Size_m3612804388 (Il2CppObject * __this /* static, unused */, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeTagSize_m3686166698 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[])
extern "C"  CodedOutputStream_t2164392868 * CodedOutputStream_CreateInstance_m4038444492 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___flatArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
extern "C"  CodedOutputStream_t2164392868 * CodedOutputStream_CreateInstance_m4052790114 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___flatArray0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloat(System.Int32,System.String,System.Single)
extern "C"  void CodedOutputStream_WriteFloat_m2501038342 (CodedOutputStream_t2164392868 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt64(System.Int32,System.String,System.Int64)
extern "C"  void CodedOutputStream_WriteInt64_m3067906334 (CodedOutputStream_t2164392868 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int64_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32(System.Int32,System.String,System.Int32)
extern "C"  void CodedOutputStream_WriteInt32_m3570127710 (CodedOutputStream_t2164392868 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteMessage(System.Int32,System.String,Google.ProtocolBuffers.IMessageLite)
extern "C"  void CodedOutputStream_WriteMessage_m2286509786 (CodedOutputStream_t2164392868 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteEnum(System.Int32,System.String,System.Int32,System.Object)
extern "C"  void CodedOutputStream_WriteEnum_m136326193 (CodedOutputStream_t2164392868 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___value2, Il2CppObject * ___rawValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
extern "C"  void CodedOutputStream_WriteFloatNoTag_m1640915384 (CodedOutputStream_t2164392868 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
extern "C"  void CodedOutputStream_WriteInt32NoTag_m1321635672 (CodedOutputStream_t2164392868 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WritePackedFloatArray(System.Int32,System.String,System.Int32,System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C"  void CodedOutputStream_WritePackedFloatArray_m4275967367 (CodedOutputStream_t2164392868 * __this, int32_t ___fieldNumber0, String_t* ___fieldName1, int32_t ___calculatedSize2, Il2CppObject* ___list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
extern "C"  void CodedOutputStream_WriteTag_m3696905437 (CodedOutputStream_t2164392868 * __this, int32_t ___fieldNumber0, uint32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
extern "C"  void CodedOutputStream_WriteRawVarint32_m2547983841 (CodedOutputStream_t2164392868 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
extern "C"  void CodedOutputStream_WriteRawVarint64_m4212407937 (CodedOutputStream_t2164392868 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
extern "C"  void CodedOutputStream_WriteRawByte_m2261287725 (CodedOutputStream_t2164392868 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream_WriteRawBytes_m915771058 (CodedOutputStream_t2164392868 * __this, ByteU5BU5D_t3397334013* ___value0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
extern "C"  void CodedOutputStream_RefreshBuffer_m2844812450 (CodedOutputStream_t2164392868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::CheckNoSpaceLeft()
extern "C"  void CodedOutputStream_CheckNoSpaceLeft_m1082852855 (CodedOutputStream_t2164392868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::.cctor()
extern "C"  void CodedOutputStream__cctor_m2583381126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
