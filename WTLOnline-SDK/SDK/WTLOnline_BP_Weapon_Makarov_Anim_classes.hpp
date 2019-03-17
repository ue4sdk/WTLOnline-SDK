#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Weapon_Makarov_Anim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Weapon_Makarov_Anim.BP_Weapon_Makarov_Anim_C
// 0x06D0 (0x0AC0 - 0x03F0)
class UBP_Weapon_Makarov_Anim_C : public UWTLWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CBC3E49E4FBDE5FC9661D2A4CCE713B7;      // 0x03F8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E32251D34766B63B32E2EFA40F20B2B5;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_020DD85347E527918C4A7AB20A8CBC22;// 0x0480(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DD0F38E441D9632C5D86E1940781A24B;// 0x04C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_64898C6947040E6275A2AEB84B6A805A;// 0x0568(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F24B693E4CE296261F0BEBB12C1F01C8;// 0x05A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_702406764AF1AC30D9B9F187A4A01DEF;// 0x0648(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7C12DC024D676B3225939E9F46E66400;// 0x0688(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E3EFF98D4809F68F88F88AB5C2F5C209;      // 0x0768(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EFA40D6B4F2B9201D89056A7B276DDD1;// 0x07D0(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C89D4CA74FF48B4B287EC683B34A4432;// 0x0908(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DE12811A479C00C6A2851D9B376B7455;// 0x0948(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_898EB2BE4A62D1495B106A9114638FB5;// 0x0988(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("AnimBlueprintGeneratedClass BP_Weapon_Makarov_Anim.BP_Weapon_Makarov_Anim_C"));
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Weapon_Makarov_Anim_AnimGraphNode_ModifyBone_898EB2BE4A62D1495B106A9114638FB5();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Weapon_Makarov_Anim_AnimGraphNode_ModifyBone_EFA40D6B4F2B9201D89056A7B276DDD1();
	void ExecuteUbergraph_BP_Weapon_Makarov_Anim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
