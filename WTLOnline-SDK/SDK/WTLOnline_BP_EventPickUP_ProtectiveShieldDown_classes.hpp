#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_EventPickUP_ProtectiveShieldDown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EventPickUP_ProtectiveShieldDown.BP_EventPickUP_ProtectiveShieldDown_C
// 0x0010 (0x0448 - 0x0438)
class ABP_EventPickUP_ProtectiveShieldDown_C : public AWTLArtefactPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMesh*                                 CurrentMesh;                                              // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EventPickUP_ProtectiveShieldDown.BP_EventPickUP_ProtectiveShieldDown_C"));
		return ptr;
	}


	bool BPCanBeUsed(class AWTLCharacter* Character);
	void UserConstructionScript();
	void BPOnTakeItem(class AWTLCharacter* Character);
	void SetMesh(class UStaticMesh* Mesh);
	void ReceiveBeginPlay();
	void BPUse(class AWTLCharacter* Character);
	void ExecuteUbergraph_BP_EventPickUP_ProtectiveShieldDown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
