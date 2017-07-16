#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// balloon
struct  balloon_t2980151287  : public MonoBehaviour_t1158329972
{
public:
	// System.Single balloon::speed
	float ___speed_2;
	// System.Single balloon::bigger
	float ___bigger_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(balloon_t2980151287, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_bigger_3() { return static_cast<int32_t>(offsetof(balloon_t2980151287, ___bigger_3)); }
	inline float get_bigger_3() const { return ___bigger_3; }
	inline float* get_address_of_bigger_3() { return &___bigger_3; }
	inline void set_bigger_3(float value)
	{
		___bigger_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
