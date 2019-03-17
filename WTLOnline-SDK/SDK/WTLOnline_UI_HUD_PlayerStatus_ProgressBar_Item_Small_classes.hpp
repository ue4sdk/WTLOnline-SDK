#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_PlayerStatus_ProgressBar_Item_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_PlayerStatus_ProgressBar_Item_Small.UI_HUD_PlayerStatus_ProgressBar_Item_Small_C
// 0x0000 (0x0210 - 0x0210)
class UUI_HUD_PlayerStatus_ProgressBar_Item_Small_C : public UWTLCommonAlphaSectionProgressBarItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_PlayerStatus_ProgressBar_Item_Small.UI_HUD_PlayerStatus_ProgressBar_Item_Small_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
