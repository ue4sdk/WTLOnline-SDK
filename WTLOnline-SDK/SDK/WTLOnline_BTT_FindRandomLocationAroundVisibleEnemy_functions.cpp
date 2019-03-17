// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BTT_FindRandomLocationAroundVisibleEnemy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_FindRandomLocationAroundVisibleEnemy.BTT_FindRandomLocationAroundVisibleEnemy_C.ReceiveExecuteAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTT_FindRandomLocationAroundVisibleEnemy_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindRandomLocationAroundVisibleEnemy.BTT_FindRandomLocationAroundVisibleEnemy_C.ReceiveExecuteAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BTT_FindRandomLocationAroundVisibleEnemy.BTT_FindRandomLocationAroundVisibleEnemy_C.ExecuteUbergraph_BTT_FindRandomLocationAroundVisibleEnemy
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBTT_FindRandomLocationAroundVisibleEnemy_C::ExecuteUbergraph_BTT_FindRandomLocationAroundVisibleEnemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BTT_FindRandomLocationAroundVisibleEnemy.BTT_FindRandomLocationAroundVisibleEnemy_C.ExecuteUbergraph_BTT_FindRandomLocationAroundVisibleEnemy"));

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
