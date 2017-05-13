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

// Pose3D
struct Pose3D_t3872859958;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.Void Pose3D::.ctor()
extern "C"  void Pose3D__ctor_m105494825 (Pose3D_t3872859958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Pose3D__ctor_m2647881471 (Pose3D_t3872859958 * __this, Vector3_t2243707580  ___position0, Quaternion_t4030073918  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern "C"  void Pose3D__ctor_m3904300681 (Pose3D_t3872859958 * __this, Matrix4x4_t2933234003  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C"  Vector3_t2243707580  Pose3D_get_Position_m1770539115 (Pose3D_t3872859958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C"  void Pose3D_set_Position_m3603518200 (Pose3D_t3872859958 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C"  Quaternion_t4030073918  Pose3D_get_Orientation_m3125329874 (Pose3D_t3872859958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C"  void Pose3D_set_Orientation_m1962360621 (Pose3D_t3872859958 * __this, Quaternion_t4030073918  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C"  Matrix4x4_t2933234003  Pose3D_get_Matrix_m2019429470 (Pose3D_t3872859958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C"  void Pose3D_set_Matrix_m3452434795 (Pose3D_t3872859958 * __this, Matrix4x4_t2933234003  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern "C"  Matrix4x4_t2933234003  Pose3D_get_RightHandedMatrix_m3967097052 (Pose3D_t3872859958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  void Pose3D_Set_m3496703389 (Pose3D_t3872859958 * __this, Vector3_t2243707580  ___position0, Quaternion_t4030073918  ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C"  void Pose3D_Set_m2239993811 (Pose3D_t3872859958 * __this, Matrix4x4_t2933234003  ___matrix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.cctor()
extern "C"  void Pose3D__cctor_m1624938024 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
