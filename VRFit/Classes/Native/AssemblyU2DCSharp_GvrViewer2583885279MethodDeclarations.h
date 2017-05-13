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

// GvrViewer
struct GvrViewer_t2583885279;
// StereoController
struct StereoController_t3144380552;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t1350813851;
// GvrProfile
struct GvrProfile_t2070273202;
// Pose3D
struct Pose3D_t3872859958;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe1613770858.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele1350813851.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye1346324485.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion351632083.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void GvrViewer::.ctor()
extern "C"  void GvrViewer__ctor_m3114915806 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrViewer GvrViewer::get_Instance()
extern "C"  GvrViewer_t2583885279 * GvrViewer_get_Instance_m33197522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Create()
extern "C"  void GvrViewer_Create_m813413068 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController GvrViewer::get_Controller()
extern "C"  StereoController_t3144380552 * GvrViewer_get_Controller_m599838540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_VRModeEnabled()
extern "C"  bool GvrViewer_get_VRModeEnabled_m213246717 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_VRModeEnabled(System.Boolean)
extern "C"  void GvrViewer_set_VRModeEnabled_m1200974184 (GvrViewer_t2583885279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrViewer/DistortionCorrectionMethod GvrViewer::get_DistortionCorrection()
extern "C"  int32_t GvrViewer_get_DistortionCorrection_m344197281 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_DistortionCorrection(GvrViewer/DistortionCorrectionMethod)
extern "C"  void GvrViewer_set_DistortionCorrection_m1262463428 (GvrViewer_t2583885279 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrViewer::get_NeckModelScale()
extern "C"  float GvrViewer_get_NeckModelScale_m2878188217 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_NeckModelScale(System.Single)
extern "C"  void GvrViewer_set_NeckModelScale_m1698116376 (GvrViewer_t2583885279 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_NativeDistortionCorrectionSupported()
extern "C"  bool GvrViewer_get_NativeDistortionCorrectionSupported_m1003708717 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_NativeDistortionCorrectionSupported(System.Boolean)
extern "C"  void GvrViewer_set_NativeDistortionCorrectionSupported_m2747526178 (GvrViewer_t2583885279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_NativeUILayerSupported()
extern "C"  bool GvrViewer_get_NativeUILayerSupported_m3446913203 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_NativeUILayerSupported(System.Boolean)
extern "C"  void GvrViewer_set_NativeUILayerSupported_m3058515408 (GvrViewer_t2583885279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrViewer::get_StereoScreenScale()
extern "C"  float GvrViewer_get_StereoScreenScale_m2881733151 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_StereoScreenScale(System.Single)
extern "C"  void GvrViewer_set_StereoScreenScale_m1217897660 (GvrViewer_t2583885279 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture GvrViewer::get_StereoScreen()
extern "C"  RenderTexture_t2666733923 * GvrViewer_get_StereoScreen_m1411059804 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_StereoScreen(UnityEngine.RenderTexture)
extern "C"  void GvrViewer_set_StereoScreen_m2854409211 (GvrViewer_t2583885279 * __this, RenderTexture_t2666733923 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::add_OnStereoScreenChanged(GvrViewer/StereoScreenChangeDelegate)
extern "C"  void GvrViewer_add_OnStereoScreenChanged_m2587722848 (GvrViewer_t2583885279 * __this, StereoScreenChangeDelegate_t1350813851 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::remove_OnStereoScreenChanged(GvrViewer/StereoScreenChangeDelegate)
extern "C"  void GvrViewer_remove_OnStereoScreenChanged_m1273417719 (GvrViewer_t2583885279 * __this, StereoScreenChangeDelegate_t1350813851 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile GvrViewer::get_Profile()
extern "C"  GvrProfile_t2070273202 * GvrViewer_get_Profile_m109673263 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_NoNativeGVRSupport()
extern "C"  bool GvrViewer_get_NoNativeGVRSupport_m3088371687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D GvrViewer::get_HeadPose()
extern "C"  Pose3D_t3872859958 * GvrViewer_get_HeadPose_m904618119 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pose3D GvrViewer::EyePose(GvrViewer/Eye)
extern "C"  Pose3D_t3872859958 * GvrViewer_EyePose_m1636347428 (GvrViewer_t2583885279 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 GvrViewer::Projection(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Matrix4x4_t2933234003  GvrViewer_Projection_m2953377824 (GvrViewer_t2583885279 * __this, int32_t ___eye0, int32_t ___distortion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrViewer::Viewport(GvrViewer/Eye,GvrViewer/Distortion)
extern "C"  Rect_t3681755626  GvrViewer_Viewport_m1706956038 (GvrViewer_t2583885279 * __this, int32_t ___eye0, int32_t ___distortion1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GvrViewer::get_ComfortableViewingRange()
extern "C"  Vector2_t2243707579  GvrViewer_get_ComfortableViewingRange_m854744478 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::InitDevice()
extern "C"  void GvrViewer_InitDevice_m4250418872 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Awake()
extern "C"  void GvrViewer_Awake_m3257700607 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Start()
extern "C"  void GvrViewer_Start_m1236293242 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::AddPrePostRenderStages()
extern "C"  void GvrViewer_AddPrePostRenderStages_m3125479529 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_Triggered()
extern "C"  bool GvrViewer_get_Triggered_m3210598650 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_Triggered(System.Boolean)
extern "C"  void GvrViewer_set_Triggered_m4208268541 (GvrViewer_t2583885279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_Tilted()
extern "C"  bool GvrViewer_get_Tilted_m3112018483 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_Tilted(System.Boolean)
extern "C"  void GvrViewer_set_Tilted_m497736514 (GvrViewer_t2583885279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_ProfileChanged()
extern "C"  bool GvrViewer_get_ProfileChanged_m1394279288 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_ProfileChanged(System.Boolean)
extern "C"  void GvrViewer_set_ProfileChanged_m344498113 (GvrViewer_t2583885279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrViewer::get_BackButtonPressed()
extern "C"  bool GvrViewer_get_BackButtonPressed_m602082436 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::set_BackButtonPressed(System.Boolean)
extern "C"  void GvrViewer_set_BackButtonPressed_m3021859371 (GvrViewer_t2583885279 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::UpdateState()
extern "C"  void GvrViewer_UpdateState_m198584744 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::DispatchEvents()
extern "C"  void GvrViewer_DispatchEvents_m1236827893 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::PostRender(UnityEngine.RenderTexture)
extern "C"  void GvrViewer_PostRender_m1925707770 (GvrViewer_t2583885279 * __this, RenderTexture_t2666733923 * ___stereoScreen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::Recenter()
extern "C"  void GvrViewer_Recenter_m1592436548 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::ShowSettingsDialog()
extern "C"  void GvrViewer_ShowSettingsDialog_m1094098624 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::AddStereoControllerToCameras()
extern "C"  void GvrViewer_AddStereoControllerToCameras_m2025749890 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnEnable()
extern "C"  void GvrViewer_OnEnable_m2143525434 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnDisable()
extern "C"  void GvrViewer_OnDisable_m3337942347 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnApplicationPause(System.Boolean)
extern "C"  void GvrViewer_OnApplicationPause_m915129356 (GvrViewer_t2583885279 * __this, bool ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnApplicationFocus(System.Boolean)
extern "C"  void GvrViewer_OnApplicationFocus_m1457710762 (GvrViewer_t2583885279 * __this, bool ___focus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnApplicationQuit()
extern "C"  void GvrViewer_OnApplicationQuit_m2057617304 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::OnDestroy()
extern "C"  void GvrViewer_OnDestroy_m1059466857 (GvrViewer_t2583885279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer::.cctor()
extern "C"  void GvrViewer__cctor_m2314301421 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
