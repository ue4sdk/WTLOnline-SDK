#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterPawnAiControllerBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C
// 0x0009 (0x04D9 - 0x04D0)
class ABP_MonsterPawnAiControllerBase_C : public AWTLMonsterPawnAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               IsIgnoreElectronicBait;                                   // 0x04D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C"));
		return ptr;
	}


	void OnTargetHearingUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ProcessingEventOnHear(class AActor* Instigator, const struct FName& Tag, float CheckRadius);
	void ReactionOnDamageAIInterface(class AAIController* SelfController, class AController* DamageInstigator, const struct FName& MakeNoiseTag, float MakeNoiseRadius, EWTLMonsterState SetStateMonster, EWTLMonsterState SetStateIfCanotAction, TArray<EWTLMonsterState>* InStateForReaction);
	void CheckDistance(class AAIController* AIController, class AController* DamageInstigator, float DistCheck, bool* Result);
	void InstigatorInBlackList(class AController* AIController, class AController* DamageInstigator, bool* Result);
	void ReactionOnDamage_(class AAIController* AIController, class AController* DamageInstigator, const struct FName& MakeNoiseTag, float MakeNoiseRadius, TEnumAsByte<EStateMonster> SetStateMonster, TEnumAsByte<EStateMonster> SetOldStateMonster, float SetAggression, bool Shocked, TEnumAsByte<EStateMonster> SetStateIfCanotAction, TArray<TEnumAsByte<EStateMonster>>* CanReactionStates);
	void CanRespond_(class AAIController* AIController, TArray<TEnumAsByte<EStateMonster>>* StatesCanRespond, bool* Result, TEnumAsByte<EStateMonster>* StateMonster);
	void CanHearFlags(class AActor* Actor, const struct FAIStimulus& AIStimulus, TArray<TEnumAsByte<EStateMonster>>* StatesMonster, bool* Result, struct FName* Tag, struct FVector* StimulusLocation);
	void SetStateMovement(EWTLMonsterMovementMode StateMovement);
	void SetBBKeyLocation(const struct FVector& Location, const struct FName& NameBBKey);
	void IsBusy(class AAIController* Controller, bool* IsBusy);
	void SetInstigatorLocation(const struct FVector& InstigatorActor);
	void FrightFromCharacter(class AActor* InstigatorActor, bool* Result);
	void SetFright(bool Fright);
	void SetStateMonster(TEnumAsByte<EStateMonster> StateMonster);
	void StimulusBaseAddAggression(float AddAggression, class AActor* InstigatorActor);
	void StimulusBaseTakeDamage(class AActor* InstigatorActor, class UBlackboardComponent* Blackboard, class APawn* ControlledPawn, float SetAggression, TEnumAsByte<EStateMonster> SetStateMonster);
	void CanHear(class AActor* Object, const struct FAIStimulus& AIStimulus, bool* Result, struct FName* Tag, struct FVector* StimulusLocation);
	void UserConstructionScript();
	void OnHearing(class AActor* EventInstigator, const struct FName& Tag);
	void OnReceiveDamage(class AController* DamageInstigator, float Damage, bool bIsFromSleep);
	void ExecuteUbergraph_BP_MonsterPawnAiControllerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
