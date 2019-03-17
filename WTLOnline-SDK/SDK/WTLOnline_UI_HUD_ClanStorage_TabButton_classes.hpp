#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_ClanStorage_TabButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_ClanStorage_TabButton.UI_HUD_ClanStorage_TabButton_C
// 0x0000 (0x0820 - 0x0820)
class UUI_HUD_ClanStorage_TabButton_C : public UWTLHUDClanStorageTabButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_ClanStorage_TabButton.UI_HUD_ClanStorage_TabButton_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
