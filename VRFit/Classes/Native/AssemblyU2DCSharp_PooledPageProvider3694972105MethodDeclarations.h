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

// PooledPageProvider
struct PooledPageProvider_t3694972105;
// GameObjectPool
struct GameObjectPool_t4074206773;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// System.Void PooledPageProvider::.ctor()
extern "C"  void PooledPageProvider__ctor_m2691585344 (PooledPageProvider_t3694972105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameObjectPool PooledPageProvider::get_Pool()
extern "C"  GameObjectPool_t4074206773 * PooledPageProvider_get_Pool_m2171946481 (PooledPageProvider_t3694972105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PooledPageProvider::Awake()
extern "C"  void PooledPageProvider_Awake_m2057611157 (PooledPageProvider_t3694972105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PooledPageProvider::GetSpacing()
extern "C"  float PooledPageProvider_GetSpacing_m173917137 (PooledPageProvider_t3694972105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PooledPageProvider::GetNumberOfPages()
extern "C"  int32_t PooledPageProvider_GetNumberOfPages_m1598874260 (PooledPageProvider_t3694972105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform PooledPageProvider::ProvidePage(System.Int32)
extern "C"  RectTransform_t3349966182 * PooledPageProvider_ProvidePage_m2934559165 (PooledPageProvider_t3694972105 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PooledPageProvider::RemovePage(System.Int32,UnityEngine.RectTransform)
extern "C"  void PooledPageProvider_RemovePage_m2751774019 (PooledPageProvider_t3694972105 * __this, int32_t ___index0, RectTransform_t3349966182 * ___page1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
