#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_Rat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_Rat.AB_Rat_C
// 0x0610 (0x0A30 - 0x0420)
class UAB_Rat_C : public UWTLMonsterPawnAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BF969DA84FC975CF0DF89F95869802F2;      // 0x0428(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DCC642654A06788FBA915FB7CE3CBC3D;// 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_03FF0D744A9F1DFB72E1B2B501660B07;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6E2940DE433C822F00488C963F2F04EA;// 0x0520(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6584CEB344843BC0E2FB2788AD76EA6A;// 0x0568(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BFDAD1C44D9175178FE5B8B9862EFDB6;// 0x0608(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DBC226AC412DD330890ED3BBDF0A87FD;// 0x0648(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7C92D6CB4D5599EDB0FBCFA954CE5376;// 0x06E8(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FA55E32B471D0A4D898DC3A0D94FD04D;// 0x0728(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FAB3C6FB4B02E3DF60A705824F3FA4ED;// 0x0850(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_740355AB47C78481376CAD82168A88EF;// 0x0890(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_F3B83697407CE6A9901D008B20F7977E;      // 0x0970(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FDAB35084E6F29721113CA875F147856;      // 0x09B0(0x0068)
	bool                                               IsInAir;                                                  // 0x0A18(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A19(0x0003) MISSED OFFSET
	struct FVector                                     VelositeFromBP;                                           // 0x0A1C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpeedBPA;                                                 // 0x0A28(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ScaleBPA;                                                 // 0x0A2C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_Rat.AB_Rat_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Rat_AnimGraphNode_TransitionResult_DCC642654A06788FBA915FB7CE3CBC3D();
	void ExecuteUbergraph_AB_Rat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
