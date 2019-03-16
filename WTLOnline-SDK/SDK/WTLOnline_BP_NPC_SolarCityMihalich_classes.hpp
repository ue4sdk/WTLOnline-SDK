#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_SolarCityMihalich_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_SolarCityMihalich.BP_NPC_SolarCityMihalich_C
// 0x0050 (0x0B48 - 0x0AF8)
class ABP_NPC_SolarCityMihalich_C : public AWTLNPCActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               InteractiveBox;                                           // 0x0B00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_01_C_EyeRollRight_4194ADCB4DE4B7BDFD4ABDA96961F4E7;// 0x0B08(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_01_C_EyeRollLeft_4194ADCB4DE4B7BDFD4ABDA96961F4E7;// 0x0B0C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_01_C_EyeRollDown_4194ADCB4DE4B7BDFD4ABDA96961F4E7;// 0x0B10(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_01_NewTrack_0_4194ADCB4DE4B7BDFD4ABDA96961F4E7;  // 0x0B14(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_01__Direction_4194ADCB4DE4B7BDFD4ABDA96961F4E7;  // 0x0B18(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B19(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_01;                                              // 0x0B20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_0_0_NewTrack_0_68AD10DB41496A1D44ECB9814609789D; // 0x0B28(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_68AD10DB41496A1D44ECB9814609789D; // 0x0B2C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B2D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0B30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FWTLQuestDialogReplicaInfo>          ReplicaTellMeArray;                                       // 0x0B38(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_NPC_SolarCityMihalich.BP_NPC_SolarCityMihalich_C");
		return ptr;
	}


	void CheckReplicaTellMe(class AWTLCharacter* Character, int InReplicaID);
	void ShowDialogTellMe(class AWTLCharacter* Character);
	void ShowAvailableQuestsDialog(class AWTLCharacter* Character);
	void GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanTakeQuest(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void GetReplicaArrayCanCompleteAnyQuest(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplicaID, int InNPCReplicaID, TArray<int>* InCharacterReplicaArray);
	void ShowDialogQuest(class AWTLCharacter* Character, const struct FWTLQuestReplicas& InQuestReplica);
	void GetRandomReplicaID(TArray<int>* ReplicaIdArray, int* ReplicaID);
	void ShowStartDialog(class AWTLCharacter* Character);
	void UserConstructionScript();
	void Timeline_01__FinishedFunc();
	void Timeline_01__UpdateFunc();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void OnPlayerSelectClanName(class AWTLCharacter* Character, const struct FString& ClanName);
	void ReceiveTick(float DeltaSeconds);
	void OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID);
	void OnNPCDialogActivated(class AWTLCharacter* Character);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPC_SolarCityMihalich(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
