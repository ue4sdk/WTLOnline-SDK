// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BTS_CheckEnemyForFarAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.GetPawnLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTS_CheckEnemyForFarAttack_C::GetPawnLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.GetPawnLocation");

	struct
	{
		struct FVector                 Location;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.GetEnemyLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTS_CheckEnemyForFarAttack_C::GetEnemyLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.GetEnemyLocation");

	struct
	{
		struct FVector                 Location;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTS_CheckEnemyForFarAttack_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.ReceiveTickAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.ExecuteUbergraph_BTS_CheckEnemyForFarAttack
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTS_CheckEnemyForFarAttack_C::ExecuteUbergraph_BTS_CheckEnemyForFarAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_CheckEnemyForFarAttack.BTS_CheckEnemyForFarAttack_C.ExecuteUbergraph_BTS_CheckEnemyForFarAttack");

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
