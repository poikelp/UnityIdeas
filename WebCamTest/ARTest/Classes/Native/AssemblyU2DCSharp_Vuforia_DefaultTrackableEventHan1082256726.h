﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1779888572;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1082256726  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Vuforia.DefaultTrackableEventHandler::hoge
	GameObject_t1756533147 * ___hoge_2;
	// Vuforia.TrackableBehaviour Vuforia.DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1779888572 * ___mTrackableBehaviour_3;

public:
	inline static int32_t get_offset_of_hoge_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___hoge_2)); }
	inline GameObject_t1756533147 * get_hoge_2() const { return ___hoge_2; }
	inline GameObject_t1756533147 ** get_address_of_hoge_2() { return &___hoge_2; }
	inline void set_hoge_2(GameObject_t1756533147 * value)
	{
		___hoge_2 = value;
		Il2CppCodeGenWriteBarrier(&___hoge_2, value);
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_3() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1082256726, ___mTrackableBehaviour_3)); }
	inline TrackableBehaviour_t1779888572 * get_mTrackableBehaviour_3() const { return ___mTrackableBehaviour_3; }
	inline TrackableBehaviour_t1779888572 ** get_address_of_mTrackableBehaviour_3() { return &___mTrackableBehaviour_3; }
	inline void set_mTrackableBehaviour_3(TrackableBehaviour_t1779888572 * value)
	{
		___mTrackableBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif