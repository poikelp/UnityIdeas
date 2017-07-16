#pragma once

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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// balloonMake
struct  balloonMake_t2793062909  : public MonoBehaviour_t1158329972
{
public:
	// System.Single balloonMake::interval
	float ___interval_2;
	// System.Single balloonMake::hoge
	float ___hoge_3;
	// System.Single balloonMake::circleScale
	float ___circleScale_4;
	// UnityEngine.GameObject balloonMake::balloon
	GameObject_t1756533147 * ___balloon_5;

public:
	inline static int32_t get_offset_of_interval_2() { return static_cast<int32_t>(offsetof(balloonMake_t2793062909, ___interval_2)); }
	inline float get_interval_2() const { return ___interval_2; }
	inline float* get_address_of_interval_2() { return &___interval_2; }
	inline void set_interval_2(float value)
	{
		___interval_2 = value;
	}

	inline static int32_t get_offset_of_hoge_3() { return static_cast<int32_t>(offsetof(balloonMake_t2793062909, ___hoge_3)); }
	inline float get_hoge_3() const { return ___hoge_3; }
	inline float* get_address_of_hoge_3() { return &___hoge_3; }
	inline void set_hoge_3(float value)
	{
		___hoge_3 = value;
	}

	inline static int32_t get_offset_of_circleScale_4() { return static_cast<int32_t>(offsetof(balloonMake_t2793062909, ___circleScale_4)); }
	inline float get_circleScale_4() const { return ___circleScale_4; }
	inline float* get_address_of_circleScale_4() { return &___circleScale_4; }
	inline void set_circleScale_4(float value)
	{
		___circleScale_4 = value;
	}

	inline static int32_t get_offset_of_balloon_5() { return static_cast<int32_t>(offsetof(balloonMake_t2793062909, ___balloon_5)); }
	inline GameObject_t1756533147 * get_balloon_5() const { return ___balloon_5; }
	inline GameObject_t1756533147 ** get_address_of_balloon_5() { return &___balloon_5; }
	inline void set_balloon_5(GameObject_t1756533147 * value)
	{
		___balloon_5 = value;
		Il2CppCodeGenWriteBarrier(&___balloon_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
