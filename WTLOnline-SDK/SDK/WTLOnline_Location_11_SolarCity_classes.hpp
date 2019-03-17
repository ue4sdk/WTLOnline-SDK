#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Location_11_SolarCity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Location_11_SolarCity.Location_11_SolarCity_C
// 0x0010 (0x06A8 - 0x0698)
class ALocation_11_SolarCity_C : public AWTLDynamicSkyLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0698(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class AUltra_Dynamic_Sky_BP_C*                     Ultra_Dynamic_Sky_ExecuteUbergraph_Location_11_SolarCity_RefProperty;// 0x06A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Location_11_SolarCity.Location_11_SolarCity_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Location_11_SolarCity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
