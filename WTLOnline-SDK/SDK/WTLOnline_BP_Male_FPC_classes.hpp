#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Male_FPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Male_FPC.BP_Male_FPC_C
// 0x004A (0x172A - 0x16E0)
class ABP_Male_FPC_C : public AWTLCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x16E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*         AIPerceptionStimuliSource;                                // 0x16E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        FlashlightBackplate;                                      // 0x16F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                        // 0x16F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              EyeBlink_NewTrack_0_314643A648B6C5BD1513ADABC0DC0988;     // 0x1700(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EyeBlink__Direction_314643A648B6C5BD1513ADABC0DC0988;     // 0x1704(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1705(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EyeBlink;                                                 // 0x1708(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_4F0570FC49EB6A568CBAEE83D70FD335;   // 0x1710(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_4F0570FC49EB6A568CBAEE83D70FD335;   // 0x1714(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1715(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x1718(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x1720(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      LocalComplesion;                                          // 0x1728(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsLockingRotation;                                        // 0x1729(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Male_FPC.BP_Male_FPC_C"));
		return ptr;
	}


	void UserConstructionScript();
	void EyeBlink__FinishedFunc();
	void EyeBlink__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Male_FPC(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
