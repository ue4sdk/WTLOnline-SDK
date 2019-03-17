#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MonsterBase.BP_MonsterBase_C
// 0x027A (0x104A - 0x0DD0)
class ABP_MonsterBase_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DD0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              MaxSpeed;                                                 // 0x0DD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AccelerationSpeed;                                        // 0x0DDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceSquare;                                           // 0x0DE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ToSpeed;                                                  // 0x0DE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentSpeed;                                             // 0x0DE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirectionTurn;                                            // 0x0DEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OldDirectionTurn;                                         // 0x0DF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedRotation;                                            // 0x0DF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedRatio;                                               // 0x0DF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeInConeEnemy;                                          // 0x0DFC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MyDeltaTime;                                              // 0x0E00(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TimeMove;                                                 // 0x0E04(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EStateMonster>                         StateMonster;                                             // 0x0E08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<E_MonsterBiasMode>                     BiasMode;                                                 // 0x0E09(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Currenthit;                                               // 0x0E0A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<E_MoveToBase>                          StateMoveTo;                                              // 0x0E0B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    CurrentRotation;                                          // 0x0E0C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    AddRotatorCapsule;                                        // 0x0E18(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    AddRotator;                                               // 0x0E24(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    AddRotatorFromTarget;                                     // 0x0E30(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ReadyToAttack;                                            // 0x0E3C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WaitTurn;                                                 // 0x0E3D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsMoveForward;                                            // 0x0E3E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0E3F(0x0001) MISSED OFFSET
	struct FVector                                     TargetLocation;                                           // 0x0E40(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     VectorForward;                                            // 0x0E4C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     LocationStartMoveTo;                                      // 0x0E58(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E64(0x0004) MISSED OFFSET
	struct FHitResult                                  LeftHit;                                                  // 0x0E68(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FHitResult                                  RightHit;                                                 // 0x0EF0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FHitResult                                  MIdleHit;                                                 // 0x0F78(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ToDirection;                                              // 0x1000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BiasDirection;                                            // 0x1004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AWTLCharacter*                               CharacterTemp;                                            // 0x1008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBTTask_BlueprintBase*                       TaskMoveTo;                                               // 0x1010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      MyTargetActor;                                            // 0x1018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FDS_WayPoint>                        WayPoints;                                                // 0x1020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class APawn*>                               DamageInstigators;                                        // 0x1030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	class UCharacterMovementComponent*                 MyCharacterMovement;                                      // 0x1040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               IsAttack;                                                 // 0x1048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsUnderground;                                            // 0x1049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_MonsterBase.BP_MonsterBase_C"));
		return ptr;
	}


	void FarAttackBallLightning(const struct FVector& StartLocation, const struct FVector& EndLocation, float RadiusW, float Scale1D);
	void GetDirectionRotationFromEnemy_(float AcceptableAngleFromEnemy, float* AngleYaw);
	void GetDownPoint(struct FVector* Location);
	void UpdateTimeMove();
	void UpdateMoveFromTargetTrace();
	void MyAngleDirectionFromEnemy(float* ResultAngle);
	void GetVectorToEnemy(struct FVector* Vector);
	void DecrementDeltaTimeOffConeEnemy();
	void IncrementDeltaTimeInConeEnemy();
	void CheckInConeEnemy(float HalfAngle, bool* Result);
	void SetBiasMode(class AActor* TargetActor, TEnumAsByte<E_MonsterBiasMode> BiasMode);
	void GetRightTrace(bool* IsHit, float* LengthSquared);
	void GetMidleTrace(bool* IsHit, float* LengthSquared);
	void GetLeftTrace(bool* IsHit, float* LengthSquared);
	void StopMove();
	void StartMove();
	void UpdateMoveToBase();
	void FarAttackStone(const struct FVector& StartLocation, const struct FVector& EndLocation, float RadiusW, float Scale1D);
	void AddImpulseToCharacter(class AWTLCharacter* Character, const struct FVector& Vector, float Power);
	void EffectToCharacter(class AWTLCharacter* Character, float Chance, EWTLCharacterEffectType Effect, float MinAmount, float MaxAmount);
	void DamageToCharacter(class AActor* Object, float DamageMultiplier, class AWTLCharacter** Character);
	void ClearDamageInstigators();
	void GetRandomInstigator(class APawn** Result);
	void AddDamageInstigator(class APawn* DamageInstigator);
	void UserConstructionScript();
	void OnNotifyEnd_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName);
	void OnNotifyBegin_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName);
	void OnInterrupted_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName);
	void OnBlendOut_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName);
	void OnCompleted_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName);
	void OnNotifyEnd_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName);
	void OnNotifyBegin_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName);
	void OnInterrupted_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName);
	void OnBlendOut_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName);
	void OnCompleted_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName);
	void ReceiveTick(float DeltaSeconds);
	void OnHeavyDamage(bool Value);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnReplicatedMovement(float DeltaTime);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_RunAttack(EWTLMonsterActionType IDAction);
	void ExecuteUbergraph_BP_MonsterBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
