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

// VideoControlsManager
struct VideoControlsManager_t3010523296;
// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t673526704;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture673526704.h"

// System.Void VideoControlsManager::.ctor()
extern "C"  void VideoControlsManager__ctor_m3766416489 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::set_Player(GvrVideoPlayerTexture)
extern "C"  void VideoControlsManager_set_Player_m3494613477 (VideoControlsManager_t3010523296 * __this, GvrVideoPlayerTexture_t673526704 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrVideoPlayerTexture VideoControlsManager::get_Player()
extern "C"  GvrVideoPlayerTexture_t673526704 * VideoControlsManager_get_Player_m44360062 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Awake()
extern "C"  void VideoControlsManager_Awake_m1878278940 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Start()
extern "C"  void VideoControlsManager_Start_m4093526529 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Update()
extern "C"  void VideoControlsManager_Update_m3205036906 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnVolumeUp()
extern "C"  void VideoControlsManager_OnVolumeUp_m2824371833 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnVolumeDown()
extern "C"  void VideoControlsManager_OnVolumeDown_m1222797460 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnToggleVolume()
extern "C"  void VideoControlsManager_OnToggleVolume_m1563209028 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnToggleSettings()
extern "C"  void VideoControlsManager_OnToggleSettings_m4156716355 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnPlayPause()
extern "C"  void VideoControlsManager_OnPlayPause_m3031693768 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::OnVolumePositionChanged(System.Single)
extern "C"  void VideoControlsManager_OnVolumePositionChanged_m173042244 (VideoControlsManager_t3010523296 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::CloseSubPanels()
extern "C"  void VideoControlsManager_CloseSubPanels_m1135546338 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VideoControlsManager::Fade(System.Boolean)
extern "C"  void VideoControlsManager_Fade_m242086732 (VideoControlsManager_t3010523296 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoControlsManager::DoAppear()
extern "C"  Il2CppObject * VideoControlsManager_DoAppear_m4271315463 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VideoControlsManager::DoFade()
extern "C"  Il2CppObject * VideoControlsManager_DoFade_m4086002144 (VideoControlsManager_t3010523296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VideoControlsManager::FormatTime(System.Int64)
extern "C"  String_t* VideoControlsManager_FormatTime_m1938589656 (VideoControlsManager_t3010523296 * __this, int64_t ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
