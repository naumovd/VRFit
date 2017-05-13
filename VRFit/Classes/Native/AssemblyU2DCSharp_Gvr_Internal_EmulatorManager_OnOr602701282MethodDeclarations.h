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

// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t602701282;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnOrientationEvent__ctor_m3139561141 (OnOrientationEvent_t602701282 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::Invoke(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void OnOrientationEvent_Invoke_m1547755396 (OnOrientationEvent_t602701282 * __this, EmulatorOrientationEvent_t4153005117  ___orientationEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnOrientationEvent::BeginInvoke(Gvr.Internal.EmulatorOrientationEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnOrientationEvent_BeginInvoke_m2079793085 (OnOrientationEvent_t602701282 * __this, EmulatorOrientationEvent_t4153005117  ___orientationEvent0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnOrientationEvent_EndInvoke_m2079597163 (OnOrientationEvent_t602701282 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
