#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_GvrKeyboardInputMode2940030961.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.AndroidNativeKeyboardProvider
struct  AndroidNativeKeyboardProvider_t2887228014  : public Il2CppObject
{
public:
	// System.IntPtr Gvr.Internal.AndroidNativeKeyboardProvider::renderEventFunction
	IntPtr_t ___renderEventFunction_0;
	// System.IntPtr Gvr.Internal.AndroidNativeKeyboardProvider::keyboard_context
	IntPtr_t ___keyboard_context_9;
	// GvrKeyboardInputMode Gvr.Internal.AndroidNativeKeyboardProvider::mode
	int32_t ___mode_16;
	// System.String Gvr.Internal.AndroidNativeKeyboardProvider::editorText
	String_t* ___editorText_17;
	// UnityEngine.Matrix4x4 Gvr.Internal.AndroidNativeKeyboardProvider::worldMatrix
	Matrix4x4_t2933234003  ___worldMatrix_18;
	// System.Boolean Gvr.Internal.AndroidNativeKeyboardProvider::isValid
	bool ___isValid_19;
	// System.Boolean Gvr.Internal.AndroidNativeKeyboardProvider::isReady
	bool ___isReady_20;

public:
	inline static int32_t get_offset_of_renderEventFunction_0() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t2887228014, ___renderEventFunction_0)); }
	inline IntPtr_t get_renderEventFunction_0() const { return ___renderEventFunction_0; }
	inline IntPtr_t* get_address_of_renderEventFunction_0() { return &___renderEventFunction_0; }
	inline void set_renderEventFunction_0(IntPtr_t value)
	{
		___renderEventFunction_0 = value;
	}

	inline static int32_t get_offset_of_keyboard_context_9() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t2887228014, ___keyboard_context_9)); }
	inline IntPtr_t get_keyboard_context_9() const { return ___keyboard_context_9; }
	inline IntPtr_t* get_address_of_keyboard_context_9() { return &___keyboard_context_9; }
	inline void set_keyboard_context_9(IntPtr_t value)
	{
		___keyboard_context_9 = value;
	}

	inline static int32_t get_offset_of_mode_16() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t2887228014, ___mode_16)); }
	inline int32_t get_mode_16() const { return ___mode_16; }
	inline int32_t* get_address_of_mode_16() { return &___mode_16; }
	inline void set_mode_16(int32_t value)
	{
		___mode_16 = value;
	}

	inline static int32_t get_offset_of_editorText_17() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t2887228014, ___editorText_17)); }
	inline String_t* get_editorText_17() const { return ___editorText_17; }
	inline String_t** get_address_of_editorText_17() { return &___editorText_17; }
	inline void set_editorText_17(String_t* value)
	{
		___editorText_17 = value;
		Il2CppCodeGenWriteBarrier(&___editorText_17, value);
	}

	inline static int32_t get_offset_of_worldMatrix_18() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t2887228014, ___worldMatrix_18)); }
	inline Matrix4x4_t2933234003  get_worldMatrix_18() const { return ___worldMatrix_18; }
	inline Matrix4x4_t2933234003 * get_address_of_worldMatrix_18() { return &___worldMatrix_18; }
	inline void set_worldMatrix_18(Matrix4x4_t2933234003  value)
	{
		___worldMatrix_18 = value;
	}

	inline static int32_t get_offset_of_isValid_19() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t2887228014, ___isValid_19)); }
	inline bool get_isValid_19() const { return ___isValid_19; }
	inline bool* get_address_of_isValid_19() { return &___isValid_19; }
	inline void set_isValid_19(bool value)
	{
		___isValid_19 = value;
	}

	inline static int32_t get_offset_of_isReady_20() { return static_cast<int32_t>(offsetof(AndroidNativeKeyboardProvider_t2887228014, ___isReady_20)); }
	inline bool get_isReady_20() const { return ___isReady_20; }
	inline bool* get_address_of_isReady_20() { return &___isReady_20; }
	inline void set_isReady_20(bool value)
	{
		___isReady_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
