// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_EQSC_GetSpawnLocation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EQSC_GetSpawnLocation.EQSC_GetSpawnLocation_C.ProvideSingleLocation
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UObject*                 QuerierObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  QuerierActor                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ResultingLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEQSC_GetSpawnLocation_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EQSC_GetSpawnLocation.EQSC_GetSpawnLocation_C.ProvideSingleLocation");

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
