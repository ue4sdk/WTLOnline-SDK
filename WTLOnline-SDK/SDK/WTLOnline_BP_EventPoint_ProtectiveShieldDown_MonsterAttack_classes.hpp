#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_EventPoint_ProtectiveShieldDown_MonsterAttack_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C
// 0x00C4 (0x04CC - 0x0408)
class ABP_EventPoint_ProtectiveShieldDown_MonsterAttack_C : public ABP_EventPoint_ProtectiveShieldDown_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFMODAudioComponent*                         FMODExplosion;                                            // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemExplosion;                                  // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFMODAudioComponent*                         FMODAudio;                                                // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class ABP_MonsterSpawnerBase_C*>            MonsterSpawners;                                          // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	float                                              DeltaSpawn;                                               // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpawnRandomIndex;                                         // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UClass*>                              SpawnMonsterClass;                                        // 0x0440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                MonsterRandomIndex;                                       // 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentDeltaSpawn;                                        // 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ABP_SafeZone_C*                              SafeZone;                                                 // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TArray<class ABP_Event_ActionMachinegun_C*>        Machineguns;                                              // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	int                                                CountFillAmmo;                                            // 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Start;                                                    // 0x0474(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ClientStart;                                              // 0x0475(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0476(0x0002) MISSED OFFSET
	TArray<class AStaticMeshActor*>                    StaticMeshesExplosion;                                    // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TArray<class UClass*>                              PickUPObjects;                                            // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class ABP_SpawnPointForMonster_C*>          SpawnPointsForParts;                                      // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TArray<class ABP_EventPickUP_ProtectiveShieldDown_C*> Parts;                                                    // 0x04A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<int>                                        IDRandomSpawnPoints;                                      // 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Temp;                                                     // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EventPoint_ProtectiveShieldDown_MonsterAttack.BP_EventPoint_ProtectiveShieldDown_MonsterAttack_C"));
		return ptr;
	}


	float GetStartChance();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void K2_OnStart();
	void K2_OnFinish(bool Successful);
	void OnStartClient();
	void HideMachineguns(bool Hide);
	void OnFinishClient();
	void OnFindParts();
	void ActivateSpawn();
	void SpawnParts();
	void DestroyParts();
	void ExecuteUbergraph_BP_EventPoint_ProtectiveShieldDown_MonsterAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
