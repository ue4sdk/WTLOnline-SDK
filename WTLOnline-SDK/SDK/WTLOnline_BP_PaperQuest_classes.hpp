#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_PaperQuest_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PaperQuest.BP_PaperQuest_C
// 0x000C (0x036C - 0x0360)
class ABP_PaperQuest_C : public AWTLTriggerObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                IDReplica;                                                // 0x0368(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PaperQuest.BP_PaperQuest_C"));
		return ptr;
	}


	bool OnCharacterCanBeUsed(class AWTLCharacter* Character);
	void UserConstructionScript();
	void OnEndUse(class AWTLCharacter* Character);
	void OnCharacterUse(class AWTLCharacter* Character);
	void ExecuteUbergraph_BP_PaperQuest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
