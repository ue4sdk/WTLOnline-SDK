#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_EventPointBase_FindItem_SearchLostKeys_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C
// 0x0028 (0x0430 - 0x0408)
class ABP_EventPointBase_FindItem_SearchLostKeys_C : public ABP_EventPointBase_FindItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class ABP_SpawnPointForMonster_C*>          SpawnPoints;                                              // 0x0410(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	class ABP_EventPickUP_Keys_Rafik_C*                Pickups;                                                  // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AWTLCharacter*                               Character;                                                // 0x0428(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_EventPointBase_FindItem_SearchLostKeys.BP_EventPointBase_FindItem_SearchLostKeys_C"));
		return ptr;
	}


	void UserConstructionScript();
	void K2_OnStart();
	void K2_OnFinish(bool Successful);
	void OnFindKey(class AWTLCharacter* Character);
	void ExecuteUbergraph_BP_EventPointBase_FindItem_SearchLostKeys(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
