#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_Neutral_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_NPC_Neutral_02.AB_NPC_Neutral_02_C
// 0x0E0C (0x11AC - 0x03A0)
class UAB_NPC_Neutral_02_C : public UWTLNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_232177B945E2620096319097F10C0B43;      // 0x03A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7E1EC3EE4CBAD06F428E1A982CF4B143;// 0x03E8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3CE3EF594A8D0A494CE4E8B721F2924B;// 0x0488(0x00F0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B80BEB1B4576ECF933D2BE9F69B4FE73; // 0x0580(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_9E282CC045DE6D8B548680AE99821BD8; // 0x07C0(0x0240)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_D244A03A4584481BE588D3B8DB25C1D9;  // 0x0A00(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7BE887564D74C57444AD38BF59FCE824;// 0x0B28(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BEBC5D864D3B4ECDF0E652970E137182;// 0x0B68(0x0040)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DE8FD1104F56A2114D0C2B929C7E21A9;// 0x0BA8(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4C27F5E54F6D1B96A700E182DEA3556C;// 0x0C80(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13C5E23B4CD009D8B726339445CDE64E;// 0x0D58(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D175B55B4E022EDDF05A1D83B38E7D63;// 0x0DA0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_111C00654BC4DCE9F81CF0ADF8593B27;// 0x0DE8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3271435A4DFA52649C5DBF9EF4B8E756;// 0x0E88(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB2E359844CE1FD55B22C8A9F18BCF36;// 0x0F78(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B31DEC2440F283AC26957BB947EAA932;// 0x1018(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_085B71644F18DA419BF83286E592DC79;// 0x10B8(0x00F0)
	float                                              RandomAnimStartPosition_01;                               // 0x11A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_NPC_Neutral_02.AB_NPC_Neutral_02_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AB_NPC_Neutral_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
