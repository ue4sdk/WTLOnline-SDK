#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterFunctions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MonsterFunctions.BP_MonsterFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBP_MonsterFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MonsterFunctions.BP_MonsterFunctions_C"));
		return ptr;
	}


	static void WhoIsCloser(class AActor* ActorStart, class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, bool* ActorA_IsCloser);
	static bool CheckIsVisibleActor(class AActor* StartActor, class AActor* EndActor, const struct FVector& StartLocation, const struct FVector& EndLocation, class UObject* __WorldContext);
	static void AttackAIInterface(class AActor* MonsterSelf, class UObject* __WorldContext, class AActor** Actor);
	static void AttackPointElectronicBait(class AActor* MonsterSelf, float AttackRadius, float ApplyAngle, class UObject* __WorldContext, TArray<class AActor*>* ActorHit);
	static void SetRandomColor(class AWTLMonsterPawn* Monster, class UObject* __WorldContext, TArray<struct FLinearColor>* Color);
	static void UpdateMove(class AWTLMonsterPawn* MonsterPawn, class UCharacterMovementComponent* CharacterMovement, class UObject* __WorldContext);
	static void CheckIsVisibleTarget(class AWTLMonsterPawn* Monster, class AActor* Character, class UObject* __WorldContext, bool* Result);
	static void IsStates(class APawn* ControllerPawn, class UObject* __WorldContext, TArray<TEnumAsByte<EStateMonster>>* MonsterStates, bool* Result);
	static void GetAngle(const struct FVector2D& A, const struct FVector2D& B, class UObject* __WorldContext, float* Angle);
	static void IsValidAngle(const struct FVector& Vec1, const struct FVector& Vec2, float ValidAngle, class UObject* __WorldContext, bool* Result);
	static void AttackPoint(class AActor* MonsterSelf, float AttackRadius, float ApplyAngle, class UObject* __WorldContext, class AActor** ActorHit);
	static void AttackSphere(class AActor* MonsterSelf, const struct FVector& Offset, float SphereRadius, class UObject* __WorldContext, TArray<class AActor*>* ActorsHit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
