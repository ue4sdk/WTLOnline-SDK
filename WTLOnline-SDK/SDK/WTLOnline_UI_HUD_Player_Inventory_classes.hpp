#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_Player_Inventory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_Player_Inventory.UI_HUD_Player_Inventory_C
// 0x0008 (0x0308 - 0x0300)
class UUI_HUD_Player_Inventory_C : public UWTLHUDPlayerInventory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_Player_Inventory.UI_HUD_Player_Inventory_C"));
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_UI_HUD_Player_Inventory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
