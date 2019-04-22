// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_Bartender_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_Bartender.BP_NPC_Bartender_C.CheckReplicaForShowMainDialog
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    InReplicaArrayForShowMainDialog (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            InReplicaID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::CheckReplicaForShowMainDialog(class AWTLCharacter* Character, int InReplicaID, TArray<int>* InReplicaArrayForShowMainDialog)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.CheckReplicaForShowMainDialog"));

	struct
	{
		class AWTLCharacter*           Character;
		TArray<int>                    InReplicaArrayForShowMainDialog;
		int                            InReplicaID;
	} params;

	params.Character = Character;
	params.InReplicaID = InReplicaID;

	UObject::ProcessEvent(fn, &params);

	if (InReplicaArrayForShowMainDialog != nullptr)
		*InReplicaArrayForShowMainDialog = params.InReplicaArrayForShowMainDialog;
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowDialogQuest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWTLQuestReplicas       InQuestReplica                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_NPC_Bartender_C::ShowDialogQuest(class AWTLCharacter* Character, const struct FWTLQuestReplicas& InQuestReplica)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowDialogQuest"));

	struct
	{
		class AWTLCharacter*           Character;
		struct FWTLQuestReplicas       InQuestReplica;
	} params;

	params.Character = Character;
	params.InQuestReplica = InQuestReplica;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetReplicaArrayMainDialog
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    IncharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    CharacterReplicaArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NPC_Bartender_C::GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetReplicaArrayMainDialog"));

	struct
	{
		class AWTLCharacter*           Character;
		TArray<int>                    IncharacterReplicaArray;
		TArray<int>                    CharacterReplicaArray;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (IncharacterReplicaArray != nullptr)
		*IncharacterReplicaArray = params.IncharacterReplicaArray;
	if (CharacterReplicaArray != nullptr)
		*CharacterReplicaArray = params.CharacterReplicaArray;
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetReplicaArrayCanTakeQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    IncharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    CharacterReplicaArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NPC_Bartender_C::GetReplicaArrayCanTakeQuest(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetReplicaArrayCanTakeQuest"));

	struct
	{
		class AWTLCharacter*           Character;
		TArray<int>                    IncharacterReplicaArray;
		TArray<int>                    CharacterReplicaArray;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (IncharacterReplicaArray != nullptr)
		*IncharacterReplicaArray = params.IncharacterReplicaArray;
	if (CharacterReplicaArray != nullptr)
		*CharacterReplicaArray = params.CharacterReplicaArray;
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetReplicaArrayCanCompleteAnyQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    IncharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    CharacterReplicaArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NPC_Bartender_C::GetReplicaArrayCanCompleteAnyQuest(class AWTLCharacter* Character, TArray<int>* IncharacterReplicaArray, TArray<int>* CharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetReplicaArrayCanCompleteAnyQuest"));

	struct
	{
		class AWTLCharacter*           Character;
		TArray<int>                    IncharacterReplicaArray;
		TArray<int>                    CharacterReplicaArray;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (IncharacterReplicaArray != nullptr)
		*IncharacterReplicaArray = params.IncharacterReplicaArray;
	if (CharacterReplicaArray != nullptr)
		*CharacterReplicaArray = params.CharacterReplicaArray;
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ExecutingAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EWTLNPCReplicaAction           Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            QuestID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentReplica                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NPCReplicaID                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    IncharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_NPC_Bartender_C::ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplica, int NPCReplicaID, TArray<int>* IncharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ExecutingAction"));

	struct
	{
		class AWTLCharacter*           Character;
		EWTLNPCReplicaAction           Action;
		int                            QuestID;
		int                            CurrentReplica;
		int                            NPCReplicaID;
		TArray<int>                    IncharacterReplicaArray;
	} params;

	params.Character = Character;
	params.Action = Action;
	params.QuestID = QuestID;
	params.CurrentReplica = CurrentReplica;
	params.NPCReplicaID = NPCReplicaID;

	UObject::ProcessEvent(fn, &params);

	if (IncharacterReplicaArray != nullptr)
		*IncharacterReplicaArray = params.IncharacterReplicaArray;
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowAvailableQuestsDialog
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::ShowAvailableQuestsDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowAvailableQuestsDialog"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetRandomReplicaID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    ReplicaIDArray                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ReplicaID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::GetRandomReplicaID(TArray<int>* ReplicaIDArray, int* ReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.GetRandomReplicaID"));

	struct
	{
		TArray<int>                    ReplicaIDArray;
		int                            ReplicaID;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ReplicaIDArray != nullptr)
		*ReplicaIDArray = params.ReplicaIDArray;
	if (ReplicaID != nullptr)
		*ReplicaID = params.ReplicaID;
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowMainDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Arg                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void ABP_NPC_Bartender_C::ShowMainDialog(class AWTLCharacter* Character, const struct FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowMainDialog"));

	struct
	{
		class AWTLCharacter*           Character;
		struct FString                 Arg;
	} params;

	params.Character = Character;
	params.Arg = Arg;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowStartDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::ShowStartDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ShowStartDialog"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NPC_Bartender_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_Bartender_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_Bartender_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_NPC_Bartender_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.OnPlayerSelectReplica
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReplicaID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.OnPlayerSelectReplica"));

	struct
	{
		class AWTLCharacter*           Character;
		int                            ReplicaID;
	} params;

	params.Character = Character;
	params.ReplicaID = ReplicaID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.OnNPCDialogActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::OnNPCDialogActivated(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.OnNPCDialogActivated"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Bartender.BP_NPC_Bartender_C.ExecuteUbergraph_BP_NPC_Bartender
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Bartender_C::ExecuteUbergraph_BP_NPC_Bartender(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Bartender.BP_NPC_Bartender_C.ExecuteUbergraph_BP_NPC_Bartender"));

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
