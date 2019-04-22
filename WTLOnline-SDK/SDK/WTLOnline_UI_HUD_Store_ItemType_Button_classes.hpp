#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_Store_ItemType_Button_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_Store_ItemType_Button.UI_HUD_Store_ItemType_Button_C
// 0x0000 (0x0728 - 0x0728)
class UUI_HUD_Store_ItemType_Button_C : public UWTLHUDStoreItemTypeButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_Store_ItemType_Button.UI_HUD_Store_ItemType_Button_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
