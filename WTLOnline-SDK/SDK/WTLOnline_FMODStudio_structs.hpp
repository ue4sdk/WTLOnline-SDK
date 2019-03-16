#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Basic.hpp"
#include "WTLOnline_FMODStudio_enums.hpp"
#include "WTLOnline_Engine_classes.hpp"
#include "WTLOnline_MovieScene_classes.hpp"
#include "WTLOnline_CoreUObject_classes.hpp"
#include "WTLOnline_MovieSceneTracks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FMODStudio.FMODAttenuationDetails
// 0x000C
struct FFMODAttenuationDetails
{
	bool                                               bOverrideAttenuation;                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinimumDistance;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaximumDistance;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FMODStudio.FMODOcclusionDetails
// 0x0014
struct FFMODOcclusionDetails
{
	bool                                               bEnableOcclusion;                                         // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              OcclusionLowPassFilterFrequency;                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionInterpolationTime;                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseComplexCollisionForOcclusion;                         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct FMODStudio.FMODEventInstance
// 0x0008
struct FFMODEventInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FMODStudio.FMODEventControlChannel
// 0x0000 (0x0098 - 0x0098)
struct FFMODEventControlChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct FMODStudio.CustomPoolSizes
// 0x0014
struct FCustomPoolSizes
{
	int                                                Desktop;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                Mobile;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PS4;                                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                Switch;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                XboxOne;                                                  // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFMODEventControlChannel                    ControlKeys;                                              // 0x0020(0x0098)
};

// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
// 0x0000 (0x0050 - 0x0050)
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
