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


#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ObjectPool_1_gen14758110MethodDeclarations.h"

// System.Void ObjectPool`1<UnityEngine.GameObject>::.ctor()
#define ObjectPool_1__ctor_m2836333181(__this, method) ((  void (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1__ctor_m3845927559_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::.ctor(System.Int32)
#define ObjectPool_1__ctor_m1438115236(__this, ___capacity0, method) ((  void (*) (ObjectPool_1_t3376809258 *, int32_t, const MethodInfo*))ObjectPool_1__ctor_m1370891552_gshared)(__this, ___capacity0, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::.ctor(System.Int32,System.Int32)
#define ObjectPool_1__ctor_m2876583721(__this, ___capacity0, ___preAllocateAmount1, method) ((  void (*) (ObjectPool_1_t3376809258 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1__ctor_m3399065955_gshared)(__this, ___capacity0, ___preAllocateAmount1, method)
// System.Int32 ObjectPool`1<UnityEngine.GameObject>::get_NumAllocatedObjects()
#define ObjectPool_1_get_NumAllocatedObjects_m3256347323(__this, method) ((  int32_t (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_get_NumAllocatedObjects_m4136617717_gshared)(__this, method)
// System.Boolean ObjectPool`1<UnityEngine.GameObject>::get_IsPoolEmpty()
#define ObjectPool_1_get_IsPoolEmpty_m199587567(__this, method) ((  bool (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_get_IsPoolEmpty_m3838814761_gshared)(__this, method)
// System.Boolean ObjectPool`1<UnityEngine.GameObject>::get_IsPoolFull()
#define ObjectPool_1_get_IsPoolFull_m2434478557(__this, method) ((  bool (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_get_IsPoolFull_m3245077999_gshared)(__this, method)
// T ObjectPool`1<UnityEngine.GameObject>::Borrow()
#define ObjectPool_1_Borrow_m3329856199(__this, method) ((  GameObject_t1756533147 * (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_Borrow_m2036629817_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Return(T)
#define ObjectPool_1_Return_m1177559239(__this, ___obj0, method) ((  void (*) (ObjectPool_1_t3376809258 *, GameObject_t1756533147 *, const MethodInfo*))ObjectPool_1_Return_m2056337109_gshared)(__this, ___obj0, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Clear()
#define ObjectPool_1_Clear_m246686900(__this, method) ((  void (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_Clear_m4095783796_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Allocate(System.Int32)
#define ObjectPool_1_Allocate_m3510611445(__this, ___amount0, method) ((  void (*) (ObjectPool_1_t3376809258 *, int32_t, const MethodInfo*))ObjectPool_1_Allocate_m578049231_gshared)(__this, ___amount0, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Dispose()
#define ObjectPool_1_Dispose_m1571535280(__this, method) ((  void (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_Dispose_m886252904_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::Initialize(System.Int32,System.Int32)
#define ObjectPool_1_Initialize_m756943073(__this, ___capacity0, ___preAllocateAmount1, method) ((  void (*) (ObjectPool_1_t3376809258 *, int32_t, int32_t, const MethodInfo*))ObjectPool_1_Initialize_m4283417319_gshared)(__this, ___capacity0, ___preAllocateAmount1, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::OnBorrowed(T)
#define ObjectPool_1_OnBorrowed_m1767448226(__this, ___borrowedObject0, method) ((  void (*) (ObjectPool_1_t3376809258 *, GameObject_t1756533147 *, const MethodInfo*))ObjectPool_1_OnBorrowed_m1848536502_gshared)(__this, ___borrowedObject0, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::OnPooled(T)
#define ObjectPool_1_OnPooled_m3402368341(__this, ___returnedObject0, method) ((  void (*) (ObjectPool_1_t3376809258 *, GameObject_t1756533147 *, const MethodInfo*))ObjectPool_1_OnPooled_m3783740799_gshared)(__this, ___returnedObject0, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::OnUnableToReturn(T)
#define ObjectPool_1_OnUnableToReturn_m3414979762(__this, ___returnedObject0, method) ((  void (*) (ObjectPool_1_t3376809258 *, GameObject_t1756533147 *, const MethodInfo*))ObjectPool_1_OnUnableToReturn_m551794546_gshared)(__this, ___returnedObject0, method)
// T ObjectPool`1<UnityEngine.GameObject>::AllocateObject()
#define ObjectPool_1_AllocateObject_m2270115004(__this, method) ((  GameObject_t1756533147 * (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_AllocateObject_m73700902_gshared)(__this, method)
// System.Void ObjectPool`1<UnityEngine.GameObject>::AddObject()
#define ObjectPool_1_AddObject_m624954129(__this, method) ((  void (*) (ObjectPool_1_t3376809258 *, const MethodInfo*))ObjectPool_1_AddObject_m130762695_gshared)(__this, method)
