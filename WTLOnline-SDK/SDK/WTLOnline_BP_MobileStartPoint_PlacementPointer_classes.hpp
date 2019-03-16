#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MobileStartPoint_PlacementPointer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C
// 0x0020 (0x0358 - 0x0338)
class ABP_MobileStartPoint_PlacementPointer_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UClass*                                      NewVar_1;                                                 // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MobileStartPoint_PlacementPointer.BP_MobileStartPoint_PlacementPointer_C");
		return ptr;
	}


	void CanBePlaced(bool Value);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MobileStartPoint_PlacementPointer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
