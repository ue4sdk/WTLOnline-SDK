#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_Doctor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_Doctor.BP_NPC_Doctor_C
// 0x0020 (0x0B18 - 0x0AF8)
class ABP_NPC_Doctor_C : public AWTLNPCActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               InteractiveBox;                                           // 0x0B00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_A62499354D84BFC0817F2B9675A16A5A;   // 0x0B08(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A62499354D84BFC0817F2B9675A16A5A;   // 0x0B0C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B0D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0B10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_NPC_Doctor.BP_NPC_Doctor_C"));
		return ptr;
	}


	void CheckReplicaForShowMainDialog(class AWTLCharacter* Character, int InReplicaID, TArray<int>* InReplicaArrayForShowMainDialog);
	void GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanTakeQuest(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanCompleteAnyQuest(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplicaID, int NPCReplicaID, TArray<int>* InCharacterReplicaArray);
	void ShowAvailableQuestsDialog(class AWTLCharacter* Character);
	void CheckDialogHeal(class AWTLCharacter* Character, int CharacterReplicaID);
	void ShowDialogHeal(class AWTLCharacter* Character);
	void GetRandomReplicaID(TArray<int>* ReplicaIdArray, int* ReplicaID);
	void ShowStartDialog(class AWTLCharacter* Character);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID);
	void OnNPCDialogActivated(class AWTLCharacter* Character);
	void ExecuteUbergraph_BP_NPC_Doctor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
