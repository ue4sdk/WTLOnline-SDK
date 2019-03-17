#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AB_CharacterPreview_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AB_CharacterPreview.AB_CharacterPreview_C
// 0x2004 (0x23F4 - 0x03F0)
class UAB_CharacterPreview_C : public UWTLCharacterPreviewAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9B9BEABB4A1CFC75465061A3DDA4B92F;  // 0x03F8(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4F5BA1924B49B25F257C93B15E5597D1;// 0x0520(0x0128)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3F4352974EE882247559F7BC4EDD4FEF;  // 0x0648(0x0128)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9B0D64A445F44450B55863B678A99D8F;// 0x0770(0x0040)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_DCD1FD1D4FE60DF22CE014A9CF8E1720;  // 0x07B0(0x0128)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_704D6E114DA5207394EB7A9B00574F6E;// 0x08D8(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C635D48F4610E36BC908C8BBC13CEB75;// 0x0918(0x00D8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8; // 0x09F0(0x0240)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12; // 0x0C30(0x0240)
	struct FAnimNode_Root                              AnimGraphNode_Root_7D61B8A84A7BD8323CA7ECBD0AA868C0;      // 0x0E70(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_B4D887C94C285705FF14F3A45DF8A445;// 0x0EB0(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_661E4527484C5C4F80E996BF63C52793;// 0x0FD8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EE28D3F0467A7FAB58DAA096ACDC6BAA;// 0x10A8(0x00A0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_B462CF1044476FA4AE42C2813A66459A;// 0x1148(0x0068)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_04C6148C4399400CA1544EBE12099B15;  // 0x11B0(0x0128)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41F8DC3A44978DC5C7A0EAA1139480A1;// 0x12D8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_94238DA54601670FD724189CC6547518;// 0x1410(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F90CED4F49F68E2C573D3B92E2FBCA36;// 0x1548(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6739679642C774E50A9F8CAED73771DC;// 0x1680(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_179C17AE4FD63BF3E8B2CBADBDF4EF57;// 0x17B8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B60DF8F1491F07A6FA8A248633BF0C78;// 0x18F0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0C7C0FCA4868D4DEB38BF0BE9281B425;// 0x1A28(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FE0A96B745AFE0962C87899E7B51EC13;// 0x1B60(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2CD5EC10408555B14F818A866B220A65;// 0x1C98(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_978EEB5C47FA35924E792B84A42482AD;// 0x1DD0(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C0DFD9E34C66212DAB2343852EB0E39A;// 0x1F08(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_31D5C8024E6A341A9CBC74B8B9ED8335;// 0x2040(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F1DF24A5487B4A0755BD6699F0216FFD;// 0x2178(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_091583DF44F61587CE43139C51A622D7;// 0x22B0(0x0138)
	struct FVector                                     BackpackTranslation;                                      // 0x23E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass AB_CharacterPreview.AB_CharacterPreview_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_1403483D44987FD9EB16E0850E4DB2D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_CharacterPreview_AnimGraphNode_TwoBoneIK_BD3A9AC846E9E5944DCE239D83EE7D12();
	void UpdateComplexity(unsigned char BodyType);
	void ExecuteUbergraph_AB_CharacterPreview(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
