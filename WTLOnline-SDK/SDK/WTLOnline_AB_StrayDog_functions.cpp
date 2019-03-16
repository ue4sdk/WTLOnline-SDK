// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_StrayDog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AB_StrayDog.AB_StrayDog_C.ExecuteUbergraph_AB_StrayDog
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAB_StrayDog_C::ExecuteUbergraph_AB_StrayDog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_StrayDog.AB_StrayDog_C.ExecuteUbergraph_AB_StrayDog");

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
