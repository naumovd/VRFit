#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GvrPointerScrollInput
struct GvrPointerScrollInput_t4200958609;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerInputModule
struct  GvrPointerInputModule_t1603976810  : public BaseInputModule_t1295781545
{
public:
	// System.Boolean GvrPointerInputModule::vrModeOnly
	bool ___vrModeOnly_8;
	// GvrPointerScrollInput GvrPointerInputModule::scrollInput
	GvrPointerScrollInput_t4200958609 * ___scrollInput_9;
	// UnityEngine.EventSystems.PointerEventData GvrPointerInputModule::pointerData
	PointerEventData_t1599784723 * ___pointerData_10;
	// UnityEngine.Vector2 GvrPointerInputModule::lastPose
	Vector2_t2243707579  ___lastPose_11;
	// System.Boolean GvrPointerInputModule::isPointerHovering
	bool ___isPointerHovering_12;
	// System.Boolean GvrPointerInputModule::isActive
	bool ___isActive_13;

public:
	inline static int32_t get_offset_of_vrModeOnly_8() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___vrModeOnly_8)); }
	inline bool get_vrModeOnly_8() const { return ___vrModeOnly_8; }
	inline bool* get_address_of_vrModeOnly_8() { return &___vrModeOnly_8; }
	inline void set_vrModeOnly_8(bool value)
	{
		___vrModeOnly_8 = value;
	}

	inline static int32_t get_offset_of_scrollInput_9() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___scrollInput_9)); }
	inline GvrPointerScrollInput_t4200958609 * get_scrollInput_9() const { return ___scrollInput_9; }
	inline GvrPointerScrollInput_t4200958609 ** get_address_of_scrollInput_9() { return &___scrollInput_9; }
	inline void set_scrollInput_9(GvrPointerScrollInput_t4200958609 * value)
	{
		___scrollInput_9 = value;
		Il2CppCodeGenWriteBarrier(&___scrollInput_9, value);
	}

	inline static int32_t get_offset_of_pointerData_10() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___pointerData_10)); }
	inline PointerEventData_t1599784723 * get_pointerData_10() const { return ___pointerData_10; }
	inline PointerEventData_t1599784723 ** get_address_of_pointerData_10() { return &___pointerData_10; }
	inline void set_pointerData_10(PointerEventData_t1599784723 * value)
	{
		___pointerData_10 = value;
		Il2CppCodeGenWriteBarrier(&___pointerData_10, value);
	}

	inline static int32_t get_offset_of_lastPose_11() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___lastPose_11)); }
	inline Vector2_t2243707579  get_lastPose_11() const { return ___lastPose_11; }
	inline Vector2_t2243707579 * get_address_of_lastPose_11() { return &___lastPose_11; }
	inline void set_lastPose_11(Vector2_t2243707579  value)
	{
		___lastPose_11 = value;
	}

	inline static int32_t get_offset_of_isPointerHovering_12() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___isPointerHovering_12)); }
	inline bool get_isPointerHovering_12() const { return ___isPointerHovering_12; }
	inline bool* get_address_of_isPointerHovering_12() { return &___isPointerHovering_12; }
	inline void set_isPointerHovering_12(bool value)
	{
		___isPointerHovering_12 = value;
	}

	inline static int32_t get_offset_of_isActive_13() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___isActive_13)); }
	inline bool get_isActive_13() const { return ___isActive_13; }
	inline bool* get_address_of_isActive_13() { return &___isActive_13; }
	inline void set_isActive_13(bool value)
	{
		___isActive_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
