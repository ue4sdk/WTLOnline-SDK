// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Pawn_Chicken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Pawn_Chicken_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Pawn_Chicken_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_Chicken_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.OnHealthChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_Chicken_C::OnHealthChanged(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.OnHealthChanged"));

	struct
	{
		float                          Delta;
	} params;

	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.BndEvt__FE_Chicken_CoCoCo_K2Node_ComponentBoundEvent_0_OnTimelineMarker__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_Chicken_C::BndEvt__FE_Chicken_CoCoCo_K2Node_ComponentBoundEvent_0_OnTimelineMarker__DelegateSignature(const struct FString& Name, int Position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.BndEvt__FE_Chicken_CoCoCo_K2Node_ComponentBoundEvent_0_OnTimelineMarker__DelegateSignature"));

	struct
	{
		struct FString                 Name;
		int                            Position;
	} params;

	params.Name = Name;
	params.Position = Position;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.OnDeathBpEvent
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FWTLMonsterDeathData    DeathData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_Pawn_Chicken_C::OnDeathBpEvent(const struct FWTLMonsterDeathData& DeathData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.OnDeathBpEvent"));

	struct
	{
		struct FWTLMonsterDeathData    DeathData;
	} params;

	params.DeathData = DeathData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.OnBurst
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FWTLMonsterDeathData    DeathData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_Pawn_Chicken_C::OnBurst(const struct FWTLMonsterDeathData& DeathData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.OnBurst"));

	struct
	{
		struct FWTLMonsterDeathData    DeathData;
	} params;

	params.DeathData = DeathData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.ExecuteUbergraph_BP_Pawn_Chicken
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_Chicken_C::ExecuteUbergraph_BP_Pawn_Chicken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Pawn_Chicken.BP_Pawn_Chicken_C.ExecuteUbergraph_BP_Pawn_Chicken"));

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
