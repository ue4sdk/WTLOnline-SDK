#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_CharacterSkills_Information_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_CharacterSkills_Information.UI_PDA_CharacterSkills_Information_C
// 0x0000 (0x0250 - 0x0250)
class UUI_PDA_CharacterSkills_Information_C : public UWTLPDACharacterSkillsInformation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_PDA_CharacterSkills_Information.UI_PDA_CharacterSkills_Information_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
