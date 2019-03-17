// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_Lamey_Kostya_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.CanDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_NPC_Lamey_Kostya_C::CanDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.CanDialog"));

	struct
	{
		class AWTLCharacter*           Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.CheckReplicaTellMe
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InReplicaID                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::CheckReplicaTellMe(class AWTLCharacter* Character, int InReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.CheckReplicaTellMe"));

	struct
	{
		class AWTLCharacter*           Character;
		int                            InReplicaID;
	} params;

	params.Character = Character;
	params.InReplicaID = InReplicaID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowDialogTellMe
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::ShowDialogTellMe(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowDialogTellMe"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowAvailableQuestsDialog
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::ShowAvailableQuestsDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowAvailableQuestsDialog"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetReplicaArrayMainDialog
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    InCharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    CharacterReplicaArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NPC_Lamey_Kostya_C::GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetReplicaArrayMainDialog"));

	struct
	{
		class AWTLCharacter*           Character;
		TArray<int>                    InCharacterReplicaArray;
		TArray<int>                    CharacterReplicaArray;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (InCharacterReplicaArray != nullptr)
		*InCharacterReplicaArray = params.InCharacterReplicaArray;
	if (CharacterReplicaArray != nullptr)
		*CharacterReplicaArray = params.CharacterReplicaArray;
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetReplicaArrayCanTakeQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    InCharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    CharacterReplicaArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NPC_Lamey_Kostya_C::GetReplicaArrayCanTakeQuest(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetReplicaArrayCanTakeQuest"));

	struct
	{
		class AWTLCharacter*           Character;
		TArray<int>                    InCharacterReplicaArray;
		TArray<int>                    CharacterReplicaArray;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (InCharacterReplicaArray != nullptr)
		*InCharacterReplicaArray = params.InCharacterReplicaArray;
	if (CharacterReplicaArray != nullptr)
		*CharacterReplicaArray = params.CharacterReplicaArray;
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetReplicaArrayCanCompleteAnyQuest
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    InCharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    CharacterReplicaArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NPC_Lamey_Kostya_C::GetReplicaArrayCanCompleteAnyQuest(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetReplicaArrayCanCompleteAnyQuest"));

	struct
	{
		class AWTLCharacter*           Character;
		TArray<int>                    InCharacterReplicaArray;
		TArray<int>                    CharacterReplicaArray;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	if (InCharacterReplicaArray != nullptr)
		*InCharacterReplicaArray = params.InCharacterReplicaArray;
	if (CharacterReplicaArray != nullptr)
		*CharacterReplicaArray = params.CharacterReplicaArray;
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ExecutingAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EWTLNPCReplicaAction           Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            QuestID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentReplicaID               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InNPCReplicaID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    InCharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_NPC_Lamey_Kostya_C::ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplicaID, int InNPCReplicaID, TArray<int>* InCharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ExecutingAction"));

	struct
	{
		class AWTLCharacter*           Character;
		EWTLNPCReplicaAction           Action;
		int                            QuestID;
		int                            CurrentReplicaID;
		int                            InNPCReplicaID;
		TArray<int>                    InCharacterReplicaArray;
	} params;

	params.Character = Character;
	params.Action = Action;
	params.QuestID = QuestID;
	params.CurrentReplicaID = CurrentReplicaID;
	params.InNPCReplicaID = InNPCReplicaID;

	UObject::ProcessEvent(fn, &params);

	if (InCharacterReplicaArray != nullptr)
		*InCharacterReplicaArray = params.InCharacterReplicaArray;
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowDialogQuest
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FWTLQuestReplicas       InQuestReplica                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_NPC_Lamey_Kostya_C::ShowDialogQuest(class AWTLCharacter* Character, const struct FWTLQuestReplicas& InQuestReplica)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowDialogQuest"));

	struct
	{
		class AWTLCharacter*           Character;
		struct FWTLQuestReplicas       InQuestReplica;
	} params;

	params.Character = Character;
	params.InQuestReplica = InQuestReplica;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetRandomReplicaID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    ReplicaIdArray                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ReplicaID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::GetRandomReplicaID(TArray<int>* ReplicaIdArray, int* ReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.GetRandomReplicaID"));

	struct
	{
		TArray<int>                    ReplicaIdArray;
		int                            ReplicaID;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ReplicaIdArray != nullptr)
		*ReplicaIdArray = params.ReplicaIdArray;
	if (ReplicaID != nullptr)
		*ReplicaID = params.ReplicaID;
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowStartDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::ShowStartDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ShowStartDialog"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NPC_Lamey_Kostya_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.Timeline_0_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_Lamey_Kostya_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.Timeline_0_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.Timeline_0_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_Lamey_Kostya_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.Timeline_0_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.OnPlayerSelectReplica
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReplicaID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.OnPlayerSelectReplica"));

	struct
	{
		class AWTLCharacter*           Character;
		int                            ReplicaID;
	} params;

	params.Character = Character;
	params.ReplicaID = ReplicaID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.OnNPCDialogActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::OnNPCDialogActivated(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.OnNPCDialogActivated"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_NPC_Lamey_Kostya_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ExecuteUbergraph_BP_NPC_Lamey_Kostya
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_Lamey_Kostya_C::ExecuteUbergraph_BP_NPC_Lamey_Kostya(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_Lamey_Kostya.BP_NPC_Lamey_Kostya_C.ExecuteUbergraph_BP_NPC_Lamey_Kostya"));

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
