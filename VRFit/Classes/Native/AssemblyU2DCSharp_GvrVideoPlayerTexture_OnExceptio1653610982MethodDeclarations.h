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

// GvrVideoPlayerTexture/OnExceptionCallback
struct OnExceptionCallback_t1653610982;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GvrVideoPlayerTexture/OnExceptionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void OnExceptionCallback__ctor_m1180209829 (OnExceptionCallback_t1653610982 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnExceptionCallback::Invoke(System.String,System.String,System.IntPtr)
extern "C"  void OnExceptionCallback_Invoke_m2858002047 (OnExceptionCallback_t1653610982 * __this, String_t* ___type0, String_t* ___msg1, IntPtr_t ___cbdata2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrVideoPlayerTexture/OnExceptionCallback::BeginInvoke(System.String,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnExceptionCallback_BeginInvoke_m3192758792 (OnExceptionCallback_t1653610982 * __this, String_t* ___type0, String_t* ___msg1, IntPtr_t ___cbdata2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture/OnExceptionCallback::EndInvoke(System.IAsyncResult)
extern "C"  void OnExceptionCallback_EndInvoke_m1160516375 (OnExceptionCallback_t1653610982 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
