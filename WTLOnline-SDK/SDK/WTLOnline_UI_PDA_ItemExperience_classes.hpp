#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_ItemExperience_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_ItemExperience.UI_PDA_ItemExperience_C
// 0x0008 (0x0298 - 0x0290)
class UUI_PDA_ItemExperience_C : public UWTLPDAItemExperience
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_PDA_ItemExperience.UI_PDA_ItemExperience_C");
		return ptr;
	}


	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_PDA_ItemExperience(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
