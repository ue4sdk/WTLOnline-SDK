// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_GameAnalytics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameAnalytics.GameAnalytics.SetGender
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAGender                      Gender                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameAnalytics::SetGender(EGAGender Gender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetGender");

	struct
	{
		EGAGender                      Gender;
	} params;

	params.Gender = Gender;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.SetFacebookId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 FacebookId                     (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::SetFacebookId(const struct FString& FacebookId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetFacebookId");

	struct
	{
		struct FString                 FacebookId;
	} params;

	params.FacebookId = FacebookId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.SetCustomDimension03
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::SetCustomDimension03(const struct FString& CustomDimension)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension03");

	struct
	{
		struct FString                 CustomDimension;
	} params;

	params.CustomDimension = CustomDimension;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.SetCustomDimension02
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::SetCustomDimension02(const struct FString& CustomDimension)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension02");

	struct
	{
		struct FString                 CustomDimension;
	} params;

	params.CustomDimension = CustomDimension;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.SetCustomDimension01
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 CustomDimension                (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::SetCustomDimension01(const struct FString& CustomDimension)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetCustomDimension01");

	struct
	{
		struct FString                 CustomDimension;
	} params;

	params.CustomDimension = CustomDimension;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.SetBirthYear
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            BirthYear                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameAnalytics::SetBirthYear(int BirthYear)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.SetBirthYear");

	struct
	{
		int                            BirthYear;
	} params;

	params.BirthYear = BirthYear;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.IsCommandCenterReady
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UGameAnalytics::IsCommandCenterReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.IsCommandCenterReady");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetConfigurationsContentAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UGameAnalytics::GetConfigurationsContentAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetConfigurationsContentAsString");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsStringWithDefaultValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 DefaultValue                   (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UGameAnalytics::GetCommandCenterValueAsStringWithDefaultValue(const struct FString& Key, const struct FString& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsStringWithDefaultValue");

	struct
	{
		struct FString                 Key;
		struct FString                 DefaultValue;
		struct FString                 ReturnValue;
	} params;

	params.Key = Key;
	params.DefaultValue = DefaultValue;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Key                            (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UGameAnalytics::GetCommandCenterValueAsString(const struct FString& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.GetCommandCenterValueAsString");

	struct
	{
		struct FString                 Key;
		struct FString                 ReturnValue;
	} params;

	params.Key = Key;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function GameAnalytics.GameAnalytics.AddResourceEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAResourceFlowType            FlowType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor)
// float                          Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ItemID                         (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddResourceEvent(EGAResourceFlowType FlowType, const struct FString& Currency, float Amount, const struct FString& ItemType, const struct FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddResourceEvent");

	struct
	{
		EGAResourceFlowType            FlowType;
		struct FString                 Currency;
		float                          Amount;
		struct FString                 ItemType;
		struct FString                 ItemID;
	} params;

	params.FlowType = FlowType;
	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemID = ItemID;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEvenWithOneTwoThreeAndScore
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Progression03                  (CPF_Parm, CPF_ZeroConstructor)
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameAnalytics::AddProgressionEvenWithOneTwoThreeAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEvenWithOneTwoThreeAndScore");

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
		struct FString                 Progression03;
		int                            Score;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;
	params.Score = Score;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Progression03                  (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, const struct FString& Progression03)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndThree");

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
		struct FString                 Progression03;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Progression03 = Progression03;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor)
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameAnalytics::AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneTwoAndScore");

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
		int                            Score;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;
	params.Score = Score;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Progression02                  (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddProgressionEventWithOneAndTwo(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, const struct FString& Progression02)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndTwo");

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		struct FString                 Progression02;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Progression02 = Progression02;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor)
// int                            Score                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameAnalytics::AddProgressionEventWithOneAndScore(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01, int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOneAndScore");

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
		int                            Score;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;
	params.Score = Score;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAProgressionStatus           ProgressionStatus              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Progression01                  (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddProgressionEventWithOne(EGAProgressionStatus ProgressionStatus, const struct FString& Progression01)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddProgressionEventWithOne");

	struct
	{
		EGAProgressionStatus           ProgressionStatus;
		struct FString                 Progression01;
	} params;

	params.ProgressionStatus = ProgressionStatus;
	params.Progression01 = Progression01;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddErrorEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGAErrorSeverity               Severity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Message                        (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddErrorEvent(EGAErrorSeverity Severity, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddErrorEvent");

	struct
	{
		EGAErrorSeverity               Severity;
		struct FString                 Message;
	} params;

	params.Severity = Severity;
	params.Message = Message;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddDesignEventWithValue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventId                        (CPF_Parm, CPF_ZeroConstructor)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGameAnalytics::AddDesignEventWithValue(const struct FString& EventId, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddDesignEventWithValue");

	struct
	{
		struct FString                 EventId;
		float                          Value;
	} params;

	params.EventId = EventId;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddDesignEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventId                        (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddDesignEvent(const struct FString& EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddDesignEvent");

	struct
	{
		struct FString                 EventId;
	} params;

	params.EventId = EventId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEventIOS
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ItemID                         (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Receipt                        (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddBusinessEventIOS(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemID, const struct FString& CartType, const struct FString& Receipt)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventIOS");

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemID;
		struct FString                 CartType;
		struct FString                 Receipt;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemID = ItemID;
	params.CartType = CartType;
	params.Receipt = Receipt;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ItemID                         (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Receipt                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Signature                      (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddBusinessEventAndroid(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemID, const struct FString& CartType, const struct FString& Receipt, const struct FString& Signature)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventAndroid");

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemID;
		struct FString                 CartType;
		struct FString                 Receipt;
		struct FString                 Signature;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemID = ItemID;
	params.CartType = CartType;
	params.Receipt = Receipt;
	params.Signature = Signature;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ItemID                         (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemID, const struct FString& CartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEventAndAutoFetchReceipt");

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemID;
		struct FString                 CartType;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemID = ItemID;
	params.CartType = CartType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GameAnalytics.GameAnalytics.AddBusinessEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Currency                       (CPF_Parm, CPF_ZeroConstructor)
// int                            Amount                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ItemType                       (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ItemID                         (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 CartType                       (CPF_Parm, CPF_ZeroConstructor)

void UGameAnalytics::AddBusinessEvent(const struct FString& Currency, int Amount, const struct FString& ItemType, const struct FString& ItemID, const struct FString& CartType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameAnalytics.GameAnalytics.AddBusinessEvent");

	struct
	{
		struct FString                 Currency;
		int                            Amount;
		struct FString                 ItemType;
		struct FString                 ItemID;
		struct FString                 CartType;
	} params;

	params.Currency = Currency;
	params.Amount = Amount;
	params.ItemType = ItemType;
	params.ItemID = ItemID;
	params.CartType = CartType;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
