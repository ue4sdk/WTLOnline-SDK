#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Pawn_RatRegular_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pawn_RatRegular.BP_Pawn_RatRegular_C
// 0x0030 (0x0E00 - 0x0DD0)
class ABP_Pawn_RatRegular_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DD0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFMODAudioComponent*                         Attack;                                                   // 0x0DD8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFMODAudioComponent*                         TakeDamage;                                               // 0x0DE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              OldHealth;                                                // 0x0DE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               CanAirAttack;                                             // 0x0DEC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DED(0x0003) MISSED OFFSET
	TArray<struct FLinearColor>                        MonsterColor;                                             // 0x0DF0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Pawn_RatRegular.BP_Pawn_RatRegular_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnActionTrigger(const struct FName& ActionName);
	void ReceivePossessed(class AController* NewController);
	void ReceiveTick(float DeltaSeconds);
	void OnHealthChanged(float Delta);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnDeathBpEvent(const struct FWTLMonsterDeathData& DeathData);
	void OnBurst(const struct FWTLMonsterDeathData& DeathData);
	void ExecuteUbergraph_BP_Pawn_RatRegular(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
