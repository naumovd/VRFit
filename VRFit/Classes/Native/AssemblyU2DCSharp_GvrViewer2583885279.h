#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrViewer
struct GvrViewer_t2583885279;
// StereoController
struct StereoController_t3144380552;
// UnityEngine.Camera
struct Camera_t189460977;
// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t4004462063;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t1350813851;
// System.Uri
struct Uri_t19570940;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe1613770858.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrViewer
struct  GvrViewer_t2583885279  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GvrViewer::vrModeEnabled
	bool ___vrModeEnabled_5;
	// GvrViewer/DistortionCorrectionMethod GvrViewer::distortionCorrection
	int32_t ___distortionCorrection_6;
	// System.Single GvrViewer::neckModelScale
	float ___neckModelScale_7;
	// System.Boolean GvrViewer::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9;
	// System.Boolean GvrViewer::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_10;
	// System.Single GvrViewer::stereoScreenScale
	float ___stereoScreenScale_11;
	// GvrViewer/StereoScreenChangeDelegate GvrViewer::OnStereoScreenChanged
	StereoScreenChangeDelegate_t1350813851 * ___OnStereoScreenChanged_13;
	// UnityEngine.Vector2 GvrViewer::defaultComfortableViewingRange
	Vector2_t2243707579  ___defaultComfortableViewingRange_14;
	// System.Uri GvrViewer::DefaultDeviceProfile
	Uri_t19570940 * ___DefaultDeviceProfile_15;
	// System.Boolean GvrViewer::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_16;
	// System.Boolean GvrViewer::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_17;
	// System.Boolean GvrViewer::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_18;
	// System.Boolean GvrViewer::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_19;
	// System.Int32 GvrViewer::updatedToFrame
	int32_t ___updatedToFrame_20;

public:
	inline static int32_t get_offset_of_vrModeEnabled_5() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___vrModeEnabled_5)); }
	inline bool get_vrModeEnabled_5() const { return ___vrModeEnabled_5; }
	inline bool* get_address_of_vrModeEnabled_5() { return &___vrModeEnabled_5; }
	inline void set_vrModeEnabled_5(bool value)
	{
		___vrModeEnabled_5 = value;
	}

	inline static int32_t get_offset_of_distortionCorrection_6() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___distortionCorrection_6)); }
	inline int32_t get_distortionCorrection_6() const { return ___distortionCorrection_6; }
	inline int32_t* get_address_of_distortionCorrection_6() { return &___distortionCorrection_6; }
	inline void set_distortionCorrection_6(int32_t value)
	{
		___distortionCorrection_6 = value;
	}

	inline static int32_t get_offset_of_neckModelScale_7() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___neckModelScale_7)); }
	inline float get_neckModelScale_7() const { return ___neckModelScale_7; }
	inline float* get_address_of_neckModelScale_7() { return &___neckModelScale_7; }
	inline void set_neckModelScale_7(float value)
	{
		___neckModelScale_7 = value;
	}

	inline static int32_t get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9)); }
	inline bool get_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9() const { return ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9() { return &___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9; }
	inline void set_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9(bool value)
	{
		___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CNativeUILayerSupportedU3Ek__BackingField_10)); }
	inline bool get_U3CNativeUILayerSupportedU3Ek__BackingField_10() const { return ___U3CNativeUILayerSupportedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CNativeUILayerSupportedU3Ek__BackingField_10() { return &___U3CNativeUILayerSupportedU3Ek__BackingField_10; }
	inline void set_U3CNativeUILayerSupportedU3Ek__BackingField_10(bool value)
	{
		___U3CNativeUILayerSupportedU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_stereoScreenScale_11() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___stereoScreenScale_11)); }
	inline float get_stereoScreenScale_11() const { return ___stereoScreenScale_11; }
	inline float* get_address_of_stereoScreenScale_11() { return &___stereoScreenScale_11; }
	inline void set_stereoScreenScale_11(float value)
	{
		___stereoScreenScale_11 = value;
	}

	inline static int32_t get_offset_of_OnStereoScreenChanged_13() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___OnStereoScreenChanged_13)); }
	inline StereoScreenChangeDelegate_t1350813851 * get_OnStereoScreenChanged_13() const { return ___OnStereoScreenChanged_13; }
	inline StereoScreenChangeDelegate_t1350813851 ** get_address_of_OnStereoScreenChanged_13() { return &___OnStereoScreenChanged_13; }
	inline void set_OnStereoScreenChanged_13(StereoScreenChangeDelegate_t1350813851 * value)
	{
		___OnStereoScreenChanged_13 = value;
		Il2CppCodeGenWriteBarrier(&___OnStereoScreenChanged_13, value);
	}

	inline static int32_t get_offset_of_defaultComfortableViewingRange_14() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___defaultComfortableViewingRange_14)); }
	inline Vector2_t2243707579  get_defaultComfortableViewingRange_14() const { return ___defaultComfortableViewingRange_14; }
	inline Vector2_t2243707579 * get_address_of_defaultComfortableViewingRange_14() { return &___defaultComfortableViewingRange_14; }
	inline void set_defaultComfortableViewingRange_14(Vector2_t2243707579  value)
	{
		___defaultComfortableViewingRange_14 = value;
	}

	inline static int32_t get_offset_of_DefaultDeviceProfile_15() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___DefaultDeviceProfile_15)); }
	inline Uri_t19570940 * get_DefaultDeviceProfile_15() const { return ___DefaultDeviceProfile_15; }
	inline Uri_t19570940 ** get_address_of_DefaultDeviceProfile_15() { return &___DefaultDeviceProfile_15; }
	inline void set_DefaultDeviceProfile_15(Uri_t19570940 * value)
	{
		___DefaultDeviceProfile_15 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultDeviceProfile_15, value);
	}

	inline static int32_t get_offset_of_U3CTriggeredU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CTriggeredU3Ek__BackingField_16)); }
	inline bool get_U3CTriggeredU3Ek__BackingField_16() const { return ___U3CTriggeredU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CTriggeredU3Ek__BackingField_16() { return &___U3CTriggeredU3Ek__BackingField_16; }
	inline void set_U3CTriggeredU3Ek__BackingField_16(bool value)
	{
		___U3CTriggeredU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CTiltedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CTiltedU3Ek__BackingField_17)); }
	inline bool get_U3CTiltedU3Ek__BackingField_17() const { return ___U3CTiltedU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CTiltedU3Ek__BackingField_17() { return &___U3CTiltedU3Ek__BackingField_17; }
	inline void set_U3CTiltedU3Ek__BackingField_17(bool value)
	{
		___U3CTiltedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CProfileChangedU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CProfileChangedU3Ek__BackingField_18)); }
	inline bool get_U3CProfileChangedU3Ek__BackingField_18() const { return ___U3CProfileChangedU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CProfileChangedU3Ek__BackingField_18() { return &___U3CProfileChangedU3Ek__BackingField_18; }
	inline void set_U3CProfileChangedU3Ek__BackingField_18(bool value)
	{
		___U3CProfileChangedU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CBackButtonPressedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___U3CBackButtonPressedU3Ek__BackingField_19)); }
	inline bool get_U3CBackButtonPressedU3Ek__BackingField_19() const { return ___U3CBackButtonPressedU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CBackButtonPressedU3Ek__BackingField_19() { return &___U3CBackButtonPressedU3Ek__BackingField_19; }
	inline void set_U3CBackButtonPressedU3Ek__BackingField_19(bool value)
	{
		___U3CBackButtonPressedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_updatedToFrame_20() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279, ___updatedToFrame_20)); }
	inline int32_t get_updatedToFrame_20() const { return ___updatedToFrame_20; }
	inline int32_t* get_address_of_updatedToFrame_20() { return &___updatedToFrame_20; }
	inline void set_updatedToFrame_20(int32_t value)
	{
		___updatedToFrame_20 = value;
	}
};

struct GvrViewer_t2583885279_StaticFields
{
public:
	// GvrViewer GvrViewer::instance
	GvrViewer_t2583885279 * ___instance_2;
	// StereoController GvrViewer::currentController
	StereoController_t3144380552 * ___currentController_3;
	// UnityEngine.Camera GvrViewer::currentMainCamera
	Camera_t189460977 * ___currentMainCamera_4;
	// Gvr.Internal.BaseVRDevice GvrViewer::device
	BaseVRDevice_t4004462063 * ___device_8;
	// UnityEngine.RenderTexture GvrViewer::stereoScreen
	RenderTexture_t2666733923 * ___stereoScreen_12;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___instance_2)); }
	inline GvrViewer_t2583885279 * get_instance_2() const { return ___instance_2; }
	inline GvrViewer_t2583885279 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GvrViewer_t2583885279 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_currentController_3() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___currentController_3)); }
	inline StereoController_t3144380552 * get_currentController_3() const { return ___currentController_3; }
	inline StereoController_t3144380552 ** get_address_of_currentController_3() { return &___currentController_3; }
	inline void set_currentController_3(StereoController_t3144380552 * value)
	{
		___currentController_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentController_3, value);
	}

	inline static int32_t get_offset_of_currentMainCamera_4() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___currentMainCamera_4)); }
	inline Camera_t189460977 * get_currentMainCamera_4() const { return ___currentMainCamera_4; }
	inline Camera_t189460977 ** get_address_of_currentMainCamera_4() { return &___currentMainCamera_4; }
	inline void set_currentMainCamera_4(Camera_t189460977 * value)
	{
		___currentMainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentMainCamera_4, value);
	}

	inline static int32_t get_offset_of_device_8() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___device_8)); }
	inline BaseVRDevice_t4004462063 * get_device_8() const { return ___device_8; }
	inline BaseVRDevice_t4004462063 ** get_address_of_device_8() { return &___device_8; }
	inline void set_device_8(BaseVRDevice_t4004462063 * value)
	{
		___device_8 = value;
		Il2CppCodeGenWriteBarrier(&___device_8, value);
	}

	inline static int32_t get_offset_of_stereoScreen_12() { return static_cast<int32_t>(offsetof(GvrViewer_t2583885279_StaticFields, ___stereoScreen_12)); }
	inline RenderTexture_t2666733923 * get_stereoScreen_12() const { return ___stereoScreen_12; }
	inline RenderTexture_t2666733923 ** get_address_of_stereoScreen_12() { return &___stereoScreen_12; }
	inline void set_stereoScreen_12(RenderTexture_t2666733923 * value)
	{
		___stereoScreen_12 = value;
		Il2CppCodeGenWriteBarrier(&___stereoScreen_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
