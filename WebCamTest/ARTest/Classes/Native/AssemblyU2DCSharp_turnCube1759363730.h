#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// turnCube
struct  turnCube_t1759363730  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody turnCube::rigi
	Rigidbody_t4233889191 * ___rigi_2;
	// UnityEngine.Vector3 turnCube::pow
	Vector3_t2243707580  ___pow_3;

public:
	inline static int32_t get_offset_of_rigi_2() { return static_cast<int32_t>(offsetof(turnCube_t1759363730, ___rigi_2)); }
	inline Rigidbody_t4233889191 * get_rigi_2() const { return ___rigi_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rigi_2() { return &___rigi_2; }
	inline void set_rigi_2(Rigidbody_t4233889191 * value)
	{
		___rigi_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigi_2, value);
	}

	inline static int32_t get_offset_of_pow_3() { return static_cast<int32_t>(offsetof(turnCube_t1759363730, ___pow_3)); }
	inline Vector3_t2243707580  get_pow_3() const { return ___pow_3; }
	inline Vector3_t2243707580 * get_address_of_pow_3() { return &___pow_3; }
	inline void set_pow_3(Vector3_t2243707580  value)
	{
		___pow_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
