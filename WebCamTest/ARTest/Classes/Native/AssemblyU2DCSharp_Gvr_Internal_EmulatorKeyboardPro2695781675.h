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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// GvrKeyboard/KeyboardCallback
struct KeyboardCallback_t4001681579;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorKeyboardProvider
struct  EmulatorKeyboardProvider_t2695781675  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Gvr.Internal.EmulatorKeyboardProvider::stub
	GameObject_t1756533147 * ___stub_0;
	// System.Boolean Gvr.Internal.EmulatorKeyboardProvider::showing
	bool ___showing_1;
	// GvrKeyboard/KeyboardCallback Gvr.Internal.EmulatorKeyboardProvider::keyboardCallback
	KeyboardCallback_t4001681579 * ___keyboardCallback_2;
	// System.String Gvr.Internal.EmulatorKeyboardProvider::editorText
	String_t* ___editorText_3;
	// GvrKeyboardInputMode Gvr.Internal.EmulatorKeyboardProvider::mode
	int32_t ___mode_4;
	// UnityEngine.Matrix4x4 Gvr.Internal.EmulatorKeyboardProvider::worldMatrix
	Matrix4x4_t2933234003  ___worldMatrix_5;
	// System.Boolean Gvr.Internal.EmulatorKeyboardProvider::isValid
	bool ___isValid_6;

public:
	inline static int32_t get_offset_of_stub_0() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2695781675, ___stub_0)); }
	inline GameObject_t1756533147 * get_stub_0() const { return ___stub_0; }
	inline GameObject_t1756533147 ** get_address_of_stub_0() { return &___stub_0; }
	inline void set_stub_0(GameObject_t1756533147 * value)
	{
		___stub_0 = value;
		Il2CppCodeGenWriteBarrier(&___stub_0, value);
	}

	inline static int32_t get_offset_of_showing_1() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2695781675, ___showing_1)); }
	inline bool get_showing_1() const { return ___showing_1; }
	inline bool* get_address_of_showing_1() { return &___showing_1; }
	inline void set_showing_1(bool value)
	{
		___showing_1 = value;
	}

	inline static int32_t get_offset_of_keyboardCallback_2() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2695781675, ___keyboardCallback_2)); }
	inline KeyboardCallback_t4001681579 * get_keyboardCallback_2() const { return ___keyboardCallback_2; }
	inline KeyboardCallback_t4001681579 ** get_address_of_keyboardCallback_2() { return &___keyboardCallback_2; }
	inline void set_keyboardCallback_2(KeyboardCallback_t4001681579 * value)
	{
		___keyboardCallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardCallback_2, value);
	}

	inline static int32_t get_offset_of_editorText_3() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2695781675, ___editorText_3)); }
	inline String_t* get_editorText_3() const { return ___editorText_3; }
	inline String_t** get_address_of_editorText_3() { return &___editorText_3; }
	inline void set_editorText_3(String_t* value)
	{
		___editorText_3 = value;
		Il2CppCodeGenWriteBarrier(&___editorText_3, value);
	}

	inline static int32_t get_offset_of_mode_4() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2695781675, ___mode_4)); }
	inline int32_t get_mode_4() const { return ___mode_4; }
	inline int32_t* get_address_of_mode_4() { return &___mode_4; }
	inline void set_mode_4(int32_t value)
	{
		___mode_4 = value;
	}

	inline static int32_t get_offset_of_worldMatrix_5() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2695781675, ___worldMatrix_5)); }
	inline Matrix4x4_t2933234003  get_worldMatrix_5() const { return ___worldMatrix_5; }
	inline Matrix4x4_t2933234003 * get_address_of_worldMatrix_5() { return &___worldMatrix_5; }
	inline void set_worldMatrix_5(Matrix4x4_t2933234003  value)
	{
		___worldMatrix_5 = value;
	}

	inline static int32_t get_offset_of_isValid_6() { return static_cast<int32_t>(offsetof(EmulatorKeyboardProvider_t2695781675, ___isValid_6)); }
	inline bool get_isValid_6() const { return ___isValid_6; }
	inline bool* get_address_of_isValid_6() { return &___isValid_6; }
	inline void set_isValid_6(bool value)
	{
		___isValid_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
