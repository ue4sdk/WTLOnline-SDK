// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_PaperQuest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PaperQuest.BP_PaperQuest_C.OnCharacterCanBeUsed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_PaperQuest_C::OnCharacterCanBeUsed(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaperQuest.BP_PaperQuest_C.OnCharacterCanBeUsed");

	struct
	{
		class AWTLCharacter*           Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PaperQuest.BP_PaperQuest_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PaperQuest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaperQuest.BP_PaperQuest_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PaperQuest.BP_PaperQuest_C.OnEndUse
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PaperQuest_C::OnEndUse(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaperQuest.BP_PaperQuest_C.OnEndUse");

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PaperQuest.BP_PaperQuest_C.OnCharacterUse
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PaperQuest_C::OnCharacterUse(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaperQuest.BP_PaperQuest_C.OnCharacterUse");

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PaperQuest.BP_PaperQuest_C.ExecuteUbergraph_BP_PaperQuest
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PaperQuest_C::ExecuteUbergraph_BP_PaperQuest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PaperQuest.BP_PaperQuest_C.ExecuteUbergraph_BP_PaperQuest");

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
