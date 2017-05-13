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

// System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>
struct Transform_1_t3571627119;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22164262055.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte3093161221.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2615989430_gshared (Transform_1_t3571627119 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2615989430(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3571627119 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2615989430_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2164262055  Transform_1_Invoke_m3438273398_gshared (Transform_1_t3571627119 * __this, ExtensionIntPair_t3093161221  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3438273398(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2164262055  (*) (Transform_1_t3571627119 *, ExtensionIntPair_t3093161221 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3438273398_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1390003487_gshared (Transform_1_t3571627119 * __this, ExtensionIntPair_t3093161221  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1390003487(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3571627119 *, ExtensionIntPair_t3093161221 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1390003487_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2164262055  Transform_1_EndInvoke_m2645848268_gshared (Transform_1_t3571627119 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2645848268(__this, ___result0, method) ((  KeyValuePair_2_t2164262055  (*) (Transform_1_t3571627119 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2645848268_gshared)(__this, ___result0, method)
