// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_Male_TPC_Anim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.DotP
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 v1                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 v2                             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Intencity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DotP                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_Male_TPC_Anim_C::DotP(const struct FVector& v1, const struct FVector& v2, float Intencity, float* DotP)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.DotP"));

	struct
	{
		struct FVector                 v1;
		struct FVector                 v2;
		float                          Intencity;
		float                          DotP;
	} params;

	params.v1 = v1;
	params.v2 = v2;
	params.Intencity = Intencity;

	UObject::ProcessEvent(fn, &params);

	if (DotP != nullptr)
		*DotP = params.DotP;
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TwoWayBlend_776CF0D7444B71E59210769606BE9496
// (FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TwoWayBlend_776CF0D7444B71E59210769606BE9496()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_TwoWayBlend_776CF0D7444B71E59210769606BE9496"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_C88385D8458D937D6EB057A083D380DB
// (FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_C88385D8458D937D6EB057A083D380DB()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendListByBool_C88385D8458D937D6EB057A083D380DB"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendSpacePlayer_23C6FA1649BC050B9ED52A8ABB4B0168
// (FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendSpacePlayer_23C6FA1649BC050B9ED52A8ABB4B0168()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_BlendSpacePlayer_23C6FA1649BC050B9ED52A8ABB4B0168"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_AB1F63694137E45BCE526CA58CCD98B5
// (FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_AB1F63694137E45BCE526CA58CCD98B5()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_AB1F63694137E45BCE526CA58CCD98B5"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_43746DF74C30DEAC57DDAA9055C4A9DB
// (FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_43746DF74C30DEAC57DDAA9055C4A9DB()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_43746DF74C30DEAC57DDAA9055C4A9DB"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_065A275B4ABA37E21F9878A63D74EA03
// (FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_065A275B4ABA37E21F9878A63D74EA03()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Male_TPC_Anim_AnimGraphNode_ModifyBone_065A275B4ABA37E21F9878A63D74EA03"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_Male_TPC_Anim_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.BlueprintUpdateAnimation"));

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.AnimNotify_Death
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::AnimNotify_Death()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.AnimNotify_Death"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.BlueprintBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.BlueprintBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.UpdateComplexity
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAB_Male_TPC_Anim_C::UpdateComplexity()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.UpdateComplexity"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.ExecuteUbergraph_AB_Male_TPC_Anim
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_Male_TPC_Anim_C::ExecuteUbergraph_AB_Male_TPC_Anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AB_Male_TPC_Anim.AB_Male_TPC_Anim_C.ExecuteUbergraph_AB_Male_TPC_Anim"));

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
