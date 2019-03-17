// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_BlackMarketDealer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.GetReplicaArrayMainDialog
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    InCharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<int>                    CharacterReplicaArray          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NPC_BlackMarketDealer_C::GetReplicaArrayMainDialog(class AWTLCharacter* Character, TArray<int>* InCharacterReplicaArray, TArray<int>* CharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.GetReplicaArrayMainDialog"));

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


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ExecutingAction
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EWTLNPCReplicaAction           Action                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            QuestID                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            CurrentReplicaID               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InNPCReplicaID                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    InCharacterReplicaArray        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void ABP_NPC_BlackMarketDealer_C::ExecutingAction(class AWTLCharacter* Character, EWTLNPCReplicaAction Action, int QuestID, int CurrentReplicaID, int InNPCReplicaID, TArray<int>* InCharacterReplicaArray)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ExecutingAction"));

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


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.GetRandomReplicaID
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<int>                    ReplicaIdArray                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            ReplicaID                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_BlackMarketDealer_C::GetRandomReplicaID(TArray<int>* ReplicaIdArray, int* ReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.GetRandomReplicaID"));

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


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ShowStartDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_BlackMarketDealer_C::ShowStartDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ShowStartDialog"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NPC_BlackMarketDealer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_BlackMarketDealer_C::Timeline_0_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_BlackMarketDealer_C::Timeline_0_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_BlackMarketDealer_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_BlackMarketDealer_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_NPC_BlackMarketDealer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.OnNPCDialogActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_BlackMarketDealer_C::OnNPCDialogActivated(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.OnNPCDialogActivated"));

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.OnPlayerSelectReplica
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReplicaID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_BlackMarketDealer_C::OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.OnPlayerSelectReplica"));

	struct
	{
		class AWTLCharacter*           Character;
		int                            ReplicaID;
	} params;

	params.Character = Character;
	params.ReplicaID = ReplicaID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_BlackMarketDealer_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ExecuteUbergraph_BP_NPC_BlackMarketDealer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_BlackMarketDealer_C::ExecuteUbergraph_BP_NPC_BlackMarketDealer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_NPC_BlackMarketDealer.BP_NPC_BlackMarketDealer_C.ExecuteUbergraph_BP_NPC_BlackMarketDealer"));

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
