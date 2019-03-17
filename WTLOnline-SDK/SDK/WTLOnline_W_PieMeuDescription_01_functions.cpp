// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_W_PieMeuDescription_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_PieMeuDescription_01.W_PieMeuDescription_01_C.SetParametrs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSButonInformation      Information                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UW_PieMeuDescription_01_C::SetParametrs(const struct FSButonInformation& Information)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function W_PieMeuDescription_01.W_PieMeuDescription_01_C.SetParametrs"));

	struct
	{
		struct FSButonInformation      Information;
	} params;

	params.Information = Information;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
