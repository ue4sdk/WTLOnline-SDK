#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_QuestLog_CustomRequirement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_QuestLog_CustomRequirement.UI_PDA_QuestLog_CustomRequirement_C
// 0x0000 (0x0248 - 0x0248)
class UUI_PDA_QuestLog_CustomRequirement_C : public UWTLPDAQuestLogRequirementBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_PDA_QuestLog_CustomRequirement.UI_PDA_QuestLog_CustomRequirement_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
