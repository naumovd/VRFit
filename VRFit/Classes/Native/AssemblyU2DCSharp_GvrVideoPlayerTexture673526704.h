#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Collections.Generic.List`1<System.Action`1<System.Int32>>
struct List_1_t1242797962;
// System.Collections.Generic.List`1<System.Action`2<System.String,System.String>>
struct List_1_t3603663057;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t3046128587;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// System.Action`2<System.String,System.String>
struct Action_2_t4234541925;
// GvrVideoPlayerTexture/OnVideoEventCallback
struct OnVideoEventCallback_t3117232894;
// GvrVideoPlayerTexture/OnExceptionCallback
struct OnExceptionCallback_t1653610982;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoType3515677472.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoResol1153223030.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrVideoPlayerTexture
struct  GvrVideoPlayerTexture_t673526704  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Texture2D[] GvrVideoPlayerTexture::videoTextures
	Texture2DU5BU5D_t2724090252* ___videoTextures_4;
	// System.Int32 GvrVideoPlayerTexture::currentTexture
	int32_t ___currentTexture_5;
	// System.IntPtr GvrVideoPlayerTexture::videoPlayerPtr
	IntPtr_t ___videoPlayerPtr_6;
	// System.Int32 GvrVideoPlayerTexture::videoPlayerEventBase
	int32_t ___videoPlayerEventBase_7;
	// UnityEngine.Texture GvrVideoPlayerTexture::initialTexture
	Texture_t2243626319 * ___initialTexture_8;
	// System.Boolean GvrVideoPlayerTexture::initialized
	bool ___initialized_9;
	// System.Int32 GvrVideoPlayerTexture::texWidth
	int32_t ___texWidth_10;
	// System.Int32 GvrVideoPlayerTexture::texHeight
	int32_t ___texHeight_11;
	// System.Int64 GvrVideoPlayerTexture::lastBufferedPosition
	int64_t ___lastBufferedPosition_12;
	// System.Single GvrVideoPlayerTexture::framecount
	float ___framecount_13;
	// UnityEngine.UI.Graphic GvrVideoPlayerTexture::graphicComponent
	Graphic_t2426225576 * ___graphicComponent_14;
	// UnityEngine.Renderer GvrVideoPlayerTexture::rendererComponent
	Renderer_t257310565 * ___rendererComponent_15;
	// System.IntPtr GvrVideoPlayerTexture::renderEventFunction
	IntPtr_t ___renderEventFunction_16;
	// System.Boolean GvrVideoPlayerTexture::processingRunning
	bool ___processingRunning_17;
	// System.Boolean GvrVideoPlayerTexture::exitProcessing
	bool ___exitProcessing_18;
	// System.Collections.Generic.List`1<System.Action`1<System.Int32>> GvrVideoPlayerTexture::onEventCallbacks
	List_1_t1242797962 * ___onEventCallbacks_19;
	// System.Collections.Generic.List`1<System.Action`2<System.String,System.String>> GvrVideoPlayerTexture::onExceptionCallbacks
	List_1_t3603663057 * ___onExceptionCallbacks_20;
	// UnityEngine.UI.Text GvrVideoPlayerTexture::statusText
	Text_t356221433 * ___statusText_22;
	// System.Int32 GvrVideoPlayerTexture::bufferSize
	int32_t ___bufferSize_23;
	// GvrVideoPlayerTexture/VideoType GvrVideoPlayerTexture::videoType
	int32_t ___videoType_24;
	// System.String GvrVideoPlayerTexture::videoURL
	String_t* ___videoURL_25;
	// System.String GvrVideoPlayerTexture::videoContentID
	String_t* ___videoContentID_26;
	// System.String GvrVideoPlayerTexture::videoProviderId
	String_t* ___videoProviderId_27;
	// GvrVideoPlayerTexture/VideoResolution GvrVideoPlayerTexture::initialResolution
	int32_t ___initialResolution_28;
	// System.Boolean GvrVideoPlayerTexture::adjustAspectRatio
	bool ___adjustAspectRatio_29;
	// System.Boolean GvrVideoPlayerTexture::useSecurePath
	bool ___useSecurePath_30;

public:
	inline static int32_t get_offset_of_videoTextures_4() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___videoTextures_4)); }
	inline Texture2DU5BU5D_t2724090252* get_videoTextures_4() const { return ___videoTextures_4; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_videoTextures_4() { return &___videoTextures_4; }
	inline void set_videoTextures_4(Texture2DU5BU5D_t2724090252* value)
	{
		___videoTextures_4 = value;
		Il2CppCodeGenWriteBarrier(&___videoTextures_4, value);
	}

	inline static int32_t get_offset_of_currentTexture_5() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___currentTexture_5)); }
	inline int32_t get_currentTexture_5() const { return ___currentTexture_5; }
	inline int32_t* get_address_of_currentTexture_5() { return &___currentTexture_5; }
	inline void set_currentTexture_5(int32_t value)
	{
		___currentTexture_5 = value;
	}

	inline static int32_t get_offset_of_videoPlayerPtr_6() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___videoPlayerPtr_6)); }
	inline IntPtr_t get_videoPlayerPtr_6() const { return ___videoPlayerPtr_6; }
	inline IntPtr_t* get_address_of_videoPlayerPtr_6() { return &___videoPlayerPtr_6; }
	inline void set_videoPlayerPtr_6(IntPtr_t value)
	{
		___videoPlayerPtr_6 = value;
	}

	inline static int32_t get_offset_of_videoPlayerEventBase_7() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___videoPlayerEventBase_7)); }
	inline int32_t get_videoPlayerEventBase_7() const { return ___videoPlayerEventBase_7; }
	inline int32_t* get_address_of_videoPlayerEventBase_7() { return &___videoPlayerEventBase_7; }
	inline void set_videoPlayerEventBase_7(int32_t value)
	{
		___videoPlayerEventBase_7 = value;
	}

	inline static int32_t get_offset_of_initialTexture_8() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___initialTexture_8)); }
	inline Texture_t2243626319 * get_initialTexture_8() const { return ___initialTexture_8; }
	inline Texture_t2243626319 ** get_address_of_initialTexture_8() { return &___initialTexture_8; }
	inline void set_initialTexture_8(Texture_t2243626319 * value)
	{
		___initialTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___initialTexture_8, value);
	}

	inline static int32_t get_offset_of_initialized_9() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___initialized_9)); }
	inline bool get_initialized_9() const { return ___initialized_9; }
	inline bool* get_address_of_initialized_9() { return &___initialized_9; }
	inline void set_initialized_9(bool value)
	{
		___initialized_9 = value;
	}

	inline static int32_t get_offset_of_texWidth_10() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___texWidth_10)); }
	inline int32_t get_texWidth_10() const { return ___texWidth_10; }
	inline int32_t* get_address_of_texWidth_10() { return &___texWidth_10; }
	inline void set_texWidth_10(int32_t value)
	{
		___texWidth_10 = value;
	}

	inline static int32_t get_offset_of_texHeight_11() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___texHeight_11)); }
	inline int32_t get_texHeight_11() const { return ___texHeight_11; }
	inline int32_t* get_address_of_texHeight_11() { return &___texHeight_11; }
	inline void set_texHeight_11(int32_t value)
	{
		___texHeight_11 = value;
	}

	inline static int32_t get_offset_of_lastBufferedPosition_12() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___lastBufferedPosition_12)); }
	inline int64_t get_lastBufferedPosition_12() const { return ___lastBufferedPosition_12; }
	inline int64_t* get_address_of_lastBufferedPosition_12() { return &___lastBufferedPosition_12; }
	inline void set_lastBufferedPosition_12(int64_t value)
	{
		___lastBufferedPosition_12 = value;
	}

	inline static int32_t get_offset_of_framecount_13() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___framecount_13)); }
	inline float get_framecount_13() const { return ___framecount_13; }
	inline float* get_address_of_framecount_13() { return &___framecount_13; }
	inline void set_framecount_13(float value)
	{
		___framecount_13 = value;
	}

	inline static int32_t get_offset_of_graphicComponent_14() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___graphicComponent_14)); }
	inline Graphic_t2426225576 * get_graphicComponent_14() const { return ___graphicComponent_14; }
	inline Graphic_t2426225576 ** get_address_of_graphicComponent_14() { return &___graphicComponent_14; }
	inline void set_graphicComponent_14(Graphic_t2426225576 * value)
	{
		___graphicComponent_14 = value;
		Il2CppCodeGenWriteBarrier(&___graphicComponent_14, value);
	}

	inline static int32_t get_offset_of_rendererComponent_15() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___rendererComponent_15)); }
	inline Renderer_t257310565 * get_rendererComponent_15() const { return ___rendererComponent_15; }
	inline Renderer_t257310565 ** get_address_of_rendererComponent_15() { return &___rendererComponent_15; }
	inline void set_rendererComponent_15(Renderer_t257310565 * value)
	{
		___rendererComponent_15 = value;
		Il2CppCodeGenWriteBarrier(&___rendererComponent_15, value);
	}

	inline static int32_t get_offset_of_renderEventFunction_16() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___renderEventFunction_16)); }
	inline IntPtr_t get_renderEventFunction_16() const { return ___renderEventFunction_16; }
	inline IntPtr_t* get_address_of_renderEventFunction_16() { return &___renderEventFunction_16; }
	inline void set_renderEventFunction_16(IntPtr_t value)
	{
		___renderEventFunction_16 = value;
	}

	inline static int32_t get_offset_of_processingRunning_17() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___processingRunning_17)); }
	inline bool get_processingRunning_17() const { return ___processingRunning_17; }
	inline bool* get_address_of_processingRunning_17() { return &___processingRunning_17; }
	inline void set_processingRunning_17(bool value)
	{
		___processingRunning_17 = value;
	}

	inline static int32_t get_offset_of_exitProcessing_18() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___exitProcessing_18)); }
	inline bool get_exitProcessing_18() const { return ___exitProcessing_18; }
	inline bool* get_address_of_exitProcessing_18() { return &___exitProcessing_18; }
	inline void set_exitProcessing_18(bool value)
	{
		___exitProcessing_18 = value;
	}

	inline static int32_t get_offset_of_onEventCallbacks_19() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___onEventCallbacks_19)); }
	inline List_1_t1242797962 * get_onEventCallbacks_19() const { return ___onEventCallbacks_19; }
	inline List_1_t1242797962 ** get_address_of_onEventCallbacks_19() { return &___onEventCallbacks_19; }
	inline void set_onEventCallbacks_19(List_1_t1242797962 * value)
	{
		___onEventCallbacks_19 = value;
		Il2CppCodeGenWriteBarrier(&___onEventCallbacks_19, value);
	}

	inline static int32_t get_offset_of_onExceptionCallbacks_20() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___onExceptionCallbacks_20)); }
	inline List_1_t3603663057 * get_onExceptionCallbacks_20() const { return ___onExceptionCallbacks_20; }
	inline List_1_t3603663057 ** get_address_of_onExceptionCallbacks_20() { return &___onExceptionCallbacks_20; }
	inline void set_onExceptionCallbacks_20(List_1_t3603663057 * value)
	{
		___onExceptionCallbacks_20 = value;
		Il2CppCodeGenWriteBarrier(&___onExceptionCallbacks_20, value);
	}

	inline static int32_t get_offset_of_statusText_22() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___statusText_22)); }
	inline Text_t356221433 * get_statusText_22() const { return ___statusText_22; }
	inline Text_t356221433 ** get_address_of_statusText_22() { return &___statusText_22; }
	inline void set_statusText_22(Text_t356221433 * value)
	{
		___statusText_22 = value;
		Il2CppCodeGenWriteBarrier(&___statusText_22, value);
	}

	inline static int32_t get_offset_of_bufferSize_23() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___bufferSize_23)); }
	inline int32_t get_bufferSize_23() const { return ___bufferSize_23; }
	inline int32_t* get_address_of_bufferSize_23() { return &___bufferSize_23; }
	inline void set_bufferSize_23(int32_t value)
	{
		___bufferSize_23 = value;
	}

	inline static int32_t get_offset_of_videoType_24() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___videoType_24)); }
	inline int32_t get_videoType_24() const { return ___videoType_24; }
	inline int32_t* get_address_of_videoType_24() { return &___videoType_24; }
	inline void set_videoType_24(int32_t value)
	{
		___videoType_24 = value;
	}

	inline static int32_t get_offset_of_videoURL_25() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___videoURL_25)); }
	inline String_t* get_videoURL_25() const { return ___videoURL_25; }
	inline String_t** get_address_of_videoURL_25() { return &___videoURL_25; }
	inline void set_videoURL_25(String_t* value)
	{
		___videoURL_25 = value;
		Il2CppCodeGenWriteBarrier(&___videoURL_25, value);
	}

	inline static int32_t get_offset_of_videoContentID_26() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___videoContentID_26)); }
	inline String_t* get_videoContentID_26() const { return ___videoContentID_26; }
	inline String_t** get_address_of_videoContentID_26() { return &___videoContentID_26; }
	inline void set_videoContentID_26(String_t* value)
	{
		___videoContentID_26 = value;
		Il2CppCodeGenWriteBarrier(&___videoContentID_26, value);
	}

	inline static int32_t get_offset_of_videoProviderId_27() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___videoProviderId_27)); }
	inline String_t* get_videoProviderId_27() const { return ___videoProviderId_27; }
	inline String_t** get_address_of_videoProviderId_27() { return &___videoProviderId_27; }
	inline void set_videoProviderId_27(String_t* value)
	{
		___videoProviderId_27 = value;
		Il2CppCodeGenWriteBarrier(&___videoProviderId_27, value);
	}

	inline static int32_t get_offset_of_initialResolution_28() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___initialResolution_28)); }
	inline int32_t get_initialResolution_28() const { return ___initialResolution_28; }
	inline int32_t* get_address_of_initialResolution_28() { return &___initialResolution_28; }
	inline void set_initialResolution_28(int32_t value)
	{
		___initialResolution_28 = value;
	}

	inline static int32_t get_offset_of_adjustAspectRatio_29() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___adjustAspectRatio_29)); }
	inline bool get_adjustAspectRatio_29() const { return ___adjustAspectRatio_29; }
	inline bool* get_address_of_adjustAspectRatio_29() { return &___adjustAspectRatio_29; }
	inline void set_adjustAspectRatio_29(bool value)
	{
		___adjustAspectRatio_29 = value;
	}

	inline static int32_t get_offset_of_useSecurePath_30() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704, ___useSecurePath_30)); }
	inline bool get_useSecurePath_30() const { return ___useSecurePath_30; }
	inline bool* get_address_of_useSecurePath_30() { return &___useSecurePath_30; }
	inline void set_useSecurePath_30(bool value)
	{
		___useSecurePath_30 = value;
	}
};

struct GvrVideoPlayerTexture_t673526704_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<System.Action> GvrVideoPlayerTexture::ExecuteOnMainThread
	Queue_1_t3046128587 * ___ExecuteOnMainThread_21;
	// System.Action`2<System.String,System.String> GvrVideoPlayerTexture::<>f__am$cache0
	Action_2_t4234541925 * ___U3CU3Ef__amU24cache0_32;
	// GvrVideoPlayerTexture/OnVideoEventCallback GvrVideoPlayerTexture::<>f__mg$cache0
	OnVideoEventCallback_t3117232894 * ___U3CU3Ef__mgU24cache0_33;
	// GvrVideoPlayerTexture/OnExceptionCallback GvrVideoPlayerTexture::<>f__mg$cache1
	OnExceptionCallback_t1653610982 * ___U3CU3Ef__mgU24cache1_34;

public:
	inline static int32_t get_offset_of_ExecuteOnMainThread_21() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704_StaticFields, ___ExecuteOnMainThread_21)); }
	inline Queue_1_t3046128587 * get_ExecuteOnMainThread_21() const { return ___ExecuteOnMainThread_21; }
	inline Queue_1_t3046128587 ** get_address_of_ExecuteOnMainThread_21() { return &___ExecuteOnMainThread_21; }
	inline void set_ExecuteOnMainThread_21(Queue_1_t3046128587 * value)
	{
		___ExecuteOnMainThread_21 = value;
		Il2CppCodeGenWriteBarrier(&___ExecuteOnMainThread_21, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_32() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704_StaticFields, ___U3CU3Ef__amU24cache0_32)); }
	inline Action_2_t4234541925 * get_U3CU3Ef__amU24cache0_32() const { return ___U3CU3Ef__amU24cache0_32; }
	inline Action_2_t4234541925 ** get_address_of_U3CU3Ef__amU24cache0_32() { return &___U3CU3Ef__amU24cache0_32; }
	inline void set_U3CU3Ef__amU24cache0_32(Action_2_t4234541925 * value)
	{
		___U3CU3Ef__amU24cache0_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_33() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704_StaticFields, ___U3CU3Ef__mgU24cache0_33)); }
	inline OnVideoEventCallback_t3117232894 * get_U3CU3Ef__mgU24cache0_33() const { return ___U3CU3Ef__mgU24cache0_33; }
	inline OnVideoEventCallback_t3117232894 ** get_address_of_U3CU3Ef__mgU24cache0_33() { return &___U3CU3Ef__mgU24cache0_33; }
	inline void set_U3CU3Ef__mgU24cache0_33(OnVideoEventCallback_t3117232894 * value)
	{
		___U3CU3Ef__mgU24cache0_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_34() { return static_cast<int32_t>(offsetof(GvrVideoPlayerTexture_t673526704_StaticFields, ___U3CU3Ef__mgU24cache1_34)); }
	inline OnExceptionCallback_t1653610982 * get_U3CU3Ef__mgU24cache1_34() const { return ___U3CU3Ef__mgU24cache1_34; }
	inline OnExceptionCallback_t1653610982 ** get_address_of_U3CU3Ef__mgU24cache1_34() { return &___U3CU3Ef__mgU24cache1_34; }
	inline void set_U3CU3Ef__mgU24cache1_34(OnExceptionCallback_t1653610982 * value)
	{
		___U3CU3Ef__mgU24cache1_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
