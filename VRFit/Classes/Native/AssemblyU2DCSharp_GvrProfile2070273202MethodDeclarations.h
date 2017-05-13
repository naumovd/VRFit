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

// GvrProfile
struct GvrProfile_t2070273202;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.Double[0...,0...]
struct DoubleU5B0___U2C0___U5D_t1889952541;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes2720173411.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes2891453798.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion550060296.h"

// System.Void GvrProfile::.ctor()
extern "C"  void GvrProfile__ctor_m675593615 (GvrProfile_t2070273202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile GvrProfile::Clone()
extern "C"  GvrProfile_t2070273202 * GvrProfile_Clone_m2256084799 (GvrProfile_t2070273202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile::get_VerticalLensOffset()
extern "C"  float GvrProfile_get_VerticalLensOffset_m4082146679 (GvrProfile_t2070273202 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile GvrProfile::GetKnownProfile(GvrProfile/ScreenSizes,GvrProfile/ViewerTypes)
extern "C"  GvrProfile_t2070273202 * GvrProfile_GetKnownProfile_m2626990345 (Il2CppObject * __this /* static, unused */, int32_t ___screenSize0, int32_t ___deviceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile::GetLeftEyeVisibleTanAngles(System.Single[])
extern "C"  void GvrProfile_GetLeftEyeVisibleTanAngles_m163412083 (GvrProfile_t2070273202 * __this, SingleU5BU5D_t577127397* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile::GetLeftEyeNoLensTanAngles(System.Single[])
extern "C"  void GvrProfile_GetLeftEyeNoLensTanAngles_m1542233222 (GvrProfile_t2070273202 * __this, SingleU5BU5D_t577127397* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect GvrProfile::GetLeftEyeVisibleScreenRect(System.Single[])
extern "C"  Rect_t3681755626  GvrProfile_GetLeftEyeVisibleScreenRect_m1327064272 (GvrProfile_t2070273202 * __this, SingleU5BU5D_t577127397* ___undistortedFrustum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrProfile::GetMaxRadius(System.Single[])
extern "C"  float GvrProfile_GetMaxRadius_m505799712 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___tanAngleRect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] GvrProfile::solveLinear(System.Double[0...,0...],System.Double[])
extern "C"  DoubleU5BU5D_t1889952540* GvrProfile_solveLinear_m1840689786 (Il2CppObject * __this /* static, unused */, DoubleU5B0___U2C0___U5D_t1889952541* ___a0, DoubleU5BU5D_t1889952540* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] GvrProfile::solveLeastSquares(System.Double[0...,0...],System.Double[])
extern "C"  DoubleU5BU5D_t1889952540* GvrProfile_solveLeastSquares_m2766370624 (Il2CppObject * __this /* static, unused */, DoubleU5B0___U2C0___U5D_t1889952541* ___matA0, DoubleU5BU5D_t1889952540* ___vecY1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile/Distortion GvrProfile::ApproximateInverse(System.Single[],System.Single,System.Int32)
extern "C"  Distortion_t550060296  GvrProfile_ApproximateInverse_m766132967 (Il2CppObject * __this /* static, unused */, SingleU5BU5D_t577127397* ___coef0, float ___maxRadius1, int32_t ___numSamples2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrProfile/Distortion GvrProfile::ApproximateInverse(GvrProfile/Distortion,System.Single,System.Int32)
extern "C"  Distortion_t550060296  GvrProfile_ApproximateInverse_m2815142958 (Il2CppObject * __this /* static, unused */, Distortion_t550060296  ___distort0, float ___maxRadius1, int32_t ___numSamples2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrProfile::.cctor()
extern "C"  void GvrProfile__cctor_m2741598956 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
