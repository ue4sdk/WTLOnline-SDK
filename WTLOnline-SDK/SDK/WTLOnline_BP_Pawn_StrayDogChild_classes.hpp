#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Pawn_StrayDogChild_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C
// 0x0017 (0x1261 - 0x124A)
class ABP_Pawn_StrayDogChild_C : public ABP_MonsterBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x124A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFMODAudioComponent*                         TakeDamage;                                               // 0x1258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               IsPlayTakeDamage;                                         // 0x1260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void OnHealthChanged(float Delta);
	void ReceiveBeginPlay();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnActionTrigger(const struct FName& ActionName);
	void ReceivePossessed(class AController* NewController);
	void OnBurst(const struct FWTLMonsterDeathData& DeathData);
	void ExecuteUbergraph_BP_Pawn_StrayDogChild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
