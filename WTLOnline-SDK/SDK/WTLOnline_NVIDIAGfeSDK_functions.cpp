// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_NVIDIAGfeSDK_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UHighlightsFunctionLibrary::Poll()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FGfeSDKCreateResponse   InitProperties                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           VideoGranted                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ScreenshotsGranted             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EGfeSDKPermission              Video                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EGfeSDKPermission              Screenshots                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHighlightsFunctionLibrary::ChekIfHighlightsAvailable(const struct FGfeSDKCreateResponse& InitProperties, bool* VideoGranted, bool* ScreenshotsGranted, EGfeSDKPermission* Video, EGfeSDKPermission* Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable");

	struct
	{
		struct FGfeSDKCreateResponse   InitProperties;
		bool                           VideoGranted;
		bool                           ScreenshotsGranted;
		EGfeSDKPermission              Video;
		EGfeSDKPermission              Screenshots;
	} params;

	params.InitProperties = InitProperties;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (VideoGranted != nullptr)
		*VideoGranted = params.VideoGranted;
	if (ScreenshotsGranted != nullptr)
		*ScreenshotsGranted = params.ScreenshotsGranted;
	if (Video != nullptr)
		*Video = params.Video;
	if (Screenshots != nullptr)
		*Screenshots = params.Screenshots;
}


// Function NVIDIAGfeSDK.InitHighlights.InitHighlights
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 InGameName                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// bool                           Video                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Screenshots                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UInitHighlights*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UInitHighlights* UInitHighlights::InitHighlights(class UObject* WorldContextObject, const struct FString& InGameName, bool Video, bool Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.InitHighlights.InitHighlights");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 InGameName;
		bool                           Video;
		bool                           Screenshots;
		class UInitHighlights*         ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InGameName = InGameName;
	params.Video = Video;
	params.Screenshots = Screenshots;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGfeSDKHighlightConfigParams ConfigParams                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UHighlightsConfigureAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UHighlightsConfigureAsync* UHighlightsConfigureAsync::HighlightsConfigure(class UObject* WorldContextObject, const struct FGfeSDKHighlightConfigParams& ConfigParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGfeSDKHighlightConfigParams ConfigParams;
		class UHighlightsConfigureAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ConfigParams = ConfigParams;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGfeSDKHighlightOpenGroupParams Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UHighlightsOpenGroupAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UHighlightsOpenGroupAsync* UHighlightsOpenGroupAsync::HighlightsOpenGroup(class UObject* WorldContextObject, const struct FGfeSDKHighlightOpenGroupParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGfeSDKHighlightOpenGroupParams Params;
		class UHighlightsOpenGroupAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 GroupId                        (CPF_Parm, CPF_ZeroConstructor)
// bool                           DestroyHighlights              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UHighlightsCloseGroupAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UHighlightsCloseGroupAsync* UHighlightsCloseGroupAsync::HighlightsCloseGroup(class UObject* WorldContextObject, const struct FString& GroupId, bool DestroyHighlights)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 GroupId;
		bool                           DestroyHighlights;
		class UHighlightsCloseGroupAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.DestroyHighlights = DestroyHighlights;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 GroupId                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 HighlightId                    (CPF_Parm, CPF_ZeroConstructor)
// class UHighlightsSetScreenshotAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UHighlightsSetScreenshotAsync* UHighlightsSetScreenshotAsync::HighlightsSetScreenshot(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 GroupId;
		struct FString                 HighlightId;
		class UHighlightsSetScreenshotAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 GroupId                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 HighlightId                    (CPF_Parm, CPF_ZeroConstructor)
// int                            StartDelta                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            EndDelta                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UHighlightsSetVideoAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UHighlightsSetVideoAsync* UHighlightsSetVideoAsync::HighlightsSetVideo(class UObject* WorldContextObject, const struct FString& GroupId, const struct FString& HighlightId, int StartDelta, int EndDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 GroupId;
		struct FString                 HighlightId;
		int                            StartDelta;
		int                            EndDelta;
		class UHighlightsSetVideoAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.HighlightId = HighlightId;
	params.StartDelta = StartDelta;
	params.EndDelta = EndDelta;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FGfeSDKHighlightSummaryParams Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UHighlightsSummaryAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UHighlightsSummaryAsync* UHighlightsSummaryAsync::HighlightsOpenSummary(class UObject* WorldContextObject, const struct FGfeSDKHighlightSummaryParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FGfeSDKHighlightSummaryParams Params;
		class UHighlightsSummaryAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Params = Params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 GroupId                        (CPF_Parm, CPF_ZeroConstructor)
// EGfeSDKHighlightType           TagFilter                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// EGfeSDKHighlightSignificance   SignificanceFilter             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UHighlightsGetNumberAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UHighlightsGetNumberAsync* UHighlightsGetNumberAsync::HighlightsGetNumberOfHighlights(class UObject* WorldContextObject, const struct FString& GroupId, EGfeSDKHighlightType TagFilter, EGfeSDKHighlightSignificance SignificanceFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FString                 GroupId;
		EGfeSDKHighlightType           TagFilter;
		EGfeSDKHighlightSignificance   SignificanceFilter;
		class UHighlightsGetNumberAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.GroupId = GroupId;
	params.TagFilter = TagFilter;
	params.SignificanceFilter = SignificanceFilter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Video                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Screenshots                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class URequestPermissionsAsync* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class URequestPermissionsAsync* URequestPermissionsAsync::GFERequestPermissions(class UObject* WorldContextObject, bool Video, bool Screenshots)
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions");

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           Video;
		bool                           Screenshots;
		class URequestPermissionsAsync* ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Video = Video;
	params.Screenshots = Screenshots;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
