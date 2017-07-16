#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_GvrKeyboardInputMode2940030961.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KeyboardState
struct  KeyboardState_t3308394474  : public Il2CppObject
{
public:
	// System.String KeyboardState::editorText
	String_t* ___editorText_0;
	// GvrKeyboardInputMode KeyboardState::mode
	int32_t ___mode_1;
	// System.Boolean KeyboardState::isValid
	bool ___isValid_2;
	// System.Boolean KeyboardState::isReady
	bool ___isReady_3;
	// UnityEngine.Matrix4x4 KeyboardState::worldMatrix
	Matrix4x4_t2933234003  ___worldMatrix_4;

public:
	inline static int32_t get_offset_of_editorText_0() { return static_cast<int32_t>(offsetof(KeyboardState_t3308394474, ___editorText_0)); }
	inline String_t* get_editorText_0() const { return ___editorText_0; }
	inline String_t** get_address_of_editorText_0() { return &___editorText_0; }
	inline void set_editorText_0(String_t* value)
	{
		___editorText_0 = value;
		Il2CppCodeGenWriteBarrier(&___editorText_0, value);
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(KeyboardState_t3308394474, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_isValid_2() { return static_cast<int32_t>(offsetof(KeyboardState_t3308394474, ___isValid_2)); }
	inline bool get_isValid_2() const { return ___isValid_2; }
	inline bool* get_address_of_isValid_2() { return &___isValid_2; }
	inline void set_isValid_2(bool value)
	{
		___isValid_2 = value;
	}

	inline static int32_t get_offset_of_isReady_3() { return static_cast<int32_t>(offsetof(KeyboardState_t3308394474, ___isReady_3)); }
	inline bool get_isReady_3() const { return ___isReady_3; }
	inline bool* get_address_of_isReady_3() { return &___isReady_3; }
	inline void set_isReady_3(bool value)
	{
		___isReady_3 = value;
	}

	inline static int32_t get_offset_of_worldMatrix_4() { return static_cast<int32_t>(offsetof(KeyboardState_t3308394474, ___worldMatrix_4)); }
	inline Matrix4x4_t2933234003  get_worldMatrix_4() const { return ___worldMatrix_4; }
	inline Matrix4x4_t2933234003 * get_address_of_worldMatrix_4() { return &___worldMatrix_4; }
	inline void set_worldMatrix_4(Matrix4x4_t2933234003  value)
	{
		___worldMatrix_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
