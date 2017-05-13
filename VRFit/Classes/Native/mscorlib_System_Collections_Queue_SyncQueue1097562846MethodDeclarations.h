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

// System.Collections.Queue/SyncQueue
struct SyncQueue_t1097562846;
// System.Collections.Queue
struct Queue_t1288490777;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Queue1288490777.h"
#include "mscorlib_System_Array3829468939.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void System.Collections.Queue/SyncQueue::.ctor(System.Collections.Queue)
extern "C"  void SyncQueue__ctor_m822648981 (SyncQueue_t1097562846 * __this, Queue_t1288490777 * ___queue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue/SyncQueue::get_Count()
extern "C"  int32_t SyncQueue_get_Count_m2044514450 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/SyncQueue::get_IsSynchronized()
extern "C"  bool SyncQueue_get_IsSynchronized_m1196022265 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::get_SyncRoot()
extern "C"  Il2CppObject * SyncQueue_get_SyncRoot_m1939315153 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/SyncQueue::CopyTo(System.Array,System.Int32)
extern "C"  void SyncQueue_CopyTo_m2756363613 (SyncQueue_t1097562846 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue/SyncQueue::GetEnumerator()
extern "C"  Il2CppObject * SyncQueue_GetEnumerator_m1044260250 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::Clone()
extern "C"  Il2CppObject * SyncQueue_Clone_m1718161334 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/SyncQueue::Clear()
extern "C"  void SyncQueue_Clear_m3178812189 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::Dequeue()
extern "C"  Il2CppObject * SyncQueue_Dequeue_m854324465 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/SyncQueue::Enqueue(System.Object)
extern "C"  void SyncQueue_Enqueue_m1527643540 (SyncQueue_t1097562846 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::Peek()
extern "C"  Il2CppObject * SyncQueue_Peek_m1037051004 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue/SyncQueue::ToArray()
extern "C"  ObjectU5BU5D_t3614634134* SyncQueue_ToArray_m167792865 (SyncQueue_t1097562846 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
