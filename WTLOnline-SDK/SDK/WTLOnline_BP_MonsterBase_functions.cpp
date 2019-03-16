// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MonsterBase.BP_MonsterBase_C.FarAttackBallLightning
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 EndLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RadiusW                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale1D                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::FarAttackBallLightning(const struct FVector& StartLocation, const struct FVector& EndLocation, float RadiusW, float Scale1D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.FarAttackBallLightning");

	struct
	{
		struct FVector                 StartLocation;
		struct FVector                 EndLocation;
		float                          RadiusW;
		float                          Scale1D;
	} params;

	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.RadiusW = RadiusW;
	params.Scale1D = Scale1D;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.GetDirectionRotationFromEnemy 
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          AcceptableAngleFromEnemy       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AngleYaw                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::GetDirectionRotationFromEnemy_(float AcceptableAngleFromEnemy, float* AngleYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.GetDirectionRotationFromEnemy ");

	struct
	{
		float                          AcceptableAngleFromEnemy;
		float                          AngleYaw;
	} params;

	params.AcceptableAngleFromEnemy = AcceptableAngleFromEnemy;

	UObject::ProcessEvent(fn, &params);

	if (AngleYaw != nullptr)
		*AngleYaw = params.AngleYaw;
}


// Function BP_MonsterBase.BP_MonsterBase_C.GetDownPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::GetDownPoint(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.GetDownPoint");

	struct
	{
		struct FVector                 Location;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_MonsterBase.BP_MonsterBase_C.UpdateTimeMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::UpdateTimeMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.UpdateTimeMove");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.UpdateMoveFromTargetTrace
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::UpdateMoveFromTargetTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.UpdateMoveFromTargetTrace");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.MyAngleDirectionFromEnemy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ResultAngle                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::MyAngleDirectionFromEnemy(float* ResultAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.MyAngleDirectionFromEnemy");

	struct
	{
		float                          ResultAngle;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ResultAngle != nullptr)
		*ResultAngle = params.ResultAngle;
}


// Function BP_MonsterBase.BP_MonsterBase_C.GetVectorToEnemy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Vector                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::GetVectorToEnemy(struct FVector* Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.GetVectorToEnemy");

	struct
	{
		struct FVector                 Vector;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Vector != nullptr)
		*Vector = params.Vector;
}


// Function BP_MonsterBase.BP_MonsterBase_C.DecrementDeltaTimeOffConeEnemy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::DecrementDeltaTimeOffConeEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.DecrementDeltaTimeOffConeEnemy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.IncrementDeltaTimeInConeEnemy
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::IncrementDeltaTimeInConeEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.IncrementDeltaTimeInConeEnemy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.CheckInConeEnemy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          HalfAngle                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::CheckInConeEnemy(float HalfAngle, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.CheckInConeEnemy");

	struct
	{
		float                          HalfAngle;
		bool                           Result;
	} params;

	params.HalfAngle = HalfAngle;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterBase.BP_MonsterBase_C.SetBiasMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<E_MonsterBiasMode> BiasMode                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::SetBiasMode(class AActor* TargetActor, TEnumAsByte<E_MonsterBiasMode> BiasMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.SetBiasMode");

	struct
	{
		class AActor*                  TargetActor;
		TEnumAsByte<E_MonsterBiasMode> BiasMode;
	} params;

	params.TargetActor = TargetActor;
	params.BiasMode = BiasMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.GetRightTrace
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsHit                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LengthSquared                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::GetRightTrace(bool* IsHit, float* LengthSquared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.GetRightTrace");

	struct
	{
		bool                           IsHit;
		float                          LengthSquared;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsHit != nullptr)
		*IsHit = params.IsHit;
	if (LengthSquared != nullptr)
		*LengthSquared = params.LengthSquared;
}


// Function BP_MonsterBase.BP_MonsterBase_C.GetMidleTrace
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsHit                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LengthSquared                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::GetMidleTrace(bool* IsHit, float* LengthSquared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.GetMidleTrace");

	struct
	{
		bool                           IsHit;
		float                          LengthSquared;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsHit != nullptr)
		*IsHit = params.IsHit;
	if (LengthSquared != nullptr)
		*LengthSquared = params.LengthSquared;
}


// Function BP_MonsterBase.BP_MonsterBase_C.GetLeftTrace
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsHit                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          LengthSquared                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::GetLeftTrace(bool* IsHit, float* LengthSquared)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.GetLeftTrace");

	struct
	{
		bool                           IsHit;
		float                          LengthSquared;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsHit != nullptr)
		*IsHit = params.IsHit;
	if (LengthSquared != nullptr)
		*LengthSquared = params.LengthSquared;
}


// Function BP_MonsterBase.BP_MonsterBase_C.StopMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::StopMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.StopMove");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.StartMove
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::StartMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.StartMove");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.UpdateMoveToBase
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::UpdateMoveToBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.UpdateMoveToBase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.FarAttackStone
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 EndLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RadiusW                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale1D                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::FarAttackStone(const struct FVector& StartLocation, const struct FVector& EndLocation, float RadiusW, float Scale1D)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.FarAttackStone");

	struct
	{
		struct FVector                 StartLocation;
		struct FVector                 EndLocation;
		float                          RadiusW;
		float                          Scale1D;
	} params;

	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.RadiusW = RadiusW;
	params.Scale1D = Scale1D;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.AddImpulseToCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Vector                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Power                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::AddImpulseToCharacter(class AWTLCharacter* Character, const struct FVector& Vector, float Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.AddImpulseToCharacter");

	struct
	{
		class AWTLCharacter*           Character;
		struct FVector                 Vector;
		float                          Power;
	} params;

	params.Character = Character;
	params.Vector = Vector;
	params.Power = Power;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.EffectToCharacter
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Chance                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EWTLCharacterEffectType        Effect                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MinAmount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxAmount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::EffectToCharacter(class AWTLCharacter* Character, float Chance, EWTLCharacterEffectType Effect, float MinAmount, float MaxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.EffectToCharacter");

	struct
	{
		class AWTLCharacter*           Character;
		float                          Chance;
		EWTLCharacterEffectType        Effect;
		float                          MinAmount;
		float                          MaxAmount;
	} params;

	params.Character = Character;
	params.Chance = Chance;
	params.Effect = Effect;
	params.MinAmount = MinAmount;
	params.MaxAmount = MaxAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.DamageToCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageMultiplier               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AWTLCharacter*           Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::DamageToCharacter(class AActor* Object, float DamageMultiplier, class AWTLCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.DamageToCharacter");

	struct
	{
		class AActor*                  Object;
		float                          DamageMultiplier;
		class AWTLCharacter*           Character;
	} params;

	params.Object = Object;
	params.DamageMultiplier = DamageMultiplier;

	UObject::ProcessEvent(fn, &params);

	if (Character != nullptr)
		*Character = params.Character;
}


// Function BP_MonsterBase.BP_MonsterBase_C.ClearDamageInstigators
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::ClearDamageInstigators()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.ClearDamageInstigators");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.GetRandomInstigator
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::GetRandomInstigator(class APawn** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.GetRandomInstigator");

	struct
	{
		class APawn*                   Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterBase.BP_MonsterBase_C.AddDamageInstigator
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::AddDamageInstigator(class APawn* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.AddDamageInstigator");

	struct
	{
		class APawn*                   DamageInstigator;
	} params;

	params.DamageInstigator = DamageInstigator;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyEnd_8ABCD9F545F02F37885D9DBAFD8EF8A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnNotifyEnd_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyEnd_8ABCD9F545F02F37885D9DBAFD8EF8A3");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyBegin_8ABCD9F545F02F37885D9DBAFD8EF8A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnNotifyBegin_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyBegin_8ABCD9F545F02F37885D9DBAFD8EF8A3");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnInterrupted_8ABCD9F545F02F37885D9DBAFD8EF8A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnInterrupted_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnInterrupted_8ABCD9F545F02F37885D9DBAFD8EF8A3");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnBlendOut_8ABCD9F545F02F37885D9DBAFD8EF8A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnBlendOut_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnBlendOut_8ABCD9F545F02F37885D9DBAFD8EF8A3");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnCompleted_8ABCD9F545F02F37885D9DBAFD8EF8A3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnCompleted_8ABCD9F545F02F37885D9DBAFD8EF8A3(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnCompleted_8ABCD9F545F02F37885D9DBAFD8EF8A3");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyEnd_D60F49D045A1DD8A024745BFDC6F4742
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnNotifyEnd_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyEnd_D60F49D045A1DD8A024745BFDC6F4742");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyBegin_D60F49D045A1DD8A024745BFDC6F4742
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnNotifyBegin_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnNotifyBegin_D60F49D045A1DD8A024745BFDC6F4742");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnInterrupted_D60F49D045A1DD8A024745BFDC6F4742
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnInterrupted_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnInterrupted_D60F49D045A1DD8A024745BFDC6F4742");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnBlendOut_D60F49D045A1DD8A024745BFDC6F4742
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnBlendOut_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnBlendOut_D60F49D045A1DD8A024745BFDC6F4742");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnCompleted_D60F49D045A1DD8A024745BFDC6F4742
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnCompleted_D60F49D045A1DD8A024745BFDC6F4742(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnCompleted_D60F49D045A1DD8A024745BFDC6F4742");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnHeavyDamage
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnHeavyDamage(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnHeavyDamage");

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.ReceiveAnyDamage
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             InstigatedBy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.ReceiveAnyDamage");

	struct
	{
		float                          Damage;
		class UDamageType*             DamageType;
		class AController*             InstigatedBy;
		class AActor*                  DamageCauser;
	} params;

	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnReplicatedMovement
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnReplicatedMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnReplicatedMovement");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_MonsterBase_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.OnRep_RunAttack
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWTLMonsterActionType          IDAction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::OnRep_RunAttack(EWTLMonsterActionType IDAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.OnRep_RunAttack");

	struct
	{
		EWTLMonsterActionType          IDAction;
	} params;

	params.IDAction = IDAction;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterBase.BP_MonsterBase_C.ExecuteUbergraph_BP_MonsterBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterBase_C::ExecuteUbergraph_BP_MonsterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MonsterBase.BP_MonsterBase_C.ExecuteUbergraph_BP_MonsterBase");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
