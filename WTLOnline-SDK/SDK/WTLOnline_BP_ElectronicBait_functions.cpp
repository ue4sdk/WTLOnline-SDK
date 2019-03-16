// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ElectronicBait_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElectronicBait.BP_ElectronicBait_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ElectronicBait_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectronicBait.BP_ElectronicBait_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectronicBait.BP_ElectronicBait_C.OnConditionChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          ConditionValue                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectronicBait_C::OnConditionChanged(float ConditionValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectronicBait.BP_ElectronicBait_C.OnConditionChanged");

	struct
	{
		float                          ConditionValue;
	} params;

	params.ConditionValue = ConditionValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectronicBait.BP_ElectronicBait_C.OnEnergyChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          EnergyValue                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectronicBait_C::OnEnergyChanged(float EnergyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectronicBait.BP_ElectronicBait_C.OnEnergyChanged");

	struct
	{
		float                          EnergyValue;
	} params;

	params.EnergyValue = EnergyValue;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectronicBait.BP_ElectronicBait_C.K2_OnDestroyed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ElectronicBait_C::K2_OnDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectronicBait.BP_ElectronicBait_C.K2_OnDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectronicBait.BP_ElectronicBait_C.ExecuteUbergraph_BP_ElectronicBait
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectronicBait_C::ExecuteUbergraph_BP_ElectronicBait(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectronicBait.BP_ElectronicBait_C.ExecuteUbergraph_BP_ElectronicBait");

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
