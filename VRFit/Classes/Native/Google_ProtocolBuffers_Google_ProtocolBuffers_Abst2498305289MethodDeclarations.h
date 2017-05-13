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

// Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>
struct LimitedInputStream_t2498305289;
// System.IO.Stream
struct Stream_t3255436806;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_IO_SeekOrigin2475945306.h"

// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::.ctor(System.IO.Stream,System.Int32)
extern "C"  void LimitedInputStream__ctor_m1464728195_gshared (LimitedInputStream_t2498305289 * __this, Stream_t3255436806 * ___proxied0, int32_t ___size1, const MethodInfo* method);
#define LimitedInputStream__ctor_m1464728195(__this, ___proxied0, ___size1, method) ((  void (*) (LimitedInputStream_t2498305289 *, Stream_t3255436806 *, int32_t, const MethodInfo*))LimitedInputStream__ctor_m1464728195_gshared)(__this, ___proxied0, ___size1, method)
// System.Boolean Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_CanRead()
extern "C"  bool LimitedInputStream_get_CanRead_m4045031330_gshared (LimitedInputStream_t2498305289 * __this, const MethodInfo* method);
#define LimitedInputStream_get_CanRead_m4045031330(__this, method) ((  bool (*) (LimitedInputStream_t2498305289 *, const MethodInfo*))LimitedInputStream_get_CanRead_m4045031330_gshared)(__this, method)
// System.Boolean Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_CanSeek()
extern "C"  bool LimitedInputStream_get_CanSeek_m678109258_gshared (LimitedInputStream_t2498305289 * __this, const MethodInfo* method);
#define LimitedInputStream_get_CanSeek_m678109258(__this, method) ((  bool (*) (LimitedInputStream_t2498305289 *, const MethodInfo*))LimitedInputStream_get_CanSeek_m678109258_gshared)(__this, method)
// System.Boolean Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_CanWrite()
extern "C"  bool LimitedInputStream_get_CanWrite_m391409413_gshared (LimitedInputStream_t2498305289 * __this, const MethodInfo* method);
#define LimitedInputStream_get_CanWrite_m391409413(__this, method) ((  bool (*) (LimitedInputStream_t2498305289 *, const MethodInfo*))LimitedInputStream_get_CanWrite_m391409413_gshared)(__this, method)
// System.Int64 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_Length()
extern "C"  int64_t LimitedInputStream_get_Length_m2899616465_gshared (LimitedInputStream_t2498305289 * __this, const MethodInfo* method);
#define LimitedInputStream_get_Length_m2899616465(__this, method) ((  int64_t (*) (LimitedInputStream_t2498305289 *, const MethodInfo*))LimitedInputStream_get_Length_m2899616465_gshared)(__this, method)
// System.Int64 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::get_Position()
extern "C"  int64_t LimitedInputStream_get_Position_m4272442068_gshared (LimitedInputStream_t2498305289 * __this, const MethodInfo* method);
#define LimitedInputStream_get_Position_m4272442068(__this, method) ((  int64_t (*) (LimitedInputStream_t2498305289 *, const MethodInfo*))LimitedInputStream_get_Position_m4272442068_gshared)(__this, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::set_Position(System.Int64)
extern "C"  void LimitedInputStream_set_Position_m3360540247_gshared (LimitedInputStream_t2498305289 * __this, int64_t ___value0, const MethodInfo* method);
#define LimitedInputStream_set_Position_m3360540247(__this, ___value0, method) ((  void (*) (LimitedInputStream_t2498305289 *, int64_t, const MethodInfo*))LimitedInputStream_set_Position_m3360540247_gshared)(__this, ___value0, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Flush()
extern "C"  void LimitedInputStream_Flush_m2615453909_gshared (LimitedInputStream_t2498305289 * __this, const MethodInfo* method);
#define LimitedInputStream_Flush_m2615453909(__this, method) ((  void (*) (LimitedInputStream_t2498305289 *, const MethodInfo*))LimitedInputStream_Flush_m2615453909_gshared)(__this, method)
// System.Int32 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t LimitedInputStream_Read_m3870134332_gshared (LimitedInputStream_t2498305289 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method);
#define LimitedInputStream_Read_m3870134332(__this, ___buffer0, ___offset1, ___count2, method) ((  int32_t (*) (LimitedInputStream_t2498305289 *, ByteU5BU5D_t3397334013*, int32_t, int32_t, const MethodInfo*))LimitedInputStream_Read_m3870134332_gshared)(__this, ___buffer0, ___offset1, ___count2, method)
// System.Int64 Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t LimitedInputStream_Seek_m1538041769_gshared (LimitedInputStream_t2498305289 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method);
#define LimitedInputStream_Seek_m1538041769(__this, ___offset0, ___origin1, method) ((  int64_t (*) (LimitedInputStream_t2498305289 *, int64_t, int32_t, const MethodInfo*))LimitedInputStream_Seek_m1538041769_gshared)(__this, ___offset0, ___origin1, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::SetLength(System.Int64)
extern "C"  void LimitedInputStream_SetLength_m3517878137_gshared (LimitedInputStream_t2498305289 * __this, int64_t ___value0, const MethodInfo* method);
#define LimitedInputStream_SetLength_m3517878137(__this, ___value0, method) ((  void (*) (LimitedInputStream_t2498305289 *, int64_t, const MethodInfo*))LimitedInputStream_SetLength_m3517878137_gshared)(__this, ___value0, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2/LimitedInputStream<System.Object,System.Object>::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void LimitedInputStream_Write_m2588743699_gshared (LimitedInputStream_t2498305289 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method);
#define LimitedInputStream_Write_m2588743699(__this, ___buffer0, ___offset1, ___count2, method) ((  void (*) (LimitedInputStream_t2498305289 *, ByteU5BU5D_t3397334013*, int32_t, int32_t, const MethodInfo*))LimitedInputStream_Write_m2588743699_gshared)(__this, ___buffer0, ___offset1, ___count2, method)
