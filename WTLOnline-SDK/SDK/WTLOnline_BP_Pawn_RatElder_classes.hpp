#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_Pawn_RatElder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pawn_RatElder.BP_Pawn_RatElder_C
// 0x0040 (0x1010 - 0x0FD0)
class ABP_Pawn_RatElder_C : public AWTLMonsterPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFMODAudioComponent*                         TakeDamage;                                               // 0x0FD8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Counter1;                                                 // 0x0FE0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Counter2;                                                 // 0x0FE4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Counter3;                                                 // 0x0FE8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Counter4;                                                 // 0x0FEC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OldRandom;                                                // 0x0FF0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Random;                                                   // 0x0FF4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Counter5;                                                 // 0x0FF8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0FFC(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        MonsterColor;                                             // 0x1000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Pawn_RatElder.BP_Pawn_RatElder_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnHealthChanged(float Delta);
	void ReceivePossessed(class AController* NewController);
	void OnActionTrigger(const struct FName& ActionName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Pawn_RatElder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
