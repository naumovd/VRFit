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

// GvrVideoPlayerTexture
struct GvrVideoPlayerTexture_t673526704;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Texture
struct Texture_t2243626319;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// System.Action`2<System.String,System.String>
struct Action_2_t4234541925;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// GvrVideoPlayerTexture/OnVideoEventCallback
struct OnVideoEventCallback_t3117232894;
// GvrVideoPlayerTexture/OnExceptionCallback
struct OnExceptionCallback_t1653610982;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoPlaye2474362314.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_RenderComma104445810.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnVideoEve3117232894.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnExceptio1653610982.h"

// System.Void GvrVideoPlayerTexture::.ctor()
extern "C"  void GvrVideoPlayerTexture__ctor_m3696668161 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::get_VideoReady()
extern "C"  bool GvrVideoPlayerTexture_get_VideoReady_m1713295662 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::get_CurrentPosition()
extern "C"  int64_t GvrVideoPlayerTexture_get_CurrentPosition_m3562589837 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::set_CurrentPosition(System.Int64)
extern "C"  void GvrVideoPlayerTexture_set_CurrentPosition_m3449598194 (GvrVideoPlayerTexture_t673526704 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::get_VideoDuration()
extern "C"  int64_t GvrVideoPlayerTexture_get_VideoDuration_m1238201236 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::get_BufferedPosition()
extern "C"  int64_t GvrVideoPlayerTexture_get_BufferedPosition_m4048217261 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::get_BufferedPercentage()
extern "C"  int32_t GvrVideoPlayerTexture_get_BufferedPercentage_m1333771443 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::get_IsPaused()
extern "C"  bool GvrVideoPlayerTexture_get_IsPaused_m36619442 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GvrVideoPlayerTexture/VideoPlayerState GvrVideoPlayerTexture::get_PlayerState()
extern "C"  int32_t GvrVideoPlayerTexture_get_PlayerState_m3029504423 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::get_MaxVolume()
extern "C"  int32_t GvrVideoPlayerTexture_get_MaxVolume_m2331722398 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::get_CurrentVolume()
extern "C"  int32_t GvrVideoPlayerTexture_get_CurrentVolume_m2628199275 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::set_CurrentVolume(System.Int32)
extern "C"  void GvrVideoPlayerTexture_set_CurrentVolume_m2576283326 (GvrVideoPlayerTexture_t673526704 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::Awake()
extern "C"  void GvrVideoPlayerTexture_Awake_m2788676544 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::CreatePlayer()
extern "C"  void GvrVideoPlayerTexture_CreatePlayer_m1657543914 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GvrVideoPlayerTexture::Start()
extern "C"  Il2CppObject * GvrVideoPlayerTexture_Start_m3362726395 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnDisable()
extern "C"  void GvrVideoPlayerTexture_OnDisable_m3809692904 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetDisplayTexture(UnityEngine.Texture)
extern "C"  void GvrVideoPlayerTexture_SetDisplayTexture_m602064506 (GvrVideoPlayerTexture_t673526704 * __this, Texture_t2243626319 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::CleanupVideo()
extern "C"  void GvrVideoPlayerTexture_CleanupVideo_m3487024824 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::ReInitializeVideo()
extern "C"  void GvrVideoPlayerTexture_ReInitializeVideo_m3422224903 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::DestroyVideoTextures()
extern "C"  void GvrVideoPlayerTexture_DestroyVideoTextures_m1852580682 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnEnable()
extern "C"  void GvrVideoPlayerTexture_OnEnable_m2061253697 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnDestroy()
extern "C"  void GvrVideoPlayerTexture_OnDestroy_m3271380846 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnValidate()
extern "C"  void GvrVideoPlayerTexture_OnValidate_m2282463848 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnApplicationPause(System.Boolean)
extern "C"  void GvrVideoPlayerTexture_OnApplicationPause_m221105447 (GvrVideoPlayerTexture_t673526704 * __this, bool ___bPause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnRenderObject()
extern "C"  void GvrVideoPlayerTexture_OnRenderObject_m645867539 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::OnRestartVideoEvent(System.Int32)
extern "C"  void GvrVideoPlayerTexture_OnRestartVideoEvent_m3192572055 (GvrVideoPlayerTexture_t673526704 * __this, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::RestartVideo()
extern "C"  void GvrVideoPlayerTexture_RestartVideo_m900320123 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetCurrentVolume(System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetCurrentVolume_m3170884727 (GvrVideoPlayerTexture_t673526704 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::Init()
extern "C"  bool GvrVideoPlayerTexture_Init_m842832607 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::Play()
extern "C"  bool GvrVideoPlayerTexture_Play_m4164025381 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::Pause()
extern "C"  bool GvrVideoPlayerTexture_Pause_m933228683 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::AdjustAspectRatio()
extern "C"  void GvrVideoPlayerTexture_AdjustAspectRatio_m3214918073 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::CreateTextureForVideoMaybe()
extern "C"  void GvrVideoPlayerTexture_CreateTextureForVideoMaybe_m2501229668 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::UpdateStatusText()
extern "C"  void GvrVideoPlayerTexture_UpdateStatusText_m332367557 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::IssuePlayerEvent(GvrVideoPlayerTexture/RenderCommand)
extern "C"  void GvrVideoPlayerTexture_IssuePlayerEvent_m359795383 (GvrVideoPlayerTexture_t673526704 * __this, int32_t ___evt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::Update()
extern "C"  void GvrVideoPlayerTexture_Update_m4222933278 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GvrVideoPlayerTexture::CallPluginAtEndOfFrames()
extern "C"  Il2CppObject * GvrVideoPlayerTexture_CallPluginAtEndOfFrames_m4023005593 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::RemoveOnVideoEventCallback(System.Action`1<System.Int32>)
extern "C"  void GvrVideoPlayerTexture_RemoveOnVideoEventCallback_m1389819617 (GvrVideoPlayerTexture_t673526704 * __this, Action_1_t1873676830 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetOnVideoEventCallback(System.Action`1<System.Int32>)
extern "C"  void GvrVideoPlayerTexture_SetOnVideoEventCallback_m1591706321 (GvrVideoPlayerTexture_t673526704 * __this, Action_1_t1873676830 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::FireVideoEvent(System.Int32)
extern "C"  void GvrVideoPlayerTexture_FireVideoEvent_m2662357473 (GvrVideoPlayerTexture_t673526704 * __this, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::InternalOnVideoEventCallback(System.IntPtr,System.Int32)
extern "C"  void GvrVideoPlayerTexture_InternalOnVideoEventCallback_m846984960 (Il2CppObject * __this /* static, unused */, IntPtr_t ___cbdata0, int32_t ___eventId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GvrVideoPlayerTexture_InternalOnVideoEventCallback_m846984960(intptr_t ___cbdata0, int32_t ___eventId1);
// System.Void GvrVideoPlayerTexture::SetOnExceptionCallback(System.Action`2<System.String,System.String>)
extern "C"  void GvrVideoPlayerTexture_SetOnExceptionCallback_m2330653689 (GvrVideoPlayerTexture_t673526704 * __this, Action_2_t4234541925 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::InternalOnExceptionCallback(System.String,System.String,System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_InternalOnExceptionCallback_m3417655275 (Il2CppObject * __this /* static, unused */, String_t* ___type0, String_t* ___msg1, IntPtr_t ___cbdata2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_GvrVideoPlayerTexture_InternalOnExceptionCallback_m3417655275(char* ___type0, char* ___msg1, intptr_t ___cbdata2);
// System.Void GvrVideoPlayerTexture::FireOnException(System.String,System.String)
extern "C"  void GvrVideoPlayerTexture_FireOnException_m2899750863 (GvrVideoPlayerTexture_t673526704 * __this, String_t* ___type0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::ToIntPtr(System.Object)
extern "C"  IntPtr_t GvrVideoPlayerTexture_ToIntPtr_m134485240 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GvrVideoPlayerTexture::ProcessURL()
extern "C"  String_t* GvrVideoPlayerTexture_ProcessURL_m2196871410 (GvrVideoPlayerTexture_t673526704 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::GetRenderEventFunc()
extern "C"  IntPtr_t GvrVideoPlayerTexture_GetRenderEventFunc_m3716957874 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetExternalTextures(System.IntPtr,System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetExternalTextures_m667183310 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, Int32U5BU5D_t3030399641* ___texIds1, int32_t ___size2, int32_t ___w3, int32_t ___h4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::GetRenderableTextureId(System.IntPtr)
extern "C"  IntPtr_t GvrVideoPlayerTexture_GetRenderableTextureId_m3882434108 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::CreateVideoPlayer()
extern "C"  IntPtr_t GvrVideoPlayerTexture_CreateVideoPlayer_m1247562832 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::DestroyVideoPlayer(System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_DestroyVideoPlayer_m2272853707 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetVideoPlayerEventBase(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetVideoPlayerEventBase_m1158051996 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::InitVideoPlayer(System.IntPtr,System.Int32,System.String,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  IntPtr_t GvrVideoPlayerTexture_InitVideoPlayer_m3069003721 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int32_t ___videoType1, String_t* ___videoURL2, String_t* ___contentID3, String_t* ___providerId4, bool ___useSecurePath5, bool ___useExisting6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetInitialResolution(System.IntPtr,System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetInitialResolution_m2153341760 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int32_t ___initialResolution1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetPlayerState(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetPlayerState_m803967739 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetWidth(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetWidth_m4247157385 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetHeight(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetHeight_m1434131660 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::PlayVideo(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_PlayVideo_m279990902 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::PauseVideo(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_PauseVideo_m1619452790 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::IsVideoReady(System.IntPtr)
extern "C"  bool GvrVideoPlayerTexture_IsVideoReady_m3320617551 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::IsVideoPaused(System.IntPtr)
extern "C"  bool GvrVideoPlayerTexture_IsVideoPaused_m2416087958 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::GetDuration(System.IntPtr)
extern "C"  int64_t GvrVideoPlayerTexture_GetDuration_m3667528342 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::GetBufferedPosition(System.IntPtr)
extern "C"  int64_t GvrVideoPlayerTexture_GetBufferedPosition_m2995648706 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GvrVideoPlayerTexture::GetCurrentPosition(System.IntPtr)
extern "C"  int64_t GvrVideoPlayerTexture_GetCurrentPosition_m4059906718 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetCurrentPosition(System.IntPtr,System.Int64)
extern "C"  void GvrVideoPlayerTexture_SetCurrentPosition_m1078056135 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int64_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetBufferedPercentage(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetBufferedPercentage_m322256696 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetMaxVolume(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetMaxVolume_m2355154687 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GvrVideoPlayerTexture::GetCurrentVolume(System.IntPtr)
extern "C"  int32_t GvrVideoPlayerTexture_GetCurrentVolume_m2832246304 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetCurrentVolume(System.IntPtr,System.Int32)
extern "C"  void GvrVideoPlayerTexture_SetCurrentVolume_m2877984073 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GvrVideoPlayerTexture::SetVideoPlayerSupportClassname(System.IntPtr,System.String)
extern "C"  bool GvrVideoPlayerTexture_SetVideoPlayerSupportClassname_m1842375471 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, String_t* ___classname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GvrVideoPlayerTexture::GetRawPlayer(System.IntPtr)
extern "C"  IntPtr_t GvrVideoPlayerTexture_GetRawPlayer_m1195240179 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetOnVideoEventCallback(System.IntPtr,GvrVideoPlayerTexture/OnVideoEventCallback,System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_SetOnVideoEventCallback_m1546878790 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, OnVideoEventCallback_t3117232894 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::SetOnExceptionCallback(System.IntPtr,GvrVideoPlayerTexture/OnExceptionCallback,System.IntPtr)
extern "C"  void GvrVideoPlayerTexture_SetOnExceptionCallback_m3787270318 (Il2CppObject * __this /* static, unused */, IntPtr_t ___videoPlayerPtr0, OnExceptionCallback_t1653610982 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::.cctor()
extern "C"  void GvrVideoPlayerTexture__cctor_m2583360306 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::<CreatePlayer>m__0(System.Int32)
extern "C"  void GvrVideoPlayerTexture_U3CCreatePlayerU3Em__0_m3815240840 (GvrVideoPlayerTexture_t673526704 * __this, int32_t ___eventId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GvrVideoPlayerTexture::<CreatePlayer>m__1(System.String,System.String)
extern "C"  void GvrVideoPlayerTexture_U3CCreatePlayerU3Em__1_m942586000 (Il2CppObject * __this /* static, unused */, String_t* ___type0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
