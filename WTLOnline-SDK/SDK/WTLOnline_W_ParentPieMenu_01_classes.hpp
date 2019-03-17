#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_W_ParentPieMenu_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_ParentPieMenu_01.W_ParentPieMenu_01_C
// 0x00E8 (0x02F0 - 0x0208)
class UW_ParentPieMenu_01_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FLinearColor                                RingColor;                                                // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                HoveredColor;                                             // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReturnBack;                                             // 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FKey                                        GamePad_X_Axis_Key;                                       // 0x0240(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FKey                                        GamePad_Y_Axis_Key;                                       // 0x0258(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FKey                                        Keyboard_Left_Key;                                        // 0x0270(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FKey                                        Keyboard_Right_Key;                                       // 0x0288(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FKey                                        Keyboard_Up_Key;                                          // 0x02A0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FKey                                        Keyboard_Down_Key;                                        // 0x02B8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FKey                                        Pressed_Key;                                              // 0x02D0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<EControlInput>                         ControlInput;                                             // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsMousePressed;                                           // 0x02E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsWorkOnlyHovered;                                        // 0x02EA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02EB(0x0001) MISSED OFFSET
	int                                                Diametr;                                                  // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass W_ParentPieMenu_01.W_ParentPieMenu_01_C"));
		return ptr;
	}


	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void SetParrentParmetrs(class UW_ParentPieMenu_01_C* ParentWidget);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsPressedSimulation();
	float KeyBoardSimulation();
	float GamePadSimulation();
	void UpdateColor(bool* IsSuccess);
	void SetColor(const struct FLinearColor& RingColor, const struct FLinearColor& HoveredColor, bool* IsSuccess);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_ParentPieMenu_01(int EntryPoint);
	void OnReturnBack__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
