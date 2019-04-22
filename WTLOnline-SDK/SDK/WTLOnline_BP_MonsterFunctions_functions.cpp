// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MonsterFunctions.BP_MonsterFunctions_C.SetStateFollowTarget
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MonsterSelf                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<E_MonsterFollowTarget> State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::SetStateFollowTarget(class AActor* MonsterSelf, TEnumAsByte<E_MonsterFollowTarget> State, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.SetStateFollowTarget"));

	struct
	{
		class AActor*                  MonsterSelf;
		TEnumAsByte<E_MonsterFollowTarget> State;
		class UObject*                 __WorldContext;
	} params;

	params.MonsterSelf = MonsterSelf;
	params.State = State;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.CheckDistancToVisibleEnemy
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLMonsterPawn*         Monster                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AWTLCharacter*           Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::CheckDistancToVisibleEnemy(class AWTLMonsterPawn* Monster, float Distance, class UObject* __WorldContext, bool* Result, class AWTLCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.CheckDistancToVisibleEnemy"));

	struct
	{
		class AWTLMonsterPawn*         Monster;
		float                          Distance;
		class UObject*                 __WorldContext;
		bool                           Result;
		class AWTLCharacter*           Character;
	} params;

	params.Monster = Monster;
	params.Distance = Distance;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.WhoIsCloser
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  ActorStart                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ActorA                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ActorB                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ActorA_IsCloser                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::WhoIsCloser(class AActor* ActorStart, class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, bool* ActorA_IsCloser)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.WhoIsCloser"));

	struct
	{
		class AActor*                  ActorStart;
		class AActor*                  ActorA;
		class AActor*                  ActorB;
		class UObject*                 __WorldContext;
		bool                           ActorA_IsCloser;
	} params;

	params.ActorStart = ActorStart;
	params.ActorA = ActorA;
	params.ActorB = ActorB;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ActorA_IsCloser != nullptr)
		*ActorA_IsCloser = params.ActorA_IsCloser;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.CheckIsVisibleActor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  StartActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  EndActor                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 StartLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 EndLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBP_MonsterFunctions_C::CheckIsVisibleActor(class AActor* StartActor, class AActor* EndActor, const struct FVector& StartLocation, const struct FVector& EndLocation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.CheckIsVisibleActor"));

	struct
	{
		class AActor*                  StartActor;
		class AActor*                  EndActor;
		struct FVector                 StartLocation;
		struct FVector                 EndLocation;
		class UObject*                 __WorldContext;
		bool                           ReturnValue;
	} params;

	params.StartActor = StartActor;
	params.EndActor = EndActor;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackAIInterface
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MonsterSelf                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Actor                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::AttackAIInterface(class AActor* MonsterSelf, class UObject* __WorldContext, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackAIInterface"));

	struct
	{
		class AActor*                  MonsterSelf;
		class UObject*                 __WorldContext;
		class AActor*                  Actor;
	} params;

	params.MonsterSelf = MonsterSelf;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackPointElectronicBait
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MonsterSelf                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AttackRadius                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ApplyAngle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          ActorHit                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_MonsterFunctions_C::AttackPointElectronicBait(class AActor* MonsterSelf, float AttackRadius, float ApplyAngle, class UObject* __WorldContext, TArray<class AActor*>* ActorHit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackPointElectronicBait"));

	struct
	{
		class AActor*                  MonsterSelf;
		float                          AttackRadius;
		float                          ApplyAngle;
		class UObject*                 __WorldContext;
		TArray<class AActor*>          ActorHit;
	} params;

	params.MonsterSelf = MonsterSelf;
	params.AttackRadius = AttackRadius;
	params.ApplyAngle = ApplyAngle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ActorHit != nullptr)
		*ActorHit = params.ActorHit;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.SetRandomColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLMonsterPawn*         Monster                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::SetRandomColor(class AWTLMonsterPawn* Monster, class UObject* __WorldContext, TArray<struct FLinearColor>* Color)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.SetRandomColor"));

	struct
	{
		class AWTLMonsterPawn*         Monster;
		TArray<struct FLinearColor>    Color;
		class UObject*                 __WorldContext;
	} params;

	params.Monster = Monster;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.UpdateMove
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLMonsterPawn*         MonsterPawn                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UCharacterMovementComponent* CharacterMovement              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::UpdateMove(class AWTLMonsterPawn* MonsterPawn, class UCharacterMovementComponent* CharacterMovement, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.UpdateMove"));

	struct
	{
		class AWTLMonsterPawn*         MonsterPawn;
		class UCharacterMovementComponent* CharacterMovement;
		class UObject*                 __WorldContext;
	} params;

	params.MonsterPawn = MonsterPawn;
	params.CharacterMovement = CharacterMovement;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.CheckIsVisibleTarget
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLMonsterPawn*         Monster                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::CheckIsVisibleTarget(class AWTLMonsterPawn* Monster, class AActor* Character, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.CheckIsVisibleTarget"));

	struct
	{
		class AWTLMonsterPawn*         Monster;
		class AActor*                  Character;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params;

	params.Monster = Monster;
	params.Character = Character;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.IsStates
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   ControllerPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<TEnumAsByte<EStateMonster>> MonsterStates                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::IsStates(class APawn* ControllerPawn, class UObject* __WorldContext, TArray<TEnumAsByte<EStateMonster>>* MonsterStates, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.IsStates"));

	struct
	{
		class APawn*                   ControllerPawn;
		TArray<TEnumAsByte<EStateMonster>> MonsterStates;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params;

	params.ControllerPawn = ControllerPawn;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (MonsterStates != nullptr)
		*MonsterStates = params.MonsterStates;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.GetAngle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               A                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               B                              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::GetAngle(const struct FVector2D& A, const struct FVector2D& B, class UObject* __WorldContext, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.GetAngle"));

	struct
	{
		struct FVector2D               A;
		struct FVector2D               B;
		class UObject*                 __WorldContext;
		float                          Angle;
	} params;

	params.A = A;
	params.B = B;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.IsValidAngle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Vec1                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Vec2                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ValidAngle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::IsValidAngle(const struct FVector& Vec1, const struct FVector& Vec2, float ValidAngle, class UObject* __WorldContext, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.IsValidAngle"));

	struct
	{
		struct FVector                 Vec1;
		struct FVector                 Vec2;
		float                          ValidAngle;
		class UObject*                 __WorldContext;
		bool                           Result;
	} params;

	params.Vec1 = Vec1;
	params.Vec2 = Vec2;
	params.ValidAngle = ValidAngle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackPoint
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MonsterSelf                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AttackRadius                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ApplyAngle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ActorHit                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_MonsterFunctions_C::AttackPoint(class AActor* MonsterSelf, float AttackRadius, float ApplyAngle, class UObject* __WorldContext, class AActor** ActorHit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackPoint"));

	struct
	{
		class AActor*                  MonsterSelf;
		float                          AttackRadius;
		float                          ApplyAngle;
		class UObject*                 __WorldContext;
		class AActor*                  ActorHit;
	} params;

	params.MonsterSelf = MonsterSelf;
	params.AttackRadius = AttackRadius;
	params.ApplyAngle = ApplyAngle;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ActorHit != nullptr)
		*ActorHit = params.ActorHit;
}


// Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackSphere
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  MonsterSelf                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SphereRadius                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class AActor*>          ActorsHit                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_MonsterFunctions_C::AttackSphere(class AActor* MonsterSelf, const struct FVector& Offset, float SphereRadius, class UObject* __WorldContext, TArray<class AActor*>* ActorsHit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterFunctions.BP_MonsterFunctions_C.AttackSphere"));

	struct
	{
		class AActor*                  MonsterSelf;
		struct FVector                 Offset;
		float                          SphereRadius;
		class UObject*                 __WorldContext;
		TArray<class AActor*>          ActorsHit;
	} params;

	params.MonsterSelf = MonsterSelf;
	params.Offset = Offset;
	params.SphereRadius = SphereRadius;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ActorsHit != nullptr)
		*ActorsHit = params.ActorsHit;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
