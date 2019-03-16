#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_Options_Parameter_Switcher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Options_Parameter_Switcher.UI_Options_Parameter_Switcher_C
// 0x0000 (0x0270 - 0x0270)
class UUI_Options_Parameter_Switcher_C : public UWTLOptionsParameterSwitcher
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_Options_Parameter_Switcher.UI_Options_Parameter_Switcher_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
