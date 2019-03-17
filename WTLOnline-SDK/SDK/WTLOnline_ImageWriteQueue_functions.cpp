// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_ImageWriteQueue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
// (FUNC_Final, FUNC_RequiredAPI, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UTexture*                Texture                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Filename                       (CPF_Parm, CPF_ZeroConstructor)
// struct FImageWriteOptions      Options                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UImageWriteBlueprintLibrary::ExportToDisk(class UTexture* Texture, const struct FString& Filename, const struct FImageWriteOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk"));

	struct
	{
		class UTexture*                Texture;
		struct FString                 Filename;
		struct FImageWriteOptions      Options;
	} params;

	params.Texture = Texture;
	params.Filename = Filename;
	params.Options = Options;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
