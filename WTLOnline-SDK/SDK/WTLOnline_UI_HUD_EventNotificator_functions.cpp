// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_EventNotificator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HUD_EventNotificator.UI_HUD_EventNotificator_C.BndEvt__tbChatMessage_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_EventNotificator_C::BndEvt__tbChatMessage_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_EventNotificator.UI_HUD_EventNotificator_C.BndEvt__tbChatMessage_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature"));

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_EventNotificator.UI_HUD_EventNotificator_C.ExecuteUbergraph_UI_HUD_EventNotificator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_EventNotificator_C::ExecuteUbergraph_UI_HUD_EventNotificator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_EventNotificator.UI_HUD_EventNotificator_C.ExecuteUbergraph_UI_HUD_EventNotificator"));

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
