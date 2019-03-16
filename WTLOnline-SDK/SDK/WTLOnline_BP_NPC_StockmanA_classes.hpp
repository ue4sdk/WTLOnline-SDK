#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_StockmanA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NPC_StockmanA.BP_NPC_StockmanA_C
// 0x0018 (0x0B10 - 0x0AF8)
class ABP_NPC_StockmanA_C : public AWTLNPCActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Timeline_0_NewTrack_0_DBF4CDE341FE053B1EF7E9A9E74C32D9;   // 0x0B00(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_DBF4CDE341FE053B1EF7E9A9E74C32D9;   // 0x0B04(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0B08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_NPC_StockmanA.BP_NPC_StockmanA_C");
		return ptr;
	}


	void CharacterCanTakeSlots(class AWTLCharacter* Character, int SlotCount);
	void ShowBuyAdditionalSlots(class AWTLCharacter* Character);
	void ShowStartDialog(class AWTLCharacter* Character);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNPCDialogActivated(class AWTLCharacter* Character);
	void OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NPC_StockmanA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
