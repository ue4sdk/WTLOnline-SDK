#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_UI_PDA_Menu_Button_NVIDIAHighlights_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C
// 0x0010 (0x04E8 - 0x04D8)
class UUI_PDA_Menu_Button_NVIDIAHighlights_C : public UWTLPDAMenuButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_PDA_Menu_Button_NVIDIAHighlights.UI_PDA_Menu_Button_NVIDIAHighlights_C");
		return ptr;
	}


	void OnFailure_3914E4A349E992C494539BBBCF570A8C(EGfeSDKReturnCode GfeSdkReturnCode);
	void OnSuccess_3914E4A349E992C494539BBBCF570A8C(EGfeSDKReturnCode GfeSdkReturnCode, int NumberOfHighlights);
	void BndEvt__btnApp_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
	void K2_OnMenuOpened();
	void ExecuteUbergraph_UI_PDA_Menu_Button_NVIDIAHighlights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
