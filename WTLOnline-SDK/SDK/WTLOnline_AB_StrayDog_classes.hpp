#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_StrayDog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_StrayDog.AB_StrayDog_C
// 0x025C (0x066C - 0x0410)
class UAB_StrayDog_C : public UWTLMonsterPawnAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9A3FD4E94ED152703AA76BA5C0F62B98;      // 0x0418(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_8DC81A50480D5D47EA79B8BF339D9CE1;      // 0x0480(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_08F3F0A5493A3B9FDED22E8818E4495D;      // 0x04C0(0x0068)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C9048F9A4712360C4DCE41A2513608F5;// 0x0528(0x0128)
	class AWTLMonsterPawn*                             Pawn;                                                     // 0x0650(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     VelositeFromBP;                                           // 0x0658(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedBPA;                                                 // 0x0664(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScaleBPA;                                                 // 0x0668(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_StrayDog.AB_StrayDog_C"));
		return ptr;
	}


	void ExecuteUbergraph_AB_StrayDog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
