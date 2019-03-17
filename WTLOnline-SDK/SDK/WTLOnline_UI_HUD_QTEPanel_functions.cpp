// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_QTEPanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_QTEPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.RightButtonClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          QTEPercent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 NextKeyName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_HUD_QTEPanel_C::RightButtonClick(float QTEPercent, const struct FString& NextKeyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.RightButtonClick"));

	struct
	{
		float                          QTEPercent;
		struct FString                 NextKeyName;
	} params;

	params.QTEPercent = QTEPercent;
	params.NextKeyName = NextKeyName;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.WrongButtonClick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          QTEPercent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 NextKeyName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_HUD_QTEPanel_C::WrongButtonClick(float QTEPercent, const struct FString& NextKeyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.WrongButtonClick"));

	struct
	{
		float                          QTEPercent;
		struct FString                 NextKeyName;
	} params;

	params.QTEPercent = QTEPercent;
	params.NextKeyName = NextKeyName;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.QTEStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CanCancel_                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsRepetative                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 NextKeyName                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_HUD_QTEPanel_C::QTEStart(bool CanCancel_, bool IsRepetative, const struct FString& NextKeyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.QTEStart"));

	struct
	{
		bool                           CanCancel_;
		bool                           IsRepetative;
		struct FString                 NextKeyName;
	} params;

	params.CanCancel_ = CanCancel_;
	params.IsRepetative = IsRepetative;
	params.NextKeyName = NextKeyName;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.UpdateProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          QTEPercent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_QTEPanel_C::UpdateProgress(float QTEPercent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.UpdateProgress"));

	struct
	{
		float                          QTEPercent;
	} params;

	params.QTEPercent = QTEPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.ExecuteUbergraph_UI_HUD_QTEPanel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_QTEPanel_C::ExecuteUbergraph_UI_HUD_QTEPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_QTEPanel.UI_HUD_QTEPanel_C.ExecuteUbergraph_UI_HUD_QTEPanel"));

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
