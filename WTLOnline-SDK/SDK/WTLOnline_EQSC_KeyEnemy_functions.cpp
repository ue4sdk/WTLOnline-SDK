// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_EQSC_KeyEnemy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EQSC_KeyEnemy.EQSC_KeyEnemy_C.ProvideSingleLocation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  QuerierActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ResultingLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEQSC_KeyEnemy_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EQSC_KeyEnemy.EQSC_KeyEnemy_C.ProvideSingleLocation"));

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		struct FVector                 ResultingLocation;
	} params;

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	UObject::ProcessEvent(fn, &params);

	if (ResultingLocation != nullptr)
		*ResultingLocation = params.ResultingLocation;
}


// Function EQSC_KeyEnemy.EQSC_KeyEnemy_C.ProvideSingleActor
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  QuerierActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ResultingActor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEQSC_KeyEnemy_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function EQSC_KeyEnemy.EQSC_KeyEnemy_C.ProvideSingleActor"));

	struct
	{
		class UObject*                 QuerierObject;
		class AActor*                  QuerierActor;
		class AActor*                  ResultingActor;
	} params;

	params.QuerierObject = QuerierObject;
	params.QuerierActor = QuerierActor;

	UObject::ProcessEvent(fn, &params);

	if (ResultingActor != nullptr)
		*ResultingActor = params.ResultingActor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
