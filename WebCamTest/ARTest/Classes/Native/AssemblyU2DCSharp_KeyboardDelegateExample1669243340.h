#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_GvrKeyboardDelegateBase1914180906.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Canvas
struct Canvas_t209405766;
// System.EventHandler
struct EventHandler_t277755526;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KeyboardDelegateExample
struct  KeyboardDelegateExample_t1669243340  : public GvrKeyboardDelegateBase_t1914180906
{
public:
	// UnityEngine.UI.Text KeyboardDelegateExample::KeyboardText
	Text_t356221433 * ___KeyboardText_2;
	// UnityEngine.Canvas KeyboardDelegateExample::UpdateCanvas
	Canvas_t209405766 * ___UpdateCanvas_3;
	// System.EventHandler KeyboardDelegateExample::KeyboardHidden
	EventHandler_t277755526 * ___KeyboardHidden_4;
	// System.EventHandler KeyboardDelegateExample::KeyboardShown
	EventHandler_t277755526 * ___KeyboardShown_5;

public:
	inline static int32_t get_offset_of_KeyboardText_2() { return static_cast<int32_t>(offsetof(KeyboardDelegateExample_t1669243340, ___KeyboardText_2)); }
	inline Text_t356221433 * get_KeyboardText_2() const { return ___KeyboardText_2; }
	inline Text_t356221433 ** get_address_of_KeyboardText_2() { return &___KeyboardText_2; }
	inline void set_KeyboardText_2(Text_t356221433 * value)
	{
		___KeyboardText_2 = value;
		Il2CppCodeGenWriteBarrier(&___KeyboardText_2, value);
	}

	inline static int32_t get_offset_of_UpdateCanvas_3() { return static_cast<int32_t>(offsetof(KeyboardDelegateExample_t1669243340, ___UpdateCanvas_3)); }
	inline Canvas_t209405766 * get_UpdateCanvas_3() const { return ___UpdateCanvas_3; }
	inline Canvas_t209405766 ** get_address_of_UpdateCanvas_3() { return &___UpdateCanvas_3; }
	inline void set_UpdateCanvas_3(Canvas_t209405766 * value)
	{
		___UpdateCanvas_3 = value;
		Il2CppCodeGenWriteBarrier(&___UpdateCanvas_3, value);
	}

	inline static int32_t get_offset_of_KeyboardHidden_4() { return static_cast<int32_t>(offsetof(KeyboardDelegateExample_t1669243340, ___KeyboardHidden_4)); }
	inline EventHandler_t277755526 * get_KeyboardHidden_4() const { return ___KeyboardHidden_4; }
	inline EventHandler_t277755526 ** get_address_of_KeyboardHidden_4() { return &___KeyboardHidden_4; }
	inline void set_KeyboardHidden_4(EventHandler_t277755526 * value)
	{
		___KeyboardHidden_4 = value;
		Il2CppCodeGenWriteBarrier(&___KeyboardHidden_4, value);
	}

	inline static int32_t get_offset_of_KeyboardShown_5() { return static_cast<int32_t>(offsetof(KeyboardDelegateExample_t1669243340, ___KeyboardShown_5)); }
	inline EventHandler_t277755526 * get_KeyboardShown_5() const { return ___KeyboardShown_5; }
	inline EventHandler_t277755526 ** get_address_of_KeyboardShown_5() { return &___KeyboardShown_5; }
	inline void set_KeyboardShown_5(EventHandler_t277755526 * value)
	{
		___KeyboardShown_5 = value;
		Il2CppCodeGenWriteBarrier(&___KeyboardShown_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
