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

// GvrHead/HeadUpdatedDelegate
struct HeadUpdatedDelegate_t1289521902;
// System.Object
struct Il2CppObject;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GvrHead/HeadUpdatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HeadUpdatedDelegate__ctor_m1146233661 (HeadUpdatedDelegate_t1289521902 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead/HeadUpdatedDelegate::Invoke(UnityEngine.GameObject)
extern "C"  void HeadUpdatedDelegate_Invoke_m1979681641 (HeadUpdatedDelegate_t1289521902 * __this, GameObject_t1756533147 * ___head0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrHead/HeadUpdatedDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * HeadUpdatedDelegate_BeginInvoke_m2677839988 (HeadUpdatedDelegate_t1289521902 * __this, GameObject_t1756533147 * ___head0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrHead/HeadUpdatedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HeadUpdatedDelegate_EndInvoke_m1067906543 (HeadUpdatedDelegate_t1289521902 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
