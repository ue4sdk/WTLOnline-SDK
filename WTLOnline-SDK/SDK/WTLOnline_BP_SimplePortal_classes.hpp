#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_SimplePortal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SimplePortal.BP_SimplePortal_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_SimplePortal_C : public AWTLPortal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SimplePortal.BP_SimplePortal_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnUsePortal(class AWTLCharacter* Character);
	void ExecuteUbergraph_BP_SimplePortal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
