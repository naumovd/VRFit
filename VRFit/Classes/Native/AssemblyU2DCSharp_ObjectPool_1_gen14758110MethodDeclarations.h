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

// ObjectPool`1<System.Object>
struct ObjectPool_1_t14758110;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void ObjectPool`1<System.Object>::.ctor()
extern "C"  void ObjectPool_1__ctor_m3845927559_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1__ctor_m3845927559(__this, method) ((  void (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1__ctor_m3845927559_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::.ctor(System.Int32)
extern "C"  void ObjectPool_1__ctor_m1370891552_gshared (ObjectPool_1_t14758110 * __this, int32_t ___capacity0, const MethodInfo* method);
#define ObjectPool_1__ctor_m1370891552(__this, ___capacity0, method) ((  void (*) (ObjectPool_1_t14758110 *, int32_t, const MethodInfo*))ObjectPool_1__ctor_m1370891552_gshared)(__this, ___capacity0, method)
// System.Void ObjectPool`1<System.Object>::.ctor(System.Int32,System.Int32)
extern "C"  void ObjectPool_1__ctor_m3399065955_gshared (ObjectPool_1_t14758110 * __this, int32_t ___capacity0, int32_t ___preAllocateAmount1, const MethodInfo* method);
#define ObjectPool_1__ctor_m3399065955(__this, ___capacity0, ___preAllocateAmount1, method) ((  void (*) (ObjectPool_1_t14758110 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1__ctor_m3399065955_gshared)(__this, ___capacity0, ___preAllocateAmount1, method)
// System.Int32 ObjectPool`1<System.Object>::get_NumAllocatedObjects()
extern "C"  int32_t ObjectPool_1_get_NumAllocatedObjects_m4136617717_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_get_NumAllocatedObjects_m4136617717(__this, method) ((  int32_t (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_get_NumAllocatedObjects_m4136617717_gshared)(__this, method)
// System.Boolean ObjectPool`1<System.Object>::get_IsPoolEmpty()
extern "C"  bool ObjectPool_1_get_IsPoolEmpty_m3838814761_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_get_IsPoolEmpty_m3838814761(__this, method) ((  bool (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_get_IsPoolEmpty_m3838814761_gshared)(__this, method)
// System.Boolean ObjectPool`1<System.Object>::get_IsPoolFull()
extern "C"  bool ObjectPool_1_get_IsPoolFull_m3245077999_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_get_IsPoolFull_m3245077999(__this, method) ((  bool (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_get_IsPoolFull_m3245077999_gshared)(__this, method)
// T ObjectPool`1<System.Object>::Borrow()
extern "C"  Il2CppObject * ObjectPool_1_Borrow_m2036629817_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_Borrow_m2036629817(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_Borrow_m2036629817_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::Return(T)
extern "C"  void ObjectPool_1_Return_m2056337109_gshared (ObjectPool_1_t14758110 * __this, Il2CppObject * ___obj0, const MethodInfo* method);
#define ObjectPool_1_Return_m2056337109(__this, ___obj0, method) ((  void (*) (ObjectPool_1_t14758110 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_Return_m2056337109_gshared)(__this, ___obj0, method)
// System.Void ObjectPool`1<System.Object>::Clear()
extern "C"  void ObjectPool_1_Clear_m4095783796_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_Clear_m4095783796(__this, method) ((  void (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_Clear_m4095783796_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::Allocate(System.Int32)
extern "C"  void ObjectPool_1_Allocate_m578049231_gshared (ObjectPool_1_t14758110 * __this, int32_t ___amount0, const MethodInfo* method);
#define ObjectPool_1_Allocate_m578049231(__this, ___amount0, method) ((  void (*) (ObjectPool_1_t14758110 *, int32_t, const MethodInfo*))ObjectPool_1_Allocate_m578049231_gshared)(__this, ___amount0, method)
// System.Void ObjectPool`1<System.Object>::Dispose()
extern "C"  void ObjectPool_1_Dispose_m886252904_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_Dispose_m886252904(__this, method) ((  void (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_Dispose_m886252904_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::Initialize(System.Int32,System.Int32)
extern "C"  void ObjectPool_1_Initialize_m4283417319_gshared (ObjectPool_1_t14758110 * __this, int32_t ___capacity0, int32_t ___preAllocateAmount1, const MethodInfo* method);
#define ObjectPool_1_Initialize_m4283417319(__this, ___capacity0, ___preAllocateAmount1, method) ((  void (*) (ObjectPool_1_t14758110 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1_Initialize_m4283417319_gshared)(__this, ___capacity0, ___preAllocateAmount1, method)
// System.Void ObjectPool`1<System.Object>::OnBorrowed(T)
extern "C"  void ObjectPool_1_OnBorrowed_m1848536502_gshared (ObjectPool_1_t14758110 * __this, Il2CppObject * ___borrowedObject0, const MethodInfo* method);
#define ObjectPool_1_OnBorrowed_m1848536502(__this, ___borrowedObject0, method) ((  void (*) (ObjectPool_1_t14758110 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_OnBorrowed_m1848536502_gshared)(__this, ___borrowedObject0, method)
// System.Void ObjectPool`1<System.Object>::OnPooled(T)
extern "C"  void ObjectPool_1_OnPooled_m3783740799_gshared (ObjectPool_1_t14758110 * __this, Il2CppObject * ___returnedObject0, const MethodInfo* method);
#define ObjectPool_1_OnPooled_m3783740799(__this, ___returnedObject0, method) ((  void (*) (ObjectPool_1_t14758110 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_OnPooled_m3783740799_gshared)(__this, ___returnedObject0, method)
// System.Void ObjectPool`1<System.Object>::OnUnableToReturn(T)
extern "C"  void ObjectPool_1_OnUnableToReturn_m551794546_gshared (ObjectPool_1_t14758110 * __this, Il2CppObject * ___returnedObject0, const MethodInfo* method);
#define ObjectPool_1_OnUnableToReturn_m551794546(__this, ___returnedObject0, method) ((  void (*) (ObjectPool_1_t14758110 *, Il2CppObject *, const MethodInfo*))ObjectPool_1_OnUnableToReturn_m551794546_gshared)(__this, ___returnedObject0, method)
// T ObjectPool`1<System.Object>::AllocateObject()
extern "C"  Il2CppObject * ObjectPool_1_AllocateObject_m73700902_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_AllocateObject_m73700902(__this, method) ((  Il2CppObject * (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_AllocateObject_m73700902_gshared)(__this, method)
// System.Void ObjectPool`1<System.Object>::AddObject()
extern "C"  void ObjectPool_1_AddObject_m130762695_gshared (ObjectPool_1_t14758110 * __this, const MethodInfo* method);
#define ObjectPool_1_AddObject_m130762695(__this, method) ((  void (*) (ObjectPool_1_t14758110 *, const MethodInfo*))ObjectPool_1_AddObject_m130762695_gshared)(__this, method)
