#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrEditorEmulator
struct  GvrEditorEmulator_t3806821253  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GvrEditorEmulator::m_camera
	Camera_t189460977 * ___m_camera_4;

public:
	inline static int32_t get_offset_of_m_camera_4() { return static_cast<int32_t>(offsetof(GvrEditorEmulator_t3806821253, ___m_camera_4)); }
	inline Camera_t189460977 * get_m_camera_4() const { return ___m_camera_4; }
	inline Camera_t189460977 ** get_address_of_m_camera_4() { return &___m_camera_4; }
	inline void set_m_camera_4(Camera_t189460977 * value)
	{
		___m_camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
