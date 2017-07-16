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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrAudioSource
struct  GvrAudioSource_t2307460312  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean GvrAudioSource::bypassRoomEffects
	bool ___bypassRoomEffects_2;
	// System.Single GvrAudioSource::directivityAlpha
	float ___directivityAlpha_3;
	// System.Single GvrAudioSource::directivitySharpness
	float ___directivitySharpness_4;
	// System.Single GvrAudioSource::listenerDirectivityAlpha
	float ___listenerDirectivityAlpha_5;
	// System.Single GvrAudioSource::listenerDirectivitySharpness
	float ___listenerDirectivitySharpness_6;
	// System.Single GvrAudioSource::gainDb
	float ___gainDb_7;
	// System.Boolean GvrAudioSource::occlusionEnabled
	bool ___occlusionEnabled_8;
	// System.Boolean GvrAudioSource::playOnAwake
	bool ___playOnAwake_9;
	// UnityEngine.AudioClip GvrAudioSource::sourceClip
	AudioClip_t1932558630 * ___sourceClip_10;
	// System.Boolean GvrAudioSource::sourceLoop
	bool ___sourceLoop_11;
	// System.Boolean GvrAudioSource::sourceMute
	bool ___sourceMute_12;
	// System.Single GvrAudioSource::sourcePitch
	float ___sourcePitch_13;
	// System.Int32 GvrAudioSource::sourcePriority
	int32_t ___sourcePriority_14;
	// System.Single GvrAudioSource::sourceSpatialBlend
	float ___sourceSpatialBlend_15;
	// System.Single GvrAudioSource::sourceDopplerLevel
	float ___sourceDopplerLevel_16;
	// System.Single GvrAudioSource::sourceSpread
	float ___sourceSpread_17;
	// System.Single GvrAudioSource::sourceVolume
	float ___sourceVolume_18;
	// UnityEngine.AudioRolloffMode GvrAudioSource::sourceRolloffMode
	int32_t ___sourceRolloffMode_19;
	// System.Single GvrAudioSource::sourceMaxDistance
	float ___sourceMaxDistance_20;
	// System.Single GvrAudioSource::sourceMinDistance
	float ___sourceMinDistance_21;
	// System.Boolean GvrAudioSource::hrtfEnabled
	bool ___hrtfEnabled_22;
	// UnityEngine.AudioSource GvrAudioSource::audioSource
	AudioSource_t1135106623 * ___audioSource_23;
	// System.Int32 GvrAudioSource::id
	int32_t ___id_24;
	// System.Single GvrAudioSource::currentOcclusion
	float ___currentOcclusion_25;
	// System.Single GvrAudioSource::nextOcclusionUpdate
	float ___nextOcclusionUpdate_26;
	// System.Boolean GvrAudioSource::isPaused
	bool ___isPaused_27;

public:
	inline static int32_t get_offset_of_bypassRoomEffects_2() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___bypassRoomEffects_2)); }
	inline bool get_bypassRoomEffects_2() const { return ___bypassRoomEffects_2; }
	inline bool* get_address_of_bypassRoomEffects_2() { return &___bypassRoomEffects_2; }
	inline void set_bypassRoomEffects_2(bool value)
	{
		___bypassRoomEffects_2 = value;
	}

	inline static int32_t get_offset_of_directivityAlpha_3() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___directivityAlpha_3)); }
	inline float get_directivityAlpha_3() const { return ___directivityAlpha_3; }
	inline float* get_address_of_directivityAlpha_3() { return &___directivityAlpha_3; }
	inline void set_directivityAlpha_3(float value)
	{
		___directivityAlpha_3 = value;
	}

	inline static int32_t get_offset_of_directivitySharpness_4() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___directivitySharpness_4)); }
	inline float get_directivitySharpness_4() const { return ___directivitySharpness_4; }
	inline float* get_address_of_directivitySharpness_4() { return &___directivitySharpness_4; }
	inline void set_directivitySharpness_4(float value)
	{
		___directivitySharpness_4 = value;
	}

	inline static int32_t get_offset_of_listenerDirectivityAlpha_5() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___listenerDirectivityAlpha_5)); }
	inline float get_listenerDirectivityAlpha_5() const { return ___listenerDirectivityAlpha_5; }
	inline float* get_address_of_listenerDirectivityAlpha_5() { return &___listenerDirectivityAlpha_5; }
	inline void set_listenerDirectivityAlpha_5(float value)
	{
		___listenerDirectivityAlpha_5 = value;
	}

	inline static int32_t get_offset_of_listenerDirectivitySharpness_6() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___listenerDirectivitySharpness_6)); }
	inline float get_listenerDirectivitySharpness_6() const { return ___listenerDirectivitySharpness_6; }
	inline float* get_address_of_listenerDirectivitySharpness_6() { return &___listenerDirectivitySharpness_6; }
	inline void set_listenerDirectivitySharpness_6(float value)
	{
		___listenerDirectivitySharpness_6 = value;
	}

	inline static int32_t get_offset_of_gainDb_7() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___gainDb_7)); }
	inline float get_gainDb_7() const { return ___gainDb_7; }
	inline float* get_address_of_gainDb_7() { return &___gainDb_7; }
	inline void set_gainDb_7(float value)
	{
		___gainDb_7 = value;
	}

	inline static int32_t get_offset_of_occlusionEnabled_8() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___occlusionEnabled_8)); }
	inline bool get_occlusionEnabled_8() const { return ___occlusionEnabled_8; }
	inline bool* get_address_of_occlusionEnabled_8() { return &___occlusionEnabled_8; }
	inline void set_occlusionEnabled_8(bool value)
	{
		___occlusionEnabled_8 = value;
	}

	inline static int32_t get_offset_of_playOnAwake_9() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___playOnAwake_9)); }
	inline bool get_playOnAwake_9() const { return ___playOnAwake_9; }
	inline bool* get_address_of_playOnAwake_9() { return &___playOnAwake_9; }
	inline void set_playOnAwake_9(bool value)
	{
		___playOnAwake_9 = value;
	}

	inline static int32_t get_offset_of_sourceClip_10() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceClip_10)); }
	inline AudioClip_t1932558630 * get_sourceClip_10() const { return ___sourceClip_10; }
	inline AudioClip_t1932558630 ** get_address_of_sourceClip_10() { return &___sourceClip_10; }
	inline void set_sourceClip_10(AudioClip_t1932558630 * value)
	{
		___sourceClip_10 = value;
		Il2CppCodeGenWriteBarrier(&___sourceClip_10, value);
	}

	inline static int32_t get_offset_of_sourceLoop_11() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceLoop_11)); }
	inline bool get_sourceLoop_11() const { return ___sourceLoop_11; }
	inline bool* get_address_of_sourceLoop_11() { return &___sourceLoop_11; }
	inline void set_sourceLoop_11(bool value)
	{
		___sourceLoop_11 = value;
	}

	inline static int32_t get_offset_of_sourceMute_12() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceMute_12)); }
	inline bool get_sourceMute_12() const { return ___sourceMute_12; }
	inline bool* get_address_of_sourceMute_12() { return &___sourceMute_12; }
	inline void set_sourceMute_12(bool value)
	{
		___sourceMute_12 = value;
	}

	inline static int32_t get_offset_of_sourcePitch_13() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourcePitch_13)); }
	inline float get_sourcePitch_13() const { return ___sourcePitch_13; }
	inline float* get_address_of_sourcePitch_13() { return &___sourcePitch_13; }
	inline void set_sourcePitch_13(float value)
	{
		___sourcePitch_13 = value;
	}

	inline static int32_t get_offset_of_sourcePriority_14() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourcePriority_14)); }
	inline int32_t get_sourcePriority_14() const { return ___sourcePriority_14; }
	inline int32_t* get_address_of_sourcePriority_14() { return &___sourcePriority_14; }
	inline void set_sourcePriority_14(int32_t value)
	{
		___sourcePriority_14 = value;
	}

	inline static int32_t get_offset_of_sourceSpatialBlend_15() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceSpatialBlend_15)); }
	inline float get_sourceSpatialBlend_15() const { return ___sourceSpatialBlend_15; }
	inline float* get_address_of_sourceSpatialBlend_15() { return &___sourceSpatialBlend_15; }
	inline void set_sourceSpatialBlend_15(float value)
	{
		___sourceSpatialBlend_15 = value;
	}

	inline static int32_t get_offset_of_sourceDopplerLevel_16() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceDopplerLevel_16)); }
	inline float get_sourceDopplerLevel_16() const { return ___sourceDopplerLevel_16; }
	inline float* get_address_of_sourceDopplerLevel_16() { return &___sourceDopplerLevel_16; }
	inline void set_sourceDopplerLevel_16(float value)
	{
		___sourceDopplerLevel_16 = value;
	}

	inline static int32_t get_offset_of_sourceSpread_17() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceSpread_17)); }
	inline float get_sourceSpread_17() const { return ___sourceSpread_17; }
	inline float* get_address_of_sourceSpread_17() { return &___sourceSpread_17; }
	inline void set_sourceSpread_17(float value)
	{
		___sourceSpread_17 = value;
	}

	inline static int32_t get_offset_of_sourceVolume_18() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceVolume_18)); }
	inline float get_sourceVolume_18() const { return ___sourceVolume_18; }
	inline float* get_address_of_sourceVolume_18() { return &___sourceVolume_18; }
	inline void set_sourceVolume_18(float value)
	{
		___sourceVolume_18 = value;
	}

	inline static int32_t get_offset_of_sourceRolloffMode_19() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceRolloffMode_19)); }
	inline int32_t get_sourceRolloffMode_19() const { return ___sourceRolloffMode_19; }
	inline int32_t* get_address_of_sourceRolloffMode_19() { return &___sourceRolloffMode_19; }
	inline void set_sourceRolloffMode_19(int32_t value)
	{
		___sourceRolloffMode_19 = value;
	}

	inline static int32_t get_offset_of_sourceMaxDistance_20() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceMaxDistance_20)); }
	inline float get_sourceMaxDistance_20() const { return ___sourceMaxDistance_20; }
	inline float* get_address_of_sourceMaxDistance_20() { return &___sourceMaxDistance_20; }
	inline void set_sourceMaxDistance_20(float value)
	{
		___sourceMaxDistance_20 = value;
	}

	inline static int32_t get_offset_of_sourceMinDistance_21() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___sourceMinDistance_21)); }
	inline float get_sourceMinDistance_21() const { return ___sourceMinDistance_21; }
	inline float* get_address_of_sourceMinDistance_21() { return &___sourceMinDistance_21; }
	inline void set_sourceMinDistance_21(float value)
	{
		___sourceMinDistance_21 = value;
	}

	inline static int32_t get_offset_of_hrtfEnabled_22() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___hrtfEnabled_22)); }
	inline bool get_hrtfEnabled_22() const { return ___hrtfEnabled_22; }
	inline bool* get_address_of_hrtfEnabled_22() { return &___hrtfEnabled_22; }
	inline void set_hrtfEnabled_22(bool value)
	{
		___hrtfEnabled_22 = value;
	}

	inline static int32_t get_offset_of_audioSource_23() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___audioSource_23)); }
	inline AudioSource_t1135106623 * get_audioSource_23() const { return ___audioSource_23; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_23() { return &___audioSource_23; }
	inline void set_audioSource_23(AudioSource_t1135106623 * value)
	{
		___audioSource_23 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_23, value);
	}

	inline static int32_t get_offset_of_id_24() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___id_24)); }
	inline int32_t get_id_24() const { return ___id_24; }
	inline int32_t* get_address_of_id_24() { return &___id_24; }
	inline void set_id_24(int32_t value)
	{
		___id_24 = value;
	}

	inline static int32_t get_offset_of_currentOcclusion_25() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___currentOcclusion_25)); }
	inline float get_currentOcclusion_25() const { return ___currentOcclusion_25; }
	inline float* get_address_of_currentOcclusion_25() { return &___currentOcclusion_25; }
	inline void set_currentOcclusion_25(float value)
	{
		___currentOcclusion_25 = value;
	}

	inline static int32_t get_offset_of_nextOcclusionUpdate_26() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___nextOcclusionUpdate_26)); }
	inline float get_nextOcclusionUpdate_26() const { return ___nextOcclusionUpdate_26; }
	inline float* get_address_of_nextOcclusionUpdate_26() { return &___nextOcclusionUpdate_26; }
	inline void set_nextOcclusionUpdate_26(float value)
	{
		___nextOcclusionUpdate_26 = value;
	}

	inline static int32_t get_offset_of_isPaused_27() { return static_cast<int32_t>(offsetof(GvrAudioSource_t2307460312, ___isPaused_27)); }
	inline bool get_isPaused_27() const { return ___isPaused_27; }
	inline bool* get_address_of_isPaused_27() { return &___isPaused_27; }
	inline void set_isPaused_27(bool value)
	{
		___isPaused_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
