﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t358370788;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnButtonEvent__ctor_m3778410729 (OnButtonEvent_t358370788 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::Invoke(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void OnButtonEvent_Invoke_m3526811670 (OnButtonEvent_t358370788 * __this, EmulatorButtonEvent_t156276569  ___buttonEvent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnButtonEvent::BeginInvoke(Gvr.Internal.EmulatorButtonEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnButtonEvent_BeginInvoke_m354434029 (OnButtonEvent_t358370788 * __this, EmulatorButtonEvent_t156276569  ___buttonEvent0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnButtonEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnButtonEvent_EndInvoke_m1937632587 (OnButtonEvent_t358370788 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
