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

// Google.ProtocolBuffers.ByteString
struct ByteString_t3153909979;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t1158628263;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t3771275139;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Byte3153909979.h"

// System.Void Google.ProtocolBuffers.ByteString::.ctor(System.Byte[])
extern "C"  void ByteString__ctor_m1914075637 (ByteString_t3153909979 * __this, ByteU5BU5D_t3397334013* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Byte> Google.ProtocolBuffers.ByteString::GetEnumerator()
extern "C"  Il2CppObject* ByteString_GetEnumerator_m2142277723 (ByteString_t3153909979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Google.ProtocolBuffers.ByteString::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ByteString_System_Collections_IEnumerable_GetEnumerator_m444993935 (ByteString_t3153909979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedInputStream Google.ProtocolBuffers.ByteString::CreateCodedInput()
extern "C"  CodedInputStream_t3771275139 * ByteString_CreateCodedInput_m2259459549 (ByteString_t3153909979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(System.Object)
extern "C"  bool ByteString_Equals_m4029864387 (ByteString_t3153909979 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.ByteString::GetHashCode()
extern "C"  int32_t ByteString_GetHashCode_m1610827225 (ByteString_t3153909979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Google.ProtocolBuffers.ByteString::Equals(Google.ProtocolBuffers.ByteString)
extern "C"  bool ByteString_Equals_m3869714004 (ByteString_t3153909979 * __this, ByteString_t3153909979 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ByteString::.cctor()
extern "C"  void ByteString__cctor_m820000193 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
