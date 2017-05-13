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

// Gvr.Internal.GvrDevice
struct GvrDevice_t635821333;
// System.Uri
struct Uri_t19570940;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri19570940.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void Gvr.Internal.GvrDevice::.ctor()
extern "C"  void GvrDevice__ctor_m1419258520 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetDistortionCorrectionEnabled(System.Boolean)
extern "C"  void GvrDevice_SetDistortionCorrectionEnabled_m4084064685 (GvrDevice_t635821333 * __this, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetNeckModelScale(System.Single)
extern "C"  void GvrDevice_SetNeckModelScale_m3708496091 (GvrDevice_t635821333 * __this, float ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.GvrDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool GvrDevice_SetDefaultDeviceProfile_m2688999 (GvrDevice_t635821333 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Init()
extern "C"  void GvrDevice_Init_m3049041732 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateState()
extern "C"  void GvrDevice_UpdateState_m1865776730 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateScreenData()
extern "C"  void GvrDevice_UpdateScreenData_m3767435541 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Recenter()
extern "C"  void GvrDevice_Recenter_m639035202 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::PostRender(UnityEngine.RenderTexture)
extern "C"  void GvrDevice_PostRender_m886618576 (GvrDevice_t635821333 * __this, RenderTexture_t2666733923 * ___stereoScreen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::OnPause(System.Boolean)
extern "C"  void GvrDevice_OnPause_m418769636 (GvrDevice_t635821333 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::OnApplicationQuit()
extern "C"  void GvrDevice_OnApplicationQuit_m1286659510 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateView()
extern "C"  void GvrDevice_UpdateView_m2561982282 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::UpdateProfile()
extern "C"  void GvrDevice_UpdateProfile_m1977743270 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.GvrDevice::ExtractMatrix(UnityEngine.Matrix4x4&,System.Single[],System.Int32)
extern "C"  int32_t GvrDevice_ExtractMatrix_m3025694940 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003 * ___mat0, SingleU5BU5D_t577127397* ___data1, int32_t ___i2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::ProcessEvents()
extern "C"  void GvrDevice_ProcessEvents_m3292119668 (GvrDevice_t635821333 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Start()
extern "C"  void GvrDevice_Start_m2863725800 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetTextureId(System.Int32)
extern "C"  void GvrDevice_SetTextureId_m673438129 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.GvrDevice::SetDefaultProfile(System.Byte[],System.Int32)
extern "C"  bool GvrDevice_SetDefaultProfile_m726090350 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___uri0, int32_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetUnityVersion(System.Byte[],System.Int32)
extern "C"  void GvrDevice_SetUnityVersion_m937814393 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___version_str0, int32_t ___version_length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::EnableDistortionCorrection(System.Boolean)
extern "C"  void GvrDevice_EnableDistortionCorrection_m2929452511 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::SetNeckModelFactor(System.Single)
extern "C"  void GvrDevice_SetNeckModelFactor_m2187252390 (Il2CppObject * __this /* static, unused */, float ___factor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::ResetHeadTracker()
extern "C"  void GvrDevice_ResetHeadTracker_m1017572857 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.GvrDevice::GetEventFlags()
extern "C"  int32_t GvrDevice_GetEventFlags_m228521139 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::GetProfile(System.Single[])
extern "C"  void GvrDevice_GetProfile_m4043616196 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___profile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::GetHeadPose(System.Single[])
extern "C"  void GvrDevice_GetHeadPose_m1133300508 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___pose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::GetViewParameters(System.Single[])
extern "C"  void GvrDevice_GetViewParameters_m4241044874 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___viewParams0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Pause()
extern "C"  void GvrDevice_Pause_m3130736102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Resume()
extern "C"  void GvrDevice_Resume_m1877212629 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.GvrDevice::Stop()
extern "C"  void GvrDevice_Stop_m2841135994 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
