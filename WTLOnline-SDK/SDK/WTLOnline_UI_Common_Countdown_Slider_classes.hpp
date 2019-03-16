#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_Common_Countdown_Slider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Common_Countdown_Slider.UI_Common_Countdown_Slider_C
// 0x0000 (0x0240 - 0x0240)
class UUI_Common_Countdown_Slider_C : public UWTLCommonCountdownSlider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_Common_Countdown_Slider.UI_Common_Countdown_Slider_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
