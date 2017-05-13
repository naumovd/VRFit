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

// GvrAudioListener
struct GvrAudioListener_t1521766837;
// GvrAudioSoundfield
struct GvrAudioSoundfield_t1301118448;
// GvrAudioSource
struct GvrAudioSource_t2307460312;
// GvrAudioRoom
struct GvrAudioRoom_t1253442178;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrAudioListener1521766837.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2125366261.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "AssemblyU2DCSharp_GvrAudioSoundfield1301118448.h"
#include "AssemblyU2DCSharp_GvrAudioSource2307460312.h"
#include "AssemblyU2DCSharp_GvrAudioRoom1253442178.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "AssemblyU2DCSharp_GvrAudio_RoomProperties2834448096.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Int32 GvrAudio::get_SampleRate()
extern "C"  int32_t GvrAudio_get_SampleRate_m3725406845 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_NumChannels()
extern "C"  int32_t GvrAudio_get_NumChannels_m462395491 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::get_FramesPerBuffer()
extern "C"  int32_t GvrAudio_get_FramesPerBuffer_m1101848786 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(GvrAudioListener,GvrAudio/Quality)
extern "C"  void GvrAudio_Initialize_m2739768702 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t1521766837 * ___listener0, int32_t ___quality1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown(GvrAudioListener)
extern "C"  void GvrAudio_Shutdown_m2838331605 (Il2CppObject * __this /* static, unused */, GvrAudioListener_t1521766837 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioListener(System.Single,UnityEngine.LayerMask)
extern "C"  void GvrAudio_UpdateAudioListener_m3370947442 (Il2CppObject * __this /* static, unused */, float ___globalGainDb0, LayerMask_t3188175821  ___occlusionMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSoundfield()
extern "C"  int32_t GvrAudio_CreateAudioSoundfield_m1783995047 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSoundfield(System.Int32,GvrAudioSoundfield)
extern "C"  void GvrAudio_UpdateAudioSoundfield_m2589129101 (Il2CppObject * __this /* static, unused */, int32_t ___id0, GvrAudioSoundfield_t1301118448 * ___soundfield1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateAudioSource(System.Boolean)
extern "C"  int32_t GvrAudio_CreateAudioSource_m1984649488 (Il2CppObject * __this /* static, unused */, bool ___hrtfEnabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroyAudioSource(System.Int32)
extern "C"  void GvrAudio_DestroyAudioSource_m801182782 (Il2CppObject * __this /* static, unused */, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioSource(System.Int32,GvrAudioSource,System.Single)
extern "C"  void GvrAudio_UpdateAudioSource_m1447747246 (Il2CppObject * __this /* static, unused */, int32_t ___id0, GvrAudioSource_t2307460312 * ___source1, float ___currentOcclusion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::UpdateAudioRoom(GvrAudioRoom,System.Boolean)
extern "C"  void GvrAudio_UpdateAudioRoom_m3179955199 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t1253442178 * ___room0, bool ___roomEnabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ComputeOcclusion(UnityEngine.Transform)
extern "C"  float GvrAudio_ComputeOcclusion_m400996319 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___sourceTransform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudio::ConvertAmplitudeFromDb(System.Single)
extern "C"  float GvrAudio_ConvertAmplitudeFromDb_m525493451 (Il2CppObject * __this /* static, unused */, float ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] GvrAudio::Generate2dPolarPattern(System.Single,System.Single,System.Int32)
extern "C"  Vector2U5BU5D_t686124026* GvrAudio_Generate2dPolarPattern_m4010778215 (Il2CppObject * __this /* static, unused */, float ___alpha0, float ___order1, int32_t ___resolution2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudio::IsListenerInsideRoom(GvrAudioRoom)
extern "C"  bool GvrAudio_IsListenerInsideRoom_m431752851 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t1253442178 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::ConvertAudioTransformFromUnity(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void GvrAudio_ConvertAudioTransformFromUnity_m3914902326 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___position0, Quaternion_t4030073918 * ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrAudio/RoomProperties GvrAudio::GetRoomProperties(GvrAudioRoom)
extern "C"  RoomProperties_t2834448096  GvrAudio_GetRoomProperties_m1029902467 (Il2CppObject * __this /* static, unused */, GvrAudioRoom_t1253442178 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetListenerGain(System.Single)
extern "C"  void GvrAudio_SetListenerGain_m1924947456 (Il2CppObject * __this /* static, unused */, float ___gain0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSoundfield(System.Int32)
extern "C"  int32_t GvrAudio_CreateSoundfield_m278242392 (Il2CppObject * __this /* static, unused */, int32_t ___numChannels0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudio::CreateSoundObject(System.Boolean)
extern "C"  int32_t GvrAudio_CreateSoundObject_m1329629085 (Il2CppObject * __this /* static, unused */, bool ___enableHrtf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::DestroySource(System.Int32)
extern "C"  void GvrAudio_DestroySource_m2875741446 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceBypassRoomEffects(System.Int32,System.Boolean)
extern "C"  void GvrAudio_SetSourceBypassRoomEffects_m1691460578 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, bool ___bypassRoomEffects1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceDirectivity_m2025518334 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___alpha1, float ___order2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceListenerDirectivity(System.Int32,System.Single,System.Single)
extern "C"  void GvrAudio_SetSourceListenerDirectivity_m1770884030 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___alpha1, float ___order2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetSourceOcclusionIntensity(System.Int32,System.Single)
extern "C"  void GvrAudio_SetSourceOcclusionIntensity_m2889416367 (Il2CppObject * __this /* static, unused */, int32_t ___sourceId0, float ___intensity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::SetRoomProperties(System.IntPtr)
extern "C"  void GvrAudio_SetRoomProperties_m2331769136 (Il2CppObject * __this /* static, unused */, IntPtr_t ___roomProperties0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Initialize(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GvrAudio_Initialize_m2441973946 (Il2CppObject * __this /* static, unused */, int32_t ___quality0, int32_t ___sampleRate1, int32_t ___numChannels2, int32_t ___framesPerBuffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::Shutdown()
extern "C"  void GvrAudio_Shutdown_m3814448932 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudio::.cctor()
extern "C"  void GvrAudio__cctor_m1808371205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
