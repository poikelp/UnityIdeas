#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// KeyboardState
struct KeyboardState_t3308394474;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.DummyKeyboardProvider
struct  DummyKeyboardProvider_t1674367534  : public Il2CppObject
{
public:
	// KeyboardState Gvr.Internal.DummyKeyboardProvider::dummyState
	KeyboardState_t3308394474 * ___dummyState_0;
	// System.String Gvr.Internal.DummyKeyboardProvider::<EditorText>k__BackingField
	String_t* ___U3CEditorTextU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_dummyState_0() { return static_cast<int32_t>(offsetof(DummyKeyboardProvider_t1674367534, ___dummyState_0)); }
	inline KeyboardState_t3308394474 * get_dummyState_0() const { return ___dummyState_0; }
	inline KeyboardState_t3308394474 ** get_address_of_dummyState_0() { return &___dummyState_0; }
	inline void set_dummyState_0(KeyboardState_t3308394474 * value)
	{
		___dummyState_0 = value;
		Il2CppCodeGenWriteBarrier(&___dummyState_0, value);
	}

	inline static int32_t get_offset_of_U3CEditorTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DummyKeyboardProvider_t1674367534, ___U3CEditorTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CEditorTextU3Ek__BackingField_1() const { return ___U3CEditorTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CEditorTextU3Ek__BackingField_1() { return &___U3CEditorTextU3Ek__BackingField_1; }
	inline void set_U3CEditorTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CEditorTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CEditorTextU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
