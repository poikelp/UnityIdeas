#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GvrKeyboardInputMode2940030961.h"

// GvrKeyboard
struct GvrKeyboard_t598184456;
// Gvr.Internal.IKeyboardProvider
struct IKeyboardProvider_t155239331;
// KeyboardState
struct KeyboardState_t3308394474;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// GvrKeyboard/ErrorCallback
struct ErrorCallback_t1270209242;
// GvrKeyboard/StandardCallback
struct StandardCallback_t1386534425;
// GvrKeyboard/EditTextCallback
struct EditTextCallback_t661057455;
// System.Collections.Generic.List`1<GvrKeyboardEvent>
struct List_1_t683592616;
// System.Object
struct Il2CppObject;
// GvrKeyboardDelegateBase
struct GvrKeyboardDelegateBase_t1914180906;
// GvrKeyboard/KeyboardCallback
struct KeyboardCallback_t4001681579;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrKeyboard
struct  GvrKeyboard_t598184456  : public MonoBehaviour_t1158329972
{
public:
	// KeyboardState GvrKeyboard::keyboardState
	KeyboardState_t3308394474 * ___keyboardState_4;
	// System.Collections.IEnumerator GvrKeyboard::keyboardUpdate
	Il2CppObject * ___keyboardUpdate_5;
	// GvrKeyboard/ErrorCallback GvrKeyboard::errorCallback
	ErrorCallback_t1270209242 * ___errorCallback_6;
	// GvrKeyboard/StandardCallback GvrKeyboard::showCallback
	StandardCallback_t1386534425 * ___showCallback_7;
	// GvrKeyboard/StandardCallback GvrKeyboard::hideCallback
	StandardCallback_t1386534425 * ___hideCallback_8;
	// GvrKeyboard/EditTextCallback GvrKeyboard::updateCallback
	EditTextCallback_t661057455 * ___updateCallback_9;
	// GvrKeyboard/EditTextCallback GvrKeyboard::enterCallback
	EditTextCallback_t661057455 * ___enterCallback_10;
	// System.Boolean GvrKeyboard::isRight
	bool ___isRight_11;
	// System.Boolean GvrKeyboard::isKeyboardHidden
	bool ___isKeyboardHidden_12;
	// GvrKeyboardDelegateBase GvrKeyboard::keyboardDelegate
	GvrKeyboardDelegateBase_t1914180906 * ___keyboardDelegate_16;
	// GvrKeyboardInputMode GvrKeyboard::inputMode
	int32_t ___inputMode_17;
	// System.Boolean GvrKeyboard::useRecommended
	bool ___useRecommended_18;
	// System.Single GvrKeyboard::distance
	float ___distance_19;

public:
	inline static int32_t get_offset_of_keyboardState_4() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___keyboardState_4)); }
	inline KeyboardState_t3308394474 * get_keyboardState_4() const { return ___keyboardState_4; }
	inline KeyboardState_t3308394474 ** get_address_of_keyboardState_4() { return &___keyboardState_4; }
	inline void set_keyboardState_4(KeyboardState_t3308394474 * value)
	{
		___keyboardState_4 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardState_4, value);
	}

	inline static int32_t get_offset_of_keyboardUpdate_5() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___keyboardUpdate_5)); }
	inline Il2CppObject * get_keyboardUpdate_5() const { return ___keyboardUpdate_5; }
	inline Il2CppObject ** get_address_of_keyboardUpdate_5() { return &___keyboardUpdate_5; }
	inline void set_keyboardUpdate_5(Il2CppObject * value)
	{
		___keyboardUpdate_5 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardUpdate_5, value);
	}

	inline static int32_t get_offset_of_errorCallback_6() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___errorCallback_6)); }
	inline ErrorCallback_t1270209242 * get_errorCallback_6() const { return ___errorCallback_6; }
	inline ErrorCallback_t1270209242 ** get_address_of_errorCallback_6() { return &___errorCallback_6; }
	inline void set_errorCallback_6(ErrorCallback_t1270209242 * value)
	{
		___errorCallback_6 = value;
		Il2CppCodeGenWriteBarrier(&___errorCallback_6, value);
	}

	inline static int32_t get_offset_of_showCallback_7() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___showCallback_7)); }
	inline StandardCallback_t1386534425 * get_showCallback_7() const { return ___showCallback_7; }
	inline StandardCallback_t1386534425 ** get_address_of_showCallback_7() { return &___showCallback_7; }
	inline void set_showCallback_7(StandardCallback_t1386534425 * value)
	{
		___showCallback_7 = value;
		Il2CppCodeGenWriteBarrier(&___showCallback_7, value);
	}

	inline static int32_t get_offset_of_hideCallback_8() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___hideCallback_8)); }
	inline StandardCallback_t1386534425 * get_hideCallback_8() const { return ___hideCallback_8; }
	inline StandardCallback_t1386534425 ** get_address_of_hideCallback_8() { return &___hideCallback_8; }
	inline void set_hideCallback_8(StandardCallback_t1386534425 * value)
	{
		___hideCallback_8 = value;
		Il2CppCodeGenWriteBarrier(&___hideCallback_8, value);
	}

	inline static int32_t get_offset_of_updateCallback_9() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___updateCallback_9)); }
	inline EditTextCallback_t661057455 * get_updateCallback_9() const { return ___updateCallback_9; }
	inline EditTextCallback_t661057455 ** get_address_of_updateCallback_9() { return &___updateCallback_9; }
	inline void set_updateCallback_9(EditTextCallback_t661057455 * value)
	{
		___updateCallback_9 = value;
		Il2CppCodeGenWriteBarrier(&___updateCallback_9, value);
	}

	inline static int32_t get_offset_of_enterCallback_10() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___enterCallback_10)); }
	inline EditTextCallback_t661057455 * get_enterCallback_10() const { return ___enterCallback_10; }
	inline EditTextCallback_t661057455 ** get_address_of_enterCallback_10() { return &___enterCallback_10; }
	inline void set_enterCallback_10(EditTextCallback_t661057455 * value)
	{
		___enterCallback_10 = value;
		Il2CppCodeGenWriteBarrier(&___enterCallback_10, value);
	}

	inline static int32_t get_offset_of_isRight_11() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___isRight_11)); }
	inline bool get_isRight_11() const { return ___isRight_11; }
	inline bool* get_address_of_isRight_11() { return &___isRight_11; }
	inline void set_isRight_11(bool value)
	{
		___isRight_11 = value;
	}

	inline static int32_t get_offset_of_isKeyboardHidden_12() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___isKeyboardHidden_12)); }
	inline bool get_isKeyboardHidden_12() const { return ___isKeyboardHidden_12; }
	inline bool* get_address_of_isKeyboardHidden_12() { return &___isKeyboardHidden_12; }
	inline void set_isKeyboardHidden_12(bool value)
	{
		___isKeyboardHidden_12 = value;
	}

	inline static int32_t get_offset_of_keyboardDelegate_16() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___keyboardDelegate_16)); }
	inline GvrKeyboardDelegateBase_t1914180906 * get_keyboardDelegate_16() const { return ___keyboardDelegate_16; }
	inline GvrKeyboardDelegateBase_t1914180906 ** get_address_of_keyboardDelegate_16() { return &___keyboardDelegate_16; }
	inline void set_keyboardDelegate_16(GvrKeyboardDelegateBase_t1914180906 * value)
	{
		___keyboardDelegate_16 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardDelegate_16, value);
	}

	inline static int32_t get_offset_of_inputMode_17() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___inputMode_17)); }
	inline int32_t get_inputMode_17() const { return ___inputMode_17; }
	inline int32_t* get_address_of_inputMode_17() { return &___inputMode_17; }
	inline void set_inputMode_17(int32_t value)
	{
		___inputMode_17 = value;
	}

	inline static int32_t get_offset_of_useRecommended_18() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___useRecommended_18)); }
	inline bool get_useRecommended_18() const { return ___useRecommended_18; }
	inline bool* get_address_of_useRecommended_18() { return &___useRecommended_18; }
	inline void set_useRecommended_18(bool value)
	{
		___useRecommended_18 = value;
	}

	inline static int32_t get_offset_of_distance_19() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456, ___distance_19)); }
	inline float get_distance_19() const { return ___distance_19; }
	inline float* get_address_of_distance_19() { return &___distance_19; }
	inline void set_distance_19(float value)
	{
		___distance_19 = value;
	}
};

struct GvrKeyboard_t598184456_StaticFields
{
public:
	// GvrKeyboard GvrKeyboard::instance
	GvrKeyboard_t598184456 * ___instance_2;
	// Gvr.Internal.IKeyboardProvider GvrKeyboard::keyboardProvider
	Il2CppObject * ___keyboardProvider_3;
	// System.Collections.Generic.List`1<GvrKeyboardEvent> GvrKeyboard::threadSafeCallbacks
	List_1_t683592616 * ___threadSafeCallbacks_14;
	// System.Object GvrKeyboard::callbacksLock
	Il2CppObject * ___callbacksLock_15;
	// GvrKeyboard/KeyboardCallback GvrKeyboard::<>f__mg$cache0
	KeyboardCallback_t4001681579 * ___U3CU3Ef__mgU24cache0_20;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456_StaticFields, ___instance_2)); }
	inline GvrKeyboard_t598184456 * get_instance_2() const { return ___instance_2; }
	inline GvrKeyboard_t598184456 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GvrKeyboard_t598184456 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_keyboardProvider_3() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456_StaticFields, ___keyboardProvider_3)); }
	inline Il2CppObject * get_keyboardProvider_3() const { return ___keyboardProvider_3; }
	inline Il2CppObject ** get_address_of_keyboardProvider_3() { return &___keyboardProvider_3; }
	inline void set_keyboardProvider_3(Il2CppObject * value)
	{
		___keyboardProvider_3 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardProvider_3, value);
	}

	inline static int32_t get_offset_of_threadSafeCallbacks_14() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456_StaticFields, ___threadSafeCallbacks_14)); }
	inline List_1_t683592616 * get_threadSafeCallbacks_14() const { return ___threadSafeCallbacks_14; }
	inline List_1_t683592616 ** get_address_of_threadSafeCallbacks_14() { return &___threadSafeCallbacks_14; }
	inline void set_threadSafeCallbacks_14(List_1_t683592616 * value)
	{
		___threadSafeCallbacks_14 = value;
		Il2CppCodeGenWriteBarrier(&___threadSafeCallbacks_14, value);
	}

	inline static int32_t get_offset_of_callbacksLock_15() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456_StaticFields, ___callbacksLock_15)); }
	inline Il2CppObject * get_callbacksLock_15() const { return ___callbacksLock_15; }
	inline Il2CppObject ** get_address_of_callbacksLock_15() { return &___callbacksLock_15; }
	inline void set_callbacksLock_15(Il2CppObject * value)
	{
		___callbacksLock_15 = value;
		Il2CppCodeGenWriteBarrier(&___callbacksLock_15, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_20() { return static_cast<int32_t>(offsetof(GvrKeyboard_t598184456_StaticFields, ___U3CU3Ef__mgU24cache0_20)); }
	inline KeyboardCallback_t4001681579 * get_U3CU3Ef__mgU24cache0_20() const { return ___U3CU3Ef__mgU24cache0_20; }
	inline KeyboardCallback_t4001681579 ** get_address_of_U3CU3Ef__mgU24cache0_20() { return &___U3CU3Ef__mgU24cache0_20; }
	inline void set_U3CU3Ef__mgU24cache0_20(KeyboardCallback_t4001681579 * value)
	{
		___U3CU3Ef__mgU24cache0_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
