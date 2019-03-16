// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_FriendsAndEnemies_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PDA_FriendsAndEnemies.UI_PDA_FriendsAndEnemies_C.BndEvt__cbsContactType_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PDA_FriendsAndEnemies_C::BndEvt__cbsContactType_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PDA_FriendsAndEnemies.UI_PDA_FriendsAndEnemies_C.BndEvt__cbsContactType_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params;

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_FriendsAndEnemies.UI_PDA_FriendsAndEnemies_C.ExecuteUbergraph_UI_PDA_FriendsAndEnemies
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PDA_FriendsAndEnemies_C::ExecuteUbergraph_UI_PDA_FriendsAndEnemies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PDA_FriendsAndEnemies.UI_PDA_FriendsAndEnemies_C.ExecuteUbergraph_UI_PDA_FriendsAndEnemies");

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
