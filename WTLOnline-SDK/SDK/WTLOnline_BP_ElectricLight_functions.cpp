// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ElectricLight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ElectricLight.BP_ElectricLight_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ElectricLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectricLight.BP_ElectricLight_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight.BP_ElectricLight_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ElectricLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectricLight.BP_ElectricLight_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight.BP_ElectricLight_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectricLight_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectricLight.BP_ElectricLight_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight.BP_ElectricLight_C.OnSwitch
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectricLight_C::OnSwitch(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectricLight.BP_ElectricLight_C.OnSwitch");

	struct
	{
		bool                           Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight.BP_ElectricLight_C.SetEnableLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enable                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectricLight_C::SetEnableLight(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectricLight.BP_ElectricLight_C.SetEnableLight");

	struct
	{
		bool                           Enable;
	} params;

	params.Enable = Enable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ElectricLight.BP_ElectricLight_C.ExecuteUbergraph_BP_ElectricLight
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ElectricLight_C::ExecuteUbergraph_BP_ElectricLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ElectricLight.BP_ElectricLight_C.ExecuteUbergraph_BP_ElectricLight");

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
