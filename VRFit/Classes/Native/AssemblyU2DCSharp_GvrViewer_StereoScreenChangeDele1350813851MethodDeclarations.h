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

// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t1350813851;
// System.Object
struct Il2CppObject;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_RenderTexture2666733923.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void GvrViewer/StereoScreenChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void StereoScreenChangeDelegate__ctor_m590893970 (StereoScreenChangeDelegate_t1350813851 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer/StereoScreenChangeDelegate::Invoke(UnityEngine.RenderTexture)
extern "C"  void StereoScreenChangeDelegate_Invoke_m2592552932 (StereoScreenChangeDelegate_t1350813851 * __this, RenderTexture_t2666733923 * ___newStereoScreen0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GvrViewer/StereoScreenChangeDelegate::BeginInvoke(UnityEngine.RenderTexture,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * StereoScreenChangeDelegate_BeginInvoke_m1297979751 (StereoScreenChangeDelegate_t1350813851 * __this, RenderTexture_t2666733923 * ___newStereoScreen0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrViewer/StereoScreenChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void StereoScreenChangeDelegate_EndInvoke_m1224983604 (StereoScreenChangeDelegate_t1350813851 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
