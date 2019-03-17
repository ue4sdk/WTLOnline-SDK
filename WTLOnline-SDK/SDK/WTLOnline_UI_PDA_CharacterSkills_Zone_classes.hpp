#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_CharacterSkills_Zone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_CharacterSkills_Zone.UI_PDA_CharacterSkills_Zone_C
// 0x0000 (0x0298 - 0x0298)
class UUI_PDA_CharacterSkills_Zone_C : public UWTLPDACharacterSkillsZone
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_PDA_CharacterSkills_Zone.UI_PDA_CharacterSkills_Zone_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
