#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_Items_Modification_BarChart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_Items_Modification_BarChart.UI_HUD_Items_Modification_BarChart_C
// 0x0000 (0x0258 - 0x0258)
class UUI_HUD_Items_Modification_BarChart_C : public UWTLHUDItemsModificationBarChart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_HUD_Items_Modification_BarChart.UI_HUD_Items_Modification_BarChart_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
