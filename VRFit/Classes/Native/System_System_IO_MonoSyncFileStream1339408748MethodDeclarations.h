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

// System.IO.MonoSyncFileStream
struct MonoSyncFileStream_t1339408748;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_IO_FileAccess4282042064.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.IO.MonoSyncFileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32)
extern "C"  void MonoSyncFileStream__ctor_m2633134538 (MonoSyncFileStream_t1339408748 * __this, IntPtr_t ___handle0, int32_t ___access1, bool ___ownsHandle2, int32_t ___bufferSize3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MonoSyncFileStream_BeginWrite_m688774174 (MonoSyncFileStream_t1339408748 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream::EndWrite(System.IAsyncResult)
extern "C"  void MonoSyncFileStream_EndWrite_m3056872364 (MonoSyncFileStream_t1339408748 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MonoSyncFileStream_BeginRead_m2427108485 (MonoSyncFileStream_t1339408748 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t163412349 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoSyncFileStream::EndRead(System.IAsyncResult)
extern "C"  int32_t MonoSyncFileStream_EndRead_m2315617849 (MonoSyncFileStream_t1339408748 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
