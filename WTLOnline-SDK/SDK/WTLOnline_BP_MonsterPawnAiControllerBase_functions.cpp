// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterPawnAiControllerBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.GetSpawnLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Valid                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::GetSpawnLocation(bool* Valid, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.GetSpawnLocation"));

	struct
	{
		bool                           Valid;
		struct FVector                 Location;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Valid != nullptr)
		*Valid = params.Valid;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.OnTargetHearingUpdated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAIStimulus             Stimulus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_MonsterPawnAiControllerBase_C::OnTargetHearingUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.OnTargetHearingUpdated"));

	struct
	{
		class AActor*                  Actor;
		struct FAIStimulus             Stimulus;
	} params;

	params.Actor = Actor;
	params.Stimulus = Stimulus;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ProcessingEventOnHear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CheckRadius                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::ProcessingEventOnHear(class AActor* Instigator, const struct FName& Tag, float CheckRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ProcessingEventOnHear"));

	struct
	{
		class AActor*                  Instigator;
		struct FName                   Tag;
		float                          CheckRadius;
	} params;

	params.Instigator = Instigator;
	params.Tag = Tag;
	params.CheckRadius = CheckRadius;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ReactionOnDamageAIInterface
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           SelfController                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   MakeNoiseTag                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MakeNoiseRadius                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EWTLMonsterState               SetStateMonster                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<EWTLMonsterState>       InStateForReaction             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// EWTLMonsterState               SetStateIfCanotAction          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::ReactionOnDamageAIInterface(class AAIController* SelfController, class AController* DamageInstigator, const struct FName& MakeNoiseTag, float MakeNoiseRadius, EWTLMonsterState SetStateMonster, EWTLMonsterState SetStateIfCanotAction, TArray<EWTLMonsterState>* InStateForReaction)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ReactionOnDamageAIInterface"));

	struct
	{
		class AAIController*           SelfController;
		class AController*             DamageInstigator;
		struct FName                   MakeNoiseTag;
		float                          MakeNoiseRadius;
		EWTLMonsterState               SetStateMonster;
		TArray<EWTLMonsterState>       InStateForReaction;
		EWTLMonsterState               SetStateIfCanotAction;
	} params;

	params.SelfController = SelfController;
	params.DamageInstigator = DamageInstigator;
	params.MakeNoiseTag = MakeNoiseTag;
	params.MakeNoiseRadius = MakeNoiseRadius;
	params.SetStateMonster = SetStateMonster;
	params.SetStateIfCanotAction = SetStateIfCanotAction;

	UObject::ProcessEvent(fn, &params);

	if (InStateForReaction != nullptr)
		*InStateForReaction = params.InStateForReaction;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CheckDistance
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DistCheck                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::CheckDistance(class AAIController* AIController, class AController* DamageInstigator, float DistCheck, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CheckDistance"));

	struct
	{
		class AAIController*           AIController;
		class AController*             DamageInstigator;
		float                          DistCheck;
		bool                           Result;
	} params;

	params.AIController = AIController;
	params.DamageInstigator = DamageInstigator;
	params.DistCheck = DistCheck;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.InstigatorInBlackList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::InstigatorInBlackList(class AController* AIController, class AController* DamageInstigator, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.InstigatorInBlackList"));

	struct
	{
		class AController*             AIController;
		class AController*             DamageInstigator;
		bool                           Result;
	} params;

	params.AIController = AIController;
	params.DamageInstigator = DamageInstigator;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ReactionOnDamage 
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<TEnumAsByte<EStateMonster>> CanReactionStates              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FName                   MakeNoiseTag                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MakeNoiseRadius                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EStateMonster>     SetStateMonster                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EStateMonster>     SetOldStateMonster             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SetAggression                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Shocked                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EStateMonster>     SetStateIfCanotAction          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::ReactionOnDamage_(class AAIController* AIController, class AController* DamageInstigator, const struct FName& MakeNoiseTag, float MakeNoiseRadius, TEnumAsByte<EStateMonster> SetStateMonster, TEnumAsByte<EStateMonster> SetOldStateMonster, float SetAggression, bool Shocked, TEnumAsByte<EStateMonster> SetStateIfCanotAction, TArray<TEnumAsByte<EStateMonster>>* CanReactionStates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ReactionOnDamage "));

	struct
	{
		class AAIController*           AIController;
		class AController*             DamageInstigator;
		TArray<TEnumAsByte<EStateMonster>> CanReactionStates;
		struct FName                   MakeNoiseTag;
		float                          MakeNoiseRadius;
		TEnumAsByte<EStateMonster>     SetStateMonster;
		TEnumAsByte<EStateMonster>     SetOldStateMonster;
		float                          SetAggression;
		bool                           Shocked;
		TEnumAsByte<EStateMonster>     SetStateIfCanotAction;
	} params;

	params.AIController = AIController;
	params.DamageInstigator = DamageInstigator;
	params.MakeNoiseTag = MakeNoiseTag;
	params.MakeNoiseRadius = MakeNoiseRadius;
	params.SetStateMonster = SetStateMonster;
	params.SetOldStateMonster = SetOldStateMonster;
	params.SetAggression = SetAggression;
	params.Shocked = Shocked;
	params.SetStateIfCanotAction = SetStateIfCanotAction;

	UObject::ProcessEvent(fn, &params);

	if (CanReactionStates != nullptr)
		*CanReactionStates = params.CanReactionStates;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CanRespond 
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           AIController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<TEnumAsByte<EStateMonster>> StatesCanRespond               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EStateMonster>     StateMonster                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::CanRespond_(class AAIController* AIController, TArray<TEnumAsByte<EStateMonster>>* StatesCanRespond, bool* Result, TEnumAsByte<EStateMonster>* StateMonster)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CanRespond "));

	struct
	{
		class AAIController*           AIController;
		TArray<TEnumAsByte<EStateMonster>> StatesCanRespond;
		bool                           Result;
		TEnumAsByte<EStateMonster>     StateMonster;
	} params;

	params.AIController = AIController;

	UObject::ProcessEvent(fn, &params);

	if (StatesCanRespond != nullptr)
		*StatesCanRespond = params.StatesCanRespond;
	if (Result != nullptr)
		*Result = params.Result;
	if (StateMonster != nullptr)
		*StateMonster = params.StateMonster;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CanHearFlags
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAIStimulus             AIStimulus                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// TArray<TEnumAsByte<EStateMonster>> StatesMonster                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 StimulusLocation               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::CanHearFlags(class AActor* Actor, const struct FAIStimulus& AIStimulus, TArray<TEnumAsByte<EStateMonster>>* StatesMonster, bool* Result, struct FName* Tag, struct FVector* StimulusLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CanHearFlags"));

	struct
	{
		class AActor*                  Actor;
		struct FAIStimulus             AIStimulus;
		TArray<TEnumAsByte<EStateMonster>> StatesMonster;
		bool                           Result;
		struct FName                   Tag;
		struct FVector                 StimulusLocation;
	} params;

	params.Actor = Actor;
	params.AIStimulus = AIStimulus;

	UObject::ProcessEvent(fn, &params);

	if (StatesMonster != nullptr)
		*StatesMonster = params.StatesMonster;
	if (Result != nullptr)
		*Result = params.Result;
	if (Tag != nullptr)
		*Tag = params.Tag;
	if (StimulusLocation != nullptr)
		*StimulusLocation = params.StimulusLocation;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetStateMovement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EWTLMonsterMovementMode        StateMovement                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::SetStateMovement(EWTLMonsterMovementMode StateMovement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetStateMovement"));

	struct
	{
		EWTLMonsterMovementMode        StateMovement;
	} params;

	params.StateMovement = StateMovement;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetBBKeyLocation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   NameBBKey                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::SetBBKeyLocation(const struct FVector& Location, const struct FName& NameBBKey)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetBBKeyLocation"));

	struct
	{
		struct FVector                 Location;
		struct FName                   NameBBKey;
	} params;

	params.Location = Location;
	params.NameBBKey = NameBBKey;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.IsBusy
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           Controller                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsBusy                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::IsBusy(class AAIController* Controller, bool* IsBusy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.IsBusy"));

	struct
	{
		class AAIController*           Controller;
		bool                           IsBusy;
	} params;

	params.Controller = Controller;

	UObject::ProcessEvent(fn, &params);

	if (IsBusy != nullptr)
		*IsBusy = params.IsBusy;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetInstigatorLocation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 InstigatorActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::SetInstigatorLocation(const struct FVector& InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetInstigatorLocation"));

	struct
	{
		struct FVector                 InstigatorActor;
	} params;

	params.InstigatorActor = InstigatorActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.FrightFromCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InstigatorActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::FrightFromCharacter(class AActor* InstigatorActor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.FrightFromCharacter"));

	struct
	{
		class AActor*                  InstigatorActor;
		bool                           Result;
	} params;

	params.InstigatorActor = InstigatorActor;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetFright
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Fright                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::SetFright(bool Fright)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetFright"));

	struct
	{
		bool                           Fright;
	} params;

	params.Fright = Fright;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetStateMonster
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EStateMonster>     StateMonster                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::SetStateMonster(TEnumAsByte<EStateMonster> StateMonster)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.SetStateMonster"));

	struct
	{
		TEnumAsByte<EStateMonster>     StateMonster;
	} params;

	params.StateMonster = StateMonster;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.StimulusBaseAddAggression
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          AddAggression                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  InstigatorActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::StimulusBaseAddAggression(float AddAggression, class AActor* InstigatorActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.StimulusBaseAddAggression"));

	struct
	{
		float                          AddAggression;
		class AActor*                  InstigatorActor;
	} params;

	params.AddAggression = AddAggression;
	params.InstigatorActor = InstigatorActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.StimulusBaseTakeDamage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InstigatorActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBlackboardComponent*    Blackboard                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          SetAggression                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EStateMonster>     SetStateMonster                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::StimulusBaseTakeDamage(class AActor* InstigatorActor, class UBlackboardComponent* Blackboard, class APawn* ControlledPawn, float SetAggression, TEnumAsByte<EStateMonster> SetStateMonster)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.StimulusBaseTakeDamage"));

	struct
	{
		class AActor*                  InstigatorActor;
		class UBlackboardComponent*    Blackboard;
		class APawn*                   ControlledPawn;
		float                          SetAggression;
		TEnumAsByte<EStateMonster>     SetStateMonster;
	} params;

	params.InstigatorActor = InstigatorActor;
	params.Blackboard = Blackboard;
	params.ControlledPawn = ControlledPawn;
	params.SetAggression = SetAggression;
	params.SetStateMonster = SetStateMonster;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CanHear
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAIStimulus             AIStimulus                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 StimulusLocation               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::CanHear(class AActor* Object, const struct FAIStimulus& AIStimulus, bool* Result, struct FName* Tag, struct FVector* StimulusLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.CanHear"));

	struct
	{
		class AActor*                  Object;
		struct FAIStimulus             AIStimulus;
		bool                           Result;
		struct FName                   Tag;
		struct FVector                 StimulusLocation;
	} params;

	params.Object = Object;
	params.AIStimulus = AIStimulus;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
	if (Tag != nullptr)
		*Tag = params.Tag;
	if (StimulusLocation != nullptr)
		*StimulusLocation = params.StimulusLocation;
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterPawnAiControllerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.OnHearing
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  EventInstigator                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::OnHearing(class AActor* EventInstigator, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.OnHearing"));

	struct
	{
		class AActor*                  EventInstigator;
		struct FName                   Tag;
	} params;

	params.EventInstigator = EventInstigator;
	params.Tag = Tag;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.OnReceiveDamage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsFromSleep                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::OnReceiveDamage(class AController* DamageInstigator, float Damage, bool bIsFromSleep)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.OnReceiveDamage"));

	struct
	{
		class AController*             DamageInstigator;
		float                          Damage;
		bool                           bIsFromSleep;
	} params;

	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.bIsFromSleep = bIsFromSleep;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ExecuteUbergraph_BP_MonsterPawnAiControllerBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterPawnAiControllerBase_C::ExecuteUbergraph_BP_MonsterPawnAiControllerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterPawnAiControllerBase.BP_MonsterPawnAiControllerBase_C.ExecuteUbergraph_BP_MonsterPawnAiControllerBase"));

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
