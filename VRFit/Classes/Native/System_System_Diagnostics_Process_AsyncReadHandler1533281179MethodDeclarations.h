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

// System.Diagnostics.Process/AsyncReadHandler
struct AsyncReadHandler_t1533281179;
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

// System.Void System.Diagnostics.Process/AsyncReadHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AsyncReadHandler__ctor_m2680479251 (AsyncReadHandler_t1533281179 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::Invoke()
extern "C"  void AsyncReadHandler_Invoke_m3570792175 (AsyncReadHandler_t1533281179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Diagnostics.Process/AsyncReadHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AsyncReadHandler_BeginInvoke_m877959062 (AsyncReadHandler_t1533281179 * __this, AsyncCallback_t163412349 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/AsyncReadHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AsyncReadHandler_EndInvoke_m1460162601 (AsyncReadHandler_t1533281179 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
