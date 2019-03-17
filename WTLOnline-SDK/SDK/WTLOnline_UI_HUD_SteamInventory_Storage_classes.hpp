#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_SteamInventory_Storage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_SteamInventory_Storage.UI_HUD_SteamInventory_Storage_C
// 0x0000 (0x0268 - 0x0268)
class UUI_HUD_SteamInventory_Storage_C : public UWTLHUDSteamInventoryStorage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_SteamInventory_Storage.UI_HUD_SteamInventory_Storage_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
