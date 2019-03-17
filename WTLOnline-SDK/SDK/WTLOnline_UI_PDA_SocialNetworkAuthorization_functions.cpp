// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_SocialNetworkAuthorization_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PDA_SocialNetworkAuthorization_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.BndEvt__webBrowser_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_PDA_SocialNetworkAuthorization_C::BndEvt__webBrowser_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.BndEvt__webBrowser_K2Node_ComponentBoundEvent_0_OnUrlChanged__DelegateSignature"));

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.OnLoadURL
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 URL                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_PDA_SocialNetworkAuthorization_C::OnLoadURL(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.OnLoadURL"));

	struct
	{
		struct FString                 URL;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.ExecuteUbergraph_UI_PDA_SocialNetworkAuthorization
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_PDA_SocialNetworkAuthorization_C::ExecuteUbergraph_UI_PDA_SocialNetworkAuthorization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_PDA_SocialNetworkAuthorization.UI_PDA_SocialNetworkAuthorization_C.ExecuteUbergraph_UI_PDA_SocialNetworkAuthorization"));

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
