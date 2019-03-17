#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AnimNotify_FMODPlayEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_FMODPlayEvent.AnimNotify_FMODPlayEvent_C
// 0x0020 (0x0058 - 0x0038)
class UAnimNotify_FMODPlayEvent_C : public UAnimNotify
{
public:
	bool                                               bFollow;                                                  // 0x0038(0x0001) (CPF_Edit, CPF_ConstParm, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     AttachName;                                               // 0x0040(0x0010) (CPF_Edit, CPF_ConstParm, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UFMODEvent*                                  Event;                                                    // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AnimNotify_FMODPlayEvent.AnimNotify_FMODPlayEvent_C"));
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
