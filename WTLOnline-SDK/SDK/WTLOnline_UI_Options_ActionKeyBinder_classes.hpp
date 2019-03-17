#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_Options_ActionKeyBinder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Options_ActionKeyBinder.UI_Options_ActionKeyBinder_C
// 0x0000 (0x0270 - 0x0270)
class UUI_Options_ActionKeyBinder_C : public UWTLOptionsActionKeyBinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_Options_ActionKeyBinder.UI_Options_ActionKeyBinder_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
