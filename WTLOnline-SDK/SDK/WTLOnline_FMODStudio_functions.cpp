// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_FMODStudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FMODStudio.FMODAudioComponent.TriggerCue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFMODAudioComponent::TriggerCue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.TriggerCue"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFMODAudioComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.Stop"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetVolume
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODAudioComponent::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetVolume"));

	struct
	{
		float                          Volume;
	} params;

	params.Volume = Volume;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODAudioComponent::SetTimelinePosition(int Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetTimelinePosition"));

	struct
	{
		int                            Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EFMODEventProperty> Property                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODAudioComponent::SetProperty(TEnumAsByte<EFMODEventProperty> Property, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetProperty"));

	struct
	{
		TEnumAsByte<EFMODEventProperty> Property;
		float                          Value;
	} params;

	params.Property = Property;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor)

void UFMODAudioComponent::SetProgrammerSoundName(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName"));

	struct
	{
		struct FString                 Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetPitch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Pitch                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODAudioComponent::SetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetPitch"));

	struct
	{
		float                          Pitch;
	} params;

	params.Pitch = Pitch;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetPaused
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           paused                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODAudioComponent::SetPaused(bool paused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetPaused"));

	struct
	{
		bool                           paused;
	} params;

	params.paused = paused;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODAudioComponent::SetParameter(const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetParameter"));

	struct
	{
		struct FName                   Name;
		float                          Value;
	} params;

	params.Name = Name;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.SetEvent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODEvent*              NewEvent                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODAudioComponent::SetEvent(class UFMODEvent* NewEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.SetEvent"));

	struct
	{
		class UFMODEvent*              NewEvent;
	} params;

	params.NewEvent = NewEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.Release
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFMODAudioComponent::Release()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.Release"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UFMODAudioComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.Play"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODAudioComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFMODAudioComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.IsPlaying"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetTimelinePosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UFMODAudioComponent::GetTimelinePosition()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.GetTimelinePosition"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetProperty
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TEnumAsByte<EFMODEventProperty> Property                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFMODAudioComponent::GetProperty(TEnumAsByte<EFMODEventProperty> Property)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.GetProperty"));

	struct
	{
		TEnumAsByte<EFMODEventProperty> Property;
		float                          ReturnValue;
	} params;

	params.Property = Property;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFMODAudioComponent::GetParameter(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.GetParameter"));

	struct
	{
		struct FName                   Name;
		float                          ReturnValue;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetLength
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UFMODAudioComponent::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODAudioComponent.GetLength"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODVCA*                Vca                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::VCASetVolume(class UFMODVCA* Vca, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.VCASetVolume"));

	struct
	{
		class UFMODVCA*                Vca;
		float                          Volume;
	} params;

	params.Vca = Vca;
	params.Volume = Volume;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UFMODEvent*              Event;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::UnloadBankSampleData(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData"));

	struct
	{
		class UFMODBank*               Bank;
	} params;

	params.Bank = Bank;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.UnloadBank
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::UnloadBank(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.UnloadBank"));

	struct
	{
		class UFMODBank*               Bank;
	} params;

	params.Bank = Bank;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 NewDriverName                  (CPF_Parm, CPF_ZeroConstructor)

void UFMODBlueprintStatics::SetOutputDriverByName(const struct FString& NewDriverName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName"));

	struct
	{
		struct FString                 NewDriverName;
	} params;

	params.NewDriverName = NewDriverName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NewDriverIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::SetOutputDriverByIndex(int NewDriverIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex"));

	struct
	{
		int                            NewDriverIndex;
	} params;

	params.NewDriverIndex = NewDriverIndex;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAttachedWithParams
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoPlay                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TMap<struct FName, float>      Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bApplyOcclusion                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bApplyOcclusionDirect          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODAudioComponent*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UFMODAudioComponent* UFMODBlueprintStatics::PlayEventAttachedWithParams(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, TMap<struct FName, float> Params, bool bApplyOcclusion, bool bApplyOcclusionDirect)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.PlayEventAttachedWithParams"));

	struct
	{
		class UFMODEvent*              Event;
		class USceneComponent*         AttachToComponent;
		struct FName                   AttachPointName;
		struct FVector                 Location;
		TEnumAsByte<EAttachLocation>   LocationType;
		bool                           bStopWhenAttachedToDestroyed;
		bool                           bAutoPlay;
		TMap<struct FName, float>      Params;
		bool                           bApplyOcclusion;
		bool                           bApplyOcclusionDirect;
		class UFMODAudioComponent*     ReturnValue;
	} params;

	params.Event = Event;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.bAutoPlay = bAutoPlay;
	params.Params = Params;
	params.bApplyOcclusion = bApplyOcclusion;
	params.bApplyOcclusionDirect = bApplyOcclusionDirect;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USceneComponent*         AttachToComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   AttachPointName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoPlay                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODAudioComponent*     ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UFMODAudioComponent* UFMODBlueprintStatics::PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.PlayEventAttached"));

	struct
	{
		class UFMODEvent*              Event;
		class USceneComponent*         AttachToComponent;
		struct FName                   AttachPointName;
		struct FVector                 Location;
		TEnumAsByte<EAttachLocation>   LocationType;
		bool                           bStopWhenAttachedToDestroyed;
		bool                           bAutoPlay;
		class UFMODAudioComponent*     ReturnValue;
	} params;

	params.Event = Event;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.bAutoPlay = bAutoPlay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocationWithParams
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bAutoPlay                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TMap<struct FName, float>      Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           bApplyOcclusion                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bApplyOcclusionDirect          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFMODEventInstance      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FFMODEventInstance UFMODBlueprintStatics::PlayEventAtLocationWithParams(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay, TMap<struct FName, float> Params, bool bApplyOcclusion, bool bApplyOcclusionDirect)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocationWithParams"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UFMODEvent*              Event;
		struct FTransform              Location;
		bool                           bAutoPlay;
		TMap<struct FName, float>      Params;
		bool                           bApplyOcclusion;
		bool                           bApplyOcclusionDirect;
		struct FFMODEventInstance      ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.Location = Location;
	params.bAutoPlay = bAutoPlay;
	params.Params = Params;
	params.bApplyOcclusion = bApplyOcclusion;
	params.bApplyOcclusionDirect = bApplyOcclusionDirect;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bAutoPlay                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFMODEventInstance      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FFMODEventInstance UFMODBlueprintStatics::PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UFMODEvent*              Event;
		struct FTransform              Location;
		bool                           bAutoPlay;
		struct FFMODEventInstance      ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.Location = Location;
	params.bAutoPlay = bAutoPlay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEvent2DWithParams
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoPlay                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TMap<struct FName, float>      Params                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FFMODEventInstance      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FFMODEventInstance UFMODBlueprintStatics::PlayEvent2DWithParams(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay, TMap<struct FName, float> Params)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.PlayEvent2DWithParams"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UFMODEvent*              Event;
		bool                           bAutoPlay;
		TMap<struct FName, float>      Params;
		struct FFMODEventInstance      ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.bAutoPlay = bAutoPlay;
	params.Params = Params;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoPlay                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFMODEventInstance      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FFMODEventInstance UFMODBlueprintStatics::PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.PlayEvent2D"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UFMODEvent*              Event;
		bool                           bAutoPlay;
		struct FFMODEventInstance      ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.bAutoPlay = bAutoPlay;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.MixerSuspend
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UFMODBlueprintStatics::MixerSuspend()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.MixerSuspend"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.MixerResume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UFMODBlueprintStatics::MixerResume()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.MixerResume"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UFMODEvent*              Event;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::LoadBankSampleData(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData"));

	struct
	{
		class UFMODBank*               Bank;
	} params;

	params.Bank = Bank;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.LoadBank
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bBlocking                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLoadSampleData                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.LoadBank"));

	struct
	{
		class UFMODBank*               Bank;
		bool                           bBlocking;
		bool                           bLoadSampleData;
	} params;

	params.Bank = Bank;
	params.bBlocking = bBlocking;
	params.bLoadSampleData = bLoadSampleData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFMODBlueprintStatics::IsBankLoaded(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.IsBankLoaded"));

	struct
	{
		class UFMODBank*               Bank;
		bool                           ReturnValue;
	} params;

	params.Bank = Bank;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FString> UFMODBlueprintStatics::GetOutputDrivers()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers"));

	struct
	{
		TArray<struct FString>         ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindEventInstances
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFMODEvent*              Event                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFMODEventInstance> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FFMODEventInstance> UFMODBlueprintStatics::FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.FindEventInstances"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UFMODEvent*              Event;
		TArray<struct FFMODEventInstance> ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindEventByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// class UFMODEvent*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFMODEvent* UFMODBlueprintStatics::FindEventByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.FindEventByName"));

	struct
	{
		struct FString                 Name;
		class UFMODEvent*              ReturnValue;
	} params;

	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// class UFMODAsset*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UFMODAsset* UFMODBlueprintStatics::FindAssetByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.FindAssetByName"));

	struct
	{
		struct FString                 Name;
		class UFMODAsset*              ReturnValue;
	} params;

	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceTriggerCue(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
	} params;

	params.EventInstance = EventInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceStop(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceStop"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
	} params;

	params.EventInstance = EventInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		float                          Volume;
	} params;

	params.EventInstance = EventInstance;
	params.Volume = Volume;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              Location                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		struct FTransform              Location;
	} params;

	params.EventInstance = EventInstance;
	params.Location = Location;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFMODEventProperty> Property                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, TEnumAsByte<EFMODEventProperty> Property, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		TEnumAsByte<EFMODEventProperty> Property;
		float                          Value;
	} params;

	params.EventInstance = EventInstance;
	params.Property = Property;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Pitch                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		float                          Pitch;
	} params;

	params.EventInstance = EventInstance;
	params.Pitch = Pitch;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           paused                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		bool                           paused;
	} params;

	params.EventInstance = EventInstance;
	params.paused = paused;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		struct FName                   Name;
		float                          Value;
	} params;

	params.EventInstance = EventInstance;
	params.Name = Name;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::EventInstancePlay(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstancePlay"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
	} params;

	params.EventInstance = EventInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFMODBlueprintStatics::EventInstanceIsValid(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		bool                           ReturnValue;
	} params;

	params.EventInstance = EventInstance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UFMODBlueprintStatics::EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter"));

	struct
	{
		struct FFMODEventInstance      EventInstance;
		struct FName                   Name;
		float                          ReturnValue;
	} params;

	params.EventInstance = EventInstance;
	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents"));

	struct
	{
		class UFMODBus*                Bus;
		TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode;
	} params;

	params.Bus = Bus;
	params.stopMode = stopMode;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Volume                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::BusSetVolume(class UFMODBus* Bus, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.BusSetVolume"));

	struct
	{
		class UFMODBus*                Bus;
		float                          Volume;
	} params;

	params.Bus = Bus;
	params.Volume = Volume;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bPaused                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::BusSetPaused(class UFMODBus* Bus, bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.BusSetPaused"));

	struct
	{
		class UFMODBus*                Bus;
		bool                           bPaused;
	} params;

	params.Bus = Bus;
	params.bPaused = bPaused;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FMODStudio.FMODBlueprintStatics.BusSetMute
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bMute                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFMODBlueprintStatics::BusSetMute(class UFMODBus* Bus, bool bMute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FMODStudio.FMODBlueprintStatics.BusSetMute"));

	struct
	{
		class UFMODBus*                Bus;
		bool                           bMute;
	} params;

	params.Bus = Bus;
	params.bMute = bMute;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
