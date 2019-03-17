// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_TimeManagement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameTime              SourceTime                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FFrameRate              SourceRate                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FFrameRate              DestinationRate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FFrameTime              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameTime UTimeManagementBlueprintLibrary::TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime"));

	struct
	{
		struct FFrameTime              SourceTime;
		struct FFrameRate              SourceRate;
		struct FFrameRate              DestinationRate;
		struct FFrameTime              ReturnValue;
	} params;

	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.DestinationRate = DestinationRate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (CPF_Parm)
// int                            B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger"));

	struct
	{
		struct FFrameNumber            A;
		int                            B;
		struct FFrameNumber            ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (CPF_Parm)
// struct FFrameNumber            B                              (CPF_Parm)
// struct FFrameNumber            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber"));

	struct
	{
		struct FFrameNumber            A;
		struct FFrameNumber            B;
		struct FFrameNumber            ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameTime              SourceTime                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FFrameRate              SourceRate                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FFrameRate              SnapToRate                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FFrameTime              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate"));

	struct
	{
		struct FFrameTime              SourceTime;
		struct FFrameRate              SourceRate;
		struct FFrameRate              SnapToRate;
		struct FFrameTime              ReturnValue;
	} params;

	params.SourceTime = SourceTime;
	params.SourceRate = SourceRate;
	params.SnapToRate = SnapToRate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          TimeInSeconds                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFrameRate              FrameRate                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FFrameTime              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate"));

	struct
	{
		float                          TimeInSeconds;
		struct FFrameRate              FrameRate;
		struct FFrameTime              ReturnValue;
	} params;

	params.TimeInSeconds = TimeInSeconds;
	params.FrameRate = FrameRate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (CPF_Parm)
// int                            B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger"));

	struct
	{
		struct FFrameNumber            A;
		int                            B;
		struct FFrameNumber            ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FFrameRate              OtherFramerate                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf"));

	struct
	{
		struct FFrameRate              InFrameRate;
		struct FFrameRate              OtherFramerate;
		bool                           ReturnValue;
	} params;

	params.InFrameRate = InFrameRate;
	params.OtherFramerate = OtherFramerate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UTimeManagementBlueprintLibrary::IsValid_Framerate(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate"));

	struct
	{
		struct FFrameRate              InFrameRate;
		bool                           ReturnValue;
	} params;

	params.InFrameRate = InFrameRate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTimecode               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode"));

	struct
	{
		struct FTimecode               ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (CPF_Parm)
// int                            B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger"));

	struct
	{
		struct FFrameNumber            A;
		int                            B;
		struct FFrameNumber            ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTimecode               InTimecode                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bForceSignDisplay              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString"));

	struct
	{
		struct FTimecode               InTimecode;
		bool                           bForceSignDisplay;
		struct FString                 ReturnValue;
	} params;

	params.InTimecode = InTimecode;
	params.bForceSignDisplay = bForceSignDisplay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime     InFrameTime                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds"));

	struct
	{
		struct FQualifiedFrameTime     InFrameTime;
		float                          ReturnValue;
	} params;

	params.InFrameTime = InFrameTime;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds"));

	struct
	{
		struct FFrameRate              InFrameRate;
		float                          ReturnValue;
	} params;

	params.InFrameRate = InFrameRate;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameNumber            InFrameNumber                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger"));

	struct
	{
		struct FFrameNumber            InFrameNumber;
		int                            ReturnValue;
	} params;

	params.InFrameNumber = InFrameNumber;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (CPF_Parm)
// int                            B                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFrameNumber            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger"));

	struct
	{
		struct FFrameNumber            A;
		int                            B;
		struct FFrameNumber            ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (CPF_Parm)
// struct FFrameNumber            B                              (CPF_Parm)
// struct FFrameNumber            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber"));

	struct
	{
		struct FFrameNumber            A;
		struct FFrameNumber            B;
		struct FFrameNumber            ReturnValue;
	} params;

	params.A = A;
	params.B = B;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
