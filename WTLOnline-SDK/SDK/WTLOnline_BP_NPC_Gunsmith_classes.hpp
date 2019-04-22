#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_Gunsmith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_Gunsmith.BP_NPC_Gunsmith_C
// 0x0018 (0x0B10 - 0x0AF8)
class ABP_NPC_Gunsmith_C : public AWTLNPCActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_1_NewTrack_0_413DB49D44AF96A773B6F5A50DF3B0ED;   // 0x0B00(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_413DB49D44AF96A773B6F5A50DF3B0ED;   // 0x0B04(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0B08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_NPC_Gunsmith.BP_NPC_Gunsmith_C"));
		return ptr;
	}


	void GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanTakeQuest(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanCompleteAnyQuest(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplicaID, int NPCReplicaID, TArray<int>* IncharacterReplicaArray);
	void ShowAvailableQuestsDialog(class AWTLCharacter* Character);
	void GetRandomReplicaID(TArray<int>* ReplicaIDArray, int* ReplicaID);
	void ShowStartDialog(class AWTLCharacter* Character);
	void UserConstructionScript();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID);
	void OnNPCDialogActivated(class AWTLCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPC_Gunsmith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
