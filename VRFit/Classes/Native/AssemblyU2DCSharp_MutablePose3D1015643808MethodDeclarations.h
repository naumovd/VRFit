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

// MutablePose3D
struct MutablePose3D_t1015643808;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void MutablePose3D::.ctor()
extern "C"  void MutablePose3D__ctor_m2869278687 (MutablePose3D_t1015643808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void MutablePose3D_Set_m594361639 (MutablePose3D_t1015643808 * __this, Vector3_t2243707580  ___position0, Quaternion_t4030073918  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::Set(UnityEngine.Matrix4x4)
extern "C"  void MutablePose3D_Set_m3496782089 (MutablePose3D_t1015643808 * __this, Matrix4x4_t2933234003  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MutablePose3D::SetRightHanded(UnityEngine.Matrix4x4)
extern "C"  void MutablePose3D_SetRightHanded_m3138031279 (MutablePose3D_t1015643808 * __this, Matrix4x4_t2933234003  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
