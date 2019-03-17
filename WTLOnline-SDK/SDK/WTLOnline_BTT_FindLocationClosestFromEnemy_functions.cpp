// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BTT_FindLocationClosestFromEnemy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_FindLocationClosestFromEnemy.BTT_FindLocationClosestFromEnemy_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTT_FindLocationClosestFromEnemy_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindLocationClosestFromEnemy.BTT_FindLocationClosestFromEnemy_C.ReceiveExecuteAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTT_FindLocationClosestFromEnemy.BTT_FindLocationClosestFromEnemy_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTT_FindLocationClosestFromEnemy_C::CustomEvent_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindLocationClosestFromEnemy.BTT_FindLocationClosestFromEnemy_C.CustomEvent_1"));

	struct
	{
		class UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus>   QueryStatus;
	} params;

	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	UObject::ProcessEvent(fn, &params);
}


// Function BTT_FindLocationClosestFromEnemy.BTT_FindLocationClosestFromEnemy_C.ExecuteUbergraph_BTT_FindLocationClosestFromEnemy
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTT_FindLocationClosestFromEnemy_C::ExecuteUbergraph_BTT_FindLocationClosestFromEnemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindLocationClosestFromEnemy.BTT_FindLocationClosestFromEnemy_C.ExecuteUbergraph_BTT_FindLocationClosestFromEnemy"));

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
