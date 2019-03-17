#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_LevelPickupSpawnPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LevelPickupSpawnPoint.BP_LevelPickupSpawnPoint_C
// 0x0008 (0x0358 - 0x0350)
class ABP_LevelPickupSpawnPoint_C : public AWTLLevelPickupSpawnPoint
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LevelPickupSpawnPoint.BP_LevelPickupSpawnPoint_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
