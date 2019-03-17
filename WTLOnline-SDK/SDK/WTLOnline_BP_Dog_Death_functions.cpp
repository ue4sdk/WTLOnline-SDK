// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Dog_Death_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Dog_Death.BP_Dog_Death_C.SetParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DirectionIn                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 DamageVectorIn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          AmmoPhysImpulseIn              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      MaterialIn                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Dog_Death_C::SetParameters(int DirectionIn, const struct FVector& DamageVectorIn, float AmmoPhysImpulseIn, class UMaterialInterface* MaterialIn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dog_Death.BP_Dog_Death_C.SetParameters"));

	struct
	{
		int                            DirectionIn;
		struct FVector                 DamageVectorIn;
		float                          AmmoPhysImpulseIn;
		class UMaterialInterface*      MaterialIn;
	} params;

	params.DirectionIn = DirectionIn;
	params.DamageVectorIn = DamageVectorIn;
	params.AmmoPhysImpulseIn = AmmoPhysImpulseIn;
	params.MaterialIn = MaterialIn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dog_Death.BP_Dog_Death_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Dog_Death_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dog_Death.BP_Dog_Death_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dog_Death.BP_Dog_Death_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Dog_Death_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dog_Death.BP_Dog_Death_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dog_Death.BP_Dog_Death_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Dog_Death_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dog_Death.BP_Dog_Death_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Dog_Death.BP_Dog_Death_C.ExecuteUbergraph_BP_Dog_Death
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Dog_Death_C::ExecuteUbergraph_BP_Dog_Death(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Dog_Death.BP_Dog_Death_C.ExecuteUbergraph_BP_Dog_Death"));

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
