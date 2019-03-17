// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_VariantManagerContent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VariantManagerContent.LevelVariantSets.GetVariantSet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            VariantSetIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UVariantSet*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UVariantSet* ULevelVariantSets::GetVariantSet(int VariantSetIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetVariantSet"));

	struct
	{
		int                            VariantSetIndex;
		class UVariantSet*             ReturnValue;
	} params;

	params.VariantSetIndex = VariantSetIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULevelVariantSets::GetNumVariantSets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 VariantSetName                 (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 VariantName                    (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALevelVariantSetsActor::SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName"));

	struct
	{
		struct FString                 VariantSetName;
		struct FString                 VariantName;
		bool                           ReturnValue;
	} params;

	params.VariantSetName = VariantSetName;
	params.VariantName = VariantName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            VariantSetIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            VariantIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex"));

	struct
	{
		int                            VariantSetIndex;
		int                            VariantIndex;
		bool                           ReturnValue;
	} params;

	params.VariantSetIndex = VariantSetIndex;
	params.VariantIndex = VariantIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class ULevelVariantSets*       InVariantSets                  (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets"));

	struct
	{
		class ULevelVariantSets*       InVariantSets;
	} params;

	params.InVariantSets = InVariantSets;

	UObject::ProcessEvent(fn, &params);
}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           bLoad                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULevelVariantSets*       ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets"));

	struct
	{
		bool                           bLoad;
		class ULevelVariantSets*       ReturnValue;
	} params;

	params.bLoad = bLoad;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.SwitchOn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UVariant::SwitchOn()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SwitchOn"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function VariantManagerContent.Variant.SetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UVariant::SetDisplayText(const struct FText& NewDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.SetDisplayText"));

	struct
	{
		struct FText                   NewDisplayText;
	} params;

	params.NewDisplayText = NewDisplayText;

	UObject::ProcessEvent(fn, &params);
}


// Function VariantManagerContent.Variant.GetNumActors
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVariant::GetNumActors()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetNumActors"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVariant::GetDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetDisplayText"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.Variant.GetActor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ActorIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UVariant::GetActor(int ActorIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.Variant.GetActor"));

	struct
	{
		int                            ActorIndex;
		class AActor*                  ReturnValue;
	} params;

	params.ActorIndex = ActorIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.SetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FText                   NewDisplayText                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UVariantSet::SetDisplayText(const struct FText& NewDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.SetDisplayText"));

	struct
	{
		struct FText                   NewDisplayText;
	} params;

	params.NewDisplayText = NewDisplayText;

	UObject::ProcessEvent(fn, &params);
}


// Function VariantManagerContent.VariantSet.GetVariant
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            VariantIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UVariant*                ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UVariant* UVariantSet::GetVariant(int VariantIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetVariant"));

	struct
	{
		int                            VariantIndex;
		class UVariant*                ReturnValue;
	} params;

	params.VariantIndex = VariantIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetNumVariants
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UVariantSet::GetNumVariants()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetNumVariants"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function VariantManagerContent.VariantSet.GetDisplayText
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UVariantSet::GetDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function VariantManagerContent.VariantSet.GetDisplayText"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
