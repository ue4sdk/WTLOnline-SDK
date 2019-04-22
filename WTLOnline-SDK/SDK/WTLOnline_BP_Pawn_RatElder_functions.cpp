// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Pawn_RatElder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Pawn_RatElder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.OnHealthChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_RatElder_C::OnHealthChanged(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.OnHealthChanged"));

	struct
	{
		float                          Delta;
	} params;

	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_RatElder_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.ReceivePossessed"));

	struct
	{
		class AController*             NewController;
	} params;

	params.NewController = NewController;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.OnActionTrigger
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_RatElder_C::OnActionTrigger(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.OnActionTrigger"));

	struct
	{
		struct FName                   ActionName;
	} params;

	params.ActionName = ActionName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Pawn_RatElder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.ExecuteUbergraph_BP_Pawn_RatElder
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_RatElder_C::ExecuteUbergraph_BP_Pawn_RatElder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_RatElder.BP_Pawn_RatElder_C.ExecuteUbergraph_BP_Pawn_RatElder"));

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
