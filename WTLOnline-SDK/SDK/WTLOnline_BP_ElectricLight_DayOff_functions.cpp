// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ElectricLight_DayOff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.TestLevel
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ElectricLight_DayOff_C::TestLevel()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.TestLevel"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ElectricLight_DayOff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ElectricLight_DayOff_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectricLight_DayOff_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.ExecuteUbergraph_BP_ElectricLight_DayOff
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectricLight_DayOff_C::ExecuteUbergraph_BP_ElectricLight_DayOff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.ExecuteUbergraph_BP_ElectricLight_DayOff"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.NewEventDispatcher_0__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ElectricLight_DayOff_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ElectricLight_DayOff.BP_ElectricLight_DayOff_C.NewEventDispatcher_0__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
