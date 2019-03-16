// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_SimplePortal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SimplePortal.BP_SimplePortal_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SimplePortal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimplePortal.BP_SimplePortal_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SimplePortal.BP_SimplePortal_C.OnUsePortal
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SimplePortal_C::OnUsePortal(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimplePortal.BP_SimplePortal_C.OnUsePortal");

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SimplePortal.BP_SimplePortal_C.ExecuteUbergraph_BP_SimplePortal
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SimplePortal_C::ExecuteUbergraph_BP_SimplePortal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SimplePortal.BP_SimplePortal_C.ExecuteUbergraph_BP_SimplePortal");

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
