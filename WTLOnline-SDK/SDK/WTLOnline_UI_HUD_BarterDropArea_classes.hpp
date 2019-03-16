#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_BarterDropArea_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_BarterDropArea.UI_HUD_BarterDropArea_C
// 0x0000 (0x02E8 - 0x02E8)
class UUI_HUD_BarterDropArea_C : public UWTLHUDBaseActionDropArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_HUD_BarterDropArea.UI_HUD_BarterDropArea_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
