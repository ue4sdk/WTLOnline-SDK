#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_NPC_01.AB_NPC_01_C
// 0x121C (0x15BC - 0x03A0)
class UAB_NPC_01_C : public UWTLNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9384028C498D2B8021DEAD8E834C0B10;      // 0x03A8(0x0040)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_91286A674256830281F8FB89FEC50386;// 0x03E8(0x00D8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_FC28C4F94E942C5CD5594EB61B01AEFA;// 0x04C0(0x01E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_0CE832974BA6873E4676A78652DE122E;// 0x06A0(0x00D8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5254EBA643D235DA35979C8343924957;// 0x0778(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DE08DF9F4266DBC5EB82E5A239703527;// 0x0818(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AE7F6E49485EE85E3AF193AA3203337E;// 0x0908(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8CDCC75848F7C36EFA6B4BB507EDE645;// 0x09A8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_93437AB1413D1893AC08AC863E6F1302;// 0x0A48(0x00A0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_705C35BC45FE5C6E4706B9B0F71AE56C;// 0x0AE8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_15D244FF4F19E0DD56AA8B81946803E0;// 0x0BB8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_9BB8BB1345C6E616BEFEF3A109CAA570;// 0x0C58(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B006D5234D637F9556BCA585ED7F7FD2;// 0x0D48(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AF1D557B44D3A88A159244A8D51E7B03;// 0x0DE8(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_26783AF64A6A3F07EACD9C86AE0AF7FE;// 0x0E88(0x00F0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0F78(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_AD10EEAC4705AE9D1C31C9B8F9ED47CA; // 0x0F80(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_850C31914DF50090BAEBF4A5B90590FA; // 0x11C0(0x0240)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_77E1ABAA424AF4535EEDC19407939527;  // 0x1400(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A3F933014C833FDBB51DB99186EFAAD2;// 0x1528(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9E07792F486CA414EC382ABBD20EC67B;// 0x1568(0x0040)
	float                                              RandomAnimStartPosition_01;                               // 0x15A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomAnimStartPosition_02;                               // 0x15AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomAnimStartPosition_03;                               // 0x15B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimOffsetTurnHorizontally;                                // 0x15B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimOffsetTurnVertically;                                  // 0x15B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass AB_NPC_01.AB_NPC_01_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AB_NPC_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
