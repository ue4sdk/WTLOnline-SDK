#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_ArmoredPlates_Window_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_ArmoredPlates_Window.UI_HUD_ArmoredPlates_Window_C
// 0x0000 (0x0278 - 0x0278)
class UUI_HUD_ArmoredPlates_Window_C : public UWTLHUDArmoredPlatesWindow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_ArmoredPlates_Window.UI_HUD_ArmoredPlates_Window_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
