#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FMODStudio.EFMODEventProperty
enum class EFMODEventProperty : uint8_t
{
	EFMODEventProperty__ChannelPriority = 0,
	EFMODEventProperty__ScheduleDelay = 1,
	EFMODEventProperty__ScheduleLookahead = 2,
	EFMODEventProperty__MinimumDistance = 3,
	EFMODEventProperty__MaximumDistance = 4,
	EFMODEventProperty__Count      = 5,
	EFMODEventProperty__EFMODEventProperty_MAX = 6
};


// Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
enum class EFMOD_STUDIO_STOP_MODE : uint8_t
{
	ALLOWFADEOUT                   = 0,
	IMMEDIATE                      = 1,
	EFMOD_STUDIO_STOP_MODE_MAX     = 2
};


// Enum FMODStudio.EFMODEventControlKey
enum class EFMODEventControlKey : uint8_t
{
	EFMODEventControlKey__Stop     = 0,
	EFMODEventControlKey__Play     = 1,
	EFMODEventControlKey__EFMODEventControlKey_MAX = 2
};


// Enum FMODStudio.EFMODSpeakerMode
enum class EFMODSpeakerMode : uint8_t
{
	EFMODSpeakerMode__Stereo       = 0,
	EFMODSpeakerMode__Surround_5   = 1,
	EFMODSpeakerMode__Surround_7   = 2,
	EFMODSpeakerMode__EFMODSpeakerMode_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
