#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ArenaHUD_Domination_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ArenaHUD_Domination.BP_ArenaHUD_Domination_C
// 0x0008 (0x12B8 - 0x12B0)
class ABP_ArenaHUD_Domination_C : public AWTLArenaHUD_Domination
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x12B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ArenaHUD_Domination.BP_ArenaHUD_Domination_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
