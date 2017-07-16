#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// IGvrInputModuleController
struct IGvrInputModuleController_t3483946532;
// IGvrEventExecutor
struct IGvrEventExecutor_t1206191479;
// GvrPointerScrollInput
struct GvrPointerScrollInput_t4200958609;
// GvrBasePointer
struct GvrBasePointer_t2150122635;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrPointerInputModuleImpl
struct  GvrPointerInputModuleImpl_t2072755720  : public Il2CppObject
{
public:
	// IGvrInputModuleController GvrPointerInputModuleImpl::<ModuleController>k__BackingField
	Il2CppObject * ___U3CModuleControllerU3Ek__BackingField_0;
	// IGvrEventExecutor GvrPointerInputModuleImpl::<EventExecutor>k__BackingField
	Il2CppObject * ___U3CEventExecutorU3Ek__BackingField_1;
	// System.Boolean GvrPointerInputModuleImpl::<VrModeOnly>k__BackingField
	bool ___U3CVrModeOnlyU3Ek__BackingField_2;
	// GvrPointerScrollInput GvrPointerInputModuleImpl::<ScrollInput>k__BackingField
	GvrPointerScrollInput_t4200958609 * ___U3CScrollInputU3Ek__BackingField_3;
	// GvrBasePointer GvrPointerInputModuleImpl::<Pointer>k__BackingField
	GvrBasePointer_t2150122635 * ___U3CPointerU3Ek__BackingField_4;
	// UnityEngine.EventSystems.PointerEventData GvrPointerInputModuleImpl::<CurrentEventData>k__BackingField
	PointerEventData_t1599784723 * ___U3CCurrentEventDataU3Ek__BackingField_5;
	// UnityEngine.Vector2 GvrPointerInputModuleImpl::lastPose
	Vector2_t2243707579  ___lastPose_6;
	// System.Boolean GvrPointerInputModuleImpl::isPointerHovering
	bool ___isPointerHovering_7;
	// System.Boolean GvrPointerInputModuleImpl::isActive
	bool ___isActive_8;

public:
	inline static int32_t get_offset_of_U3CModuleControllerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___U3CModuleControllerU3Ek__BackingField_0)); }
	inline Il2CppObject * get_U3CModuleControllerU3Ek__BackingField_0() const { return ___U3CModuleControllerU3Ek__BackingField_0; }
	inline Il2CppObject ** get_address_of_U3CModuleControllerU3Ek__BackingField_0() { return &___U3CModuleControllerU3Ek__BackingField_0; }
	inline void set_U3CModuleControllerU3Ek__BackingField_0(Il2CppObject * value)
	{
		___U3CModuleControllerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CModuleControllerU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CEventExecutorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___U3CEventExecutorU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CEventExecutorU3Ek__BackingField_1() const { return ___U3CEventExecutorU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CEventExecutorU3Ek__BackingField_1() { return &___U3CEventExecutorU3Ek__BackingField_1; }
	inline void set_U3CEventExecutorU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CEventExecutorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEventExecutorU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CVrModeOnlyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___U3CVrModeOnlyU3Ek__BackingField_2)); }
	inline bool get_U3CVrModeOnlyU3Ek__BackingField_2() const { return ___U3CVrModeOnlyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CVrModeOnlyU3Ek__BackingField_2() { return &___U3CVrModeOnlyU3Ek__BackingField_2; }
	inline void set_U3CVrModeOnlyU3Ek__BackingField_2(bool value)
	{
		___U3CVrModeOnlyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CScrollInputU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___U3CScrollInputU3Ek__BackingField_3)); }
	inline GvrPointerScrollInput_t4200958609 * get_U3CScrollInputU3Ek__BackingField_3() const { return ___U3CScrollInputU3Ek__BackingField_3; }
	inline GvrPointerScrollInput_t4200958609 ** get_address_of_U3CScrollInputU3Ek__BackingField_3() { return &___U3CScrollInputU3Ek__BackingField_3; }
	inline void set_U3CScrollInputU3Ek__BackingField_3(GvrPointerScrollInput_t4200958609 * value)
	{
		___U3CScrollInputU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CScrollInputU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___U3CPointerU3Ek__BackingField_4)); }
	inline GvrBasePointer_t2150122635 * get_U3CPointerU3Ek__BackingField_4() const { return ___U3CPointerU3Ek__BackingField_4; }
	inline GvrBasePointer_t2150122635 ** get_address_of_U3CPointerU3Ek__BackingField_4() { return &___U3CPointerU3Ek__BackingField_4; }
	inline void set_U3CPointerU3Ek__BackingField_4(GvrBasePointer_t2150122635 * value)
	{
		___U3CPointerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPointerU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CCurrentEventDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___U3CCurrentEventDataU3Ek__BackingField_5)); }
	inline PointerEventData_t1599784723 * get_U3CCurrentEventDataU3Ek__BackingField_5() const { return ___U3CCurrentEventDataU3Ek__BackingField_5; }
	inline PointerEventData_t1599784723 ** get_address_of_U3CCurrentEventDataU3Ek__BackingField_5() { return &___U3CCurrentEventDataU3Ek__BackingField_5; }
	inline void set_U3CCurrentEventDataU3Ek__BackingField_5(PointerEventData_t1599784723 * value)
	{
		___U3CCurrentEventDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCurrentEventDataU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_lastPose_6() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___lastPose_6)); }
	inline Vector2_t2243707579  get_lastPose_6() const { return ___lastPose_6; }
	inline Vector2_t2243707579 * get_address_of_lastPose_6() { return &___lastPose_6; }
	inline void set_lastPose_6(Vector2_t2243707579  value)
	{
		___lastPose_6 = value;
	}

	inline static int32_t get_offset_of_isPointerHovering_7() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___isPointerHovering_7)); }
	inline bool get_isPointerHovering_7() const { return ___isPointerHovering_7; }
	inline bool* get_address_of_isPointerHovering_7() { return &___isPointerHovering_7; }
	inline void set_isPointerHovering_7(bool value)
	{
		___isPointerHovering_7 = value;
	}

	inline static int32_t get_offset_of_isActive_8() { return static_cast<int32_t>(offsetof(GvrPointerInputModuleImpl_t2072755720, ___isActive_8)); }
	inline bool get_isActive_8() const { return ___isActive_8; }
	inline bool* get_address_of_isActive_8() { return &___isActive_8; }
	inline void set_isActive_8(bool value)
	{
		___isActive_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
