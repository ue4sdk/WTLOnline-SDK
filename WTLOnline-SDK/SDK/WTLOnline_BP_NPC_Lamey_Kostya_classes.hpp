#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_Lamey_Kostya_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C
// 0x0028 (0x0B20 - 0x0AF8)
class ABP_NPC_Lamey_Kostya_C : public AWTLNPCActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_0_0_NewTrack_0_41B82A0B4F8A94DEF20115896F8780D1; // 0x0B00(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_41B82A0B4F8A94DEF20115896F8780D1; // 0x0B04(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0B08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FWTLQuestDialogReplicaInfo>          ReplicaTellMeArray;                                       // 0x0B10(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C"));
		return ptr;
	}


	bool CanDialog(class AWTLCharacter* Character);
	void CheckReplicaTellMe(class AWTLCharacter* Character, int InReplicaID);
	void ShowDialogTellMe(class AWTLCharacter* Character);
	void ShowAvailableQuestsDialog(class AWTLCharacter* Character);
	void GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanTakeQuest(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanCompleteAnyQuest(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplicaID, int InNPCReplicaID, TArray<int>* IncharacterReplicaArray);
	void ShowDialogQuest(class AWTLCharacter* Character, const struct FWTLQuestReplicas& InQuestReplica);
	void GetRandomReplicaID(TArray<int>* ReplicaIDArray, int* ReplicaID);
	void ShowStartDialog(class AWTLCharacter* Character);
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID);
	void OnNPCDialogActivated(class AWTLCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPC_Lamey_Kostya(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
