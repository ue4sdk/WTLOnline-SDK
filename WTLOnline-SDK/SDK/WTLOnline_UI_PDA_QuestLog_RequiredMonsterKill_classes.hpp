#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_QuestLog_RequiredMonsterKill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_QuestLog_RequiredMonsterKill.UI_PDA_QuestLog_RequiredMonsterKill_C
// 0x0000 (0x0250 - 0x0250)
class UUI_PDA_QuestLog_RequiredMonsterKill_C : public UWTLPDAQuestLogRequiredMonsterKill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_PDA_QuestLog_RequiredMonsterKill.UI_PDA_QuestLog_RequiredMonsterKill_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
