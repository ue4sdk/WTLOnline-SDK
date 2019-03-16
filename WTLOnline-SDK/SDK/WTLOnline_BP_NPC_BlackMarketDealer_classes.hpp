#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_BlackMarketDealer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C
// 0x0028 (0x0B20 - 0x0AF8)
class ABP_NPC_BlackMarketDealer_C : public AWTLNPCActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_8430D6B24CE32242C0DA6E94118A03E3;   // 0x0B00(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_8430D6B24CE32242C0DA6E94118A03E3;   // 0x0B04(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0B08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_0_0_NewTrack_0_5104CC12469A0D860054FB900AF6330F; // 0x0B10(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_5104CC12469A0D860054FB900AF6330F; // 0x0B14(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B15(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0B18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C");
		return ptr;
	}


	void GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray);
	void ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplicaID, int InNPCReplicaID, TArray<int>* InCharacterReplicaArray);
	void GetRandomReplicaID(TArray<int>* ReplicaIdArray, int* ReplicaID);
	void ShowStartDialog(class AWTLCharacter* Character);
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void OnNPCDialogActivated(class AWTLCharacter* Character);
	void OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_NPC_BlackMarketDealer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
