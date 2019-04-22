#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_CloseInteractiveObject_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C
// 0x0179 (0x04E1 - 0x0368)
class ABP_CloseInteractiveObject_Base_C : public AWTLInteractiveBlockedObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               BlockingBox;                                              // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             LocationDust;                                             // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Cover;                                                    // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             OpenArrow;                                                // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<struct FWTLBPIdentityItemType>              NeedItems;                                                // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FDS_ArtefactObjectID>                ArtefactObjectID;                                         // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class ABP_CloseInteractiveObject_Base_C*>   ListObjectOpen;                                           // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	bool                                               IsTakeItemFromCharacter;                                  // 0x03D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsOpensFromTheBackSide;                                   // 0x03D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsCloseIfCharacterDepart;                                 // 0x03D2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPlayAnimIfObjectClosed;                                 // 0x03D3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsCanBeUsePicklock;                                       // 0x03D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPlayParticle;                                           // 0x03D5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
	struct FWTLBPIdentityItemType                      PicklockObject;                                           // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChancePicklock;                                           // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x03E8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       TextForUsePicklock;                                       // 0x0400(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       TextFailOpenObject;                                       // 0x0418(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       TextChance;                                               // 0x0430(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       TextClose;                                                // 0x0448(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       TextWarning;                                              // 0x0460(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              DurationOpenObject;                                       // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DelayForCloseObject;                                      // 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngleRotation;                                            // 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	class UFMODEvent*                                  FE_ObjectLockClosed;                                      // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFMODEvent*                                  FE_ObjectLockOpened;                                      // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFMODEvent*                                  FE_ObjectOpens;                                           // 0x0498(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFMODEvent*                                  FE_ObjectCloses;                                          // 0x04A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFMODEvent*                                  FE_ObjectClosed;                                          // 0x04A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFMODEvent*                                  FE_Picklock;                                              // 0x04B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFMODEvent*                                  FE_PicklockBreak;                                         // 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      State;                                                    // 0x04C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ClientState;                                              // 0x04C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsCanOpenItems;                                           // 0x04C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsCanOpenArtefactId;                                      // 0x04C3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsCanOpenPicklock;                                        // 0x04C4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsCanOpenObject;                                          // 0x04C5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x04C6(0x0002) MISSED OFFSET
	int                                                CountObjects;                                             // 0x04C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TotalChance;                                              // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CurrentRotation;                                          // 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StartRotation;                                            // 0x04D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AWTLCharacter*                               TargetCharacter;                                          // 0x04D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ParticleIsPlayed;                                         // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C"));
		return ptr;
	}


	void IsCanOpensFromTheBackSide(class AWTLCharacter* Character, bool* Result);
	void OpenObject(class AWTLCharacter* CharacterOpenedObject, unsigned char SetState);
	void OpenAdditionalObjects();
	void IsOnlyPicklock(bool* Result);
	void PlayAction(class UFMODEvent* Event);
	void CheckUse();
	float BPGetActivationTime(class AWTLCharacter* Character);
	struct FString BPGetDisplayText(class AWTLCharacter* Character);
	bool BPCanBeUsed(class AWTLCharacter* Character);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnOpenObject(unsigned char State);
	void BPSetHighlightState(bool Value);
	void BPOnStartInteraction(class AWTLCharacter* Character);
	void BPUse(class AWTLCharacter* Character);
	void BPOnFinishInteraction(class AWTLCharacter* Character, bool Success);
	void ReceiveTick(float DeltaSeconds);
	void OnCloseObject(unsigned char State);
	void ExecuteUbergraph_BP_CloseInteractiveObject_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
