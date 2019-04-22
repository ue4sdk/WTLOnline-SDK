// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_EventPointBase_FindItem_SearchLostKeys_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_EventPointBase_FindItem_SearchLostKeys_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.K2_OnStart
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_EventPointBase_FindItem_SearchLostKeys_C::K2_OnStart()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.K2_OnStart"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.K2_OnFinish
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Successful                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPointBase_FindItem_SearchLostKeys_C::K2_OnFinish(bool Successful)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.K2_OnFinish"));

	struct
	{
		bool                           Successful;
	} params;

	params.Successful = Successful;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.OnFindKey
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPointBase_FindItem_SearchLostKeys_C::OnFindKey(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.OnFindKey"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.ExecuteUbergraph_BP_EventPointBase_FindItem_SearchLostKeys
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_EventPointBase_FindItem_SearchLostKeys_C::ExecuteUbergraph_BP_EventPointBase_FindItem_SearchLostKeys(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C.ExecuteUbergraph_BP_EventPointBase_FindItem_SearchLostKeys"));

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
