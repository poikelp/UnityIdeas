#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"

// GvrPointerScrollInput
struct GvrPointerScrollInput_t4200958609;
// GvrPointerInputModuleImpl
struct GvrPointerInputModuleImpl_t2072755720;
// GvrEventExecutor
struct GvrEventExecutor_t1694572606;




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
	// GvrPointerInputModuleImpl GvrPointerInputModule::<Impl>k__BackingField
	GvrPointerInputModuleImpl_t2072755720 * ___U3CImplU3Ek__BackingField_10;
	// GvrEventExecutor GvrPointerInputModule::<EventExecutor>k__BackingField
	GvrEventExecutor_t1694572606 * ___U3CEventExecutorU3Ek__BackingField_11;

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

	inline static int32_t get_offset_of_U3CImplU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___U3CImplU3Ek__BackingField_10)); }
	inline GvrPointerInputModuleImpl_t2072755720 * get_U3CImplU3Ek__BackingField_10() const { return ___U3CImplU3Ek__BackingField_10; }
	inline GvrPointerInputModuleImpl_t2072755720 ** get_address_of_U3CImplU3Ek__BackingField_10() { return &___U3CImplU3Ek__BackingField_10; }
	inline void set_U3CImplU3Ek__BackingField_10(GvrPointerInputModuleImpl_t2072755720 * value)
	{
		___U3CImplU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CImplU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CEventExecutorU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GvrPointerInputModule_t1603976810, ___U3CEventExecutorU3Ek__BackingField_11)); }
	inline GvrEventExecutor_t1694572606 * get_U3CEventExecutorU3Ek__BackingField_11() const { return ___U3CEventExecutorU3Ek__BackingField_11; }
	inline GvrEventExecutor_t1694572606 ** get_address_of_U3CEventExecutorU3Ek__BackingField_11() { return &___U3CEventExecutorU3Ek__BackingField_11; }
	inline void set_U3CEventExecutorU3Ek__BackingField_11(GvrEventExecutor_t1694572606 * value)
	{
		___U3CEventExecutorU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEventExecutorU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
