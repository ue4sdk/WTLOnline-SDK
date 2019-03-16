// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Pawn_StrayDogChild_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Pawn_StrayDogChild_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_StrayDogChild_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.OnHealthChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_StrayDogChild_C::OnHealthChanged(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.OnHealthChanged");

	struct
	{
		float                          Delta;
	} params;

	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Pawn_StrayDogChild_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_Pawn_StrayDogChild_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

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


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.OnActionTrigger
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_StrayDogChild_C::OnActionTrigger(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.OnActionTrigger");

	struct
	{
		struct FName                   ActionName;
	} params;

	params.ActionName = ActionName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ReceivePossessed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             NewController                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_StrayDogChild_C::ReceivePossessed(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ReceivePossessed");

	struct
	{
		class AController*             NewController;
	} params;

	params.NewController = NewController;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.OnBurst
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FWTLMonsterDeathData    DeathData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_Pawn_StrayDogChild_C::OnBurst(const struct FWTLMonsterDeathData& DeathData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.OnBurst");

	struct
	{
		struct FWTLMonsterDeathData    DeathData;
	} params;

	params.DeathData = DeathData;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ExecuteUbergraph_BP_Pawn_StrayDogChild
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Pawn_StrayDogChild_C::ExecuteUbergraph_BP_Pawn_StrayDogChild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Pawn_StrayDogChild.BP_Pawn_StrayDogChild_C.ExecuteUbergraph_BP_Pawn_StrayDogChild");

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
