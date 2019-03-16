// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_RadialMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.GetHoveredButton
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UUI_HUD_RadialMenu_C::GetHoveredButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.GetHoveredButton");

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.AddRadialButton
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Description                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 DebugPreviewText               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_HUD_RadialMenu_C::AddRadialButton(class UTexture2D* Icon, const struct FText& Description, const struct FString& DebugPreviewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.AddRadialButton");

	struct
	{
		class UTexture2D*              Icon;
		struct FText                   Description;
		struct FString                 DebugPreviewText;
	} params;

	params.Icon = Icon;
	params.Description = Description;
	params.DebugPreviewText = DebugPreviewText;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.CreateRadialMenuWidget
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HUD_RadialMenu_C::CreateRadialMenuWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.CreateRadialMenuWidget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.AddRadialMenuWidgetAsChild
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HUD_RadialMenu_C::AddRadialMenuWidgetAsChild()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.AddRadialMenuWidgetAsChild");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HUD_RadialMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.ExecuteUbergraph_UI_HUD_RadialMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_RadialMenu_C::ExecuteUbergraph_UI_HUD_RadialMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_RadialMenu.UI_HUD_RadialMenu_C.ExecuteUbergraph_UI_HUD_RadialMenu");

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
