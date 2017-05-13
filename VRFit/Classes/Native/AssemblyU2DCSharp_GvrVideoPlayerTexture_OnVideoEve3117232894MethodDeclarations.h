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

// GvrVideoPlayerTexture/OnVideoEventCallback
struct OnVideoEventCallback_t3117232894;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnVideoEventCallback__ctor_m3618257719 (OnVideoEventCallback_t3117232894 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::Invoke(System.IntPtr,System.Int32)
extern "C"  void OnVideoEventCallback_Invoke_m4173084188 (OnVideoEventCallback_t3117232894 * __this, IntPtr_t ___cbdata0, int32_t ___eventId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrVideoPlayerTexture/OnVideoEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnVideoEventCallback_BeginInvoke_m2998815383 (OnVideoEventCallback_t3117232894 * __this, IntPtr_t ___cbdata0, int32_t ___eventId1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnVideoEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnVideoEventCallback_EndInvoke_m2184620209 (OnVideoEventCallback_t3117232894 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
