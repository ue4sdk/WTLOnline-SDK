#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_DefaultArtefactPickup_pliers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DefaultArtefactPickup_pliers.BP_DefaultArtefactPickup_pliers_C
// 0x0000 (0x0418 - 0x0418)
class ABP_DefaultArtefactPickup_pliers_C : public AWTLArtefactPickup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DefaultArtefactPickup_pliers.BP_DefaultArtefactPickup_pliers_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
