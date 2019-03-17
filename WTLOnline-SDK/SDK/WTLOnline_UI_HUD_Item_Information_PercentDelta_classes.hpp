#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_Item_Information_PercentDelta_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_Item_Information_PercentDelta.UI_HUD_Item_Information_PercentDelta_C
// 0x0000 (0x0238 - 0x0238)
class UUI_HUD_Item_Information_PercentDelta_C : public UWTLHUDItemsModificationPercentDelta
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_Item_Information_PercentDelta.UI_HUD_Item_Information_PercentDelta_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
