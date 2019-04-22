// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Event_ActionMachinegun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Event_ActionMachinegun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.OnClientUsageStop
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Event_ActionMachinegun_C::OnClientUsageStop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.OnClientUsageStop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.OnClientUsageStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Event_ActionMachinegun_C::OnClientUsageStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.OnClientUsageStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.OnLocalClientAcion
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_Event_ActionMachinegun_C::OnLocalClientAcion()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.OnLocalClientAcion"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Event_ActionMachinegun_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Event_ActionMachinegun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.ExecuteUbergraph_BP_Event_ActionMachinegun
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Event_ActionMachinegun_C::ExecuteUbergraph_BP_Event_ActionMachinegun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Event_ActionMachinegun.BP_Event_ActionMachinegun_C.ExecuteUbergraph_BP_Event_ActionMachinegun"));

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
