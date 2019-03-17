#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_BulletinBoard_SolarCity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BulletinBoard_SolarCity.BP_BulletinBoard_SolarCity_C
// 0x0000 (0x03D8 - 0x03D8)
class ABP_BulletinBoard_SolarCity_C : public AWTLBulletinBoard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_BulletinBoard_SolarCity.BP_BulletinBoard_SolarCity_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
