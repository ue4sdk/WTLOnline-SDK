// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_Content_Inventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HUD_Content_Inventory.UI_HUD_Content_Inventory_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HUD_Content_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Content_Inventory.UI_HUD_Content_Inventory_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_Content_Inventory.UI_HUD_Content_Inventory_C.ExecuteUbergraph_UI_HUD_Content_Inventory
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_Content_Inventory_C::ExecuteUbergraph_UI_HUD_Content_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_Content_Inventory.UI_HUD_Content_Inventory_C.ExecuteUbergraph_UI_HUD_Content_Inventory");

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
