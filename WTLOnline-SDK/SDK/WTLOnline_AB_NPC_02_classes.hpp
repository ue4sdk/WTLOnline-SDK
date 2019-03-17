#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_NPC_02.AB_NPC_02_C
// 0x0378 (0x0718 - 0x03A0)
class UAB_NPC_02_C : public UWTLNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_FF5B6ACF4F525173D0CB10ADCFF83CA0;      // 0x03A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A20B8835496993BE665136842F54B4A6;// 0x03E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C521C1A842B78658466A64ABB17C320D;// 0x0430(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC793D32400062EC44542581D32A813B;// 0x0478(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3132C68847E566331F25B5A367415B4B;// 0x0518(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_021D0DBD4798E6E7482C63B786403E46;// 0x0558(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5E95C5B6478342B3FA50DD844D0A884A;// 0x05F8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_680FFC454D0A3062EEC6BC909BEA0856;// 0x0638(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_NPC_02.AB_NPC_02_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_NPC_02_AnimGraphNode_TransitionResult_C521C1A842B78658466A64ABB17C320D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_NPC_02_AnimGraphNode_TransitionResult_A20B8835496993BE665136842F54B4A6();
	void ExecuteUbergraph_AB_NPC_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
