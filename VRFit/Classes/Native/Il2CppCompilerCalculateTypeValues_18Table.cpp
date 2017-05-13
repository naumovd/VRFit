#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_VertexHelper385374196.h"
#include "UnityEngine_UI_UnityEngine_UI_BaseVertexEffect2504093552.h"
#include "UnityEngine_UI_UnityEngine_UI_BaseMeshEffect1728560551.h"
#include "UnityEngine_UI_UnityEngine_UI_Outline1417504278.h"
#include "UnityEngine_UI_UnityEngine_UI_PositionAsUV11102546563.h"
#include "UnityEngine_UI_UnityEngine_UI_Shadow4269599528.h"
#include "UnityEngine_UI_U3CPrivateImplementationDetailsU3E1486305137.h"
#include "UnityEngine_UI_U3CPrivateImplementationDetailsU3E_1568637717.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_DemoInputManager2776755480.h"
#include "AssemblyU2DCSharp_DemoSceneManager779426248.h"
#include "AssemblyU2DCSharp_GVRDemoManager2690453893.h"
#include "AssemblyU2DCSharp_Teleport282063519.h"
#include "AssemblyU2DCSharp_JumpToPage3783692930.h"
#include "AssemblyU2DCSharp_ChildrenPageProvider958136491.h"
#include "AssemblyU2DCSharp_PooledPageProvider3694972105.h"
#include "AssemblyU2DCSharp_PrefabPageProvider3978016920.h"
#include "AssemblyU2DCSharp_PagedScrollBar4073376237.h"
#include "AssemblyU2DCSharp_PagedScrollRect3048021378.h"
#include "AssemblyU2DCSharp_BaseScrollEffect2855282033.h"
#include "AssemblyU2DCSharp_BaseTile3549052087.h"
#include "AssemblyU2DCSharp_FadeScrollEffect2128935010.h"
#include "AssemblyU2DCSharp_FloatTile645192174.h"
#include "AssemblyU2DCSharp_MaskedTile4024183987.h"
#include "AssemblyU2DCSharp_ScaleScrollEffect3430758866.h"
#include "AssemblyU2DCSharp_TileScrollEffect2151509712.h"
#include "AssemblyU2DCSharp_TiledPage4183784445.h"
#include "AssemblyU2DCSharp_TranslateScrollEffect636656150.h"
#include "AssemblyU2DCSharp_GameObjectPool4074206773.h"
#include "AssemblyU2DCSharp_GameObjectPoolController2109978193.h"
#include "AssemblyU2DCSharp_ObjectPoolManager3813236580.h"
#include "AssemblyU2DCSharp_Tab4262919697.h"
#include "AssemblyU2DCSharp_TabGroup2567651434.h"
#include "AssemblyU2DCSharp_UIFadeTransition1996000123.h"
#include "AssemblyU2DCSharp_GVR_Input_AppButtonInput1324551885.h"
#include "AssemblyU2DCSharp_GVRSample_AutoPlayVideo1314286476.h"
#include "AssemblyU2DCSharp_GVR_Input_Vector3Event2806921088.h"
#include "AssemblyU2DCSharp_GVR_Input_Vector2Event2806928513.h"
#include "AssemblyU2DCSharp_GVR_Input_FloatEvent2213495270.h"
#include "AssemblyU2DCSharp_GVR_Input_BoolEvent555382268.h"
#include "AssemblyU2DCSharp_GVR_Input_ButtonEvent3014361476.h"
#include "AssemblyU2DCSharp_GVR_Input_TouchPadEvent1647781410.h"
#include "AssemblyU2DCSharp_GVR_Input_TransformEvent206501054.h"
#include "AssemblyU2DCSharp_GVR_Input_GameObjectEvent3653055841.h"
#include "AssemblyU2DCSharp_MenuHandler3829619697.h"
#include "AssemblyU2DCSharp_MenuHandler_U3CDoAppearU3Ec__Ite3667605745.h"
#include "AssemblyU2DCSharp_MenuHandler_U3CDoFadeU3Ec__Itera3187801445.h"
#include "AssemblyU2DCSharp_GVR_Events_PositionSwapper2793617445.h"
#include "AssemblyU2DCSharp_ScrubberEvents2429506345.h"
#include "AssemblyU2DCSharp_SwitchVideos3516593024.h"
#include "AssemblyU2DCSharp_SwitchVideos_U3CSetActiveDelayedU531920552.h"
#include "AssemblyU2DCSharp_GVR_Events_ToggleAction2865238344.h"
#include "AssemblyU2DCSharp_VideoControlsManager3010523296.h"
#include "AssemblyU2DCSharp_VideoControlsManager_U3CDoAppear2331568912.h"
#include "AssemblyU2DCSharp_VideoControlsManager_U3CDoFadeU34193299950.h"
#include "AssemblyU2DCSharp_VideoPlayerReference1150574547.h"
#include "AssemblyU2DCSharp_GvrHead3923315805.h"
#include "AssemblyU2DCSharp_GvrHead_HeadUpdatedDelegate1289521902.h"
#include "AssemblyU2DCSharp_GvrCameraUtils3683962711.h"
#include "AssemblyU2DCSharp_GvrEye3930157106.h"
#include "AssemblyU2DCSharp_GvrPostRender3118402863.h"
#include "AssemblyU2DCSharp_GvrPreRender2074710158.h"
#include "AssemblyU2DCSharp_GvrProfile2070273202.h"
#include "AssemblyU2DCSharp_GvrProfile_Screen839756045.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses2112994543.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV1743211906.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion550060296.h"
#include "AssemblyU2DCSharp_GvrProfile_Viewer1642017539.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes2720173411.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes2891453798.h"
#include "AssemblyU2DCSharp_StereoController3144380552.h"
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU33626315335.h"
#include "AssemblyU2DCSharp_StereoRenderEffect958489249.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice4004462063.h"
#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice635821333.h"
#include "AssemblyU2DCSharp_Gvr_Internal_iOSDevice1373308423.h"
#include "AssemblyU2DCSharp_GvrGaze2249568644.h"
#include "AssemblyU2DCSharp_GvrReticle1834592217.h"
#include "AssemblyU2DCSharp_GvrAudio2627885619.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2125366261.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerData1929858338.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerType3348390394.h"
#include "AssemblyU2DCSharp_GvrAudio_RoomProperties2834448096.h"
#include "AssemblyU2DCSharp_GvrAudioListener1521766837.h"
#include "AssemblyU2DCSharp_GvrAudioRoom1253442178.h"
#include "AssemblyU2DCSharp_GvrAudioRoom_SurfaceMaterial3590751945.h"
#include "AssemblyU2DCSharp_GvrAudioSoundfield1301118448.h"
#include "AssemblyU2DCSharp_GvrAudioSource2307460312.h"
#include "AssemblyU2DCSharp_GvrArmModel1664224602.h"
#include "AssemblyU2DCSharp_GvrArmModelOffsets2241056642.h"
#include "AssemblyU2DCSharp_GvrBatteryIndicator1573734297.h"
#include "AssemblyU2DCSharp_GvrController1602869021.h"
#include "AssemblyU2DCSharp_GvrControllerVisual3328916665.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (VertexHelper_t385374196), -1, sizeof(VertexHelper_t385374196_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1800[9] = 
{
	VertexHelper_t385374196::get_offset_of_m_Positions_0(),
	VertexHelper_t385374196::get_offset_of_m_Colors_1(),
	VertexHelper_t385374196::get_offset_of_m_Uv0S_2(),
	VertexHelper_t385374196::get_offset_of_m_Uv1S_3(),
	VertexHelper_t385374196::get_offset_of_m_Normals_4(),
	VertexHelper_t385374196::get_offset_of_m_Tangents_5(),
	VertexHelper_t385374196::get_offset_of_m_Indices_6(),
	VertexHelper_t385374196_StaticFields::get_offset_of_s_DefaultTangent_7(),
	VertexHelper_t385374196_StaticFields::get_offset_of_s_DefaultNormal_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (BaseVertexEffect_t2504093552), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (BaseMeshEffect_t1728560551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1802[1] = 
{
	BaseMeshEffect_t1728560551::get_offset_of_m_Graphic_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (Outline_t1417504278), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (PositionAsUV1_t1102546563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (Shadow_t4269599528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1807[4] = 
{
	Shadow_t4269599528::get_offset_of_m_EffectColor_3(),
	Shadow_t4269599528::get_offset_of_m_EffectDistance_4(),
	Shadow_t4269599528::get_offset_of_m_UseGraphicAlpha_5(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305141), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1808[1] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305141_StaticFields::get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (U24ArrayTypeU3D12_t1568637717)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D12_t1568637717 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (U3CModuleU3E_t3783534221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (DemoInputManager_t2776755480), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (DemoSceneManager_t779426248), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (GVRDemoManager_t2690453893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[2] = 
{
	GVRDemoManager_t2690453893::get_offset_of_m_launchVrHomeButton_2(),
	GVRDemoManager_t2690453893::get_offset_of_m_demoInputManager_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (Teleport_t282063519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1814[3] = 
{
	Teleport_t282063519::get_offset_of_startingPosition_2(),
	Teleport_t282063519::get_offset_of_inactiveMaterial_3(),
	Teleport_t282063519::get_offset_of_gazedAtMaterial_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (JumpToPage_t3783692930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (ChildrenPageProvider_t958136491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[2] = 
{
	ChildrenPageProvider_t958136491::get_offset_of_pages_2(),
	ChildrenPageProvider_t958136491::get_offset_of_spacing_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (PooledPageProvider_t3694972105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[4] = 
{
	PooledPageProvider_t3694972105::get_offset_of_pagePrefab_2(),
	PooledPageProvider_t3694972105::get_offset_of_spacing_3(),
	PooledPageProvider_t3694972105::get_offset_of_NumPages_4(),
	PooledPageProvider_t3694972105::get_offset_of_prefabName_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (PrefabPageProvider_t3978016920), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1819[2] = 
{
	PrefabPageProvider_t3978016920::get_offset_of_prefabs_2(),
	PrefabPageProvider_t3978016920::get_offset_of_spacing_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (PagedScrollBar_t4073376237), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (PagedScrollRect_t3048021378), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (BaseScrollEffect_t2855282033), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (BaseTile_t3549052087), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (FadeScrollEffect_t2128935010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (FloatTile_t645192174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (MaskedTile_t4024183987), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (ScaleScrollEffect_t3430758866), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (TileScrollEffect_t2151509712), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (TiledPage_t4183784445), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (TranslateScrollEffect_t636656150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (GameObjectPool_t4074206773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1831[2] = 
{
	GameObjectPool_t4074206773::get_offset_of_prefab_2(),
	GameObjectPool_t4074206773::get_offset_of_poolController_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (GameObjectPoolController_t2109978193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1832[1] = 
{
	GameObjectPoolController_t2109978193::get_offset_of_toReparentStack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1834[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (ObjectPoolManager_t3813236580), -1, sizeof(ObjectPoolManager_t3813236580_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1835[2] = 
{
	ObjectPoolManager_t3813236580_StaticFields::get_offset_of_instance_2(),
	ObjectPoolManager_t3813236580::get_offset_of_pools_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (Tab_t4262919697), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (TabGroup_t2567651434), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (UIFadeTransition_t1996000123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (AppButtonInput_t1324551885), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (AutoPlayVideo_t1314286476), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1841[5] = 
{
	AutoPlayVideo_t1314286476::get_offset_of_done_2(),
	AutoPlayVideo_t1314286476::get_offset_of_t_3(),
	AutoPlayVideo_t1314286476::get_offset_of_player_4(),
	AutoPlayVideo_t1314286476::get_offset_of_delay_5(),
	AutoPlayVideo_t1314286476::get_offset_of_loop_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (Vector3Event_t2806921088), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (Vector2Event_t2806928513), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (FloatEvent_t2213495270), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (BoolEvent_t555382268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (ButtonEvent_t3014361476), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (TouchPadEvent_t1647781410), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (TransformEvent_t206501054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (GameObjectEvent_t3653055841), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (MenuHandler_t3829619697), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1850[1] = 
{
	MenuHandler_t3829619697::get_offset_of_menuObjects_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (U3CDoAppearU3Ec__Iterator0_t3667605745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1851[5] = 
{
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U3CcgU3E__0_0(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24this_1(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24current_2(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24disposing_3(),
	U3CDoAppearU3Ec__Iterator0_t3667605745::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (U3CDoFadeU3Ec__Iterator1_t3187801445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1852[5] = 
{
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U3CcgU3E__0_0(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24this_1(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24current_2(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24disposing_3(),
	U3CDoFadeU3Ec__Iterator1_t3187801445::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (PositionSwapper_t2793617445), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1853[2] = 
{
	PositionSwapper_t2793617445::get_offset_of_currentIndex_2(),
	PositionSwapper_t2793617445::get_offset_of_Positions_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (ScrubberEvents_t2429506345), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1854[5] = 
{
	ScrubberEvents_t2429506345::get_offset_of_newPositionHandle_2(),
	ScrubberEvents_t2429506345::get_offset_of_corners_3(),
	ScrubberEvents_t2429506345::get_offset_of_slider_4(),
	ScrubberEvents_t2429506345::get_offset_of_mgr_5(),
	ScrubberEvents_t2429506345::get_offset_of_inp_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (SwitchVideos_t3516593024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1855[5] = 
{
	SwitchVideos_t3516593024::get_offset_of_localVideoSample_2(),
	SwitchVideos_t3516593024::get_offset_of_dashVideoSample_3(),
	SwitchVideos_t3516593024::get_offset_of_panoVideoSample_4(),
	SwitchVideos_t3516593024::get_offset_of_videoSamples_5(),
	SwitchVideos_t3516593024::get_offset_of_missingLibText_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (U3CSetActiveDelayedU3Ec__Iterator0_t531920552), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1856[5] = 
{
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_go_0(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_state_1(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_U24current_2(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_U24disposing_3(),
	U3CSetActiveDelayedU3Ec__Iterator0_t531920552::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (ToggleAction_t2865238344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1857[7] = 
{
	ToggleAction_t2865238344::get_offset_of_lastUsage_2(),
	ToggleAction_t2865238344::get_offset_of_on_3(),
	ToggleAction_t2865238344::get_offset_of_OnToggleOn_4(),
	ToggleAction_t2865238344::get_offset_of_OnToggleOff_5(),
	ToggleAction_t2865238344::get_offset_of_InitialState_6(),
	ToggleAction_t2865238344::get_offset_of_RaiseEventForInitialState_7(),
	ToggleAction_t2865238344::get_offset_of_Cooldown_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (VideoControlsManager_t3010523296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[11] = 
{
	VideoControlsManager_t3010523296::get_offset_of_pauseSprite_2(),
	VideoControlsManager_t3010523296::get_offset_of_playSprite_3(),
	VideoControlsManager_t3010523296::get_offset_of_videoScrubber_4(),
	VideoControlsManager_t3010523296::get_offset_of_volumeSlider_5(),
	VideoControlsManager_t3010523296::get_offset_of_volumeWidget_6(),
	VideoControlsManager_t3010523296::get_offset_of_settingsPanel_7(),
	VideoControlsManager_t3010523296::get_offset_of_bufferedBackground_8(),
	VideoControlsManager_t3010523296::get_offset_of_basePosition_9(),
	VideoControlsManager_t3010523296::get_offset_of_videoPosition_10(),
	VideoControlsManager_t3010523296::get_offset_of_videoDuration_11(),
	VideoControlsManager_t3010523296::get_offset_of_U3CPlayerU3Ek__BackingField_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (U3CDoAppearU3Ec__Iterator0_t2331568912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1859[5] = 
{
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U3CcgU3E__0_0(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24this_1(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24current_2(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24disposing_3(),
	U3CDoAppearU3Ec__Iterator0_t2331568912::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (U3CDoFadeU3Ec__Iterator1_t4193299950), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1860[5] = 
{
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U3CcgU3E__0_0(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24this_1(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24current_2(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24disposing_3(),
	U3CDoFadeU3Ec__Iterator1_t4193299950::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (VideoPlayerReference_t1150574547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1861[1] = 
{
	VideoPlayerReference_t1150574547::get_offset_of_player_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (GvrHead_t3923315805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1862[6] = 
{
	GvrHead_t3923315805::get_offset_of_trackRotation_2(),
	GvrHead_t3923315805::get_offset_of_trackPosition_3(),
	GvrHead_t3923315805::get_offset_of_target_4(),
	GvrHead_t3923315805::get_offset_of_updateEarly_5(),
	GvrHead_t3923315805::get_offset_of_OnHeadUpdated_6(),
	GvrHead_t3923315805::get_offset_of_updated_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (HeadUpdatedDelegate_t1289521902), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (GvrCameraUtils_t3683962711), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (GvrEye_t3930157106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1865[8] = 
{
	GvrEye_t3930157106::get_offset_of_eye_2(),
	GvrEye_t3930157106::get_offset_of_toggleCullingMask_3(),
	GvrEye_t3930157106::get_offset_of_controller_4(),
	GvrEye_t3930157106::get_offset_of_stereoEffect_5(),
	GvrEye_t3930157106::get_offset_of_monoCamera_6(),
	GvrEye_t3930157106::get_offset_of_realProj_7(),
	GvrEye_t3930157106::get_offset_of_interpPosition_8(),
	GvrEye_t3930157106::get_offset_of_U3CcamU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (GvrPostRender_t3118402863), -1, sizeof(GvrPostRender_t3118402863_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1866[22] = 
{
	GvrPostRender_t3118402863::get_offset_of_U3CcamU3Ek__BackingField_2(),
	0,
	0,
	0,
	GvrPostRender_t3118402863::get_offset_of_distortionMesh_6(),
	GvrPostRender_t3118402863::get_offset_of_meshMaterial_7(),
	GvrPostRender_t3118402863::get_offset_of_uiMaterial_8(),
	GvrPostRender_t3118402863::get_offset_of_centerWidthPx_9(),
	GvrPostRender_t3118402863::get_offset_of_buttonWidthPx_10(),
	GvrPostRender_t3118402863::get_offset_of_xScale_11(),
	GvrPostRender_t3118402863::get_offset_of_yScale_12(),
	GvrPostRender_t3118402863::get_offset_of_xfm_13(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrPostRender_t3118402863_StaticFields::get_offset_of_Angles_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (GvrPreRender_t2074710158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[1] = 
{
	GvrPreRender_t2074710158::get_offset_of_U3CcamU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (GvrProfile_t2070273202), -1, sizeof(GvrProfile_t2070273202_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1868[15] = 
{
	GvrProfile_t2070273202::get_offset_of_screen_0(),
	GvrProfile_t2070273202::get_offset_of_viewer_1(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus5_2(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus6_3(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyS6_4(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyNote4_5(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_LGG3_6(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone4_7(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone5_8(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6_9(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6p_10(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardJun2014_11(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardMay2015_12(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GoggleTechC1Glass_13(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Default_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (Screen_t839756045)+ sizeof (Il2CppObject), sizeof(Screen_t839756045 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1869[3] = 
{
	Screen_t839756045::get_offset_of_width_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_height_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_border_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (Lenses_t2112994543)+ sizeof (Il2CppObject), sizeof(Lenses_t2112994543 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1870[7] = 
{
	Lenses_t2112994543::get_offset_of_separation_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_offset_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_screenDistance_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_alignment_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (MaxFOV_t1743211906)+ sizeof (Il2CppObject), sizeof(MaxFOV_t1743211906 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1871[4] = 
{
	MaxFOV_t1743211906::get_offset_of_outer_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_inner_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_upper_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_lower_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (Distortion_t550060296)+ sizeof (Il2CppObject), sizeof(Distortion_t550060296_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1872[1] = 
{
	Distortion_t550060296::get_offset_of_coef_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (Viewer_t1642017539)+ sizeof (Il2CppObject), sizeof(Viewer_t1642017539_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1873[4] = 
{
	Viewer_t1642017539::get_offset_of_lenses_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_maxFOV_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_distortion_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_inverse_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (ScreenSizes_t2720173411)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1874[10] = 
{
	ScreenSizes_t2720173411::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (ViewerTypes_t2891453798)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1875[4] = 
{
	ViewerTypes_t2891453798::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (StereoController_t3144380552), -1, sizeof(StereoController_t3144380552_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1876[17] = 
{
	StereoController_t3144380552::get_offset_of_directRender_2(),
	StereoController_t3144380552::get_offset_of_keepStereoUpdated_3(),
	StereoController_t3144380552::get_offset_of_stereoMultiplier_4(),
	StereoController_t3144380552::get_offset_of_matchMonoFOV_5(),
	StereoController_t3144380552::get_offset_of_matchByZoom_6(),
	StereoController_t3144380552::get_offset_of_centerOfInterest_7(),
	StereoController_t3144380552::get_offset_of_radiusOfInterest_8(),
	StereoController_t3144380552::get_offset_of_checkStereoComfort_9(),
	StereoController_t3144380552::get_offset_of_stereoAdjustSmoothing_10(),
	StereoController_t3144380552::get_offset_of_screenParallax_11(),
	StereoController_t3144380552::get_offset_of_stereoPaddingX_12(),
	StereoController_t3144380552::get_offset_of_stereoPaddingY_13(),
	StereoController_t3144380552::get_offset_of_renderedStereo_14(),
	StereoController_t3144380552::get_offset_of_eyes_15(),
	StereoController_t3144380552::get_offset_of_head_16(),
	StereoController_t3144380552::get_offset_of_U3CcamU3Ek__BackingField_17(),
	StereoController_t3144380552_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t3626315335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1877[4] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24this_0(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24disposing_2(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (StereoRenderEffect_t958489249), -1, sizeof(StereoRenderEffect_t958489249_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1878[3] = 
{
	StereoRenderEffect_t958489249::get_offset_of_material_2(),
	StereoRenderEffect_t958489249::get_offset_of_cam_3(),
	StereoRenderEffect_t958489249_StaticFields::get_offset_of_fullRect_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { sizeof (BaseVRDevice_t4004462063), -1, sizeof(BaseVRDevice_t4004462063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1879[19] = 
{
	BaseVRDevice_t4004462063_StaticFields::get_offset_of_device_0(),
	BaseVRDevice_t4004462063::get_offset_of_U3CProfileU3Ek__BackingField_1(),
	BaseVRDevice_t4004462063::get_offset_of_headPose_2(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyePose_3(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyePose_4(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedProjection_5(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedProjection_6(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedProjection_7(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedProjection_8(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedViewport_9(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedViewport_10(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedViewport_11(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedViewport_12(),
	BaseVRDevice_t4004462063::get_offset_of_recommendedTextureSize_13(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeOrientation_14(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeOrientation_15(),
	BaseVRDevice_t4004462063::get_offset_of_tilted_16(),
	BaseVRDevice_t4004462063::get_offset_of_profileChanged_17(),
	BaseVRDevice_t4004462063::get_offset_of_backButtonPressed_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (GvrDevice_t635821333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1880[13] = 
{
	0,
	0,
	0,
	0,
	GvrDevice_t635821333::get_offset_of_headData_23(),
	GvrDevice_t635821333::get_offset_of_viewData_24(),
	GvrDevice_t635821333::get_offset_of_profileData_25(),
	GvrDevice_t635821333::get_offset_of_headView_26(),
	GvrDevice_t635821333::get_offset_of_leftEyeView_27(),
	GvrDevice_t635821333::get_offset_of_rightEyeView_28(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeProjections_29(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeUILayer_30(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (iOSDevice_t1373308423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1881[1] = 
{
	iOSDevice_t1373308423::get_offset_of_isOpenGL_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (GvrGaze_t2249568644), -1, sizeof(GvrGaze_t2249568644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1882[11] = 
{
	GvrGaze_t2249568644::get_offset_of_pointerObject_2(),
	GvrGaze_t2249568644::get_offset_of_pointer_3(),
	GvrGaze_t2249568644::get_offset_of_U3CcamU3Ek__BackingField_4(),
	GvrGaze_t2249568644::get_offset_of_mask_5(),
	GvrGaze_t2249568644::get_offset_of_currentTarget_6(),
	GvrGaze_t2249568644::get_offset_of_currentGazeObject_7(),
	GvrGaze_t2249568644::get_offset_of_lastIntersectPosition_8(),
	GvrGaze_t2249568644::get_offset_of_lastIntersectionRay_9(),
	GvrGaze_t2249568644::get_offset_of_isTriggered_10(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (GvrReticle_t1834592217), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (GvrAudio_t2627885619), -1, sizeof(GvrAudio_t2627885619_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1885[23] = 
{
	GvrAudio_t2627885619_StaticFields::get_offset_of_sampleRate_0(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_numChannels_1(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_framesPerBuffer_2(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_listenerDirectivityColor_3(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_sourceDirectivityColor_4(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrAudio_t2627885619_StaticFields::get_offset_of_bounds_16(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_enabledRooms_17(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_initialized_18(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_listenerTransform_19(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_occlusionMaskValue_20(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_pose_21(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (Quality_t2125366261)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1886[4] = 
{
	Quality_t2125366261::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (SpatializerData_t1929858338)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1887[9] = 
{
	SpatializerData_t1929858338::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (SpatializerType_t3348390394)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1888[3] = 
{
	SpatializerType_t3348390394::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (RoomProperties_t2834448096)+ sizeof (Il2CppObject), sizeof(RoomProperties_t2834448096 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1889[20] = 
{
	RoomProperties_t2834448096::get_offset_of_positionX_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_positionY_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_positionZ_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationX_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationY_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationZ_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_rotationW_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_dimensionsX_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_dimensionsY_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_dimensionsZ_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialLeft_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialRight_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialBottom_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialTop_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialFront_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_materialBack_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reflectionScalar_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reverbGain_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reverbTime_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t2834448096::get_offset_of_reverbBrightness_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (GvrAudioListener_t1521766837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1890[3] = 
{
	GvrAudioListener_t1521766837::get_offset_of_globalGainDb_2(),
	GvrAudioListener_t1521766837::get_offset_of_occlusionMask_3(),
	GvrAudioListener_t1521766837::get_offset_of_quality_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { sizeof (GvrAudioRoom_t1253442178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1891[11] = 
{
	GvrAudioRoom_t1253442178::get_offset_of_leftWall_2(),
	GvrAudioRoom_t1253442178::get_offset_of_rightWall_3(),
	GvrAudioRoom_t1253442178::get_offset_of_floor_4(),
	GvrAudioRoom_t1253442178::get_offset_of_ceiling_5(),
	GvrAudioRoom_t1253442178::get_offset_of_backWall_6(),
	GvrAudioRoom_t1253442178::get_offset_of_frontWall_7(),
	GvrAudioRoom_t1253442178::get_offset_of_reflectivity_8(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbGainDb_9(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbBrightness_10(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbTime_11(),
	GvrAudioRoom_t1253442178::get_offset_of_size_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (SurfaceMaterial_t3590751945)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1892[24] = 
{
	SurfaceMaterial_t3590751945::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (GvrAudioSoundfield_t1301118448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1893[13] = 
{
	GvrAudioSoundfield_t1301118448::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSoundfield_t1301118448::get_offset_of_gainDb_3(),
	GvrAudioSoundfield_t1301118448::get_offset_of_playOnAwake_4(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldClip0102_5(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldClip0304_6(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldLoop_7(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldMute_8(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldPitch_9(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldPriority_10(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldVolume_11(),
	GvrAudioSoundfield_t1301118448::get_offset_of_id_12(),
	GvrAudioSoundfield_t1301118448::get_offset_of_audioSources_13(),
	GvrAudioSoundfield_t1301118448::get_offset_of_isPaused_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (GvrAudioSource_t2307460312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1894[25] = 
{
	GvrAudioSource_t2307460312::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSource_t2307460312::get_offset_of_directivityAlpha_3(),
	GvrAudioSource_t2307460312::get_offset_of_directivitySharpness_4(),
	GvrAudioSource_t2307460312::get_offset_of_listenerDirectivityAlpha_5(),
	GvrAudioSource_t2307460312::get_offset_of_listenerDirectivitySharpness_6(),
	GvrAudioSource_t2307460312::get_offset_of_gainDb_7(),
	GvrAudioSource_t2307460312::get_offset_of_occlusionEnabled_8(),
	GvrAudioSource_t2307460312::get_offset_of_playOnAwake_9(),
	GvrAudioSource_t2307460312::get_offset_of_sourceClip_10(),
	GvrAudioSource_t2307460312::get_offset_of_sourceLoop_11(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMute_12(),
	GvrAudioSource_t2307460312::get_offset_of_sourcePitch_13(),
	GvrAudioSource_t2307460312::get_offset_of_sourcePriority_14(),
	GvrAudioSource_t2307460312::get_offset_of_sourceDopplerLevel_15(),
	GvrAudioSource_t2307460312::get_offset_of_sourceSpread_16(),
	GvrAudioSource_t2307460312::get_offset_of_sourceVolume_17(),
	GvrAudioSource_t2307460312::get_offset_of_sourceRolloffMode_18(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMaxDistance_19(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMinDistance_20(),
	GvrAudioSource_t2307460312::get_offset_of_hrtfEnabled_21(),
	GvrAudioSource_t2307460312::get_offset_of_audioSource_22(),
	GvrAudioSource_t2307460312::get_offset_of_id_23(),
	GvrAudioSource_t2307460312::get_offset_of_currentOcclusion_24(),
	GvrAudioSource_t2307460312::get_offset_of_nextOcclusionUpdate_25(),
	GvrAudioSource_t2307460312::get_offset_of_isPaused_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (GvrArmModel_t1664224602), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (GvrArmModelOffsets_t2241056642), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { sizeof (GvrBatteryIndicator_t1573734297), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { sizeof (GvrController_t1602869021), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (GvrControllerVisual_t3328916665), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
