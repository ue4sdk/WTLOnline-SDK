#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_InteractivePlantSpawnPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_InteractivePlantSpawnPoint.BP_InteractivePlantSpawnPoint_C
// 0x0000 (0x0428 - 0x0428)
class ABP_InteractivePlantSpawnPoint_C : public AWTLInteractivePlantSpawnPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_InteractivePlantSpawnPoint.BP_InteractivePlantSpawnPoint_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
