#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// beem
struct  beem_t323029581  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject beem::cyl
	GameObject_t1756533147 * ___cyl_2;
	// UnityEngine.Transform beem::tr
	Transform_t3275118058 * ___tr_3;
	// UnityEngine.Transform beem::ar
	Transform_t3275118058 * ___ar_4;
	// UnityEngine.Color beem::fire
	Color_t2020392075  ___fire_5;
	// UnityEngine.Color beem::hide
	Color_t2020392075  ___hide_6;
	// UnityEngine.Renderer beem::mat
	Renderer_t257310565 * ___mat_7;
	// UnityEngine.Vector3 beem::lastMarker
	Vector3_t2243707580  ___lastMarker_8;

public:
	inline static int32_t get_offset_of_cyl_2() { return static_cast<int32_t>(offsetof(beem_t323029581, ___cyl_2)); }
	inline GameObject_t1756533147 * get_cyl_2() const { return ___cyl_2; }
	inline GameObject_t1756533147 ** get_address_of_cyl_2() { return &___cyl_2; }
	inline void set_cyl_2(GameObject_t1756533147 * value)
	{
		___cyl_2 = value;
		Il2CppCodeGenWriteBarrier(&___cyl_2, value);
	}

	inline static int32_t get_offset_of_tr_3() { return static_cast<int32_t>(offsetof(beem_t323029581, ___tr_3)); }
	inline Transform_t3275118058 * get_tr_3() const { return ___tr_3; }
	inline Transform_t3275118058 ** get_address_of_tr_3() { return &___tr_3; }
	inline void set_tr_3(Transform_t3275118058 * value)
	{
		___tr_3 = value;
		Il2CppCodeGenWriteBarrier(&___tr_3, value);
	}

	inline static int32_t get_offset_of_ar_4() { return static_cast<int32_t>(offsetof(beem_t323029581, ___ar_4)); }
	inline Transform_t3275118058 * get_ar_4() const { return ___ar_4; }
	inline Transform_t3275118058 ** get_address_of_ar_4() { return &___ar_4; }
	inline void set_ar_4(Transform_t3275118058 * value)
	{
		___ar_4 = value;
		Il2CppCodeGenWriteBarrier(&___ar_4, value);
	}

	inline static int32_t get_offset_of_fire_5() { return static_cast<int32_t>(offsetof(beem_t323029581, ___fire_5)); }
	inline Color_t2020392075  get_fire_5() const { return ___fire_5; }
	inline Color_t2020392075 * get_address_of_fire_5() { return &___fire_5; }
	inline void set_fire_5(Color_t2020392075  value)
	{
		___fire_5 = value;
	}

	inline static int32_t get_offset_of_hide_6() { return static_cast<int32_t>(offsetof(beem_t323029581, ___hide_6)); }
	inline Color_t2020392075  get_hide_6() const { return ___hide_6; }
	inline Color_t2020392075 * get_address_of_hide_6() { return &___hide_6; }
	inline void set_hide_6(Color_t2020392075  value)
	{
		___hide_6 = value;
	}

	inline static int32_t get_offset_of_mat_7() { return static_cast<int32_t>(offsetof(beem_t323029581, ___mat_7)); }
	inline Renderer_t257310565 * get_mat_7() const { return ___mat_7; }
	inline Renderer_t257310565 ** get_address_of_mat_7() { return &___mat_7; }
	inline void set_mat_7(Renderer_t257310565 * value)
	{
		___mat_7 = value;
		Il2CppCodeGenWriteBarrier(&___mat_7, value);
	}

	inline static int32_t get_offset_of_lastMarker_8() { return static_cast<int32_t>(offsetof(beem_t323029581, ___lastMarker_8)); }
	inline Vector3_t2243707580  get_lastMarker_8() const { return ___lastMarker_8; }
	inline Vector3_t2243707580 * get_address_of_lastMarker_8() { return &___lastMarker_8; }
	inline void set_lastMarker_8(Vector3_t2243707580  value)
	{
		___lastMarker_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
