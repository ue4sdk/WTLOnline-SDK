#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_NPC_MihalichSitting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C
// 0x1534 (0x18D4 - 0x03A0)
class UAB_NPC_MihalichSitting_C : public UWTLNPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7EAF4E5B411B315CD89C26AFD213B4B5;      // 0x03A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5B735D4E477A3A44A6242BB9A043968C;// 0x03E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A9308CA4996D33C735DC3B0D83FD21B;// 0x0430(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DF1B9AD46E04B3E2A7DC0A7C4693A52;// 0x0478(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA0F07F4418F7C0EBA61F49568112D65;// 0x04C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BB8E5D7846A7699918D5B98BF6F77FB2;// 0x0508(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C221D5054F86A913DBA890BB6A488F26;// 0x05A8(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E70F354C4CE84B02D89E46B57504B16E;      // 0x05E8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_214D3F394B67835BE20E6490B81030F3;// 0x0650(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_03270746450F8FE816850BB54682173A;// 0x06F0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_40815E9B43FAE3CFDB1A3E918F04D617;// 0x0730(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_14A367E241E9FE82951F1391A8FB6E64;// 0x07D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_81BE1CB844D7D8B6E1F3FB83F3506AFD;// 0x0810(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_89A276D74F25F5F8DDE9B5816B519C9C;// 0x08B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8F33B4434DA70424E99AD4860575A7F7;// 0x08F0(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_ADFA124C490445616B027DA443677318;// 0x09D0(0x00F0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C92070E5448FD4D4CE8D6BB6F8A960D1; // 0x0AC0(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_72F20B71468DE00F88F725B290DB3A2B; // 0x0D00(0x0240)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E5A37C614C59CA3739C53994E6C25170;  // 0x0F40(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F3438C5445B2987BDE7EF19F5610E72E;// 0x1068(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1FD1873149ACC51DFCA8409EA876FEE3;// 0x10A8(0x0040)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DF287619478B4C778099C195F619770C;// 0x10E8(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_286E50F241614BDABA0528AA660A631A;// 0x11C0(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7BA849D84BF443D86865A8A47452AC70;// 0x1298(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_43DA019849DFC2D1CF9C62804915E4A5;// 0x12E0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10C7E3DB44CD6337A52D7E861854618C;// 0x1328(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_06C91C02429C7D1756F94C9ABA7F1421;// 0x13C8(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8FC6366F414551641F6E0DB2E856A964;// 0x14B8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1632A82F40E7560AB58CAB9FD2257EA4;// 0x1558(0x00A0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1FDDE37B468174DC57AB7F9E6A88008D;// 0x15F8(0x00F0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_B70206AE49787833395D7BA0B9FEAB74;// 0x16E8(0x01E0)
	float                                              AimOffsetTurnHorizontally;                                // 0x18C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimOffsetTurnVertically;                                  // 0x18CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomAnimStartPosition_01;                               // 0x18D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_NPC_MihalichSitting.AB_NPC_MihalichSitting_C"));
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AB_NPC_MihalichSitting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
