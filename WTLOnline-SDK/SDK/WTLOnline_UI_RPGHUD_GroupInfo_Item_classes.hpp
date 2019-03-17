#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_RPGHUD_GroupInfo_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_RPGHUD_GroupInfo_Item.UI_RPGHUD_GroupInfo_Item_C
// 0x0000 (0x02F8 - 0x02F8)
class UUI_RPGHUD_GroupInfo_Item_C : public UWTLRPGHUDGroupInfo_Item
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_RPGHUD_GroupInfo_Item.UI_RPGHUD_GroupInfo_Item_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
