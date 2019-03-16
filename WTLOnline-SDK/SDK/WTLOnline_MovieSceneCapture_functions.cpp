// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_MovieSceneCapture_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMovieSceneCaptureProtocolBase::IsCapturing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// EMovieSceneCaptureProtocolState ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");

	struct
	{
		EMovieSceneCaptureProtocolState ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ProtocolType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneCapture::SetImageCaptureProtocolType(class UClass* ProtocolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");

	struct
	{
		class UClass*                  ProtocolType;
	} params;

	params.ProtocolType = ProtocolType;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass*                  ProtocolType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMovieSceneCapture::SetAudioCaptureProtocolType(class UClass* ProtocolType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");

	struct
	{
		class UClass*                  ProtocolType;
	} params;

	params.ProtocolType = ProtocolType;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetImageCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");

	struct
	{
		class UMovieSceneCaptureProtocolBase* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMovieSceneCaptureProtocolBase* UMovieSceneCapture::GetAudioCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");

	struct
	{
		class UMovieSceneCaptureProtocolBase* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UMovieSceneCaptureEnvironment::IsCaptureInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UMovieSceneCaptureEnvironment::GetCaptureFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UMovieSceneCaptureEnvironment::GetCaptureElapsedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");

	struct
	{
		float                          ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneImageCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMovieSceneImageCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindImageCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol");

	struct
	{
		class UMovieSceneImageCaptureProtocolBase* ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UMovieSceneAudioCaptureProtocolBase* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMovieSceneAudioCaptureProtocolBase* UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol");

	struct
	{
		class UMovieSceneAudioCaptureProtocolBase* ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   StreamName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(const struct FName& StreamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");

	struct
	{
		struct FName                   StreamName;
	} params;

	params.StreamName = StreamName;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                Buffer                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   BufferName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         Handler                        (CPF_Parm, CPF_ZeroConstructor)

void UUserDefinedCaptureProtocol::ResolveBuffer(class UTexture* Buffer, const struct FName& BufferName, const struct FScriptDelegate& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");

	struct
	{
		class UTexture*                Buffer;
		struct FName                   BufferName;
		struct FScriptDelegate         Handler;
	} params;

	params.Buffer = Buffer;
	params.BufferName = BufferName;
	params.Handler = Handler;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.PushBufferToStream
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                Buffer                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StreamName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserDefinedCaptureProtocol::PushBufferToStream(class UTexture* Buffer, const struct FName& StreamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.PushBufferToStream");

	struct
	{
		class UTexture*                Buffer;
		struct FName                   StreamName;
	} params;

	params.Buffer = Buffer;
	params.StreamName = StreamName;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserDefinedCaptureProtocol::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPreTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// (FUNC_Native, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUserDefinedCaptureProtocol::OnCanFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FFrameMetrics           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");

	struct
	{
		struct FFrameMetrics           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FFrameMetrics           InFrameMetrics                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UUserDefinedCaptureProtocol::GenerateFilename(const struct FFrameMetrics& InFrameMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");

	struct
	{
		struct FFrameMetrics           InFrameMetrics;
		struct FString                 ReturnValue;
	} params;

	params.InFrameMetrics = InFrameMetrics;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.BindToStream
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   StreamName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FScriptDelegate         Handler                        (CPF_Parm, CPF_ZeroConstructor)

void UUserDefinedCaptureProtocol::BindToStream(const struct FName& StreamName, const struct FScriptDelegate& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.BindToStream");

	struct
	{
		struct FName                   StreamName;
		struct FScriptDelegate         Handler;
	} params;

	params.StreamName = StreamName;
	params.Handler = Handler;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FCapturedPixels         PixelData                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   StreamName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFrameMetrics           FrameMetrics                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           bCopyImageData                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUserDefinedImageCaptureProtocol::WriteImageToDisk(const struct FCapturedPixels& PixelData, const struct FName& StreamName, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");

	struct
	{
		struct FCapturedPixels         PixelData;
		struct FName                   StreamName;
		struct FFrameMetrics           FrameMetrics;
		bool                           bCopyImageData;
	} params;

	params.PixelData = PixelData;
	params.StreamName = StreamName;
	params.FrameMetrics = FrameMetrics;
	params.bCopyImageData = bCopyImageData;

	UObject::ProcessEvent(fn, &params);
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                Buffer                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StreamName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(class UTexture* Buffer, const struct FName& StreamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");

	struct
	{
		class UTexture*                Buffer;
		struct FName                   StreamName;
		struct FString                 ReturnValue;
	} params;

	params.Buffer = Buffer;
	params.StreamName = StreamName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
