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

// GvrEye
struct GvrEye_t3930157106;
// StereoController
struct StereoController_t3144380552;
// GvrHead
struct GvrHead_t3923315805;
// UnityEngine.Camera
struct Camera_t189460977;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "AssemblyU2DCSharp_StereoController3144380552.h"

// System.Void GvrEye::.ctor()
extern "C"  void GvrEye__ctor_m858222253 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// StereoController GvrEye::get_Controller()
extern "C"  StereoController_t3144380552 * GvrEye_get_Controller_m1564191365 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrHead GvrEye::get_Head()
extern "C"  GvrHead_t3923315805 * GvrEye_get_Head_m3515936354 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera GvrEye::get_cam()
extern "C"  Camera_t189460977 * GvrEye_get_cam_m842328180 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::set_cam(UnityEngine.Camera)
extern "C"  void GvrEye_set_cam_m722732241 (GvrEye_t3930157106 * __this, Camera_t189460977 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::Awake()
extern "C"  void GvrEye_Awake_m2741184514 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::Start()
extern "C"  void GvrEye_Start_m1930934301 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::UpdateStereoValues()
extern "C"  void GvrEye_UpdateStereoValues_m1924862658 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::SetupStereo(System.Boolean)
extern "C"  void GvrEye_SetupStereo_m1979812371 (GvrEye_t3930157106 * __this, bool ___forceUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::OnPreCull()
extern "C"  void GvrEye_OnPreCull_m2835239649 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::OnPostRender()
extern "C"  void GvrEye_OnPostRender_m2498238538 (GvrEye_t3930157106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrEye::CopyCameraAndMakeSideBySide(StereoController,System.Single,System.Single)
extern "C"  void GvrEye_CopyCameraAndMakeSideBySide_m4187184637 (GvrEye_t3930157106 * __this, StereoController_t3144380552 * ___controller0, float ___parx1, float ___pary2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
