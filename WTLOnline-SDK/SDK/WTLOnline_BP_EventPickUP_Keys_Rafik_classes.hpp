#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_EventPickUP_Keys_Rafik_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EventPickUP_Keys_Rafik.BP_EventPickUP_Keys_Rafik_C
// 0x0008 (0x0440 - 0x0438)
class ABP_EventPickUP_Keys_Rafik_C : public AWTLArtefactPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EventPickUP_Keys_Rafik.BP_EventPickUP_Keys_Rafik_C"));
		return ptr;
	}


	bool BPCanBeUsed(class AWTLCharacter* Character);
	void UserConstructionScript();
	void BPOnTakeItem(class AWTLCharacter* Character);
	void BPUse(class AWTLCharacter* Character);
	void ExecuteUbergraph_BP_EventPickUP_Keys_Rafik(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
