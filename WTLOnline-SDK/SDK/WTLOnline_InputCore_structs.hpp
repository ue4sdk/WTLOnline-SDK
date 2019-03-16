#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Basic.hpp"
#include "WTLOnline_InputCore_enums.hpp"
#include "WTLOnline_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0018
struct FKey
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET

	inline FKey() : KeyName(), UnknownData00{} {}

    inline FKey(const FName InName)	: KeyName(InName), UnknownData00{} {}

    inline FKey(const char * InName) : KeyName(FName(InName)), UnknownData00{} {}
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
