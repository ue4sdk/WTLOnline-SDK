#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Pawn_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pawn_Chicken.BP_Pawn_Chicken_C
// 0x004E (0x1298 - 0x124A)
class ABP_Pawn_Chicken_C : public ABP_MonsterBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x124A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFMODAudioComponent*                         FE_Chicken_TakeDamage;                                    // 0x1258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFMODAudioComponent*                         FE_Chicken_CoCoCo;                                        // 0x1260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              OldHealth;                                                // 0x1268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Counter50;                                                // 0x126C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Counter100;                                               // 0x1270(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Countermax;                                               // 0x1274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FLinearColor>                        MonsterColor;                                             // 0x1278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UMaterial*>                           Material;                                                 // 0x1288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Pawn_Chicken.BP_Pawn_Chicken_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnHealthChanged(float Delta);
	void BndEvt__FE_Chicken_CoCoCo_K2Node_ComponentBoundEvent_0_OnTimelineMarker__DelegateSignature(const struct FString& Name, int Position);
	void OnDeathBpEvent(const struct FWTLMonsterDeathData& DeathData);
	void OnBurst(const struct FWTLMonsterDeathData& DeathData);
	void ExecuteUbergraph_BP_Pawn_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
