// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_W_ParentPieMenu_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_ParentPieMenu_01_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnMouseButtonDoubleClick");

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.SetParrentParmetrs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UW_ParentPieMenu_01_C*   ParentWidget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UW_ParentPieMenu_01_C::SetParrentParmetrs(class UW_ParentPieMenu_01_C* ParentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.SetParrentParmetrs");

	struct
	{
		class UW_ParentPieMenu_01_C*   ParentWidget;
	} params;

	params.ParentWidget = ParentWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_ParentPieMenu_01_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnMouseButtonDown");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UW_ParentPieMenu_01_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.IsPressedSimulation
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UW_ParentPieMenu_01_C::IsPressedSimulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.IsPressedSimulation");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.KeyBoardSimulation
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UW_ParentPieMenu_01_C::KeyBoardSimulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.KeyBoardSimulation");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.GamePadSimulation
// (FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UW_ParentPieMenu_01_C::GamePadSimulation()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.GamePadSimulation");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.UpdateColor
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_ParentPieMenu_01_C::UpdateColor(bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.UpdateColor");

	struct
	{
		bool                           IsSuccess;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.SetColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            RingColor                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            HoveredColor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsSuccess                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_ParentPieMenu_01_C::SetColor(const struct FLinearColor& RingColor, const struct FLinearColor& HoveredColor, bool* IsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.SetColor");

	struct
	{
		struct FLinearColor            RingColor;
		struct FLinearColor            HoveredColor;
		bool                           IsSuccess;
	} params;

	params.RingColor = RingColor;
	params.HoveredColor = HoveredColor;

	UObject::ProcessEvent(fn, &params);

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_ParentPieMenu_01_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.ExecuteUbergraph_W_ParentPieMenu_01
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UW_ParentPieMenu_01_C::ExecuteUbergraph_W_ParentPieMenu_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.ExecuteUbergraph_W_ParentPieMenu_01");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnReturnBack__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UW_ParentPieMenu_01_C::OnReturnBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParentPieMenu_01.W_ParentPieMenu_01_C.OnReturnBack__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
