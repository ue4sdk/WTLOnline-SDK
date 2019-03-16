// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_MihalichSitting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAB_NPC_MihalichSitting_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_NPC_MihalichSitting_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C.ExecuteUbergraph_AB_NPC_MihalichSitting
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_NPC_MihalichSitting_C::ExecuteUbergraph_AB_NPC_MihalichSitting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C.ExecuteUbergraph_AB_NPC_MihalichSitting");

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
