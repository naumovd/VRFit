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
#include "UnityEngine_UnityEngine_AudioConfiguration2879378008.h"

// System.Double UnityEngine.AudioSettings::get_dspTime()
extern "C"  double AudioSettings_get_dspTime_m2570540328 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioConfiguration UnityEngine.AudioSettings::GetConfiguration()
extern "C"  AudioConfiguration_t2879378008  AudioSettings_GetConfiguration_m1393045148 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::INTERNAL_CALL_GetConfiguration(UnityEngine.AudioConfiguration&)
extern "C"  void AudioSettings_INTERNAL_CALL_GetConfiguration_m3663887010 (Il2CppObject * __this /* static, unused */, AudioConfiguration_t2879378008 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern "C"  void AudioSettings_InvokeOnAudioConfigurationChanged_m3225073778 (Il2CppObject * __this /* static, unused */, bool ___deviceWasChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
