// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_W_PieMenuButton_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PieMenuButton_01.W_PieMenuButton_01_C.GetPreviewText
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   PreviewText                    (CPF_Parm, CPF_OutParm)

void UW_PieMenuButton_01_C::GetPreviewText(struct FText* PreviewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.GetPreviewText");

	struct
	{
		struct FText                   PreviewText;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PreviewText != nullptr)
		*PreviewText = params.PreviewText;
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.SetButtonTint
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenuButton_01_C::SetButtonTint()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.SetButtonTint");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.GetButtonTInt
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FLinearColor            ButtonTint                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenuButton_01_C::GetButtonTInt(struct FLinearColor* ButtonTint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.GetButtonTInt");

	struct
	{
		struct FLinearColor            ButtonTint;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ButtonTint != nullptr)
		*ButtonTint = params.ButtonTint;
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.GetButtonID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 ButtonID                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UW_PieMenuButton_01_C::GetButtonID(struct FString* ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.GetButtonID");

	struct
	{
		struct FString                 ButtonID;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ButtonID != nullptr)
		*ButtonID = params.ButtonID;
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenuButton_01_C::OnButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonHovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenuButton_01_C::OnButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonUnhovered");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenuButton_01_C::OnButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenuButton_01_C::OnButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnButtonReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.ExecuteUbergraph_W_PieMenuButton_01
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenuButton_01_C::ExecuteUbergraph_W_PieMenuButton_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.ExecuteUbergraph_W_PieMenuButton_01");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnReleased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenuButton_01_C::OnReleased__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnReleased__DelegateSignature");

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenuButton_01_C::OnPressed__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnPressed__DelegateSignature");

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenuButton_01_C::OnUnhovered__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnUnhovered__DelegateSignature");

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenuButton_01_C::OnHovered__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PieMenuButton_01.W_PieMenuButton_01_C.OnHovered__DelegateSignature");

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
