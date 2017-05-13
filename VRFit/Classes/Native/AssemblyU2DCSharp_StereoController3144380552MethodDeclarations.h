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

// StereoController
struct StereoController_t3144380552;
// GvrEye[]
struct GvrEyeU5BU5D_t3620642503;
// GvrHead
struct GvrHead_t3923315805;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GvrEye
struct GvrEye_t3930157106;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye1346324485.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_GvrEye3930157106.h"

// System.Void StereoController::.ctor()
extern "C"  void StereoController__ctor_m520071157 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrEye[] StereoController::get_Eyes()
extern "C"  GvrEyeU5BU5D_t3620642503* StereoController_get_Eyes_m744021941 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrHead StereoController::get_Head()
extern "C"  GvrHead_t3923315805 * StereoController_get_Head_m3306983616 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::InvalidateEyes()
extern "C"  void StereoController_InvalidateEyes_m1301882332 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera StereoController::get_cam()
extern "C"  Camera_t189460977 * StereoController_get_cam_m458697890 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::set_cam(UnityEngine.Camera)
extern "C"  void StereoController_set_cam_m2734281673 (StereoController_t3144380552 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::Awake()
extern "C"  void StereoController_Awake_m2927864472 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::AddStereoRig()
extern "C"  void StereoController_AddStereoRig_m815433896 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::UpdateStereoValues()
extern "C"  void StereoController_UpdateStereoValues_m3851218156 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::CreateEye(GvrViewer/Eye)
extern "C"  void StereoController_CreateEye_m2244969983 (StereoController_t3144380552 * __this, int32_t ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 StereoController::ComputeStereoEyePosition(GvrViewer/Eye,System.Single,System.Single)
extern "C"  Vector3_t2243707580  StereoController_ComputeStereoEyePosition_m1068742855 (StereoController_t3144380552 * __this, int32_t ___eye0, float ___proj111, float ___zScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnEnable()
extern "C"  void StereoController_OnEnable_m3643962165 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnDisable()
extern "C"  void StereoController_OnDisable_m3886257664 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void StereoController::OnPreCull()
extern "C"  void StereoController_OnPreCull_m4105393433 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StereoController::EndOfFrame()
extern "C"  Il2CppObject * StereoController_EndOfFrame_m3682743958 (StereoController_t3144380552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<get_Eyes>m__0(GvrEye)
extern "C"  bool StereoController_U3Cget_EyesU3Em__0_m1369989871 (StereoController_t3144380552 * __this, GvrEye_t3930157106 * ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrHead StereoController::<get_Head>m__1(GvrEye)
extern "C"  GvrHead_t3923315805 * StereoController_U3Cget_HeadU3Em__1_m3073456138 (Il2CppObject * __this /* static, unused */, GvrEye_t3930157106 * ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean StereoController::<AddStereoRig>m__2(GvrEye)
extern "C"  bool StereoController_U3CAddStereoRigU3Em__2_m3513345845 (StereoController_t3144380552 * __this, GvrEye_t3930157106 * ___eye0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
