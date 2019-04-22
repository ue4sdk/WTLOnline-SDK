#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_SmallStorage_ComputerCase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallStorage_ComputerCase.BP_SmallStorage_ComputerCase_C
// 0x0000 (0x0660 - 0x0660)
class ABP_SmallStorage_ComputerCase_C : public AWTLStorageBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallStorage_ComputerCase.BP_SmallStorage_ComputerCase_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
