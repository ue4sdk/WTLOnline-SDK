#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_ElectronicBait_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElectronicBait.BP_ElectronicBait_C
// 0x0018 (0x04C8 - 0x04B0)
class ABP_ElectronicBait_C : public AWTLElectronicBait
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFMODAudioComponent*                         NoiseComponent;                                           // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    Particles_Sparks;                                         // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ElectronicBait.BP_ElectronicBait_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnConditionChanged(float ConditionValue);
	void OnEnergyChanged(float EnergyValue);
	void K2_OnDestroyed();
	void ExecuteUbergraph_BP_ElectronicBait(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
