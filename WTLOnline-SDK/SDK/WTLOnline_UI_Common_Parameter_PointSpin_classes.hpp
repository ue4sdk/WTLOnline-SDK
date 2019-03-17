#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_Common_Parameter_PointSpin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Common_Parameter_PointSpin.UI_Common_Parameter_PointSpin_C
// 0x0000 (0x0258 - 0x0258)
class UUI_Common_Parameter_PointSpin_C : public UWTLCommonParameterPointSpin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_Common_Parameter_PointSpin.UI_Common_Parameter_PointSpin_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
