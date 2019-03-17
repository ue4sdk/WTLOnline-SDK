// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_W_PieMenu_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PieMenu_01.W_PieMenu_01_C.SetDescriptionVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVIsibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::SetDescriptionVisibility(bool IsVIsibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.SetDescriptionVisibility"));

	struct
	{
		bool                           IsVIsibility;
	} params;

	params.IsVIsibility = IsVIsibility;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.SetHoveredRingAngle
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::SetHoveredRingAngle(bool* IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.SetHoveredRingAngle"));

	struct
	{
		bool                           IsHovered;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsHovered != nullptr)
		*IsHovered = params.IsHovered;
}


// Function W_PieMenu_01.W_PieMenu_01_C.GetMousePressedState
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsMousePressed                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::GetMousePressedState(bool* IsMousePressed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.GetMousePressedState"));

	struct
	{
		bool                           IsMousePressed;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsMousePressed != nullptr)
		*IsMousePressed = params.IsMousePressed;
}


// Function W_PieMenu_01.W_PieMenu_01_C.Hovered&UnhoveredSimulate
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenu_01_C::Hovered_UnhoveredSimulate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.Hovered&UnhoveredSimulate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.GetGlobalLeftMousePressed
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenu_01_C::GetGlobalLeftMousePressed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.GetGlobalLeftMousePressed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.SetDiametr
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Diametr                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::SetDiametr(int Diametr)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.SetDiametr"));

	struct
	{
		int                            Diametr;
	} params;

	params.Diametr = Diametr;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.UpdateColor
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::UpdateColor(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.UpdateColor"));

	struct
	{
		bool                           IsSuccess;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function W_PieMenu_01.W_PieMenu_01_C.CalculateButtonSIze&Position
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Position                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Size                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::CalculateButtonSIze_Position(int ButtonID, struct FVector2D* Position, struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.CalculateButtonSIze&Position"));

	struct
	{
		int                            ButtonID;
		struct FVector2D               Position;
		struct FVector2D               Size;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);

	if (Position != nullptr)
		*Position = params.Position;
	if (Size != nullptr)
		*Size = params.Size;
}


// Function W_PieMenu_01.W_PieMenu_01_C.BindButtonEnents
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_PieMenuButton_01_C*   ButtonWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UW_PieMenu_01_C::BindButtonEnents(class UW_PieMenuButton_01_C* ButtonWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.BindButtonEnents"));

	struct
	{
		class UW_PieMenuButton_01_C*   ButtonWidget;
	} params;

	params.ButtonWidget = ButtonWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.CreateButton
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UW_PieMenuButton_01_C*   ButtonWidget                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UW_PieMenu_01_C::CreateButton(int ButtonID, class UW_PieMenuButton_01_C** ButtonWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.CreateButton"));

	struct
	{
		int                            ButtonID;
		class UW_PieMenuButton_01_C*   ButtonWidget;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);

	if (ButtonWidget != nullptr)
		*ButtonWidget = params.ButtonWidget;
}


// Function W_PieMenu_01.W_PieMenu_01_C.GetHoveredButton
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UW_PieMenu_01_C::GetHoveredButton()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.GetHoveredButton"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_PieMenu_01.W_PieMenu_01_C.Atan2DegreesVector2d
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UW_PieMenu_01_C::Atan2DegreesVector2d(const struct FVector2D& A, const struct FVector2D& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.Atan2DegreesVector2d"));

	struct
	{
		struct FVector2D               A;
		struct FVector2D               B;
		float                          ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_PieMenu_01.W_PieMenu_01_C.GetMousePositionAbsoluteMenu
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UW_PieMenu_01_C::GetMousePositionAbsoluteMenu()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.GetMousePositionAbsoluteMenu"));

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_PieMenu_01.W_PieMenu_01_C.AngleInterpTo
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Current                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InterpSpeed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UW_PieMenu_01_C::AngleInterpTo(float Current, float Target, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.AngleInterpTo"));

	struct
	{
		float                          Current;
		float                          Target;
		float                          InterpSpeed;
		float                          ReturnValue;
	} params;

	params.Current = Current;
	params.Target = Target;
	params.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_PieMenu_01.W_PieMenu_01_C.CreateHighlight
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_PieMenu_01_C::CreateHighlight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.CreateHighlight"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.GetMenuRadius
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UW_PieMenu_01_C::GetMenuRadius()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.GetMenuRadius"));

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_PieMenu_01.W_PieMenu_01_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_PieMenu_01_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnMouseEnter"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UW_PieMenu_01_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnMouseLeave"));

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnButtonHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnButtonHovered(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnButtonHovered"));

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnButtonUnhovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnButtonUnhovered(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnButtonUnhovered"));

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnButtonPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnButtonPressed(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnButtonPressed"));

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnButtonReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnButtonReleased(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnButtonReleased"));

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.SetParrentParmetrs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_ParentPieMenu_01_C*   ParentWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UW_PieMenu_01_C::SetParrentParmetrs(class UW_ParentPieMenu_01_C* ParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.SetParrentParmetrs"));

	struct
	{
		class UW_ParentPieMenu_01_C*   ParentWidget;
	} params;

	params.ParentWidget = ParentWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.ExecuteUbergraph_W_PieMenu_01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_PieMenu_01_C::ExecuteUbergraph_W_PieMenu_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.ExecuteUbergraph_W_PieMenu_01"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnBtnReleased__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnBtnReleased__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnBtnReleased__DelegateSignature"));

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnBtnPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnBtnPressed__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnBtnPressed__DelegateSignature"));

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnBtnUnhovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnBtnUnhovered__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnBtnUnhovered__DelegateSignature"));

	struct
	{
		struct FString                 ButtonID;
	} params;

	params.ButtonID = ButtonID;

	UObject::ProcessEvent(fn, &params);
}


// Function W_PieMenu_01.W_PieMenu_01_C.OnBtnHovered__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 ButtonID                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UW_PieMenu_01_C::OnBtnHovered__DelegateSignature(const struct FString& ButtonID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMenu_01.W_PieMenu_01_C.OnBtnHovered__DelegateSignature"));

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
