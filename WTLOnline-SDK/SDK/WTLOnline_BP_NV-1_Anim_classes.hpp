#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NV-1_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_NV-1_Anim.BP_NV-1_Anim_C
// 0x00E8 (0x04D8 - 0x03F0)
class UBP_NV_1_Anim_C : public UWTLWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_70137B1D4C4019F17D25B7B56167A2A6;      // 0x03F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F53FAE24BB590881C41CD8B83DFFE98;// 0x0438(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass BP_NV-1_Anim.BP_NV-1_Anim_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_NV_1_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
