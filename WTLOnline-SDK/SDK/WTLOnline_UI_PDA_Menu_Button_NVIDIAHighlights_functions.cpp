// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_Menu_Button_NVIDIAHighlights_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.OnFailure_3914E4A349E992C494539BBBCF570A8C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PDA_Menu_Button_NVIDIAHighlights_C::OnFailure_3914E4A349E992C494539BBBCF570A8C(EGfeSDKReturnCode GfeSdkReturnCode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.OnFailure_3914E4A349E992C494539BBBCF570A8C"));

	struct
	{
		EGfeSDKReturnCode              GfeSdkReturnCode;
	} params;

	params.GfeSdkReturnCode = GfeSdkReturnCode;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.OnSuccess_3914E4A349E992C494539BBBCF570A8C
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EGfeSDKReturnCode              GfeSdkReturnCode               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumberOfHighlights             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PDA_Menu_Button_NVIDIAHighlights_C::OnSuccess_3914E4A349E992C494539BBBCF570A8C(EGfeSDKReturnCode GfeSdkReturnCode, int NumberOfHighlights)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.OnSuccess_3914E4A349E992C494539BBBCF570A8C"));

	struct
	{
		EGfeSDKReturnCode              GfeSdkReturnCode;
		int                            NumberOfHighlights;
	} params;

	params.GfeSdkReturnCode = GfeSdkReturnCode;
	params.NumberOfHighlights = NumberOfHighlights;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.BndEvt__btnApp_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_PDA_Menu_Button_NVIDIAHighlights_C::BndEvt__btnApp_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.BndEvt__btnApp_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.K2_OnMenuOpened
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_PDA_Menu_Button_NVIDIAHighlights_C::K2_OnMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.K2_OnMenuOpened"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.ExecuteUbergraph_UI_PDA_Menu_Button_NVIDIAHighlights
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PDA_Menu_Button_NVIDIAHighlights_C::ExecuteUbergraph_UI_PDA_Menu_Button_NVIDIAHighlights(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C.ExecuteUbergraph_UI_PDA_Menu_Button_NVIDIAHighlights"));

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
