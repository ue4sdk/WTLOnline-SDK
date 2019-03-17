#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_HUD_EventNotificator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_EventNotificator.UI_HUD_EventNotificator_C
// 0x0008 (0x0258 - 0x0250)
class UUI_HUD_EventNotificator_C : public UWTLHUDEventNotificator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass UI_HUD_EventNotificator.UI_HUD_EventNotificator_C"));
		return ptr;
	}


	void BndEvt__tbChatMessage_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void ExecuteUbergraph_UI_HUD_EventNotificator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
