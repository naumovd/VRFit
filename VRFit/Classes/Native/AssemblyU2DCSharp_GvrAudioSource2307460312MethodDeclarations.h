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

// GvrAudioSource
struct GvrAudioSource_t2307460312;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode2229549515.h"
#include "UnityEngine_UnityEngine_FFTWindow2870052902.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void GvrAudioSource::.ctor()
extern "C"  void GvrAudioSource__ctor_m3669457171 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip GvrAudioSource::get_clip()
extern "C"  AudioClip_t1932558630 * GvrAudioSource_get_clip_m314569926 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void GvrAudioSource_set_clip_m150171591 (GvrAudioSource_t2307460312 * __this, AudioClip_t1932558630 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::get_isPlaying()
extern "C"  bool GvrAudioSource_get_isPlaying_m3816759052 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::get_loop()
extern "C"  bool GvrAudioSource_get_loop_m1298561502 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_loop(System.Boolean)
extern "C"  void GvrAudioSource_set_loop_m1477845813 (GvrAudioSource_t2307460312 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::get_mute()
extern "C"  bool GvrAudioSource_get_mute_m774819547 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_mute(System.Boolean)
extern "C"  void GvrAudioSource_set_mute_m2720289274 (GvrAudioSource_t2307460312 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_pitch()
extern "C"  float GvrAudioSource_get_pitch_m3338566872 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_pitch(System.Single)
extern "C"  void GvrAudioSource_set_pitch_m2341430061 (GvrAudioSource_t2307460312 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudioSource::get_priority()
extern "C"  int32_t GvrAudioSource_get_priority_m1549690748 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_priority(System.Int32)
extern "C"  void GvrAudioSource_set_priority_m2028801425 (GvrAudioSource_t2307460312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_dopplerLevel()
extern "C"  float GvrAudioSource_get_dopplerLevel_m3235884738 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_dopplerLevel(System.Single)
extern "C"  void GvrAudioSource_set_dopplerLevel_m2475613985 (GvrAudioSource_t2307460312 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_spread()
extern "C"  float GvrAudioSource_get_spread_m2820711937 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_spread(System.Single)
extern "C"  void GvrAudioSource_set_spread_m4221610670 (GvrAudioSource_t2307460312 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_time()
extern "C"  float GvrAudioSource_get_time_m2664362289 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_time(System.Single)
extern "C"  void GvrAudioSource_set_time_m3812878640 (GvrAudioSource_t2307460312 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrAudioSource::get_timeSamples()
extern "C"  int32_t GvrAudioSource_get_timeSamples_m1777353574 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_timeSamples(System.Int32)
extern "C"  void GvrAudioSource_set_timeSamples_m564442159 (GvrAudioSource_t2307460312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_volume()
extern "C"  float GvrAudioSource_get_volume_m4075726166 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_volume(System.Single)
extern "C"  void GvrAudioSource_set_volume_m1423146671 (GvrAudioSource_t2307460312 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioRolloffMode GvrAudioSource::get_rolloffMode()
extern "C"  int32_t GvrAudioSource_get_rolloffMode_m2079256484 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode)
extern "C"  void GvrAudioSource_set_rolloffMode_m3982865991 (GvrAudioSource_t2307460312 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_maxDistance()
extern "C"  float GvrAudioSource_get_maxDistance_m98035543 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_maxDistance(System.Single)
extern "C"  void GvrAudioSource_set_maxDistance_m4049442018 (GvrAudioSource_t2307460312 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single GvrAudioSource::get_minDistance()
extern "C"  float GvrAudioSource_get_minDistance_m495601449 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::set_minDistance(System.Single)
extern "C"  void GvrAudioSource_set_minDistance_m4182013404 (GvrAudioSource_t2307460312 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Awake()
extern "C"  void GvrAudioSource_Awake_m3633096 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnEnable()
extern "C"  void GvrAudioSource_OnEnable_m198719511 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Start()
extern "C"  void GvrAudioSource_Start_m1537117911 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDisable()
extern "C"  void GvrAudioSource_OnDisable_m2237802204 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDestroy()
extern "C"  void GvrAudioSource_OnDestroy_m1641155302 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnApplicationPause(System.Boolean)
extern "C"  void GvrAudioSource_OnApplicationPause_m2477334669 (GvrAudioSource_t2307460312 * __this, bool ___pauseStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Update()
extern "C"  void GvrAudioSource_Update_m2450669274 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::GetOutputData(System.Single[],System.Int32)
extern "C"  void GvrAudioSource_GetOutputData_m902515642 (GvrAudioSource_t2307460312 * __this, SingleU5BU5D_t577127397* ___samples0, int32_t ___channel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void GvrAudioSource_GetSpectrumData_m3864999427 (GvrAudioSource_t2307460312 * __this, SingleU5BU5D_t577127397* ___samples0, int32_t ___channel1, int32_t ___window2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Pause()
extern "C"  void GvrAudioSource_Pause_m470842017 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Play()
extern "C"  void GvrAudioSource_Play_m3662053203 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayDelayed(System.Single)
extern "C"  void GvrAudioSource_PlayDelayed_m3664484016 (GvrAudioSource_t2307460312 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void GvrAudioSource_PlayOneShot_m177386602 (GvrAudioSource_t2307460312 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void GvrAudioSource_PlayOneShot_m468197481 (GvrAudioSource_t2307460312 * __this, AudioClip_t1932558630 * ___clip0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::PlayScheduled(System.Double)
extern "C"  void GvrAudioSource_PlayScheduled_m2680287420 (GvrAudioSource_t2307460312 * __this, double ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::Stop()
extern "C"  void GvrAudioSource_Stop_m896185459 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::UnPause()
extern "C"  void GvrAudioSource_UnPause_m1361505432 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrAudioSource::InitializeSource()
extern "C"  bool GvrAudioSource_InitializeSource_m594433190 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::ShutdownSource()
extern "C"  void GvrAudioSource_ShutdownSource_m801851364 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDidApplyAnimationProperties()
extern "C"  void GvrAudioSource_OnDidApplyAnimationProperties_m3166179542 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnValidate()
extern "C"  void GvrAudioSource_OnValidate_m2508299240 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::OnDrawGizmosSelected()
extern "C"  void GvrAudioSource_OnDrawGizmosSelected_m3402600534 (GvrAudioSource_t2307460312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrAudioSource::DrawDirectivityGizmo(UnityEngine.Transform,System.Single,System.Single,System.Int32)
extern "C"  void GvrAudioSource_DrawDirectivityGizmo_m3726562269 (GvrAudioSource_t2307460312 * __this, Transform_t3275118058 * ___target0, float ___alpha1, float ___sharpness2, int32_t ___resolution3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
