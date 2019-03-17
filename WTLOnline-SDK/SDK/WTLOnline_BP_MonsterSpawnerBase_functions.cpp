// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_BP_MonsterSpawnerBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.SpawnMonster
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Monster                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterSpawnerBase_C::SpawnMonster(class UClass* Monster, const struct FVector& Location, unsigned char Level)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.SpawnMonster"));

	struct
	{
		class UClass*                  Monster;
		struct FVector                 Location;
		unsigned char                  Level;
	} params;

	params.Monster = Monster;
	params.Location = Location;
	params.Level = Level;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MonsterSpawnerBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.OnSpawnMonster
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_MonsterSpawnerBase_C::OnSpawnMonster()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.OnSpawnMonster"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MonsterSpawnerBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.OnDeadMonster
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AWTLMonsterPawn*         Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterSpawnerBase_C::OnDeadMonster(class AWTLMonsterPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.OnDeadMonster"));

	struct
	{
		class AWTLMonsterPawn*         Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ExecuteUbergraph_BP_MonsterSpawnerBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MonsterSpawnerBase_C::ExecuteUbergraph_BP_MonsterSpawnerBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_MonsterSpawnerBase.BP_MonsterSpawnerBase_C.ExecuteUbergraph_BP_MonsterSpawnerBase"));

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
