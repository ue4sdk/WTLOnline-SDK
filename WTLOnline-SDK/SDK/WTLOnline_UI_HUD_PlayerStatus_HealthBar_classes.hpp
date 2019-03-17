#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_PlayerStatus_HealthBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_PlayerStatus_HealthBar.UI_HUD_PlayerStatus_HealthBar_C
// 0x0000 (0x0270 - 0x0270)
class UUI_HUD_PlayerStatus_HealthBar_C : public UWTLCommonAlphaSectionProgressBar
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_PlayerStatus_HealthBar.UI_HUD_PlayerStatus_HealthBar_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
