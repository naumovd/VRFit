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

// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t1967739812;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnAccelEvent__ctor_m2435154167 (OnAccelEvent_t1967739812 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::Invoke(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void OnAccelEvent_Invoke_m1734383268 (OnAccelEvent_t1967739812 * __this, EmulatorAccelEvent_t621139879  ___accelEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnAccelEvent::BeginInvoke(Gvr.Internal.EmulatorAccelEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnAccelEvent_BeginInvoke_m1032300737 (OnAccelEvent_t1967739812 * __this, EmulatorAccelEvent_t621139879  ___accelEvent0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnAccelEvent_EndInvoke_m64792645 (OnAccelEvent_t1967739812 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
