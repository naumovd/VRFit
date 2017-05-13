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

// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t3771275139;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// Google.ProtocolBuffers.IBuilderLite
struct IBuilderLite_t4076259616;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1533220584;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t3028585237;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_String2029220233.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1533220584.h"

// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedInputStream__ctor_m963886137 (CodedInputStream_t3771275139 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::.ctor(System.IO.Stream)
extern "C"  void CodedInputStream__ctor_m1959676605 (CodedInputStream_t3771275139 * __this, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_ReachedLimit()
extern "C"  bool CodedInputStream_get_ReachedLimit_m2268631294 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::get_IsAtEnd()
extern "C"  bool CodedInputStream_get_IsAtEnd_m2111891571 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.IO.Stream)
extern "C"  CodedInputStream_t3771275139 * CodedInputStream_CreateInstance_m4063094634 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.CodedInputStream::CreateInstance(System.Byte[])
extern "C"  CodedInputStream_t3771275139 * CodedInputStream_CreateInstance_m3944294824 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::CheckLastTagWas(System.UInt32)
extern "C"  void CodedInputStream_CheckLastTagWas_m2807095497 (CodedInputStream_t3771275139 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::PeekNextTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_PeekNextTag_m1948583908 (CodedInputStream_t3771275139 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadTag(System.UInt32&,System.String&)
extern "C"  bool CodedInputStream_ReadTag_m2692795986 (CodedInputStream_t3771275139 * __this, uint32_t* ___fieldTag0, String_t** ___fieldName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadFloat(System.Single&)
extern "C"  bool CodedInputStream_ReadFloat_m1836827815 (CodedInputStream_t3771275139 * __this, float* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt64(System.Int64&)
extern "C"  bool CodedInputStream_ReadInt64_m153291821 (CodedInputStream_t3771275139 * __this, int64_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ReadInt32(System.Int32&)
extern "C"  bool CodedInputStream_ReadInt32_m1819652405 (CodedInputStream_t3771275139 * __this, int32_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadMessage(Google.ProtocolBuffers.IBuilderLite,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  void CodedInputStream_ReadMessage_m3806410051 (CodedInputStream_t3771275139 * __this, Il2CppObject * ___builder0, ExtensionRegistry_t1533220584 * ___extensionRegistry1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::BeginArray(System.UInt32,System.Boolean&,System.Int32&)
extern "C"  bool CodedInputStream_BeginArray_m161234914 (CodedInputStream_t3771275139 * __this, uint32_t ___fieldTag0, bool* ___isPacked1, int32_t* ___oldLimit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32)
extern "C"  bool CodedInputStream_ContinueArray_m3876487736 (CodedInputStream_t3771275139 * __this, uint32_t ___currentTag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::ContinueArray(System.UInt32,System.Boolean,System.Int32)
extern "C"  bool CodedInputStream_ContinueArray_m3207179494 (CodedInputStream_t3771275139 * __this, uint32_t ___currentTag0, bool ___packed1, int32_t ___oldLimit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::ReadFloatArray(System.UInt32,System.String,System.Collections.Generic.ICollection`1<System.Single>)
extern "C"  void CodedInputStream_ReadFloatArray_m890949437 (CodedInputStream_t3771275139 * __this, uint32_t ___fieldTag0, String_t* ___fieldName1, Il2CppObject* ___list2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::SlowReadRawVarint32()
extern "C"  uint32_t CodedInputStream_SlowReadRawVarint32_m3062185283 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32()
extern "C"  uint32_t CodedInputStream_ReadRawVarint32_m1304298858 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint32(System.IO.Stream)
extern "C"  uint32_t CodedInputStream_ReadRawVarint32_m2586515627 (Il2CppObject * __this /* static, unused */, Stream_t3255436806 * ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawVarint64()
extern "C"  uint64_t CodedInputStream_ReadRawVarint64_m3300522544 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian32()
extern "C"  uint32_t CodedInputStream_ReadRawLittleEndian32_m234297635 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Google.ProtocolBuffers.CodedInputStream::ReadRawLittleEndian64()
extern "C"  uint64_t CodedInputStream_ReadRawLittleEndian64_m94698487 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedInputStream::PushLimit(System.Int32)
extern "C"  int32_t CodedInputStream_PushLimit_m135379730 (CodedInputStream_t3771275139 * __this, int32_t ___byteLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::RecomputeBufferSizeAfterLimit()
extern "C"  void CodedInputStream_RecomputeBufferSizeAfterLimit_m433716678 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::PopLimit(System.Int32)
extern "C"  void CodedInputStream_PopLimit_m3183798521 (CodedInputStream_t3771275139 * __this, int32_t ___oldLimit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::RefillBuffer(System.Boolean)
extern "C"  bool CodedInputStream_RefillBuffer_m1023762853 (CodedInputStream_t3771275139 * __this, bool ___mustSucceed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Google.ProtocolBuffers.CodedInputStream::ReadRawByte()
extern "C"  uint8_t CodedInputStream_ReadRawByte_m3252588794 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Google.ProtocolBuffers.CodedInputStream::ReadRawBytes(System.Int32)
extern "C"  ByteU5BU5D_t3397334013* CodedInputStream_ReadRawBytes_m3323544552 (CodedInputStream_t3771275139 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.CodedInputStream::SkipField()
extern "C"  bool CodedInputStream_SkipField_m42028385 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipMessage()
extern "C"  void CodedInputStream_SkipMessage_m1426465688 (CodedInputStream_t3771275139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipRawBytes(System.Int32)
extern "C"  void CodedInputStream_SkipRawBytes_m1787696067 (CodedInputStream_t3771275139 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedInputStream::SkipImpl(System.Int32)
extern "C"  void CodedInputStream_SkipImpl_m3954016252 (CodedInputStream_t3771275139 * __this, int32_t ___amountToSkip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
