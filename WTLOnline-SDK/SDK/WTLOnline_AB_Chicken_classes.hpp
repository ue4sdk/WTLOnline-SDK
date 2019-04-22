#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_Chicken_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Chicken.AB_Chicken_C
// 0x02F8 (0x0718 - 0x0420)
class UAB_Chicken_C : public UWTLMonsterPawnAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B7422A5444DC362140274A9E9ECE66B5;      // 0x0428(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2C44763B4DB01AB567D54E94522E6517;      // 0x0468(0x0068)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0A19EBE34A4E2F82EB6D6BA5905ABBCE;// 0x04D0(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9B92610F470C460594EC63A0DC89302D;// 0x05F8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8C84D4034E88D9DDB1E3F996A601F79C;// 0x0638(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_Chicken.AB_Chicken_C"));
		return ptr;
	}


	void ExecuteUbergraph_AB_Chicken(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
