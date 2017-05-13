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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t2282057595;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector3>
struct UnityAction_1_t3610293331;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2229564840;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
extern "C"  void UnityEvent_1__ctor_m2176906728_gshared (UnityEvent_1_t2282057595 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m2176906728(__this, method) ((  void (*) (UnityEvent_1_t2282057595 *, const MethodInfo*))UnityEvent_1__ctor_m2176906728_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m43893182_gshared (UnityEvent_1_t2282057595 * __this, UnityAction_1_t3610293331 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m43893182(__this, ___call0, method) ((  void (*) (UnityEvent_1_t2282057595 *, UnityAction_1_t3610293331 *, const MethodInfo*))UnityEvent_1_AddListener_m43893182_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m187531645_gshared (UnityEvent_1_t2282057595 * __this, UnityAction_1_t3610293331 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m187531645(__this, ___call0, method) ((  void (*) (UnityEvent_1_t2282057595 *, UnityAction_1_t3610293331 *, const MethodInfo*))UnityEvent_1_RemoveListener_m187531645_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m352290290_gshared (UnityEvent_1_t2282057595 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m352290290(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t2282057595 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m352290290_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m1629887934_gshared (UnityEvent_1_t2282057595 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1629887934(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t2229564840 * (*) (UnityEvent_1_t2282057595 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m1629887934_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t2229564840 * UnityEvent_1_GetDelegate_m1588651129_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t3610293331 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1588651129(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t2229564840 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t3610293331 *, const MethodInfo*))UnityEvent_1_GetDelegate_m1588651129_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m1308712969_gshared (UnityEvent_1_t2282057595 * __this, Vector3_t2243707580  ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1308712969(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t2282057595 *, Vector3_t2243707580 , const MethodInfo*))UnityEvent_1_Invoke_m1308712969_gshared)(__this, ___arg00, method)
