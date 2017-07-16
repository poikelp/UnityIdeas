#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_AudioRolloffMode2229549515.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioSoundfield
struct  GvrAudioSoundfield_t1301118448  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GvrAudioSoundfield::bypassRoomEffects
	bool ___bypassRoomEffects_2;
	// System.Single GvrAudioSoundfield::gainDb
	float ___gainDb_3;
	// System.Boolean GvrAudioSoundfield::playOnAwake
	bool ___playOnAwake_4;
	// UnityEngine.AudioClip GvrAudioSoundfield::soundfieldClip0102
	AudioClip_t1932558630 * ___soundfieldClip0102_5;
	// UnityEngine.AudioClip GvrAudioSoundfield::soundfieldClip0304
	AudioClip_t1932558630 * ___soundfieldClip0304_6;
	// System.Boolean GvrAudioSoundfield::soundfieldLoop
	bool ___soundfieldLoop_7;
	// System.Boolean GvrAudioSoundfield::soundfieldMute
	bool ___soundfieldMute_8;
	// System.Single GvrAudioSoundfield::soundfieldPitch
	float ___soundfieldPitch_9;
	// System.Int32 GvrAudioSoundfield::soundfieldPriority
	int32_t ___soundfieldPriority_10;
	// System.Single GvrAudioSoundfield::soundfieldSpatialBlend
	float ___soundfieldSpatialBlend_11;
	// System.Single GvrAudioSoundfield::soundfieldDopplerLevel
	float ___soundfieldDopplerLevel_12;
	// System.Single GvrAudioSoundfield::soundfieldVolume
	float ___soundfieldVolume_13;
	// UnityEngine.AudioRolloffMode GvrAudioSoundfield::soundfieldRolloffMode
	int32_t ___soundfieldRolloffMode_14;
	// System.Single GvrAudioSoundfield::soundfieldMaxDistance
	float ___soundfieldMaxDistance_15;
	// System.Single GvrAudioSoundfield::soundfieldMinDistance
	float ___soundfieldMinDistance_16;
	// System.Int32 GvrAudioSoundfield::id
	int32_t ___id_17;
	// UnityEngine.AudioSource[] GvrAudioSoundfield::audioSources
	AudioSourceU5BU5D_t1873220070* ___audioSources_18;
	// System.Boolean GvrAudioSoundfield::isPaused
	bool ___isPaused_19;

public:
	inline static int32_t get_offset_of_bypassRoomEffects_2() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___bypassRoomEffects_2)); }
	inline bool get_bypassRoomEffects_2() const { return ___bypassRoomEffects_2; }
	inline bool* get_address_of_bypassRoomEffects_2() { return &___bypassRoomEffects_2; }
	inline void set_bypassRoomEffects_2(bool value)
	{
		___bypassRoomEffects_2 = value;
	}

	inline static int32_t get_offset_of_gainDb_3() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___gainDb_3)); }
	inline float get_gainDb_3() const { return ___gainDb_3; }
	inline float* get_address_of_gainDb_3() { return &___gainDb_3; }
	inline void set_gainDb_3(float value)
	{
		___gainDb_3 = value;
	}

	inline static int32_t get_offset_of_playOnAwake_4() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___playOnAwake_4)); }
	inline bool get_playOnAwake_4() const { return ___playOnAwake_4; }
	inline bool* get_address_of_playOnAwake_4() { return &___playOnAwake_4; }
	inline void set_playOnAwake_4(bool value)
	{
		___playOnAwake_4 = value;
	}

	inline static int32_t get_offset_of_soundfieldClip0102_5() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldClip0102_5)); }
	inline AudioClip_t1932558630 * get_soundfieldClip0102_5() const { return ___soundfieldClip0102_5; }
	inline AudioClip_t1932558630 ** get_address_of_soundfieldClip0102_5() { return &___soundfieldClip0102_5; }
	inline void set_soundfieldClip0102_5(AudioClip_t1932558630 * value)
	{
		___soundfieldClip0102_5 = value;
		Il2CppCodeGenWriteBarrier(&___soundfieldClip0102_5, value);
	}

	inline static int32_t get_offset_of_soundfieldClip0304_6() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldClip0304_6)); }
	inline AudioClip_t1932558630 * get_soundfieldClip0304_6() const { return ___soundfieldClip0304_6; }
	inline AudioClip_t1932558630 ** get_address_of_soundfieldClip0304_6() { return &___soundfieldClip0304_6; }
	inline void set_soundfieldClip0304_6(AudioClip_t1932558630 * value)
	{
		___soundfieldClip0304_6 = value;
		Il2CppCodeGenWriteBarrier(&___soundfieldClip0304_6, value);
	}

	inline static int32_t get_offset_of_soundfieldLoop_7() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldLoop_7)); }
	inline bool get_soundfieldLoop_7() const { return ___soundfieldLoop_7; }
	inline bool* get_address_of_soundfieldLoop_7() { return &___soundfieldLoop_7; }
	inline void set_soundfieldLoop_7(bool value)
	{
		___soundfieldLoop_7 = value;
	}

	inline static int32_t get_offset_of_soundfieldMute_8() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldMute_8)); }
	inline bool get_soundfieldMute_8() const { return ___soundfieldMute_8; }
	inline bool* get_address_of_soundfieldMute_8() { return &___soundfieldMute_8; }
	inline void set_soundfieldMute_8(bool value)
	{
		___soundfieldMute_8 = value;
	}

	inline static int32_t get_offset_of_soundfieldPitch_9() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldPitch_9)); }
	inline float get_soundfieldPitch_9() const { return ___soundfieldPitch_9; }
	inline float* get_address_of_soundfieldPitch_9() { return &___soundfieldPitch_9; }
	inline void set_soundfieldPitch_9(float value)
	{
		___soundfieldPitch_9 = value;
	}

	inline static int32_t get_offset_of_soundfieldPriority_10() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldPriority_10)); }
	inline int32_t get_soundfieldPriority_10() const { return ___soundfieldPriority_10; }
	inline int32_t* get_address_of_soundfieldPriority_10() { return &___soundfieldPriority_10; }
	inline void set_soundfieldPriority_10(int32_t value)
	{
		___soundfieldPriority_10 = value;
	}

	inline static int32_t get_offset_of_soundfieldSpatialBlend_11() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldSpatialBlend_11)); }
	inline float get_soundfieldSpatialBlend_11() const { return ___soundfieldSpatialBlend_11; }
	inline float* get_address_of_soundfieldSpatialBlend_11() { return &___soundfieldSpatialBlend_11; }
	inline void set_soundfieldSpatialBlend_11(float value)
	{
		___soundfieldSpatialBlend_11 = value;
	}

	inline static int32_t get_offset_of_soundfieldDopplerLevel_12() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldDopplerLevel_12)); }
	inline float get_soundfieldDopplerLevel_12() const { return ___soundfieldDopplerLevel_12; }
	inline float* get_address_of_soundfieldDopplerLevel_12() { return &___soundfieldDopplerLevel_12; }
	inline void set_soundfieldDopplerLevel_12(float value)
	{
		___soundfieldDopplerLevel_12 = value;
	}

	inline static int32_t get_offset_of_soundfieldVolume_13() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldVolume_13)); }
	inline float get_soundfieldVolume_13() const { return ___soundfieldVolume_13; }
	inline float* get_address_of_soundfieldVolume_13() { return &___soundfieldVolume_13; }
	inline void set_soundfieldVolume_13(float value)
	{
		___soundfieldVolume_13 = value;
	}

	inline static int32_t get_offset_of_soundfieldRolloffMode_14() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldRolloffMode_14)); }
	inline int32_t get_soundfieldRolloffMode_14() const { return ___soundfieldRolloffMode_14; }
	inline int32_t* get_address_of_soundfieldRolloffMode_14() { return &___soundfieldRolloffMode_14; }
	inline void set_soundfieldRolloffMode_14(int32_t value)
	{
		___soundfieldRolloffMode_14 = value;
	}

	inline static int32_t get_offset_of_soundfieldMaxDistance_15() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldMaxDistance_15)); }
	inline float get_soundfieldMaxDistance_15() const { return ___soundfieldMaxDistance_15; }
	inline float* get_address_of_soundfieldMaxDistance_15() { return &___soundfieldMaxDistance_15; }
	inline void set_soundfieldMaxDistance_15(float value)
	{
		___soundfieldMaxDistance_15 = value;
	}

	inline static int32_t get_offset_of_soundfieldMinDistance_16() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___soundfieldMinDistance_16)); }
	inline float get_soundfieldMinDistance_16() const { return ___soundfieldMinDistance_16; }
	inline float* get_address_of_soundfieldMinDistance_16() { return &___soundfieldMinDistance_16; }
	inline void set_soundfieldMinDistance_16(float value)
	{
		___soundfieldMinDistance_16 = value;
	}

	inline static int32_t get_offset_of_id_17() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___id_17)); }
	inline int32_t get_id_17() const { return ___id_17; }
	inline int32_t* get_address_of_id_17() { return &___id_17; }
	inline void set_id_17(int32_t value)
	{
		___id_17 = value;
	}

	inline static int32_t get_offset_of_audioSources_18() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___audioSources_18)); }
	inline AudioSourceU5BU5D_t1873220070* get_audioSources_18() const { return ___audioSources_18; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_audioSources_18() { return &___audioSources_18; }
	inline void set_audioSources_18(AudioSourceU5BU5D_t1873220070* value)
	{
		___audioSources_18 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_18, value);
	}

	inline static int32_t get_offset_of_isPaused_19() { return static_cast<int32_t>(offsetof(GvrAudioSoundfield_t1301118448, ___isPaused_19)); }
	inline bool get_isPaused_19() const { return ___isPaused_19; }
	inline bool* get_address_of_isPaused_19() { return &___isPaused_19; }
	inline void set_isPaused_19(bool value)
	{
		___isPaused_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
