// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_ObjectInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HUD_ObjectInfo.UI_HUD_ObjectInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_HUD_ObjectInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_ObjectInfo.UI_HUD_ObjectInfo_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_ObjectInfo.UI_HUD_ObjectInfo_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_ObjectInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_ObjectInfo.UI_HUD_ObjectInfo_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_HUD_ObjectInfo.UI_HUD_ObjectInfo_C.ExecuteUbergraph_UI_HUD_ObjectInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_HUD_ObjectInfo_C::ExecuteUbergraph_UI_HUD_ObjectInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function UI_HUD_ObjectInfo.UI_HUD_ObjectInfo_C.ExecuteUbergraph_UI_HUD_ObjectInfo"));

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
