#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_NPC_03.AB_NPC_03_C
// 0x0F20 (0x12C0 - 0x03A0)
class UAB_NPC_03_C : public UWTLNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9305087E420B0A0B879BBDAA910199F6;      // 0x03A8(0x0040)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1AE518BD450D00A0E17B1E85ECE7C9C7;// 0x03E8(0x00F0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_37EDB9BB40DABF73E11B05AA39CFB7C4; // 0x04E0(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_99616BFC426EF7C3BB000189350E6FD9; // 0x0720(0x0240)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9934209F4F46E13D2D956BA946D27CCE;  // 0x0960(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_505E3DB74985981A4B183C84030DCC27;// 0x0A88(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_18F7742F491CDC8D70959C854B4588BB;// 0x0AC8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_88D8054148A4849E42CA36923D2DD28B;// 0x0B08(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9C693C3546F8B028FCB498A1C2511C40;// 0x0BA8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1AEBC39441BAC9DF146725A259A173FB;// 0x0C98(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_64F177124A5FCAD02CC10F870B3FC107;// 0x0D38(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_376DF5AC45440FEB1AA3EB91F2EC0886;// 0x0DD8(0x00F0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_EA4368EB424D0E16898786978E030346;// 0x0EC8(0x01E0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_9667ADC14DDAAB8E39322B9D369C08DC;// 0x10A8(0x0090)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D0AEEB05484EBFF6D9E65985E38B3556;// 0x1138(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_839B693F41B0EB2FE5165BA94B380B89;// 0x1210(0x00A0)
	float                                              RandomAnimStartPosition_01;                               // 0x12B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomAnimStartPosition_02;                               // 0x12B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimOffsetTurnHorizontally;                                // 0x12B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimOffsetTurnVertically;                                  // 0x12BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_NPC_03.AB_NPC_03_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AB_NPC_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
