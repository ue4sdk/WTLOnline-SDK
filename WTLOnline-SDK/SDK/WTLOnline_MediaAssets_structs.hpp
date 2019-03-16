#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Basic.hpp"
#include "WTLOnline_MediaAssets_enums.hpp"
#include "WTLOnline_CoreUObject_classes.hpp"
#include "WTLOnline_AudioMixer_classes.hpp"
#include "WTLOnline_Engine_classes.hpp"
#include "WTLOnline_MediaUtils_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MediaAssets.MediaCaptureDevice
// 0x0028
struct FMediaCaptureDevice
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Transient)
	struct FString                                     URL;                                                      // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
