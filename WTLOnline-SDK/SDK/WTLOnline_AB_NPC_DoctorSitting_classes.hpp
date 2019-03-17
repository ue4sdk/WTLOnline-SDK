#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_DoctorSitting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_NPC_DoctorSitting.AB_NPC_DoctorSitting_C
// 0x1534 (0x18D4 - 0x03A0)
class UAB_NPC_DoctorSitting_C : public UWTLNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_92BFE9FB43ED0863D1C499AF93E89679;      // 0x03A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9F0755D64FB27F2748E182B6A6E6B75F;// 0x03E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F04EF9834E607A5130F107B95DF259DC;// 0x0430(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFFB40974DCB49E233AF279D5B29D90E;// 0x0478(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4DC6D2E4D144CA52649159E129B1FD4;// 0x04C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD8209954D88B2B697A3399EACFB89F1;// 0x0508(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_98E7639D458BC4ECC4068D9353DF8D07;// 0x05A8(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9703B4D24A0A002E52B94FBF74066099;      // 0x05E8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96405746494D5A93CF70FE831C59D8D4;// 0x0650(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D47C833E427790F830223F98771F23AE;// 0x06F0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8A7135074078796D13756E8E1C2DC682;// 0x0730(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14EF3B3A42964A74DC705C81D36E3B26;// 0x07D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D7631A5A46A0120121310395633D2D7B;// 0x0810(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BC7130F14E1BAA23DF7899877883F8E6;// 0x08B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5A06B4F9461F71AB48E0D79CF4087A20;// 0x08F0(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B68BB04A42DE8D9037923E9191633AD3;// 0x09D0(0x00F0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_F6D3053C4CA50759A29C669FC9E668A8; // 0x0AC0(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_0F620D4040BBFF97B4850BABE03B5FE5; // 0x0D00(0x0240)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_EAF7494448E35A2AF074C38E13C3510E;  // 0x0F40(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EEFC476B43789F456B9F479D52411F4B;// 0x1068(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2751007C4F4B87D0B709F6AC3AD03660;// 0x10A8(0x0040)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_7DA88F7B4E1843CBF0227CBBD2F3D960;// 0x10E8(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2968C0E54E06C7FAD6B68AA40C95F910;// 0x11C0(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77A3C0E24F737A67FD9225AE34FBED7C;// 0x1298(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D9B5DB004E5680953276D1998C5413D9;// 0x12E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA7A5CCB494B5DE13BDA80B86D567277;// 0x1328(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_D67001CB4B1BCF24578B4298A633FE70;// 0x13C8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0E3E2F8D4D71D2ECB05D98B786A4B414;// 0x14B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E432D55F489ECFE6CC7C5BAE100E29F2;// 0x1558(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_60B7046F471F9FC161DAD8AC349BF9B7;// 0x15F8(0x00F0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_CC2DA6A742AA9D90ED8FF39AB389F786;// 0x16E8(0x01E0)
	float                                              AimOffsetTurnHorizontally;                                // 0x18C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimOffsetTurnVertically;                                  // 0x18CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomAnimStartPosition_01;                               // 0x18D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_NPC_DoctorSitting.AB_NPC_DoctorSitting_C"));
		return ptr;
	}


	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_AB_NPC_DoctorSitting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
