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

// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t4143287487;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnTouchEvent__ctor_m3994445320 (OnTouchEvent_t4143287487 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::Invoke(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void OnTouchEvent_Invoke_m1749858212 (OnTouchEvent_t4143287487 * __this, EmulatorTouchEvent_t1122923020  ___touchEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnTouchEvent::BeginInvoke(Gvr.Internal.EmulatorTouchEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnTouchEvent_BeginInvoke_m625390245 (OnTouchEvent_t4143287487 * __this, EmulatorTouchEvent_t1122923020  ___touchEvent0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnTouchEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnTouchEvent_EndInvoke_m2905934786 (OnTouchEvent_t4143287487 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
