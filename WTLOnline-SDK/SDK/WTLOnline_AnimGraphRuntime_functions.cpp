// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 RootPos                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 JointPos                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 EndPos                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 JointTarget                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Effector                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 OutJointPos                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 OutEndPos                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAllowStretching               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartStretchRatio              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxStretchScale                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale, struct FVector* OutJointPos, struct FVector* OutEndPos)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK"));

	struct
	{
		struct FVector                 RootPos;
		struct FVector                 JointPos;
		struct FVector                 EndPos;
		struct FVector                 JointTarget;
		struct FVector                 Effector;
		struct FVector                 OutJointPos;
		struct FVector                 OutEndPos;
		bool                           bAllowStretching;
		float                          StartStretchRatio;
		float                          MaxStretchScale;
	} params;

	params.RootPos = RootPos;
	params.JointPos = JointPos;
	params.EndPos = EndPos;
	params.JointTarget = JointTarget;
	params.Effector = Effector;
	params.bAllowStretching = bAllowStretching;
	params.StartStretchRatio = StartStretchRatio;
	params.MaxStretchScale = MaxStretchScale;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutJointPos != nullptr)
		*OutJointPos = params.OutJointPos;
	if (OutEndPos != nullptr)
		*OutEndPos = params.OutEndPos;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          X                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Y                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Z                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMinX                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMaxX                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMinY                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMaxY                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMinZ                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMaxZ                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap"));

	struct
	{
		float                          X;
		float                          Y;
		float                          Z;
		float                          RangeOutMinX;
		float                          RangeOutMaxX;
		float                          RangeOutMinY;
		float                          RangeOutMaxY;
		float                          RangeOutMinZ;
		float                          RangeOutMaxZ;
		struct FVector                 ReturnValue;
	} params;

	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.RangeOutMinX = RangeOutMinX;
	params.RangeOutMaxX = RangeOutMaxX;
	params.RangeOutMinY = RangeOutMinY;
	params.RangeOutMaxY = RangeOutMaxY;
	params.RangeOutMinZ = RangeOutMinZ;
	params.RangeOutMaxZ = RangeOutMaxZ;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMin                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RangeOutMax                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap"));

	struct
	{
		float                          Value;
		float                          RangeOutMin;
		float                          RangeOutMax;
		float                          ReturnValue;
	} params;

	params.Value = Value;
	params.RangeOutMin = RangeOutMin;
	params.RangeOutMax = RangeOutMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              CurrentTransform               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 TargetPosition                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 LookAtVector                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bUseUpVector                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 UpVector                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ClampConeInDegree              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt"));

	struct
	{
		struct FTransform              CurrentTransform;
		struct FVector                 TargetPosition;
		struct FVector                 LookAtVector;
		bool                           bUseUpVector;
		struct FVector                 UpVector;
		float                          ClampConeInDegree;
		struct FTransform              ReturnValue;
	} params;

	params.CurrentTransform = CurrentTransform;
	params.TargetPosition = TargetPosition;
	params.LookAtVector = LookAtVector;
	params.bUseUpVector = bUseUpVector;
	params.UpVector = UpVector;
	params.ClampConeInDegree = ClampConeInDegree;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Component                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   SocketOrBoneNameA              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpaceA                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SocketOrBoneNameB              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> SocketSpaceB                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRemapRange                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRangeMin                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InRangeMax                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutRangeMin                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutRangeMax                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange"));

	struct
	{
		class USkeletalMeshComponent*  Component;
		struct FName                   SocketOrBoneNameA;
		TEnumAsByte<ERelativeTransformSpace> SocketSpaceA;
		struct FName                   SocketOrBoneNameB;
		TEnumAsByte<ERelativeTransformSpace> SocketSpaceB;
		bool                           bRemapRange;
		float                          InRangeMin;
		float                          InRangeMax;
		float                          OutRangeMin;
		float                          OutRangeMax;
		float                          ReturnValue;
	} params;

	params.Component = Component;
	params.SocketOrBoneNameA = SocketOrBoneNameA;
	params.SocketSpaceA = SocketSpaceA;
	params.SocketOrBoneNameB = SocketOrBoneNameB;
	params.SocketSpaceB = SocketSpaceB;
	params.bRemapRange = bRemapRange;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;
	params.OutRangeMin = OutRangeMin;
	params.OutRangeMax = OutRangeMax;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Component                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   SocketOrBoneNameFrom           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SocketOrBoneNameTo             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets"));

	struct
	{
		class USkeletalMeshComponent*  Component;
		struct FName                   SocketOrBoneNameFrom;
		struct FName                   SocketOrBoneNameTo;
		struct FVector                 ReturnValue;
	} params;

	params.Component = Component;
	params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	params.SocketOrBoneNameTo = SocketOrBoneNameTo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived"));

	struct
	{
		struct FName                   NotifyName;
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
	} params;

	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (FUNC_Final, FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived"));

	struct
	{
		struct FName                   NotifyName;
		struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;
	} params;

	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded"));

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params;

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut"));

	struct
	{
		class UAnimMontage*            Montage;
		bool                           bInterrupted;
	} params;

	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	UObject::ProcessEvent(fn, &params);
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartingPosition               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StartingSection                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage"));

	struct
	{
		class USkeletalMeshComponent*  InSkeletalMeshComponent;
		class UAnimMontage*            MontageToPlay;
		float                          PlayRate;
		float                          StartingPosition;
		struct FName                   StartingSection;
		class UPlayMontageCallbackProxy* ReturnValue;
	} params;

	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
