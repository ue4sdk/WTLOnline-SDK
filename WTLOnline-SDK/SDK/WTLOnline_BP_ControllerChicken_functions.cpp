// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ControllerChicken_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ControllerChicken.BP_ControllerChicken_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_ControllerChicken_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControllerChicken.BP_ControllerChicken_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ControllerChicken.BP_ControllerChicken_C.OnReceiveDamage
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AController*             DamageInstigator               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsFromSleep                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ControllerChicken_C::OnReceiveDamage(class AController* DamageInstigator, float Damage, bool bIsFromSleep)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControllerChicken.BP_ControllerChicken_C.OnReceiveDamage"));

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


// Function BP_ControllerChicken.BP_ControllerChicken_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAIStimulus             Stimulus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_ControllerChicken_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControllerChicken.BP_ControllerChicken_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature"));

	struct
	{
		class AActor*                  Actor;
		struct FAIStimulus             Stimulus;
	} params;

	params.Actor = Actor;
	params.Stimulus = Stimulus;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ControllerChicken.BP_ControllerChicken_C.ExecuteUbergraph_BP_ControllerChicken
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_ControllerChicken_C::ExecuteUbergraph_BP_ControllerChicken(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_ControllerChicken.BP_ControllerChicken_C.ExecuteUbergraph_BP_ControllerChicken"));

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
