// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_CloseInteractiveObject_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.IsCanOpensFromTheBackSide
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::IsCanOpensFromTheBackSide(class AWTLCharacter* Character, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.IsCanOpensFromTheBackSide");

	struct
	{
		class AWTLCharacter*           Character;
		bool                           Result;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OpenObject
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           CharacterOpenedObject          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  SetState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::OpenObject(class AWTLCharacter* CharacterOpenedObject, unsigned char SetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OpenObject");

	struct
	{
		class AWTLCharacter*           CharacterOpenedObject;
		unsigned char                  SetState;
	} params;

	params.CharacterOpenedObject = CharacterOpenedObject;
	params.SetState = SetState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OpenAdditionalObjects
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CloseInteractiveObject_Base_C::OpenAdditionalObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OpenAdditionalObjects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.IsOnlyPicklock
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::IsOnlyPicklock(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.IsOnlyPicklock");

	struct
	{
		bool                           Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.PlayAction
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFMODEvent*              Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::PlayAction(class UFMODEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.PlayAction");

	struct
	{
		class UFMODEvent*              Event;
	} params;

	params.Event = Event;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.CheckUse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CloseInteractiveObject_Base_C::CheckUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.CheckUse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPGetActivationTime
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ABP_CloseInteractiveObject_Base_C::BPGetActivationTime(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPGetActivationTime");

	struct
	{
		class AWTLCharacter*           Character;
		float                          ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPGetDisplayText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString ABP_CloseInteractiveObject_Base_C::BPGetDisplayText(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPGetDisplayText");

	struct
	{
		class AWTLCharacter*           Character;
		struct FString                 ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPCanBeUsed
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_CloseInteractiveObject_Base_C::BPCanBeUsed(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPCanBeUsed");

	struct
	{
		class AWTLCharacter*           Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CloseInteractiveObject_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CloseInteractiveObject_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OnOpenObject
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::OnOpenObject(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OnOpenObject");

	struct
	{
		unsigned char                  State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPSetHighlightState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::BPSetHighlightState(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPSetHighlightState");

	struct
	{
		bool                           Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPOnStartInteraction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::BPOnStartInteraction(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPOnStartInteraction");

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPUse
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::BPUse(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPUse");

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPOnFinishInteraction
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::BPOnFinishInteraction(class AWTLCharacter* Character, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.BPOnFinishInteraction");

	struct
	{
		class AWTLCharacter*           Character;
		bool                           Success;
	} params;

	params.Character = Character;
	params.Success = Success;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OnCloseObject
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::OnCloseObject(unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.OnCloseObject");

	struct
	{
		unsigned char                  State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.ExecuteUbergraph_BP_CloseInteractiveObject_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CloseInteractiveObject_Base_C::ExecuteUbergraph_BP_CloseInteractiveObject_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CloseInteractiveObject_Base.BP_CloseInteractiveObject_Base_C.ExecuteUbergraph_BP_CloseInteractiveObject_Base");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
