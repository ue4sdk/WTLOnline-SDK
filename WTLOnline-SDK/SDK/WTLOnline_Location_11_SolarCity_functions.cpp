// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Location_11_SolarCity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Location_11_SolarCity.Location_11_SolarCity_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ALocation_11_SolarCity_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Location_11_SolarCity.Location_11_SolarCity_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Location_11_SolarCity.Location_11_SolarCity_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALocation_11_SolarCity_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Location_11_SolarCity.Location_11_SolarCity_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function Location_11_SolarCity.Location_11_SolarCity_C.ExecuteUbergraph_Location_11_SolarCity
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALocation_11_SolarCity_C::ExecuteUbergraph_Location_11_SolarCity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Location_11_SolarCity.Location_11_SolarCity_C.ExecuteUbergraph_Location_11_SolarCity");

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
