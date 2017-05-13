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

// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1804908545;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnGyroEvent__ctor_m2855559188 (OnGyroEvent_t1804908545 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::Invoke(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void OnGyroEvent_Invoke_m3195722476 (OnGyroEvent_t1804908545 * __this, EmulatorGyroEvent_t1858389926  ___gyroEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnGyroEvent::BeginInvoke(Gvr.Internal.EmulatorGyroEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnGyroEvent_BeginInvoke_m635063469 (OnGyroEvent_t1804908545 * __this, EmulatorGyroEvent_t1858389926  ___gyroEvent0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnGyroEvent_EndInvoke_m2486377070 (OnGyroEvent_t1804908545 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
