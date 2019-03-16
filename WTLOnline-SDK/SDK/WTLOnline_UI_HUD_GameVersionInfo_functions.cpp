// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_GameVersionInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HUD_GameVersionInfo.UI_HUD_GameVersionInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HUD_GameVersionInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_GameVersionInfo.UI_HUD_GameVersionInfo_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_GameVersionInfo.UI_HUD_GameVersionInfo_C.ExecuteUbergraph_UI_HUD_GameVersionInfo
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_GameVersionInfo_C::ExecuteUbergraph_UI_HUD_GameVersionInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_GameVersionInfo.UI_HUD_GameVersionInfo_C.ExecuteUbergraph_UI_HUD_GameVersionInfo");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
