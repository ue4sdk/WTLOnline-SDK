// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NV-1_Anim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NV-1_Anim.BP_NV-1_Anim_C.ExecuteUbergraph_BP_NV-1_Anim
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_NV_1_Anim_C::ExecuteUbergraph_BP_NV_1_Anim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NV-1_Anim.BP_NV-1_Anim_C.ExecuteUbergraph_BP_NV-1_Anim");

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
