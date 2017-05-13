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

// PrefabPageProvider
struct PrefabPageProvider_t3978016920;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// System.Void PrefabPageProvider::.ctor()
extern "C"  void PrefabPageProvider__ctor_m2698321179 (PrefabPageProvider_t3978016920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PrefabPageProvider::GetSpacing()
extern "C"  float PrefabPageProvider_GetSpacing_m2592907632 (PrefabPageProvider_t3978016920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PrefabPageProvider::GetNumberOfPages()
extern "C"  int32_t PrefabPageProvider_GetNumberOfPages_m772511877 (PrefabPageProvider_t3978016920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform PrefabPageProvider::ProvidePage(System.Int32)
extern "C"  RectTransform_t3349966182 * PrefabPageProvider_ProvidePage_m2223741988 (PrefabPageProvider_t3978016920 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PrefabPageProvider::RemovePage(System.Int32,UnityEngine.RectTransform)
extern "C"  void PrefabPageProvider_RemovePage_m3066734560 (PrefabPageProvider_t3978016920 * __this, int32_t ___index0, RectTransform_t3349966182 * ___page1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
