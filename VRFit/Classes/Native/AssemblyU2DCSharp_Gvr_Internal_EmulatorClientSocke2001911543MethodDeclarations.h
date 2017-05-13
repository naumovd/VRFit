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

// Gvr.Internal.EmulatorClientSocket
struct EmulatorClientSocket_t2001911543;
// Gvr.Internal.EmulatorManager
struct EmulatorManager_t3364249716;
// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager3364249716.h"
#include "System_System_Net_Sockets_TcpClient408947970.h"
#include "System_System_Net_Sockets_NetworkStream581172200.h"

// System.Void Gvr.Internal.EmulatorClientSocket::.ctor()
extern "C"  void EmulatorClientSocket__ctor_m2223632350 (EmulatorClientSocket_t2001911543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.EmulatorClientSocket::get_connected()
extern "C"  bool EmulatorClientSocket_get_connected_m887135136 (EmulatorClientSocket_t2001911543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::set_connected(System.Boolean)
extern "C"  void EmulatorClientSocket_set_connected_m3484293743 (EmulatorClientSocket_t2001911543 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::Init(Gvr.Internal.EmulatorManager)
extern "C"  void EmulatorClientSocket_Init_m4171573166 (EmulatorClientSocket_t2001911543 * __this, EmulatorManager_t3364249716 * ___remote0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::phoneEventSocketLoop()
extern "C"  void EmulatorClientSocket_phoneEventSocketLoop_m1408520055 (EmulatorClientSocket_t2001911543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::phoneConnect()
extern "C"  void EmulatorClientSocket_phoneConnect_m3583139274 (EmulatorClientSocket_t2001911543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::setupPortForwarding(System.Int32)
extern "C"  void EmulatorClientSocket_setupPortForwarding_m693595422 (EmulatorClientSocket_t2001911543 * __this, int32_t ___port0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::ProcessConnection(System.Net.Sockets.TcpClient)
extern "C"  void EmulatorClientSocket_ProcessConnection_m2203714527 (EmulatorClientSocket_t2001911543 * __this, TcpClient_t408947970 * ___tcpClient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorClientSocket::blockingRead(System.Net.Sockets.NetworkStream,System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t EmulatorClientSocket_blockingRead_m3410398218 (EmulatorClientSocket_t2001911543 * __this, NetworkStream_t581172200 * ___stream0, ByteU5BU5D_t3397334013* ___buffer1, int32_t ___index2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::OnDestroy()
extern "C"  void EmulatorClientSocket_OnDestroy_m1902642189 (EmulatorClientSocket_t2001911543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorClientSocket::unpack32bits(System.Byte[],System.Int32)
extern "C"  int32_t EmulatorClientSocket_unpack32bits_m1885594369 (EmulatorClientSocket_t2001911543 * __this, ByteU5BU5D_t3397334013* ___array0, int32_t ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Gvr.Internal.EmulatorClientSocket::correctEndianness(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* EmulatorClientSocket_correctEndianness_m336142497 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorClientSocket::.cctor()
extern "C"  void EmulatorClientSocket__cctor_m288133801 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
