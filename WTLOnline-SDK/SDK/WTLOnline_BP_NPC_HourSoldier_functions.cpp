// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_NPC_HourSoldier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.CanDialog
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_NPC_HourSoldier_C::CanDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.CanDialog");

	struct
	{
		class AWTLCharacter*           Character;
		bool                           ReturnValue;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ShowStartDialog
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_HourSoldier_C::ShowStartDialog(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ShowStartDialog");

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NPC_HourSoldier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_HourSoldier_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_NPC_HourSoldier_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.OnPlayerSelectReplica
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReplicaID                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_HourSoldier_C::OnPlayerSelectReplica(class AWTLCharacter* Character, int ReplicaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.OnPlayerSelectReplica");

	struct
	{
		class AWTLCharacter*           Character;
		int                            ReplicaID;
	} params;

	params.Character = Character;
	params.ReplicaID = ReplicaID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.OnNPCDialogActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLCharacter*           Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_HourSoldier_C::OnNPCDialogActivated(class AWTLCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.OnNPCDialogActivated");

	struct
	{
		class AWTLCharacter*           Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_HourSoldier_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_NPC_HourSoldier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ExecuteUbergraph_BP_NPC_HourSoldier
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NPC_HourSoldier_C::ExecuteUbergraph_BP_NPC_HourSoldier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NPC_HourSoldier.BP_NPC_HourSoldier_C.ExecuteUbergraph_BP_NPC_HourSoldier");

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
