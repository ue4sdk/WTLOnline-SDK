#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_MainMenu_ColorButton_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_MainMenu_ColorButton.UI_MainMenu_ColorButton_C
// 0x0000 (0x0250 - 0x0250)
class UUI_MainMenu_ColorButton_C : public UWTLCommonColorButton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_MainMenu_ColorButton.UI_MainMenu_ColorButton_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
