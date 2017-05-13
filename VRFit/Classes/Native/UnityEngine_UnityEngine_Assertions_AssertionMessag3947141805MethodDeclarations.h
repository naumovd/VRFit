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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String)
extern "C"  String_t* AssertionMessageUtil_GetMessage_m1494646037 (Il2CppObject * __this /* static, unused */, String_t* ___failureMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String,System.String)
extern "C"  String_t* AssertionMessageUtil_GetMessage_m609449111 (Il2CppObject * __this /* static, unused */, String_t* ___failureMessage0, String_t* ___expected1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Assertions.AssertionMessageUtil::NullFailureMessage(System.Object,System.Boolean)
extern "C"  String_t* AssertionMessageUtil_NullFailureMessage_m2872040415 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, bool ___expectNull1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
