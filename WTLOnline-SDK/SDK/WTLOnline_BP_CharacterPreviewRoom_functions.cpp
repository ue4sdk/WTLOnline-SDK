// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_CharacterPreviewRoom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CharacterPreviewRoom.BP_CharacterPreviewRoom_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CharacterPreviewRoom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPreviewRoom.BP_CharacterPreviewRoom_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterPreviewRoom.BP_CharacterPreviewRoom_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CharacterPreviewRoom_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPreviewRoom.BP_CharacterPreviewRoom_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterPreviewRoom.BP_CharacterPreviewRoom_C.ExecuteUbergraph_BP_CharacterPreviewRoom
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CharacterPreviewRoom_C::ExecuteUbergraph_BP_CharacterPreviewRoom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPreviewRoom.BP_CharacterPreviewRoom_C.ExecuteUbergraph_BP_CharacterPreviewRoom");

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
