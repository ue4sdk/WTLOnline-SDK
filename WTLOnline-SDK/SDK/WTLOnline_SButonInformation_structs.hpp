#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Basic.hpp"
#include "WTLOnline_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct SButonInformation.SButonInformation
// 0x0070
struct FSButonInformation
{
	class UTexture2D*                                  Icon_6_BD5B15D640FE2394821F41AAC6B932AF;                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       PreviewText_18_7FDFFA394755D334FD5472AE16EA619C;          // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Name_7_77EDBE78498090E7591FCB903532641B;                  // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description_8_4C400A444F3220A3745084BF99D5A054;           // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                ButtonTint_15_B93E97284C795713B9AA5292DFB54D10;           // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ButtonID_12_0B0319434FE42B8D43AD4B913F4179C1;             // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
