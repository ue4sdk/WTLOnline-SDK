// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MobileStartPoint_PlacementPointer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.CanBePlaced
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MobileStartPoint_PlacementPointer_C::CanBePlaced(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.CanBePlaced");

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MobileStartPoint_PlacementPointer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MobileStartPoint_PlacementPointer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.ExecuteUbergraph_BP_MobileStartPoint_PlacementPointer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MobileStartPoint_PlacementPointer_C::ExecuteUbergraph_BP_MobileStartPoint_PlacementPointer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C.ExecuteUbergraph_BP_MobileStartPoint_PlacementPointer");

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
