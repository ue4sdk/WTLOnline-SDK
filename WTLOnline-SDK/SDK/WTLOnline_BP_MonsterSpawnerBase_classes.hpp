#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterSpawnerBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C
// 0x0094 (0x0514 - 0x0480)
class ABP_MonsterSpawnerBase_C : public AWTLMonsterSpawner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0490(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class AWTLMonsterPawn*>                     FreeMonsterPoints;                                        // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class ABP_SpawnPointForMonster_C*>          SpawnPoints;                                              // 0x04B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<int>                                        TempIdSpawnPoint;                                         // 0x04C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                TempId;                                                   // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DrawSpawnPointsInRadius;                                  // 0x04D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D5(0x0003) MISSED OFFSET
	int                                                CurrentID;                                                // 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	class AWTLMonsterPawn*                             FreePtr;                                                  // 0x04E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    EventOnMonsterDead;                                       // 0x04E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               RandomSpawnPoint;                                         // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	class UClass*                                      FindMonsterClass;                                         // 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ReplaceMonsterClass;                                      // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CountMonstersReplaced;                                    // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C"));
		return ptr;
	}


	void ReplaceMonsters();
	void SpawnMonster(class UClass* Monster, const struct FVector& Location, unsigned char Level);
	void UserConstructionScript();
	void OnSpawnMonster();
	void ReceiveBeginPlay();
	void OnDeadMonster(class AWTLMonsterPawn* Pawn);
	void ExecuteUbergraph_BP_MonsterSpawnerBase(int EntryPoint);
	void EventOnMonsterDead__DelegateSignature(class AWTLMonsterPawn* MonsterPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
