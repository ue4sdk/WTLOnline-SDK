// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_EventPoint_ProtectiveShieldDown_MonsterAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.GetStartChance
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::GetStartChance()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.GetStartChance"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.K2_OnStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::K2_OnStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.K2_OnStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.K2_OnFinish
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Successful                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::K2_OnFinish(bool Successful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.K2_OnFinish"));

	struct
	{
		bool                           Successful;
	} params;

	params.Successful = Successful;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.OnStartClient
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::OnStartClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.OnStartClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.HideMachineguns
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Hide                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::HideMachineguns(bool Hide)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.HideMachineguns"));

	struct
	{
		bool                           Hide;
	} params;

	params.Hide = Hide;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.OnFinishClient
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::OnFinishClient()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.OnFinishClient"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.OnFindParts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::OnFindParts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.OnFindParts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ActivateSpawn
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::ActivateSpawn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ActivateSpawn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.SpawnParts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::SpawnParts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.SpawnParts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.DestroyParts
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::DestroyParts()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.DestroyParts"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ExecuteUbergraph_BP_EventPoint_ProtectiveShieldDown_MonsterAttack
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C::ExecuteUbergraph_BP_EventPoint_ProtectiveShieldDown_MonsterAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C.ExecuteUbergraph_BP_EventPoint_ProtectiveShieldDown_MonsterAttack"));

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
