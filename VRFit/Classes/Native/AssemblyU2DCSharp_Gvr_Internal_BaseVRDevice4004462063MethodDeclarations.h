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

// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t4004462063;
// GvrProfile
struct GvrProfile_t2070273202;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// System.Uri
struct Uri_t19570940;
// Pose3D
struct Pose3D_t3872859958;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrProfile2070273202.h"
#include "System_System_Uri19570940.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye1346324485.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion351632083.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void Gvr.Internal.BaseVRDevice::.ctor()
extern "C"  void BaseVRDevice__ctor_m2114718288 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile Gvr.Internal.BaseVRDevice::get_Profile()
extern "C"  GvrProfile_t2070273202 * BaseVRDevice_get_Profile_m1157035047 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::set_Profile(GvrProfile)
extern "C"  void BaseVRDevice_set_Profile_m4204813444 (BaseVRDevice_t4004462063 * __this, GvrProfile_t2070273202 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C"  bool BaseVRDevice_SupportsNativeDistortionCorrection_m2363225724 (BaseVRDevice_t4004462063 * __this, List_1_t1398341365 * ___diagnostics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::RequiresNativeDistortionCorrection()
extern "C"  bool BaseVRDevice_RequiresNativeDistortionCorrection_m2350131224 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C"  bool BaseVRDevice_SupportsNativeUILayer_m2643593608 (BaseVRDevice_t4004462063 * __this, List_1_t1398341365 * ___diagnostics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::ShouldRecreateStereoScreen(System.Int32,System.Int32)
extern "C"  bool BaseVRDevice_ShouldRecreateStereoScreen_m4008575022 (BaseVRDevice_t4004462063 * __this, int32_t ___curWidth0, int32_t ___curHeight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture Gvr.Internal.BaseVRDevice::CreateStereoScreen()
extern "C"  RenderTexture_t2666733923 * BaseVRDevice_CreateStereoScreen_m192774273 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.BaseVRDevice::SetDefaultDeviceProfile(System.Uri)
extern "C"  bool BaseVRDevice_SetDefaultDeviceProfile_m2612652693 (BaseVRDevice_t4004462063 * __this, Uri_t19570940 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::ShowSettingsDialog()
extern "C"  void BaseVRDevice_ShowSettingsDialog_m1510674166 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Gvr.Internal.BaseVRDevice::GetHeadPose()
extern "C"  Pose3D_t3872859958 * BaseVRDevice_GetHeadPose_m3383699254 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D Gvr.Internal.BaseVRDevice::GetEyePose(GvrViewer/Eye)
extern "C"  Pose3D_t3872859958 * BaseVRDevice_GetEyePose_m814777462 (BaseVRDevice_t4004462063 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::GetProjection(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Matrix4x4_t2933234003  BaseVRDevice_GetProjection_m1620340802 (BaseVRDevice_t4004462063 * __this, int32_t ___eye0, int32_t ___distortion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Gvr.Internal.BaseVRDevice::GetViewport(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Rect_t3681755626  BaseVRDevice_GetViewport_m3788720810 (BaseVRDevice_t4004462063 * __this, int32_t ___eye0, int32_t ___distortion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::OnPause(System.Boolean)
extern "C"  void BaseVRDevice_OnPause_m964515384 (BaseVRDevice_t4004462063 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::OnFocus(System.Boolean)
extern "C"  void BaseVRDevice_OnFocus_m3542632174 (BaseVRDevice_t4004462063 * __this, bool ___focus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::OnApplicationQuit()
extern "C"  void BaseVRDevice_OnApplicationQuit_m3712496750 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::Destroy()
extern "C"  void BaseVRDevice_Destroy_m997398142 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::ComputeEyesFromProfile()
extern "C"  void BaseVRDevice_ComputeEyesFromProfile_m3886822498 (BaseVRDevice_t4004462063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Gvr.Internal.BaseVRDevice::MakeProjection(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  Matrix4x4_t2933234003  BaseVRDevice_MakeProjection_m3456433502 (Il2CppObject * __this /* static, unused */, float ___l0, float ___t1, float ___r2, float ___b3, float ___n4, float ___f5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.BaseVRDevice Gvr.Internal.BaseVRDevice::GetDevice()
extern "C"  BaseVRDevice_t4004462063 * BaseVRDevice_GetDevice_m1593781808 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.BaseVRDevice::.cctor()
extern "C"  void BaseVRDevice__cctor_m3983729249 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
