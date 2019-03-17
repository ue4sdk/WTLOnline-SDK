#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AnalyticsBlueprintLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary"));
		return ptr;
	}


	static bool StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes);
	static bool StartSession();
	static void SetUserId(const struct FString& UserId);
	static void SetSessionId(const struct FString& SessionId);
	static void SetLocation(const struct FString& Location);
	static void SetGender(const struct FString& Gender);
	static void SetBuildInfo(const struct FString& BuildInfo);
	static void SetAge(int Age);
	static void RecordSimpleItemPurchaseWithAttributes(const struct FString& ItemID, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordSimpleItemPurchase(const struct FString& ItemID, int ItemQuantity);
	static void RecordSimpleCurrencyPurchaseWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordSimpleCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount);
	static void RecordProgressWithFullHierarchyAndAttributes(const struct FString& ProgressType, TArray<struct FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordProgressWithAttributes(const struct FString& ProgressType, const struct FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordProgress(const struct FString& ProgressType, const struct FString& ProgressName);
	static void RecordItemPurchase(const struct FString& ItemID, const struct FString& Currency, int PerItemCost, int ItemQuantity);
	static void RecordEventWithAttributes(const struct FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordEventWithAttribute(const struct FString& EventName, const struct FString& AttributeName, const struct FString& AttributeValue);
	static void RecordEvent(const struct FString& EventName);
	static void RecordErrorWithAttributes(const struct FString& Error, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordError(const struct FString& Error);
	static void RecordCurrencyPurchase(const struct FString& GameCurrencyType, int GameCurrencyAmount, const struct FString& RealCurrencyType, float RealMoneyCost, const struct FString& PaymentProvider);
	static void RecordCurrencyGivenWithAttributes(const struct FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
	static void RecordCurrencyGiven(const struct FString& GameCurrencyType, int GameCurrencyAmount);
	static struct FAnalyticsEventAttr MakeEventAttribute(const struct FString& AttributeName, const struct FString& AttributeValue);
	static struct FString GetUserId();
	static struct FString GetSessionId();
	static void FlushEvents();
	static void EndSession();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
