// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_CharacterPreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CharacterPreview.BP_CharacterPreview_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CharacterPreview_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPreview.BP_CharacterPreview_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterPreview.BP_CharacterPreview_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CharacterPreview_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPreview.BP_CharacterPreview_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CharacterPreview.BP_CharacterPreview_C.ExecuteUbergraph_BP_CharacterPreview
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CharacterPreview_C::ExecuteUbergraph_BP_CharacterPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterPreview.BP_CharacterPreview_C.ExecuteUbergraph_BP_CharacterPreview");

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
