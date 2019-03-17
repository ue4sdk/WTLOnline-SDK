#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_Fraction_Leaderboard_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_Fraction_Leaderboard_Item.UI_PDA_Fraction_Leaderboard_Item_C
// 0x0000 (0x0250 - 0x0250)
class UUI_PDA_Fraction_Leaderboard_Item_C : public UWTLPDAFractionLeaderboardItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_PDA_Fraction_Leaderboard_Item.UI_PDA_Fraction_Leaderboard_Item_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
