#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WTLOnline_Basic.hpp"
#include "WTLOnline_WTL_enums.hpp"
#include "WTLOnline_AIModule_classes.hpp"
#include "WTLOnline_UMG_classes.hpp"
#include "WTLOnline_SlateCore_classes.hpp"
#include "WTLOnline_CoreUObject_classes.hpp"
#include "WTLOnline_Engine_classes.hpp"
#include "WTLOnline_InputCore_classes.hpp"
#include "WTLOnline_FMODStudio_classes.hpp"
#include "WTLOnline_NavigationSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WTL.WTLPacket
// 0x002C (0x0038 - 0x000C)
struct FWTLPacket : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x000C(0x002C) MISSED OFFSET
};

// ScriptStruct WTL.WTLItemRecord
// 0x0008 (0x0040 - 0x0038)
struct FWTLItemRecord : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLDateTime
// 0x0008
struct FWTLDateTime
{
	int64_t                                            Value;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLWeaponItem
// 0x00A8 (0x00E8 - 0x0040)
struct FWTLWeaponItem : public FWTLItemRecord
{
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WeaponID;                                                 // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLWeaponType                                     Type;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCaliber                                        Caliber;                                                  // 0x004B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CreationDate;                                             // 0x0070(0x0008) (CPF_Edit)
	struct FString                                     CreatorName;                                              // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      MagazineCapacity;                                         // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MagazineAmmoCount;                                        // 0x0089(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           DamageMin;                                                // 0x008A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           DamageMax;                                                // 0x008C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Accuracy;                                                 // 0x008E(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWeight;                                              // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           EffectiveRange;                                           // 0x0094(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
	int                                                Condition;                                                // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ConditionDelta;                                           // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ModCount;                                                 // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	uint64_t                                           CurrentAmmoItemID;                                        // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MuzzleAttachmentTypeID;                                   // 0x00B0(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	int                                                MuzzleAttachmentCondition;                                // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           FlashlightAttachmentTypeID;                               // 0x00B8(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	int                                                FlashlightAttachmentCondition;                            // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ScopeAttachmentTypeID;                                    // 0x00C0(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00C2(0x0002) MISSED OFFSET
	int                                                ScopeAttachmentCondition;                                 // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x00C8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x00C9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x00CA(0x0006) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      SlotNumber;                                               // 0x00E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLAmmoItem
// 0x0068 (0x00A8 - 0x0040)
struct FWTLAmmoItem : public FWTLItemRecord
{
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           AmmoID;                                                   // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLAmmoType                                       Type;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCaliber                                        Caliber;                                                  // 0x004B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FWTLDateTime                                CreationDate;                                             // 0x0078(0x0008) (CPF_Edit)
	struct FString                                     CreatorName;                                              // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	uint16_t                                           DamageMin;                                                // 0x0090(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           DamageMax;                                                // 0x0092(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ArmorPiercingMin;                                         // 0x0094(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ArmorPiercingMax;                                         // 0x0096(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Accuracy;                                                 // 0x0098(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	int                                                Weight;                                                   // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWeight;                                              // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotNumber;                                               // 0x00A4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterEffectInfluence
// 0x0010 (0x0048 - 0x0038)
struct FWTLCharacterEffectInfluence : public FWTLPacket
{
	EWTLCharacterEffectType                            EffectType;                                               // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              InfluenceAtStart;                                         // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InfluencePerTick;                                         // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMedicineItem
// 0x0078 (0x00B8 - 0x0040)
struct FWTLMedicineItem : public FWTLItemRecord
{
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MedicineID;                                               // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLMedicineType                                   Type;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FWTLDateTime                                CreationDate;                                             // 0x0078(0x0008) (CPF_Edit)
	struct FString                                     CreatorName;                                              // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Weight;                                                   // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWeight;                                              // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLDateTime                                ValidityDate;                                             // 0x0098(0x0008) (CPF_Edit)
	TArray<struct FWTLCharacterEffectInfluence>        Influences;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      SlotNumber;                                               // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLStuffItem
// 0x0068 (0x00A8 - 0x0040)
struct FWTLStuffItem : public FWTLItemRecord
{
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           StuffID;                                                  // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLStuffType                                      Type;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CreationDate;                                             // 0x0070(0x0008) (CPF_Edit)
	struct FString                                     CreatorName;                                              // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Weight;                                                   // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWeight;                                              // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ConditionDelta;                                           // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Energy;                                                   // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       StorageObjectType;                                        // 0x009C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x009D(0x0001) MISSED OFFSET
	uint16_t                                           StorageObjectTypeID;                                      // 0x009E(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x00A1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotNumber;                                               // 0x00A2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x00A3(0x0005) MISSED OFFSET
};

// ScriptStruct WTL.WTLClothesItem
// 0x0080 (0x00C0 - 0x0040)
struct FWTLClothesItem : public FWTLItemRecord
{
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ClothesID;                                                // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClothesType                                    Type;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EWTLArmorClass                                     ArmorClass;                                               // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FWTLDateTime                                CreationDate;                                             // 0x0078(0x0008) (CPF_Edit)
	struct FString                                     CreatorName;                                              // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	uint16_t                                           ArmorMin;                                                 // 0x0090(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ArmorMax;                                                 // 0x0092(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWeight;                                              // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ConditionDelta;                                           // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ModCount;                                                 // 0x00A4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x00A5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x00A6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	uint16_t                                           FrontPlateTypeID;                                         // 0x00A8(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	int                                                FrontPlateCondition;                                      // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           BackPlateTypeID;                                          // 0x00B0(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	int                                                BackPlateCondition;                                       // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotNumber;                                               // 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLResourceItem
// 0x0040 (0x0080 - 0x0040)
struct FWTLResourceItem : public FWTLItemRecord
{
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ResourceID;                                               // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLResourceType                                   Type;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWeight;                                              // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotNumber;                                               // 0x007C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLArtefactItem
// 0x0070 (0x00B0 - 0x0040)
struct FWTLArtefactItem : public FWTLItemRecord
{
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ArtefactID;                                               // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLArtefactType                                   Type;                                                     // 0x004A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CreationDate;                                             // 0x0070(0x0008) (CPF_Edit)
	struct FString                                     CreatorName;                                              // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TotalWeight;                                              // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FWTLDateTime                                ValidityDate;                                             // 0x0098(0x0008) (CPF_Edit)
	uint64_t                                           InteractiveObjectID;                                      // 0x00A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotNumber;                                               // 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLStorageContent
// 0x0080 (0x00B8 - 0x0038)
struct FWTLStorageContent : public FWTLPacket
{
	EWTLStorageType                                    StorageType;                                              // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLLocationStorageType                            LocationStorageType;                                      // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	uint64_t                                           StorageID;                                                // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLWeaponItem>                      WeaponItems;                                              // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLAmmoItem>                        AmmoItems;                                                // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLMedicineItem>                    MedicineItems;                                            // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLStuffItem>                       StuffItems;                                               // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLClothesItem>                     ClothesItems;                                             // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLResourceItem>                    ResourceItems;                                            // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLArtefactItem>                    ArtefactItems;                                            // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCameraLimits
// 0x000C
struct FWTLCameraLimits
{
	float                                              YawLimit;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchMinLimit;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchMaxLimit;                                            // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMonsterActionBase
// 0x0018
struct FWTLMonsterActionBase
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeout;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsBlockingMovement;                                       // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsInterrupted;                                            // 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsAdditive;                                               // 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsUseServerSideAnimations;                                // 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaCost;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLQuestItemDropChance
// 0x0008
struct FWTLQuestItemDropChance
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Chance;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLItemDropInfo
// 0x0078
struct FWTLItemDropInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCount;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCondition;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCondition;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalChance;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FWTLQuestItemDropChance>             QuestDropChances;                                         // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      MinLevel;                                                 // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              MinCountDeltaPerLevel;                                    // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxCountDeltaPerLevel;                                    // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinConditionDeltaPerLevel;                                // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxConditionDeltaPerLevel;                                // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinInteractiveObjectID;                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxInteractiveObjectID;                                   // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x004C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x004D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              NormalChanceDeltaPerLevel;                                // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DropOnlyIfDoesNotHaveItem;                                // 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLMonsterDeathData
// 0x0020
struct FWTLMonsterDeathData
{
	bool                                               IsBustServer;                                             // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PercentDamage;                                            // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     VectorDamage;                                             // 0x0004(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmmoPhysicsImpulse;                                       // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KillingDamage;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DirectionDeathID;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ProjectileCount;                                          // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLMonsterAction
// 0x0118
struct FWTLMonsterAction
{
	bool                                               bUseParticleSystem;                                       // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UParticleSystem>              ParticleSystem;                                           // 0x0008(0x0028) (CPF_Edit)
	struct FVector                                     ParticleSystemLocationOffset;                             // 0x0030(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    ParticleSystemRotationOffset;                             // 0x003C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ParticleSystemScale;                                      // 0x0048(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FName                                       ParticleSystemSocketName;                                 // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAttachParticleSystemToSocket;                            // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseSound;                                                // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	TSoftObjectPtr<class USoundBase>                   SoundToPlay;                                              // 0x0068(0x0028) (CPF_Edit)
	TSoftObjectPtr<class UFMODEvent>                   SoundEventToPlay;                                         // 0x0090(0x0028) (CPF_Edit)
	float                                              SoundVolumeMultiplier;                                    // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SoundLocationOffset;                                      // 0x00BC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SoundSocketName;                                          // 0x00C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAttachSoundToSocket;                                     // 0x00D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseCameraShake;                                          // 0x00D1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	struct FVector                                     EpicentreLocationOffset;                                  // 0x00D4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EpicentreRadius;                                          // 0x00E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShakeStrengthMultiplier;                                  // 0x00E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EpicentreSocketName;                                      // 0x00E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UClass>                       CameraShakeToPlay;                                        // 0x00F0(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLEvent
// 0x0010 (0x0048 - 0x0038)
struct FWTLEvent : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLClanInfo
// 0x0048
struct FWTLClanInfo
{
	uint16_t                                           ID;                                                       // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                MemberCount;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CandidateCount;                                           // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     LeaderName;                                               // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     StewardName;                                              // 0x0030(0x0010) (CPF_ZeroConstructor)
	float                                              Reputation;                                               // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLClanIcons
// 0x0078
struct FWTLClanIcons
{
	TSoftObjectPtr<class UTexture2D>                   SmallIcon;                                                // 0x0000(0x0028)
	TSoftObjectPtr<class UTexture2D>                   MediumIcon;                                               // 0x0028(0x0028)
	TSoftObjectPtr<class UTexture2D>                   LargeIcon;                                                // 0x0050(0x0028)
};

// ScriptStruct WTL.WTLSteamInventoryItemWTLDefinition
// 0x0040
struct FWTLSteamInventoryItemWTLDefinition
{
	uint64_t                                           ItemDefID;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MoneyAmount;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CreditsAmount;                                            // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0011(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0012(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x001D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLMailPackageRecord
// 0x0130 (0x0168 - 0x0038)
struct FWTLMailPackageRecord : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           FromCharacterID;                                          // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     FromCharacterName;                                        // 0x0048(0x0010) (CPF_ZeroConstructor)
	uint64_t                                           ToCharacterID;                                            // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ToCharacterName;                                          // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FWTLDateTime                                MailDate;                                                 // 0x0070(0x0008)
	EWTLMailPackageDeliveryType                        DeliveryType;                                             // 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FWTLDateTime                                PlanDeliveryDate;                                         // 0x0080(0x0008)
	uint32_t                                           TotalWeight;                                              // 0x0088(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           TotalPrice;                                               // 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     MessageText;                                              // 0x0090(0x0010) (CPF_ZeroConstructor)
	uint32_t                                           MoneyAmount;                                              // 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FWTLStorageContent                          Items;                                                    // 0x00A8(0x00B8)
	EWTLMailPackageState                               State;                                                    // 0x0160(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLServerEventInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLServerEventInfo : public FWTLPacket
{
	EWTLServerEventType                                Type;                                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                TimeLeft;                                                 // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.BulletDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FBulletDamageEvent : public FPointDamageEvent
{
	EWTLWeaponType                                     WeaponType;                                               // 0x00A8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLAmmoProjectileType                             ProjectileType;                                           // 0x00A9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	float                                              ArmorPiercingValue;                                       // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Velocity;                                                 // 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpulseMultiplier;                                        // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Critical;                                                 // 0x00B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLColliderType                                   ColliderType;                                             // 0x00B9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.ShrapnelDamageEvent
// 0x0010 (0x00B8 - 0x00A8)
struct FShrapnelDamageEvent : public FPointDamageEvent
{
	uint16_t                                           WeaponTypeID;                                             // 0x00A8(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	float                                              ImpulseMultiplier;                                        // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Critical;                                                 // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLColliderType                                   ColliderType;                                             // 0x00B1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.FallDamageEvent
// 0x0008 (0x0018 - 0x0010)
struct FFallDamageEvent : public FDamageEvent
{
	float                                              GroundHitVelocity;                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.TakeHitInfo
// 0x0210
struct FTakeHitInfo
{
	float                                              ActualDamage;                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AWTLCharacter>                PawnInstigator;                                           // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           DamageEventClassID;                                       // 0x0020(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bKilled;                                                  // 0x0022(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	float                                              WorldTime;                                                // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EnsureReplicationByte;                                    // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FDamageEvent                                GeneralDamageEvent;                                       // 0x0030(0x0010)
	struct FBulletDamageEvent                          BulletDamageEvent;                                        // 0x0040(0x00C0)
	struct FShrapnelDamageEvent                        ShrapnelDamageEvent;                                      // 0x0100(0x00B8)
	struct FRadialDamageEvent                          RadialDamageEvent;                                        // 0x01B8(0x0040)
	struct FFallDamageEvent                            FallDamageEvent;                                          // 0x01F8(0x0018)
};

// ScriptStruct WTL.WTLKillStats
// 0x0230
struct FWTLKillStats
{
	struct FString                                     KillerName;                                               // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FTakeHitInfo                                HitInfo;                                                  // 0x0010(0x0210)
	struct FString                                     VictimName;                                               // 0x0220(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLMonsterHuntObjective
// 0x0080
struct FWTLMonsterHuntObjective
{
	EWTLMonsterHuntObjectiveType                       Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                MonsterID;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinLevel;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                RequiredValue;                                            // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentValue;                                             // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Done;                                                     // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	unsigned char                                      bUseScalabilitySettings : 1;                              // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                InitialMinLevel;                                          // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialRequiredValue;                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinLevelDeltaPerPlayer;                                   // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RequiredValueDeltaPerPlayer;                              // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x54];                                      // 0x002C(0x0054) MISSED OFFSET
};

// ScriptStruct WTL.WTLArenaLeaderboardRecord
// 0x0030
struct FWTLArenaLeaderboardRecord
{
	EWTLFaction                                        Faction;                                                  // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           CharacterID;                                              // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterClass                                 CharacterClass;                                           // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     CharacterName;                                            // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      CharacterLevel;                                           // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                Score;                                                    // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMapCacheData
// 0x0098
struct FWTLMapCacheData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class AWTLPortal*>                          m_Portals;                                                // 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   m_PortalsTime;                                            // 0x0018(0x0008) (CPF_ZeroConstructor)
	TArray<class AWTLWaterSource*>                     m_WaterSources;                                           // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   m_WaterSourcesTime;                                       // 0x0030(0x0008) (CPF_ZeroConstructor)
	TArray<class AWTLNPCActor*>                        m_NPCs;                                                   // 0x0038(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   m_NPCsTime;                                               // 0x0048(0x0008) (CPF_ZeroConstructor)
	TArray<class AWTLFortificationCommandCore*>        m_FortificationCommandCores;                              // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   m_FortificationCommandCoresTime;                          // 0x0060(0x0008) (CPF_ZeroConstructor)
	TArray<class AWTLBulletinBoard*>                   m_BulletinBoards;                                         // 0x0068(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   m_BulletinBoardsTime;                                     // 0x0078(0x0008) (CPF_ZeroConstructor)
	TArray<class AWTLEventPoint*>                      m_EventPoints;                                            // 0x0080(0x0010) (CPF_ZeroConstructor)
	struct FDateTime                                   m_EventPointsTime;                                        // 0x0090(0x0008) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLDamageActorInfo
// 0x0010
struct FWTLDamageActorInfo
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Critical;                                                 // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLMapMarker
// 0x0060
struct FWTLMapMarker
{
	struct FString                                     MarkerName;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FText                                       ToolTipText;                                              // 0x0010(0x0018) (CPF_Edit)
	class AActor*                                      MarkerActor;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     MarkerLocation;                                           // 0x0030(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLMapMarkerType                                  MarkerType;                                               // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MarkerSubTypeNumber;                                      // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FLinearColor                                MarkerColor;                                              // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MarkerZOrder;                                             // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSticking;                                              // 0x0051(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                MarkerIndex;                                              // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLResponse
// 0x0030 (0x0068 - 0x0038)
struct FWTLResponse : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct WTL.WTLCommissionItemTypeCount
// 0x0008
struct FWTLCommissionItemTypeCount
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCommissionWeaponItem
// 0x0030 (0x0118 - 0x00E8)
struct FWTLCommissionWeaponItem : public FWTLWeaponItem
{
	int64_t                                            CommissionCharacterID;                                    // 0x00E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommissionCharacterName;                                  // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CommissionDate;                                           // 0x0100(0x0008) (CPF_Edit)
	struct FWTLDateTime                                CommissionExpireDate;                                     // 0x0108(0x0008) (CPF_Edit)
	float                                              CommissionPrice;                                          // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMinBuyCount;                                    // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCommissionAmmoItem
// 0x0038 (0x00E0 - 0x00A8)
struct FWTLCommissionAmmoItem : public FWTLAmmoItem
{
	int64_t                                            CommissionCharacterID;                                    // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommissionCharacterName;                                  // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CommissionDate;                                           // 0x00C0(0x0008) (CPF_Edit)
	float                                              CommissionPrice;                                          // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FWTLDateTime                                CommissionExpireDate;                                     // 0x00D0(0x0008) (CPF_Edit)
	int                                                CommissionMinBuyCount;                                    // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLCommissionMedicineItem
// 0x0030 (0x00E8 - 0x00B8)
struct FWTLCommissionMedicineItem : public FWTLMedicineItem
{
	int64_t                                            CommissionCharacterID;                                    // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommissionCharacterName;                                  // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CommissionDate;                                           // 0x00D0(0x0008) (CPF_Edit)
	struct FWTLDateTime                                CommissionExpireDate;                                     // 0x00D8(0x0008) (CPF_Edit)
	float                                              CommissionPrice;                                          // 0x00E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMinBuyCount;                                    // 0x00E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCommissionStuffItem
// 0x0030 (0x00D8 - 0x00A8)
struct FWTLCommissionStuffItem : public FWTLStuffItem
{
	int64_t                                            CommissionCharacterID;                                    // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommissionCharacterName;                                  // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CommissionDate;                                           // 0x00C0(0x0008) (CPF_Edit)
	struct FWTLDateTime                                CommissionExpireDate;                                     // 0x00C8(0x0008) (CPF_Edit)
	float                                              CommissionPrice;                                          // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMinBuyCount;                                    // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCommissionClothesItem
// 0x0030 (0x00F0 - 0x00C0)
struct FWTLCommissionClothesItem : public FWTLClothesItem
{
	int64_t                                            CommissionCharacterID;                                    // 0x00C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommissionCharacterName;                                  // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CommissionDate;                                           // 0x00D8(0x0008) (CPF_Edit)
	struct FWTLDateTime                                CommissionExpireDate;                                     // 0x00E0(0x0008) (CPF_Edit)
	float                                              CommissionPrice;                                          // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMinBuyCount;                                    // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCommissionResourceItem
// 0x0030 (0x00B0 - 0x0080)
struct FWTLCommissionResourceItem : public FWTLResourceItem
{
	int64_t                                            CommissionCharacterID;                                    // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommissionCharacterName;                                  // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CommissionDate;                                           // 0x0098(0x0008) (CPF_Edit)
	struct FWTLDateTime                                CommissionExpireDate;                                     // 0x00A0(0x0008) (CPF_Edit)
	float                                              CommissionPrice;                                          // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMinBuyCount;                                    // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCommissionArtefactItem
// 0x0030 (0x00E0 - 0x00B0)
struct FWTLCommissionArtefactItem : public FWTLArtefactItem
{
	int64_t                                            CommissionCharacterID;                                    // 0x00B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CommissionCharacterName;                                  // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLDateTime                                CommissionDate;                                           // 0x00C8(0x0008) (CPF_Edit)
	struct FWTLDateTime                                CommissionExpireDate;                                     // 0x00D0(0x0008) (CPF_Edit)
	float                                              CommissionPrice;                                          // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMinBuyCount;                                    // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLSellItems
// 0x0070
struct FWTLSellItems
{
	TArray<struct FWTLCommissionWeaponItem>            WeaponItems;                                              // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionAmmoItem>              AmmoItems;                                                // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionMedicineItem>          MedicineItems;                                            // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionStuffItem>             StuffItems;                                               // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionClothesItem>           ClothesItems;                                             // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionResourceItem>          ResourceItems;                                            // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionArtefactItem>          ArtefactItems;                                            // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLClanStorageMoneyLogRecord
// 0x0040
struct FWTLClanStorageMoneyLogRecord
{
	struct FWTLDateTime                                EventDate;                                                // 0x0000(0x0008)
	unsigned char                                      TabIndex;                                                 // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClanStorageMoneyOperationType                  OperationType;                                            // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	uint64_t                                           CharacterID;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                MoneyAmount;                                              // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     Description;                                              // 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLClanStorageItemLogRecord
// 0x0050
struct FWTLClanStorageItemLogRecord
{
	struct FWTLDateTime                                EventDate;                                                // 0x0000(0x0008)
	unsigned char                                      TabIndex;                                                 // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClanStorageItemOperationType                   OperationType;                                            // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	uint64_t                                           CharacterID;                                              // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0018(0x0010) (CPF_ZeroConstructor)
	EWTLItemType                                       ItemType;                                                 // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	uint64_t                                           ItemID;                                                   // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ItemTypeID;                                               // 0x0038(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Count;                                                    // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Description;                                              // 0x0040(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLBarterDealRequest
// 0x0048
struct FWTLBarterDealRequest
{
	struct FDateTime                                   RequestDate;                                              // 0x0000(0x0008) (CPF_ZeroConstructor)
	class AWTLCharacter*                               FromCharacter;                                            // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           FromCharacterID;                                          // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     FromCharacterName;                                        // 0x0018(0x0010) (CPF_ZeroConstructor)
	class AWTLCharacter*                               ToCharacter;                                              // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ToCharacterID;                                            // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterInfo
// 0x00D8 (0x0110 - 0x0038)
struct FWTLCharacterInfo : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           AccountID;                                                // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EWTLSex                                            Sex;                                                      // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FWTLDateTime                                CreationDate;                                             // 0x0060(0x0008) (CPF_Edit)
	struct FWTLDateTime                                LastAccessDate;                                           // 0x0068(0x0008) (CPF_Edit)
	unsigned char                                      Level;                                                    // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterClass                                 Class;                                                    // 0x0071(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           State;                                                    // 0x0072(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FString                                     StateDescription;                                         // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               Online;                                                   // 0x0088(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BaseStrength;                                             // 0x0089(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BaseDexterity;                                            // 0x008A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BaseStamina;                                              // 0x008B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BaseAccuracy;                                             // 0x008C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BaseIntelligence;                                         // 0x008D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BaseFortune;                                              // 0x008E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	uint64_t                                           Experience;                                               // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           TotalSkillPoints;                                         // 0x0098(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           AvailableSkillPoints;                                     // 0x009A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType0Experience;                                    // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType1Experience;                                    // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType2Experience;                                    // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType3Experience;                                    // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType4Experience;                                    // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType5Experience;                                    // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType6Experience;                                    // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType7Experience;                                    // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType8Experience;                                    // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           WeaponType9Experience;                                    // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MedicExperience;                                          // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           CraftExperience;                                          // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           RepairExperience;                                         // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ElectronicsExperience;                                    // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MiningExperience;                                         // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           SurvivalExperience;                                       // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Balance;                                                  // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      InventorySlotCount;                                       // 0x00E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x00E1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Reputation;                                               // 0x00E2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x00E3(0x0005) MISSED OFFSET
	uint64_t                                           Score;                                                    // 0x00E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Rank;                                                     // 0x00F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x00F1(0x0001) MISSED OFFSET
	uint16_t                                           ClanID;                                                   // 0x00F2(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClanMemberType                                 ClanMemberType;                                           // 0x00F4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ClanReputation;                                           // 0x00F5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x00F6(0x0002) MISSED OFFSET
	uint64_t                                           ClanPolicyGroupID;                                        // 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLPlayerType                                     PlayerType;                                               // 0x0100(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BodyType;                                                 // 0x0101(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PVPEnabled;                                               // 0x0102(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x0103(0x0005) MISSED OFFSET
	struct FWTLDateTime                                PVPStateChangeDate;                                       // 0x0108(0x0008) (CPF_Edit)
};

// ScriptStruct WTL.WTLFastAccessSlot
// 0x0010 (0x0048 - 0x0038)
struct FWTLFastAccessSlot : public FWTLPacket
{
	unsigned char                                      SlotNumber;                                               // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	uint64_t                                           ItemID;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentity32
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentity32 : public FWTLPacket
{
	uint32_t                                           Value;                                                    // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLIdentity16
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentity16 : public FWTLPacket
{
	uint16_t                                           Value;                                                    // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLMedicineItemEffect
// 0x0008 (0x0040 - 0x0038)
struct FWTLMedicineItemEffect : public FWTLPacket
{
	uint16_t                                           MedicineID;                                               // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	float                                              Duration;                                                 // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterItemExperience
// 0x0008 (0x0040 - 0x0038)
struct FWTLCharacterItemExperience : public FWTLPacket
{
	EWTLItemType                                       ItemType;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x003A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Experience;                                               // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterItemExperienceArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLCharacterItemExperienceArray : public FFastArraySerializer
{
	TArray<struct FWTLCharacterItemExperience>         Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLContactListItem
// 0x0030 (0x0068 - 0x0038)
struct FWTLContactListItem : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               Online;                                                   // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FString                                     Location;                                                 // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterParameters
// 0x00F8 (0x0130 - 0x0038)
struct FWTLCharacterParameters : public FWTLPacket
{
	float                                              AdditionalInventorySlots;                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxInventoryWeightMultiplier;                             // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AvoidCriticalDamageChanceMultiplier;                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CriticalDamageChanceMultiplier;                           // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReceivedDamageMultiplier;                                 // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MadeDamageMultiplier;                                     // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnifeDamageMultiplier;                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnifeAccuracyMultiplier;                                  // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnifeCriticalChanceMultiplier;                            // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnifeHandlingSpeedMultiplier;                             // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PistolDamageMultiplier;                                   // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PistolAccuracyMultiplier;                                 // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PistolCriticalChanceMultiplier;                           // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PistolHandlingSpeedMultiplier;                            // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShotgunDamageMultiplier;                                  // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShotgunAccuracyMultiplier;                                // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShotgunCriticalChanceMultiplier;                          // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShotgunHandlingSpeedMultiplier;                           // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SubMachineGunDamageMultiplier;                            // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SubMachineGunAccuracyMultiplier;                          // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SubMachineGunCriticalChanceMultiplier;                    // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SubMachineGunHandlingSpeedMultiplier;                     // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AssaultRifleDamageMultiplier;                             // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AssaultRifleAccuracyMultiplier;                           // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AssaultRifleCriticalChanceMultiplier;                     // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AssaultRifleHandlingSpeedMultiplier;                      // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RifleDamageMultiplier;                                    // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RifleAccuracyMultiplier;                                  // 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RifleCriticalChanceMultiplier;                            // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RifleHandlingSpeedMultiplier;                             // 0x00AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MachineGunDamageMultiplier;                               // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MachineGunAccuracyMultiplier;                             // 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MachineGunCriticalChanceMultiplier;                       // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MachineGunHandlingSpeedMultiplier;                        // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrenadeLauncherDamageMultiplier;                          // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrenadeLauncherAccuracyMultiplier;                        // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrenadeLauncherCriticalChanceMultiplier;                  // 0x00C8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrenadeLauncherHandlingSpeedMultiplier;                   // 0x00CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MissileDamageMultiplier;                                  // 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MissileAccuracyMultiplier;                                // 0x00D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MissileCriticalChanceMultiplier;                          // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MissileHandlingSpeedMultiplier;                           // 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExplosiveDamageMultiplier;                                // 0x00E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExplosiveAccuracyMultiplier;                              // 0x00E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExplosiveCriticalChanceMultiplier;                        // 0x00E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExplosiveHandlingSpeedMultiplier;                         // 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExperienceMultiplier;                                     // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemTypeExperienceMultiplier;                             // 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MedkitHealingValueMultiplier;                             // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MonsterDropResourceMultiplier;                            // 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MonsterDropPartsMultiplier;                               // 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightArmorUseAbility;                                     // 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MediumArmorUseAbility;                                    // 0x0108(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeavyArmorUseAbility;                                     // 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHealthMultiplier;                                      // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponHandlingSpeedMultiplier;                            // 0x0114(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaIncrementMultiplier;                               // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaDecrementMultiplier;                               // 0x011C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvironmentResistanceMultiplier;                          // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MiningResourceCountMultiplier;                            // 0x0124(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MiningResourceChanceMultiplier;                           // 0x0128(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLMaterialParameters
// 0x0020 (0x0058 - 0x0038)
struct FWTLMaterialParameters : public FWTLPacket
{
	struct FColor                                      Color0;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color1;                                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color2;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color3;                                                   // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar0;                                                  // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar1;                                                  // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar2;                                                  // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar3;                                                  // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterCustomizationRecord
// 0x0110 (0x0148 - 0x0038)
struct FWTLCharacterCustomizationRecord : public FWTLPacket
{
	EWTLCharacterCustomizationPart                     PartType;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	uint32_t                                           PartID;                                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLMaterialParameters                      MaterialParameters0;                                      // 0x0040(0x0058) (CPF_Edit)
	struct FWTLMaterialParameters                      MaterialParameters1;                                      // 0x0098(0x0058) (CPF_Edit)
	struct FWTLMaterialParameters                      MaterialParameters2;                                      // 0x00F0(0x0058) (CPF_Edit)
};

// ScriptStruct WTL.WTLCharacterMapMarker
// 0x0030 (0x0068 - 0x0038)
struct FWTLCharacterMapMarker : public FWTLPacket
{
	uint32_t                                           LocationID;                                               // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Type;                                                     // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0040(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               ShowOnMinimap;                                            // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterMapMarkerArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLCharacterMapMarkerArray : public FFastArraySerializer
{
	TArray<struct FWTLCharacterMapMarker>              Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterEffect
// 0x0008 (0x0040 - 0x0038)
struct FWTLCharacterEffect : public FWTLPacket
{
	EWTLCharacterEffectType                            Type;                                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterEffectArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLCharacterEffectArray : public FFastArraySerializer
{
	TArray<struct FWTLCharacterEffect>                 Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterMailMessage
// 0x0048 (0x0080 - 0x0038)
struct FWTLCharacterMailMessage : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Read;                                                     // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Priority;                                                 // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FWTLDateTime                                Date;                                                     // 0x0048(0x0008) (CPF_Edit)
	struct FString                                     From;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Subject;                                                  // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Text;                                                     // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterSlotItemInfo
// 0x0008 (0x0040 - 0x0038)
struct FWTLCharacterSlotItemInfo : public FWTLPacket
{
	EWTLItemType                                       ItemType;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x003A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLFastAccessSlotItemInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLFastAccessSlotItemInfo : public FWTLPacket
{
	EWTLItemType                                       ItemType;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x003A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ScopeAttachmentTypeID;                                    // 0x003C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           FlashlightAttachmentTypeID;                               // 0x003E(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MuzzleAttachmentTypeID;                                   // 0x0040(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0043(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLFastAccessSlotItemInfoArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLFastAccessSlotItemInfoArray : public FFastArraySerializer
{
	TArray<struct FWTLFastAccessSlotItemInfo>          Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLMaterialPackedParameters
// 0x0014
struct FWTLMaterialPackedParameters
{
	struct FColor                                      Color0;                                                   // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color1;                                                   // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color2;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color3;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Scalar0;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Scalar1;                                                  // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Scalar2;                                                  // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Scalar3;                                                  // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterCustomizationPackedRecord
// 0x0040
struct FWTLCharacterCustomizationPackedRecord
{
	EWTLCharacterCustomizationPart                     PartType;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           PartID;                                                   // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLMaterialPackedParameters                MaterialParameters0;                                      // 0x0004(0x0014)
	struct FWTLMaterialPackedParameters                MaterialParameters1;                                      // 0x0018(0x0014)
	struct FWTLMaterialPackedParameters                MaterialParameters2;                                      // 0x002C(0x0014)
};

// ScriptStruct WTL.WTLCharacterEquipmentItemInfo
// 0x0008 (0x0040 - 0x0038)
struct FWTLCharacterEquipmentItemInfo : public FWTLPacket
{
	EWTLItemType                                       ItemType;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x003A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLClanMember
// 0x0028 (0x0060 - 0x0038)
struct FWTLClanMember : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EWTLCharacterClass                                 Class;                                                    // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x0051(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClanMemberType                                 ClanMemberType;                                           // 0x0052(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ClanReputation;                                           // 0x0053(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	uint64_t                                           ClanPolicyGroupID;                                        // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLClanPolicyGroup
// 0x0018 (0x0050 - 0x0038)
struct FWTLClanPolicyGroup : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCommissionStorage
// 0x0078
struct FWTLCommissionStorage
{
	int                                                NPCID;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Money;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLCommissionWeaponItem>            WeaponItems;                                              // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionAmmoItem>              AmmoItems;                                                // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionMedicineItem>          MedicineItems;                                            // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionStuffItem>             StuffItems;                                               // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionClothesItem>           ClothesItems;                                             // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionResourceItem>          ResourceItems;                                            // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionArtefactItem>          ArtefactItems;                                            // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCraftObjectProcess
// 0x0018
struct FWTLCraftObjectProcess
{
	uint64_t                                           CharacterID;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CraftItemID;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProductionTime;                                           // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProductionTimeLeft;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLCraftObjectState
// 0x00E0
struct FWTLCraftObjectState
{
	int                                                CraftObjectID;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWTLStorageContent                          Content;                                                  // 0x0008(0x00B8)
	struct FScriptMulticastDelegate                    OnStorageContentChanged;                                  // 0x00C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	TArray<struct FWTLCraftObjectProcess>              Processes;                                                // 0x00D0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLBarterDeal
// 0x01A0
struct FWTLBarterDeal
{
	class AWTLCharacter*                               Character1;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AWTLCharacter*                               Character2;                                               // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           CharacterID1;                                             // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           CharacterID2;                                             // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLStorageContent                          CharacterItems1;                                          // 0x0020(0x00B8)
	struct FWTLStorageContent                          CharacterItems2;                                          // 0x00D8(0x00B8)
	int                                                CharacterMoneyAmount1;                                    // 0x0190(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CharacterMoneyAmount2;                                    // 0x0194(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CharacterAgreement1;                                      // 0x0198(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CharacterAgreement2;                                      // 0x0199(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x019A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLOperationResult
// 0x0020
struct FWTLOperationResult
{
	int                                                OperationID;                                              // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Success;                                                  // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     ErrorInfo;                                                // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               Processed;                                                // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLMedicineEffect
// 0x0020
struct FWTLMedicineEffect
{
	EWTLMedicineEffectParameter                        Parameter;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPermanent;                                             // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MinValue;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ValueCurve;                                               // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLStimulatorEffect
// 0x0028
struct FWTLStimulatorEffect
{
	TArray<struct FWTLMedicineEffect>                  MedicineEffects;                                          // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterEffectInfluence>        CharacterEffects;                                         // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Duration;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLSellingItemInfo
// 0x0018
struct FWTLSellingItemInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           ItemID;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLIdentityItem
// 0x0010 (0x0048 - 0x0038)
struct FWTLIdentityItem : public FWTLPacket
{
	EWTLItemType                                       Type;                                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLExtractItemInfo
// 0x0018
struct FWTLExtractItemInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           ItemID;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLFactionLeaderRecord
// 0x0030 (0x0068 - 0x0038)
struct FWTLFactionLeaderRecord : public FWTLPacket
{
	EWTLFaction                                        Faction;                                                  // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	uint64_t                                           CharacterID;                                              // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0048(0x0010) (CPF_ZeroConstructor)
	uint16_t                                           ClanID;                                                   // 0x0058(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterClass                                 ClassID;                                                  // 0x005A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x005B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Rank;                                                     // 0x005C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	uint64_t                                           Score;                                                    // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterQuestState
// 0x0020 (0x0058 - 0x0038)
struct FWTLCharacterQuestState : public FWTLPacket
{
	uint32_t                                           QuestID;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLQuestState                                     State;                                                    // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Progress1;                                                // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Progress2;                                                // 0x003E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Progress3;                                                // 0x003F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Progress4;                                                // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FWTLDateTime                                LastChangeDate;                                           // 0x0048(0x0008) (CPF_Edit)
	bool                                               Active;                                                   // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterInventoryDeltaRecord
// 0x0018
struct FWTLCharacterInventoryDeltaRecord
{
	unsigned char                                      RecordType;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<unsigned char>                              ItemData;                                                 // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLPrivateStorage
// 0x00D0
struct FWTLPrivateStorage
{
	int                                                NPCID;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotCount;                                                // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FWTLStorageContent                          StorageContent;                                           // 0x0008(0x00B8) (CPF_Edit)
	struct FScriptMulticastDelegate                    OnStorageContentChanged;                                  // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct WTL.WTLClanStorageTab
// 0x00F8
struct FWTLClanStorageTab
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      ImageIndex;                                               // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	uint64_t                                           Money;                                                    // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLStorageContent                          StorageContent;                                           // 0x0020(0x00B8) (CPF_Edit)
	TArray<uint64_t>                                   CanPutClanPolicyGroups;                                   // 0x00D8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<uint64_t>                                   CanTakeClanPolicyGroups;                                  // 0x00E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLClanStorage
// 0x0030
struct FWTLClanStorage
{
	uint64_t                                           ID;                                                       // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NPCID;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ClanID;                                                   // 0x000C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<struct FWTLClanStorageTab>                  Tabs;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FScriptMulticastDelegate                    OnStorageContentChanged;                                  // 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct WTL.WTLArenaSelectedEquipmentItem
// 0x0006
struct FWTLArenaSelectedEquipmentItem
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotNumber;                                               // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0005(0x0001) MISSED OFFSET
};

// ScriptStruct WTL.WTLArenaFactionScore
// 0x0008
struct FWTLArenaFactionScore
{
	EWTLFaction                                        Faction;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Score;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLBPIdentityItemType
// 0x0008
struct FWTLBPIdentityItemType
{
	EWTLItemType                                       Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TypeID;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMonsterBurst
// 0x000C
struct FWTLMonsterBurst
{
	bool                                               IsBurst;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PercentDamageBurst;                                       // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              TakeDamageBurst;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinLevelBurst;                                            // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevelBurst;                                            // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLMonsterKillRequirementState
// 0x0028
struct FWTLMonsterKillRequirementState
{
	int                                                MonsterID;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     MonsterName;                                              // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      MinLevel;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                NeedCount;                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentCount;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLEnemyNPCKillRequirementState
// 0x0028
struct FWTLEnemyNPCKillRequirementState
{
	int                                                EnemyNPCID;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     EnemyNPCName;                                             // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      MinLevel;                                                 // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                NeedCount;                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentCount;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLCustomQuestRequirementState
// 0x0048
struct FWTLCustomQuestRequirementState
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0010(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	int                                                NeedCount;                                                // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentCount;                                             // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseBitMaskForProgress;                                    // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.SpeedModifiers
// 0x0008
struct FSpeedModifiers
{
	float                                              ReloadSpeedModifier;                                      // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EquipSpeedModifier;                                       // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLQTEState
// 0x0007
struct FWTLQTEState
{
	unsigned char                                      NextKeyID;                                                // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Step;                                                     // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SequenceLength;                                           // 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsInQTE;                                                 // 0x0003(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanCancel;                                               // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLQTEType                                        Type;                                                     // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bNeedToHideUsableItem;                                    // 0x0006(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLLowerBodyAnimation
// 0x0010
struct FWTLLowerBodyAnimation
{
	class UAnimMontage*                                MontageLeft;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageRight;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterAnimInstanceProxy
// 0x0010 (0x05F0 - 0x05E0)
struct FWTLCharacterAnimInstanceProxy : public FAnimInstanceProxy
{
	bool                                               bIsTestPassed;                                            // 0x05E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x05E1(0x000F) MISSED OFFSET
};

// ScriptStruct WTL.WTLIdentificationMemoryElement
// 0x0028
struct FWTLIdentificationMemoryElement
{
	float                                              MemoryValue;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastZDistance[0x3];                                       // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVisibleInThisFrame;                                      // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct WTL.WTLShortCharacterInfo
// 0x02A0 (0x02D8 - 0x0038)
struct FWTLShortCharacterInfo : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EWTLSex                                            Sex;                                                      // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x0051(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterClass                                 Class;                                                    // 0x0052(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	float                                              Health;                                                   // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReadyToGame;                                              // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Strength;                                                 // 0x0059(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x005A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Stamina;                                                  // 0x005B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Accuracy;                                                 // 0x005C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x005D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Fortune;                                                  // 0x005E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x005F(0x0001) MISSED OFFSET
	struct FWTLCharacterSlotItemInfo                   HeadItem;                                                 // 0x0060(0x0040) (CPF_Edit)
	struct FWTLCharacterSlotItemInfo                   TorsoItem;                                                // 0x00A0(0x0040) (CPF_Edit)
	struct FWTLCharacterSlotItemInfo                   LegsItem;                                                 // 0x00E0(0x0040) (CPF_Edit)
	struct FWTLCharacterSlotItemInfo                   FeetItem;                                                 // 0x0120(0x0040) (CPF_Edit)
	struct FWTLCharacterSlotItemInfo                   ArmsItem;                                                 // 0x0160(0x0040) (CPF_Edit)
	TArray<struct FWTLFastAccessSlotItemInfo>          FastAccessSlots;                                          // 0x01A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EWTLFaction                                        Faction;                                                  // 0x01B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Reputation;                                               // 0x01B1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Rank;                                                     // 0x01B2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x01B3(0x0001) MISSED OFFSET
	uint16_t                                           ClanID;                                                   // 0x01B4(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClanMemberType                                 ClanMemberType;                                           // 0x01B6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLPlayerType                                     PlayerType;                                               // 0x01B7(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BodyType;                                                 // 0x01B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PVPEnabled;                                               // 0x01B9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x01BA(0x0006) MISSED OFFSET
	TArray<struct FWTLCharacterCustomizationRecord>    CustomizationInfo;                                        // 0x01C0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLCharacterEquipmentItemInfo              EquipmentSlot1;                                           // 0x01D0(0x0040)
	struct FWTLCharacterEquipmentItemInfo              EquipmentSlot2;                                           // 0x0210(0x0040)
	struct FWTLCharacterEquipmentItemInfo              EquipmentSlot3;                                           // 0x0250(0x0040)
	struct FWTLCharacterEquipmentItemInfo              EquipmentSlot4;                                           // 0x0290(0x0040)
	unsigned char                                      EquipmentSlotStates;                                      // 0x02D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLIntruderInfo
// 0x0010
struct FWTLIntruderInfo
{
	uint64_t                                           CharacterID;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsKilled;                                                // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsLethal;                                                // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLUFunctionInfo
// 0x0018
struct FWTLUFunctionInfo
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     UFunctionName;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLLocationSpawnItem
// 0x0070
struct FWTLLocationSpawnItem
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Quality;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCount;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCondition;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCondition;                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinInteractiveObjectID;                                   // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxInteractiveObjectID;                                   // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Chance;                                                   // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FDateTime                                   LastSpawnTime;                                            // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTimespan                                   TimeBetweenSpawn;                                         // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTimespan                                   MinBlackListTimeout;                                      // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTimespan                                   MaxBlackListTimeout;                                      // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLLocationSpawnPickup
// 0x0090
struct FWTLLocationSpawnPickup
{
	TSoftObjectPtr<class UClass>                       PickupClass;                                              // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Quality;                                                  // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Chance;                                                   // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCount;                                                 // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCondition;                                             // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCondition;                                             // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinInteractiveObjectID;                                   // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxInteractiveObjectID;                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0049(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FDateTime                                   NextSpawnTime;                                            // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              MinTimeBetweenSpawn;                                      // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTimeBetweenSpawn;                                      // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinBlackListTimeout;                                      // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBlackListTimeout;                                      // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxInstanceCount;                                         // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentInstanceCount;                                     // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLConsoleScript
// 0x0020
struct FWTLConsoleScript
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FString>                             Commands;                                                 // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCaptureTarget
// 0x0010
struct FWTLCaptureTarget
{
	float                                              DayTime;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTextureRenderTargetCube*                    Target;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLSenseEventInfo
// 0x0028
struct FWTLSenseEventInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      EventInstigator;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FDateTime                                   Time;                                                     // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLTaggedSenseEventInfo
// 0x0010 (0x0038 - 0x0028)
struct FWTLTaggedSenseEventInfo : public FWTLSenseEventInfo
{
	struct FString                                     Tag;                                                      // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLEnemyCurrentState
// 0x001E
struct FWTLEnemyCurrentState
{
	uint16_t                                           EnemyTypeID;                                              // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           HeadClothesItemTypeID;                                    // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           TorsoClothesItemTypeID;                                   // 0x0004(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           LegsClothesItemTypeID;                                    // 0x0006(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           FeetClothesItemTypeID;                                    // 0x0008(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           FrontPlateTypeID;                                         // 0x000A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           BackPlateTypeID;                                          // 0x000C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           WeaponItemTypeID;                                         // 0x000E(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           AmmoTypeID;                                               // 0x0010(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      HeadCustomizationIndex;                                   // 0x0012(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TorsoCustomizationIndex;                                  // 0x0013(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      LegsCustomizationIndex;                                   // 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      FeetCustomizationIndex;                                   // 0x0015(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           FirstNameIndex;                                           // 0x0016(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           LastNameIndex;                                            // 0x0018(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x001A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLAITeam                                         Team;                                                     // 0x001B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      VoiceType;                                                // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001D(0x0001) MISSED OFFSET
};

// ScriptStruct WTL.WTLFootstepSettings
// 0x000C
struct FWTLFootstepSettings
{
	float                                              WalkFootstepMinInterval;                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SprintFootstepMinInterval;                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchFootstepMinInterval;                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLEnemyNPCSpawnerRecord
// 0x0038
struct FWTLEnemyNPCSpawnerRecord
{
	TSoftObjectPtr<class UClass>                       EnemyNPC;                                                 // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MinCount;                                                 // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinLevel;                                                 // 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLEventTask
// 0x0020
struct FWTLEventTask
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                NeedValue;                                                // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentValue;                                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLEventItemReward
// 0x0048
struct FWTLEventItemReward
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCount;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCondition;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCondition;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Chance;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinInteractiveObjectID;                                   // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxInteractiveObjectID;                                   // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLBulletImpactEffect
// 0x0098
struct FWTLBulletImpactEffect
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UParticleSystem>              ParticleSystem;                                           // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UFMODEvent>                   SoundEvent;                                               // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TArray<class UMaterialInstance*>                   HitDecals;                                                // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FVector                                     HitDecalScale;                                            // 0x0068(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitDecalLifeSpan;                                         // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstance*>                   RicochetDecals;                                           // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FVector                                     RicochetDecalScale;                                       // 0x0088(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RicochetDecalLifeSpan;                                    // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLFootstepEffect
// 0x0058
struct FWTLFootstepEffect
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UFMODEvent>                   SoundEvent;                                               // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UParticleSystem>              ParticleSystem;                                           // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLBulletFlyNearEffect
// 0x0060
struct FWTLBulletFlyNearEffect
{
	EWTLCaliber                                        Caliber;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UFMODEvent>                   FlyNearSoundEvent;                                        // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UFMODEvent>                   CharacterFearSoundEvent;                                  // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              FringeAmount;                                             // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VingetteAmount;                                           // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterDamageEffect
// 0x0030
struct FWTLCharacterDamageEffect
{
	TSoftObjectPtr<class UFMODEvent>                   SoundEvent;                                               // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              HealthPercent;                                            // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLDefaultClassParameters
// 0x0006
struct FWTLDefaultClassParameters
{
	unsigned char                                      Strength;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Stamina;                                                  // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Accuracy;                                                 // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Fortune;                                                  // 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLDebugCharacterClanInfo
// 0x0008
struct FWTLDebugCharacterClanInfo
{
	int                                                ClanID;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClanMemberType                                 ClanMemberType;                                           // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsUsed;                                                  // 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLAccountInfo
// 0x0080 (0x00B8 - 0x0038)
struct FWTLAccountInfo : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Login;                                                    // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               Active;                                                   // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FWTLDateTime                                CreationDate;                                             // 0x0058(0x0008) (CPF_Edit)
	struct FWTLDateTime                                ActivationDate;                                           // 0x0060(0x0008) (CPF_Edit)
	struct FWTLDateTime                                LastAccessDate;                                           // 0x0068(0x0008) (CPF_Edit)
	EWTLSex                                            Sex;                                                      // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	struct FWTLDateTime                                BirthDate;                                                // 0x0078(0x0008) (CPF_Edit)
	uint16_t                                           State;                                                    // 0x0080(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0082(0x0006) MISSED OFFSET
	struct FString                                     StateDescription;                                         // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               Online;                                                   // 0x0098(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FString                                     EMail;                                                    // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Balance;                                                  // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterCurrentState
// 0x0180 (0x01B8 - 0x0038)
struct FWTLCharacterCurrentState : public FWTLPacket
{
	float                                              Health;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Strength;                                                 // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Stamina;                                                  // 0x003E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Accuracy;                                                 // 0x003F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Fortune;                                                  // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	uint32_t                                           LocationID;                                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LocationPosition;                                         // 0x0048(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ArmsItemType;                                             // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	uint64_t                                           ArmsItemID;                                               // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       HeadItemType;                                             // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	uint64_t                                           HeadItemID;                                               // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       TorsoItemType;                                            // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	uint64_t                                           TorsoItemID;                                              // 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       LegsItemType;                                             // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	uint64_t                                           LegsItemID;                                               // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       FeetItemType;                                             // 0x0090(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	uint64_t                                           FeetItemID;                                               // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       EquipmentSlot1ItemType;                                   // 0x00A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	uint64_t                                           EquipmentSlot1ItemID;                                     // 0x00A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       EquipmentSlot2ItemType;                                   // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	uint64_t                                           EquipmentSlot2ItemID;                                     // 0x00B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       EquipmentSlot3ItemType;                                   // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	uint64_t                                           EquipmentSlot3ItemID;                                     // 0x00C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       EquipmentSlot4ItemType;                                   // 0x00D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	uint64_t                                           EquipmentSlot4ItemID;                                     // 0x00D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EquipmentSlotStates;                                      // 0x00E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FWTLFastAccessSlot>                  FastAccessSlots;                                          // 0x00E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                SafeZoneID;                                               // 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	TArray<struct FWTLIdentity32>                      VisitedLocations;                                         // 0x0100(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLIdentity16>                      PDAModules;                                               // 0x0110(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLIdentity32>                      VisitedPortals;                                           // 0x0120(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      Hunger;                                                   // 0x0130(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Thirst;                                                   // 0x0131(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x0132(0x0006) MISSED OFFSET
	struct FWTLMedicineItemEffect                      MedicineEffect;                                           // 0x0138(0x0040) (CPF_Edit)
	struct FWTLMedicineItemEffect                      StimulatorEffect;                                         // 0x0178(0x0040) (CPF_Edit)
};

// ScriptStruct WTL.WTLFullCharacterInfo
// 0x0420 (0x0530 - 0x0110)
struct FWTLFullCharacterInfo : public FWTLCharacterInfo
{
	struct FWTLCharacterCurrentState                   CurrentState;                                             // 0x0110(0x01B8) (CPF_Edit)
	TArray<struct FWTLCharacterItemExperience>         ItemExperience;                                           // 0x02C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLStorageContent                          Inventory;                                                // 0x02D8(0x00B8) (CPF_Edit)
	TArray<struct FWTLContactListItem>                 ContactList;                                              // 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLIdentity16>                      Skills;                                                   // 0x03A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLCharacterParameters                     Parameters;                                               // 0x03B0(0x0130) (CPF_Edit)
	TArray<struct FWTLCharacterCustomizationRecord>    CustomizationInfo;                                        // 0x04E0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterQuestState>             QuestStates;                                              // 0x04F0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterMapMarker>              MapMarkers;                                               // 0x0500(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterEffect>                 Effects;                                                  // 0x0510(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterMailMessage>            Mail;                                                     // 0x0520(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterList
// 0x0010 (0x0048 - 0x0038)
struct FWTLCharacterList : public FWTLPacket
{
	TArray<struct FWTLFullCharacterInfo>               Data;                                                     // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLClientAuthorizationResult
// 0x0118 (0x0150 - 0x0038)
struct FWTLClientAuthorizationResult : public FWTLPacket
{
	uint32_t                                           CreditsToMoneyRate;                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     NetUID;                                                   // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLAccountInfo                             AccountInfo;                                              // 0x0050(0x00B8) (CPF_Edit)
	struct FWTLCharacterList                           CharacterList;                                            // 0x0108(0x0048) (CPF_Edit)
};

// ScriptStruct WTL.WTLLocalCharacterData
// 0x0058
struct FWTLLocalCharacterData
{
	bool                                               bIsFlashlightEnabled;                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MonocularZoomModeIndex;                                   // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TMap<uint64_t, unsigned char>                      m_WeaponsFireModeMemory;                                  // 0x0008(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLLocalCharactersData
// 0x0050
struct FWTLLocalCharactersData
{
	TMap<uint64_t, struct FWTLLocalCharacterData>      PerCharacterData;                                         // 0x0000(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLConnectionSettings
// 0x0018
struct FWTLConnectionSettings
{
	struct FString                                     Host;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLDedicatedServerSettings
// 0x00E8
struct FWTLDedicatedServerSettings
{
	struct FString                                     Host;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                MainPort;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinPlayersCount;                                          // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxPlayersCount;                                          // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RoundTime;                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ClientDefaultNetSpeed;                                    // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultPlayerInvulnerableTime;                            // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StatisticsUpdateInterval;                                 // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterDistance;                                        // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MonsterDistance;                                          // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MonsterSleepDistance;                                     // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DroppedItemTTL;                                           // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     DBServer;                                                 // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     DBName;                                                   // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     StatDBName;                                               // 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     DBUserName;                                               // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     DBPassword;                                               // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	EDBDriverType                                      DBDriverType;                                             // 0x0090(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                DBUpdateThreadsCount;                                     // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterAutosaveInterval;                                // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterAutosaveTimeDelta;                               // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCharacterLevel;                                        // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCharacterLevelForPVEMode;                              // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ZabbixServer;                                             // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ZabbixPort;                                               // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NetLagTime;                                               // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SafeZoneEnterInvulnerableChargeSeconds;                   // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SafeZoneLeaveInvulnerableCooldownSeconds;                 // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CharacterDropEnabled;                                     // 0x00C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsArenaLocation;                                          // 0x00C9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               PVPEnabled;                                               // 0x00CA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00CB(0x0001) MISSED OFFSET
	float                                              GeneralChatDistance;                                      // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxConnectionsToTickPerServerFrame;                       // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	struct FString                                     SteamAPIKey;                                              // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLReputationSettings
// 0x0010
struct FWTLReputationSettings
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              UpdatePeriod;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinUpdateValue;                                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxUpdateValue;                                           // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLWorldConfig
// 0x0030 (0x0068 - 0x0038)
struct FWTLWorldConfig : public FWTLPacket
{
	float                                              ExperienceMultiplier;                                     // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterKillExperienceMultiplier;                        // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MonsterKillExperienceMultiplier;                          // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NPCKillExperienceMultiplier;                              // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              QuestExperienceMultiplier;                                // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemTypeExperienceMultiplier;                             // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterDropChanceMultiplier;                            // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterDropCountMultiplier;                             // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MonsterDropChanceMultiplier;                              // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MonsterDropCountMultiplier;                               // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NPCDropChanceMultiplier;                                  // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NPCDropCountMultiplier;                                   // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLGameMode_DominationSettings
// 0x005C
struct FWTLGameMode_DominationSettings
{
	float                                              MonsterExperienceMultiplier;                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterExperienceMultiplier;                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ObjectivesExperienceMultiplier;                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemExperienceMultiplier;                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForCapturePoint;                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForEnemyKill;                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForAllayKill;                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForEnemyCommanderKill;                              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForAllayCommanderKill;                              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForMineKill;                                        // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForHeadshot;                                        // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForMineDestruction;                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForMSPDestruction;                                  // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForRespawn;                                         // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresForMSPRespawn;                                      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinCapturePointSwitchTimeout;                             // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxCapturePointSwitchTimeout;                             // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoresToWin;                                              // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxMatchTime;                                             // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InfluencePerTick;                                         // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapturePointTickInterval;                                 // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayerInvulnerableTime;                                   // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RespawnDelay;                                             // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLGameMode_MonsterHuntSettings
// 0x0028
struct FWTLGameMode_MonsterHuntSettings
{
	float                                              MonsterExperienceMultiplier;                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterExperienceMultiplier;                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ObjectivesExperienceMultiplier;                           // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemExperienceMultiplier;                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Objectives;                                               // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              RespawnDelay;                                             // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLTutorialWarningMessageStoredData
// 0x0018
struct FWTLTutorialWarningMessageStoredData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           ID;                                                       // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsDoNotShowAgain;                                         // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	int                                                ShowCount;                                                // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLGameSettings
// 0x00A8
struct FWTLGameSettings
{
	struct FString                                     Language;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     LastLogin;                                                // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               IsSavePassword;                                           // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     LastPassword;                                             // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     LastPlayedServerName;                                     // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     LastEmail;                                                // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     PDAInterfaceColor;                                        // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               EnableTutorial;                                           // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NVIDIAHighlightsEnabled;                                  // 0x0069(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	TArray<struct FString>                             CharactersTextChatMuteList;                               // 0x0070(0x0010) (CPF_ZeroConstructor)
	TArray<uint16_t>                                   TutorialMessagesStoredData;                               // 0x0080(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWTLTutorialWarningMessageStoredData> TutorialWarningMessagesStoredData;                        // 0x0090(0x0010) (CPF_ZeroConstructor)
	bool                                               IsShowCharacterPositionWhenOpenPDAMap;                    // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsHideActiveQuestInfo;                                    // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsHUDHideByUser;                                          // 0x00A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x00A3(0x0005) MISSED OFFSET
};

// ScriptStruct WTL.WTLGraphicsSettings
// 0x0050
struct FWTLGraphicsSettings
{
	int                                                ScreenResolutionX;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScreenResolutionY;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ResolutionScale;                                          // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScreenMode;                                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               VSync;                                                    // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                TextureStreamingPoolSize;                                 // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FrameLimit;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FullDynamicLight;                                         // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              MotionBlur;                                               // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseContactShadows;                                        // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                MotionBlurQuality;                                        // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               TemporalAA;                                               // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                TemporalAAQuality;                                        // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImageSharpness;                                           // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ProcessingQuality;                                        // 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TextureQuality;                                           // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ViewDistanceQuality;                                      // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmbientOcclusionType;                                     // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLAudioSettings
// 0x0020
struct FWTLAudioSettings
{
	int                                                AudioDriver;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SpeakerMode;                                              // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AudioQualityLevel;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MasterVolume;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MusicVolume;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EffectsVolume;                                            // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CharacterVoiceVolume;                                     // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeechVolume;                                             // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLControlsSettings
// 0x0008
struct FWTLControlsSettings
{
	float                                              MouseSensitivity;                                         // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MouseInvert;                                              // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AimToggle;                                                // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CrouchToggle;                                             // 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ChangeMouseSensitivityOnAim;                              // 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLInterfaceSettings
// 0x0028
struct FWTLInterfaceSettings
{
	bool                                               CrosshairVisibility;                                      // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     CrosshairColor;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               PlayerStatusVisibility;                                   // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WeaponInfoVisibility;                                     // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FastAccessSlotsVisibility;                                // 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MinimapVisibility;                                        // 0x001B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MinimapTimeVisibility;                                    // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FPSCounterVisibility;                                     // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HighLightQuestItemsOnlyForActiveQuest;                    // 0x001E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HideTextChatArea;                                         // 0x001F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CollapseChatAfterMessageSent;                             // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SelectCommonFilterAfterCollapseChat;                      // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowDamageIdentification;                                 // 0x0022(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowUnarmedCrosshair;                                     // 0x0023(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowUseHint;                                              // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowCharacterPreviewInInventory;                          // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowDamagePointerWithHiddenHUD;                           // 0x0026(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HideFastAccessSlotsAfterSomeTime;                         // 0x0027(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLPostProcessSettings
// 0x0014
struct FWTLPostProcessSettings
{
	float                                              GammaLevel;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Contrast;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RedBalance;                                               // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GreenBalance;                                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlueBalance;                                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLLocalCharacterSettings
// 0x0010
struct FWTLLocalCharacterSettings
{
	struct FString                                     Cache;                                                    // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLSecuritySettings
// 0x0020
struct FWTLSecuritySettings
{
	float                                              StandbyRxTriggerTime;                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StandbyRxAttempts;                                        // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandbyTxTriggerTime;                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StandbyTxAttempts;                                        // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BadPingTriggerTimeInterval;                               // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BadPingValue;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JoinTimeTreshold;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TimeDiscrepancyDetectionAttemts;                          // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentificationSettings
// 0x0010
struct FWTLIdentificationSettings
{
	bool                                               bIsPlayersIdentificationEnabled;                          // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMonstersIdentificationEnabled;                         // 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsNPCIdentificationEnabled;                              // 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAlwaysShowGroupAndClanMembers;                           // 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAlwaysShowFriendlyDevices;                               // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                SimplifiedIdentificationEnableDistance;                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IdentificationTransparency;                               // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLVOIPSettings
// 0x0018
struct FWTLVOIPSettings
{
	int                                                RecordDeviceID;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<uint64_t>                                   CharacterBlackList;                                       // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLFortificationCaptureSettings
// 0x0024
struct FWTLFortificationCaptureSettings
{
	int                                                ScoreForCharacterKill;                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreForNPCKill;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreForPointCapture;                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreForPointReconfiguration;                             // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreForPointRestored;                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreForPointJamming;                                     // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScoreMultiplierForLoose;                                  // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                JammersScoringIntervalSeconds;                            // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScoreLimitForCapture;                                     // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLGameplaySettings
// 0x0008
struct FWTLGameplaySettings
{
	int                                                PrimeTimeBeginHour;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PrimeTimeEndHour;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLSettings
// 0x03E8
struct FWTLSettings
{
	struct FWTLConnectionSettings                      Connection;                                               // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLDedicatedServerSettings                 DedicatedServer;                                          // 0x0018(0x00E8) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLReputationSettings                      Reputation;                                               // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLWorldConfig                             WorldConfig;                                              // 0x0110(0x0068) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLGameMode_DominationSettings             GameMode_Domination;                                      // 0x0178(0x005C) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	struct FWTLGameMode_MonsterHuntSettings            GameMode_MonsterHunt;                                     // 0x01D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLGameSettings                            Game;                                                     // 0x0200(0x00A8) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLGraphicsSettings                        Graphics;                                                 // 0x02A8(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLAudioSettings                           Audio;                                                    // 0x02F8(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLControlsSettings                        Controls;                                                 // 0x0318(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLInterfaceSettings                       Interface;                                                // 0x0320(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLPostProcessSettings                     PostProcess;                                              // 0x0348(0x0014) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FWTLLocalCharacterSettings                  LocalCharacter;                                           // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLSecuritySettings                        Security;                                                 // 0x0370(0x0020) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLIdentificationSettings                  Identification;                                           // 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLVOIPSettings                            VOIP;                                                     // 0x03A0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLFortificationCaptureSettings            FortificationCaptureSettings;                             // 0x03B8(0x0024) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLGameplaySettings                        Gameplay;                                                 // 0x03DC(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLActionTimerWidgetType
// 0x0030
struct FWTLActionTimerWidgetType
{
	EWTLActionTimerWidgetType                          Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLFactionTexture
// 0x0030
struct FWTLFactionTexture
{
	EWTLFaction                                        Faction;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLFactionColor
// 0x0014
struct FWTLFactionColor
{
	EWTLFaction                                        Faction;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterClassTexture
// 0x0030
struct FWTLCharacterClassTexture
{
	EWTLCharacterClass                                 Class;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLCharacterEffectTypeColor
// 0x0014
struct FWTLCharacterEffectTypeColor
{
	EWTLCharacterEffectType                            EffectType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLSellItemInfo
// 0x0048
struct FWTLSellItemInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ItemName;                                                 // 0x0008(0x0018) (CPF_Edit)
	uint64_t                                           ItemID;                                                   // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ItemTypeID;                                               // 0x0028(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                ItemCount;                                                // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemMinBuyCount;                                          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ItemCommissionPrice;                                      // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ItemCommissionCharacterID;                                // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemWeight;                                               // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLNotificationTypeConfig
// 0x0068
struct FWTLNotificationTypeConfig
{
	EWTLHUDNotificationType                            Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0008(0x0028) (CPF_Edit)
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UFMODEvent>                   SoundEvent;                                               // 0x0040(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLMedicineEffectImageInfo
// 0x0040
struct FWTLMedicineEffectImageInfo
{
	EWTLMedicineEffectParameter                        Parameter;                                                // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0008(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FLinearColor                                Color;                                                    // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMapCanvasMarker
// 0x0068
struct FWTLMapCanvasMarker
{
	struct FWTLMapMarker                               Marker;                                                   // 0x0000(0x0060)
	class UWTLCommonMapMarker*                         MarkerWidget;                                             // 0x0060(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMapItemData
// 0x0108 (0x0110 - 0x0008)
struct FWTLMapItemData : public FTableRowBase
{
	struct FString                                     MapName;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     MapPath;                                                  // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MasterMapID;                                              // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     MasterMapOffset;                                          // 0x0044(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PDAModuleID;                                              // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   MapTexture;                                               // 0x0058(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   LocationPreviewTexture;                                   // 0x0080(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UMaterial>                    MinimapMaterial;                                          // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              LandscapeSideSize;                                        // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   WorldCenterOffset;                                        // 0x00D4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleValue;                                               // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ZoomInScaleDeltaRange;                                    // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ZoomOutScaleDeltaRange;                                   // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MapOriginalSideSize;                                      // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MapSideSizeWithBorder;                                    // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   FirstSectorPosition;                                      // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SectorSize;                                               // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FString                                     FirstSectorName;                                          // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLReplica
// 0x0020
struct FWTLReplica
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLRadialMenuActionInfo
// 0x0050
struct FWTLRadialMenuActionInfo
{
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0000(0x0028) (CPF_Edit)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit)
	struct FString                                     DebugPreviewText;                                         // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLUseMenuActionInfo
// 0x0008 (0x0058 - 0x0050)
struct FWTLUseMenuActionInfo : public FWTLRadialMenuActionInfo
{
	EWTLUseMenuActionType                              Type;                                                     // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLServerEventTypeColor
// 0x0014
struct FWTLServerEventTypeColor
{
	EWTLServerEventType                                Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLItemTypeStoreButtonStyle
// 0x0280
struct FWTLItemTypeStoreButtonStyle
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x0278) (CPF_Edit)
};

// ScriptStruct WTL.WTLEquipmentTypeTexture
// 0x0030
struct FWTLEquipmentTypeTexture
{
	EWTLEquipmentType                                  Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLInteractivePlanSpawnFieldPoint
// 0x0018
struct FWTLInteractivePlanSpawnFieldPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLInteractivePlantSpawnInfo
// 0x0008
struct FWTLInteractivePlantSpawnInfo
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Chance;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLInteractiveResourceGatherItem
// 0x000C
struct FWTLInteractiveResourceGatherItem
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ConsumeAfterGather;                                       // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLInteractiveResourceResultItem
// 0x0008
struct FWTLInteractiveResourceResultItem
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLInteractiveResourceGatherType
// 0x0030
struct FWTLInteractiveResourceGatherType
{
	TArray<struct FWTLInteractiveResourceGatherItem>   RequireItems;                                             // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLInteractiveResourceResultItem>   ResultItems;                                              // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              MinResourceValueToGather;                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinResourceValueDecrement;                                // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxResourceValueDecrement;                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLPickupSpawnPointScalabilitySettings
// 0x0014
struct FWTLPickupSpawnPointScalabilitySettings
{
	unsigned char                                      bUseScalabilitySettings : 1;                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                InitialMaxCount;                                          // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialCountLimit;                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxCountDeltaPerPlayer;                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CountLimitDeltaPerPlayer;                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLLocalizationCacheRecord
// 0x0020
struct FWTLLocalizationCacheRecord
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLLanguageInfo
// 0x0098
struct FWTLLanguageInfo
{
	struct FString                                     Culture;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FSlateBrush                                 Brush;                                                    // 0x0010(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLSteamServerInfo
// 0x0068
struct FWTLSteamServerInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct WTL.ItemAnimationSet
// 0x0018
struct FItemAnimationSet
{
	class UAnimMontage*                                Item;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                PawnMale;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActionDurationWithoutAnimation;                           // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationRate;                                            // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMiningSpotResource
// 0x0014
struct FWTLMiningSpotResource
{
	uint16_t                                           ResourceID;                                               // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MiningChance;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapacityCostPerUnit;                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCount;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLQuestMiningChance
// 0x0008
struct FWTLQuestMiningChance
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Chance;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMiningZoneItem
// 0x0030
struct FWTLMiningZoneItem
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalMiningChance;                                       // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLQuestMiningChance>               QuestMiningChances;                                       // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              MinSignalPower;                                           // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CapacityCostPerUnit;                                      // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCount;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeDetectedWithNDPDetector;                             // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeDetectedWithMetalDetector;                           // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLMonstersDataForSpawnBase
// 0x0038
struct FWTLMonstersDataForSpawnBase
{
	TArray<class UClass*>                              SpawnClass;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              LifeTimeMonster;                                          // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsRandomSelectionClass;                                   // 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                CountOfActiveMonsters;                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IntervalSpawn;                                            // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinLevel;                                                 // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              SpawnRadius;                                              // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsLimitMonsterSpawning;                                   // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                MonstersLimit;                                            // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LifeTimeSpawn;                                            // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLQuestInfo
// 0x0008
struct FWTLQuestInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterCanTakeCompleteQuest                  CanTakeCompleteQuest;                                     // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLReplicaNPCTakeCompleteQuest
// 0x0028
struct FWTLReplicaNPCTakeCompleteQuest
{
	int                                                NPCReplicaIDTakeQuest;                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NPCReplicaIDCompleteQuest;                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        CharacterReplicaIDTakeQuest;                              // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        CharacterReplicaIDCompleteQuest;                          // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLReplicaGreetingNpcFromStateQuest
// 0x0048
struct FWTLReplicaGreetingNpcFromStateQuest
{
	int                                                NPCReplicaIDQuestNone;                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        CharacterReplicaIDQuestNone;                              // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NPCReplicaIDQuestInProgress;                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<int>                                        CharacterReplicaIDQuestInProgress;                        // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NPCReplicaIDQuestComplete;                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<int>                                        CharacterReplicaIDQuestComplete;                          // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLQuestDialogReplicaInfo
// 0x0028
struct FWTLQuestDialogReplicaInfo
{
	int                                                CharacterReplicaID;                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NPCReplicaID;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        CharacterReplyReplicaArray;                               // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     Exec;                                                     // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLQuestConditionToExecute
// 0x0048
struct FWTLQuestConditionToExecute
{
	int                                                NeedSlots;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NPCReplicaIDSlot;                                         // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        CharacterReplicaArraySlot;                                // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NeedWeight;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NPCReplicaIDWeight;                                       // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        CharacterReplicaArrayWeight;                              // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                NeedMoney;                                                // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NPCReplicaIDMoney;                                        // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        CharacterReplicaArrayMoney;                               // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLQuestReplicas
// 0x0100
struct FWTLQuestReplicas
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InfoReplicaID;                                            // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DescriptionReplicaID;                                     // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CharacterReplicaID;                                       // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DescriptionReplicaIDRepeatable;                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CharacterReplicaIDRepeatable;                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TakeReplicaID;                                            // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLNPCReplicaAction                               ActionTakeQuest;                                          // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                CompleteReplicaID;                                        // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLNPCReplicaAction                               ActionCompleteQuest;                                      // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                CancelReplicaID;                                          // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLNPCReplicaAction                               ActionRejectQuest;                                        // 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FWTLReplicaNPCTakeCompleteQuest             ReplicaNPCTakeCompleteQuest;                              // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLReplicaGreetingNpcFromStateQuest        ReplicaGreetingNpcFromStateQuest;                         // 0x0058(0x0048) (CPF_Edit, CPF_BlueprintVisible)
	EWTLNPCReplicaAction                               ActionGreetingCanTakeQuest;                               // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLNPCReplicaAction                               ActionGreetingQuestInProgress;                            // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLNPCReplicaAction                               ActionGreetingCanCompleteQuest;                           // 0x00A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLNPCReplicaAction                               ActionGreetingCanReTakeQuest;                             // 0x00A3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	TArray<struct FWTLQuestDialogReplicaInfo>          DialogReplicaArray;                                       // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FWTLQuestConditionToExecute                 QuestConditionToExecute;                                  // 0x00B8(0x0048) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLGeneratedSellItemInfo
// 0x0018
struct FWTLGeneratedSellItemInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PriceMultiplier;                                          // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               RoundNumberPrice;                                         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MinBuyCount;                                              // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLNPCSupplyItem
// 0x0010
struct FWTLNPCSupplyItem
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BasePriceMultiplier;                                      // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExperienceMultiplier;                                     // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLNPCSupply
// 0x0020
struct FWTLNPCSupply
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredQuestStates;                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLNPCSupplyItem>                   Items;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                SupplyListReplicaID;                                      // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLNPCIdleAnimation
// 0x0018
struct FWTLNPCIdleAnimation
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Chance;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinChangeDelay;                                           // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxChangeDelay;                                           // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLGiveItemInfo
// 0x0010
struct FWTLGiveItemInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLTakeItemInfo
// 0x000C
struct FWTLTakeItemInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLPortalStationWay
// 0x0028
struct FWTLPortalStationWay
{
	int                                                LocationID;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PortalID;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit)
	unsigned char                                      MinCharacterLevel;                                        // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxCharacterLevel;                                        // 0x0021(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x0022(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	float                                              EnergyConsumptionMultiplier;                              // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLQuestAchievementStaticMesh
// 0x0010
struct FWTLQuestAchievementStaticMesh
{
	class AStaticMeshActor*                            StaticMesh;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QuestStatesForShowMesh;                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLQuestAchievements
// 0x0018
struct FWTLQuestAchievements
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FWTLQuestAchievementStaticMesh>      Meshes;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLQuestState
// 0x0018
struct FWTLQuestState
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLQuestState                                     State;                                                    // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FWTLDateTime                                LastChangeDate;                                           // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Active;                                                   // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLUseMenuButtonInfo
// 0x0038
struct FWTLUseMenuButtonInfo
{
	EWTLUseMenuActionType                              ActionType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     UFunctionName;                                            // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       CustomButtonDescription;                                  // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLGroupMember
// 0x0020 (0x0058 - 0x0038)
struct FWTLGroupMember : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               Leader;                                                   // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLGroup
// 0x0028 (0x0060 - 0x0038)
struct FWTLGroup : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLGroupMember>                     Members;                                                  // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLDaytimeCubemap
// 0x0010
struct FWTLDaytimeCubemap
{
	float                                              DayTime;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTextureCube*                                Texture;                                                  // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLItemSpawnInfo
// 0x0078
struct FWTLItemSpawnInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCount;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCondition;                                             // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCondition;                                             // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinInteractiveObjectID;                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxInteractiveObjectID;                                   // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Chance;                                                   // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FWTLQuestItemDropChance>             QuestChances;                                             // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               SpawnOnlyIfDoesNotHaveItem;                               // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AddToBlackListAfterSpawn;                                 // 0x0061(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IgnoreNoPrice;                                            // 0x0062(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	float                                              MinSpawnDelay;                                            // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpawnDelay;                                            // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FDateTime                                   NextSpawnTime;                                            // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLWaterContainer
// 0x0008
struct FWTLWaterContainer
{
	EWTLItemType                                       EmptyItemType;                                            // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           EmptyItemTypeID;                                          // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       FullItemType;                                             // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0005(0x0001) MISSED OFFSET
	uint16_t                                           FullItemTypeID;                                           // 0x0006(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLEmotion
// 0x0068
struct FWTLEmotion
{
	struct FWTLRadialMenuActionInfo                    RadialMenuActionInfo;                                     // 0x0000(0x0050) (CPF_Edit)
	bool                                               BlockCameraRotation;                                      // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HideUsableItem;                                           // 0x0051(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsBlocking;                                               // 0x0052(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	class UAnimMontage*                                MaleMontage;                                              // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FemaleMontage;                                            // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLEmotionTypeItemData
// 0x0060 (0x0068 - 0x0008)
struct FWTLEmotionTypeItemData : public FTableRowBase
{
	struct FWTLRadialMenuActionInfo                    RadialMenuActionInfo;                                     // 0x0008(0x0050) (CPF_Edit)
	TArray<struct FWTLEmotion>                         Emotions;                                                 // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLTutorialMessageItemData
// 0x0050 (0x0058 - 0x0008)
struct FWTLTutorialMessageItemData : public FTableRowBase
{
	EWTLTutorialMessageType                            Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Image;                                                    // 0x0010(0x0028) (CPF_Edit)
	struct FText                                       Text;                                                     // 0x0038(0x0018) (CPF_Edit)
	unsigned char                                      WarningShowCountLimit;                                    // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterRankItemData
// 0x0078 (0x0080 - 0x0008)
struct FWTLCharacterRankItemData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit)
	uint64_t                                           Score;                                                    // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ScoreToNextRank;                                          // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>                   SmallIcon;                                                // 0x0030(0x0028) (CPF_Edit)
	TSoftObjectPtr<class UTexture2D>                   LargeIcon;                                                // 0x0058(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLEnemyNPCWeaponItemVariation
// 0x0018
struct FWTLEnemyNPCWeaponItemVariation
{
	uint16_t                                           WeaponItemTypeID;                                         // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TArray<uint16_t>                                   AmmoitemTypeIDVariations;                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLEnemyNPCItemData
// 0x0100 (0x0108 - 0x0008)
struct FWTLEnemyNPCItemData : public FTableRowBase
{
	int                                                GroupId;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUseCustomizationVariations;                              // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<TSoftObjectPtr<class USkeletalMesh>>        HeadVariations;                                           // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<TSoftObjectPtr<class USkeletalMesh>>        TorsoVariations;                                          // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<TSoftObjectPtr<class USkeletalMesh>>        LegsVariations;                                           // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<TSoftObjectPtr<class USkeletalMesh>>        FeetVariations;                                           // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               bUseEquipmentVariations;                                  // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TArray<int>                                        HeadClothesItemTypeIDVariations;                          // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        TorsoClothesItemTypeIDVariations;                         // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        LegsClothesItemTypeIDVariations;                          // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        FeetClothesItemTypeIDVariations;                          // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLEnemyNPCWeaponItemVariation>     WeaponItemTypeIDVariationsWithAmmo;                       // 0x0098(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        FrontPlateTypeIDVariations;                               // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        BackPlateTypeIDVariations;                                // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                MinLevel;                                                 // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLevel;                                                 // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Strength;                                                 // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Dexterity;                                                // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Stamina;                                                  // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Accuracy;                                                 // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Intelligence;                                             // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Fortune;                                                  // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExperienceToHPRate;                                       // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FTimespan                                   MaxExperienceGainTimeout;                                 // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLItemDropInfo>                    ItemsToDrop;                                              // 0x00F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLEnemyGroupItemData
// 0x0040 (0x0048 - 0x0008)
struct FWTLEnemyGroupItemData : public FTableRowBase
{
	struct FText                                       GroupName;                                                // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	EWTLAITeam                                         Team;                                                     // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FText>                               FirstNameVariations;                                      // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FText>                               LastNameVariations;                                       // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCustomWeaponItemData
// 0x0050 (0x0058 - 0x0008)
struct FWTLCustomWeaponItemData : public FTableRowBase
{
	int                                                WeaponID;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MagazineCapacity;                                         // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                DamageMin;                                                // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageMax;                                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMin;                                         // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMax;                                         // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CriticalHitChanceMultiplier;                              // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Accuracy;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ConditionDelta;                                           // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ModCount;                                                 // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       CustomizationName;                                        // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      CustomizationScalar;                                      // 0x0050(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLCustomizationColorPresetItemData
// 0x0028 (0x0030 - 0x0008)
struct FWTLCustomizationColorPresetItemData : public FTableRowBase
{
	EWTLCustomizationColorPresetType                   Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                PreviewColor;                                             // 0x001C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLClanStorageTabImageItemData
// 0x0088 (0x0090 - 0x0008)
struct FWTLClanStorageTabImageItemData : public FTableRowBase
{
	struct FSlateBrush                                 ImageBrush;                                               // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLCraftIngredient
// 0x0010
struct FWTLCraftIngredient
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ConsumeOnCraft;                                           // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLCraftResult
// 0x000C
struct FWTLCraftResult
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCraftItemData
// 0x00A0 (0x00A8 - 0x0008)
struct FWTLCraftItemData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   CraftIcon;                                                // 0x0038(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	EWTLCraftType                                      Type;                                                     // 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                PDAModuleID;                                              // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                QuestID;                                                  // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CompleteQuestID;                                          // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NeedCraftExperience;                                      // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NeedSurvivalExperience;                                   // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLCraftIngredient>                 Ingredients;                                              // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLCraftResult>                     Results;                                                  // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              CraftTime;                                                // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CraftExperience;                                          // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SurvivalExperience;                                       // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Experience;                                               // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLInformationDialogItemData
// 0x0018 (0x0020 - 0x0008)
struct FWTLInformationDialogItemData : public FTableRowBase
{
	struct FText                                       Text;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLCustomizationScalarOptionItemData
// 0x0060 (0x0068 - 0x0008)
struct FWTLCustomizationScalarOptionItemData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Price;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture>                     Texture;                                                  // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Roughness;                                                // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        DistinctColors;                                           // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCustomizationColorItemData
// 0x0010 (0x0018 - 0x0008)
struct FWTLCustomizationColorItemData : public FTableRowBase
{
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLChatSmileItemData
// 0x0048 (0x0050 - 0x0008)
struct FWTLChatSmileItemData : public FTableRowBase
{
	struct FString                                     ImageStyleName;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FString>                             TextAliases;                                              // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TSoftObjectPtr<class UTexture2D>                   SmileImage;                                               // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLSkyLevelPresetItemData
// 0x0018 (0x0020 - 0x0008)
struct FWTLSkyLevelPresetItemData : public FTableRowBase
{
	struct FText                                       CloudyDay;                                                // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLItemTypeBrushItemData
// 0x0088 (0x0090 - 0x0008)
struct FWTLItemTypeBrushItemData : public FTableRowBase
{
	struct FSlateBrush                                 IconBrush;                                                // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLPortalItemData
// 0x0050 (0x0058 - 0x0008)
struct FWTLPortalItemData : public FTableRowBase
{
	TMap<int, struct FText>                            LocationDisplayText;                                      // 0x0008(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLSafeZoneItemData
// 0x0018 (0x0020 - 0x0008)
struct FWTLSafeZoneItemData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLMapMarkerSubTypeBrushItemData
// 0x0088 (0x0090 - 0x0008)
struct FWTLMapMarkerSubTypeBrushItemData : public FTableRowBase
{
	struct FSlateBrush                                 MarkerSubTypeBrush;                                       // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLMapMarkerBrushItemData
// 0x0118 (0x0120 - 0x0008)
struct FWTLMapMarkerBrushItemData : public FTableRowBase
{
	struct FSlateBrush                                 MarkerBrush;                                              // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	struct FSlateBrush                                 MarkerBrushForLegend;                                     // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               IsMarkerForArena;                                         // 0x0118(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsMarkerForArenaDomination;                               // 0x0119(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsMarkerForArenaMonsterHunt;                              // 0x011A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x011B(0x0005) MISSED OFFSET
};

// ScriptStruct WTL.WTLSkillDependency
// 0x0008 (0x0040 - 0x0038)
struct FWTLSkillDependency : public FWTLPacket
{
	EWTLSkillDependencyType                            Type;                                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           SkillID;                                                  // 0x003A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterParameterInfluence
// 0x0008
struct FWTLCharacterParameterInfluence
{
	EWTLCharacterParameter                             Parameter;                                                // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterParameterInfluenceType                InfluenceType;                                            // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Influence;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterSkillItemData
// 0x00B0 (0x00B8 - 0x0008)
struct FWTLCharacterSkillItemData : public FTableRowBase
{
	int                                                X;                                                        // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinCharacterLevel;                                        // 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	EWTLSkillType                                      Type;                                                     // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterClass                                 Class;                                                    // 0x0041(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ClassDefault;                                             // 0x0042(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SkillLevel;                                               // 0x0043(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FText                                       EffectDescription;                                        // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                EffectTime;                                               // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UseInterval;                                              // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SkillPoints;                                              // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Price;                                                    // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLSkillDependency>                 Dependencies;                                             // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterParameterInfluence>     Influences;                                               // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0090(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLKitItem
// 0x000C
struct FWTLKitItem
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLKitItemData
// 0x0020 (0x0028 - 0x0008)
struct FWTLKitItemData : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLKitItem>                         Items;                                                    // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterEffectsItemData
// 0x0088 (0x0090 - 0x0008)
struct FWTLCharacterEffectsItemData : public FTableRowBase
{
	EWTLCharacterEffectType                            EffectType;                                               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              EffectCooldownPerSecond;                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxVolumesEffectValue;                                    // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0018(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UFMODEvent>                   AddingSound;                                              // 0x0040(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UFMODEvent>                   RemovingSound;                                            // 0x0068(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLQuestItemRequirement
// 0x0020
struct FWTLQuestItemRequirement
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CustomizationName;                                        // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               LockedInInventory;                                        // 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ComsumeOnComplete;                                        // 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLQuestRequirement
// 0x0008
struct FWTLQuestRequirement
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLQuestState                                     State;                                                    // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLMonsterKillRequirement
// 0x000C
struct FWTLMonsterKillRequirement
{
	int                                                MonsterID;                                                // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinLevel;                                                 // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLEnemyNPCKillRequirement
// 0x0028
struct FWTLEnemyNPCKillRequirement
{
	int                                                EnemyNPCID;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       EnemyNPCName;                                             // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      MinLevel;                                                 // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	int                                                Count;                                                    // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCustomQuestRequirement
// 0x0048
struct FWTLCustomQuestRequirement
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   Icon;                                                     // 0x0018(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               UseBitMaskForProgress;                                    // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLQuestItemReward
// 0x0040
struct FWTLQuestItemReward
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               LockedInInventory;                                        // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLIdentityItemType
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentityItemType : public FWTLPacket
{
	EWTLItemType                                       Type;                                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0039(0x0001) MISSED OFFSET
	uint16_t                                           TypeID;                                                   // 0x003A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLMapQuestPoint
// 0x0010
struct FWTLMapQuestPoint
{
	int                                                LocationID;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PointLocation;                                            // 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLQuestStateAction
// 0x0008
struct FWTLQuestStateAction
{
	int                                                QuestID;                                                  // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLQuestState                                     State;                                                    // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SetActive;                                                // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLQuestItemData
// 0x0170 (0x0178 - 0x0008)
struct FWTLQuestItemData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	EWTLQuestType                                      Type;                                                     // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeCanceled;                                            // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBePerformedInGroup;                                    // 0x0022(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinCharacterLevel;                                        // 0x0023(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxCharacterLevel;                                        // 0x0024(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RecommendedCharacterLevel;                                // 0x0025(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinCharacterReputation;                                   // 0x0026(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxCharacterReputation;                                   // 0x0027(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterClass                                 CharacterClass;                                           // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CheckCharacterFaction;                                    // 0x0029(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        CharacterFaction;                                         // 0x002A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FTimespan                                   CompleteTimeLimit;                                        // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FTimespan                                   TakeTimeLimit;                                            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               AutoCompleteQuest;                                        // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   QuestIcon;                                                // 0x0048(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MoneyRequirement;                                         // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DisplayItemRequirements;                                  // 0x008C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	TArray<struct FWTLQuestItemRequirement>            ItemRequirements;                                         // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLQuestRequirement>                QuestRequirements;                                        // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLMonsterKillRequirement>          MonsterKillRequirements;                                  // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLEnemyNPCKillRequirement>         EnemyNPCKillRequirements;                                 // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLCustomQuestRequirement>          CustomRequirements;                                       // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ExperienceReward;                                         // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MoneyReward;                                              // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLQuestItemReward>                 ItemRewards;                                              // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               UseRandomItemReward;                                      // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FWTLQuestItemReward>                 ItemRewardsAtStart;                                       // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                ReputationReward;                                         // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AchievementReward;                                        // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLIdentityItemType>                WithdrawItemsAfterQuestCompleted;                         // 0x0118(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLMapQuestPoint>                   MapQuestPoints;                                           // 0x0128(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FWTLMapQuestPoint                           MapQuestCompletePoint;                                    // 0x0138(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<int>                                        MonsterList;                                              // 0x0148(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLQuestStateAction>                QuestStateActionsOnComplete;                              // 0x0158(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<int>                                        DeleteQuestOnCancel;                                      // 0x0168(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLDialogReplicaItemData
// 0x00A8 (0x00B0 - 0x0008)
struct FWTLDialogReplicaItemData : public FTableRowBase
{
	struct FText                                       MaleText;                                                 // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       FemaleText;                                               // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USoundBase>                   MaleSound;                                                // 0x0038(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USoundBase>                   FemaleSound;                                              // 0x0060(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UFMODEvent>                   ReplicaSound;                                             // 0x0088(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLAchievementItemData
// 0x0090 (0x0098 - 0x0008)
struct FWTLAchievementItemData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   InProgressIcon;                                           // 0x0038(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   EarnedIcon;                                               // 0x0060(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               Hidden;                                                   // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	int                                                StatisticsParameterID;                                    // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Value;                                                    // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLStatisticsParameterItemData
// 0x0018 (0x0020 - 0x0008)
struct FWTLStatisticsParameterItemData : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	uint64_t                                           MaxValue;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMonsterAttackEffect
// 0x0010
struct FWTLMonsterAttackEffect
{
	EWTLCharacterEffectType                            EffectType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Chance;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMonsterItemData
// 0x0198 (0x01A0 - 0x0008)
struct FWTLMonsterItemData : public FTableRowBase
{
	struct FText                                       Name;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      MinLevel;                                                 // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0021(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              DangerLevelMultiplier;                                    // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsRegularAnimal;                                          // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              MassInKg;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UClass>                       BlueprintClass;                                           // 0x0030(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ExperienceToHPRate;                                       // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExperienceForKill;                                        // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTimespan                                   MaxExperienceGainTimeout;                                 // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Health;                                                   // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthPerLevel;                                           // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegenerateHealthDelay;                                    // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RegenerateHealthRate;                                     // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinRegenerationDamageTreshold;                            // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
	TArray<struct FWTLMonsterAttackEffect>             CausingEffects;                                           // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              CloseAttackMinDamage;                                     // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackMaxDamage;                                     // 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackMinDamagePerLevel;                             // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackMaxDamagePerLevel;                             // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackRadiusPerLevel;                                // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackMinArmorPiercing;                              // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackMaxArmorPiercing;                              // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackMinArmorPiercingPerLevel;                      // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackMaxArmorPiercingPerLevel;                      // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackEffectPercentPerLevel;                         // 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseAttackCriticalDamageMultiplier;                      // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackMinDamage;                                       // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackMaxDamage;                                       // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackMinDamagePerLevel;                               // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackRadiusPerLevel;                                  // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackMaxDamagePerLevel;                               // 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackMinArmorPiercingPerLevel;                        // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackMaxArmorPiercingPerLevel;                        // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FarAttackCriticalDamageMultiplier;                        // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeadArmor;                                                // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BodyArmor;                                                // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArmsArmor;                                                // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LegsArmor;                                                // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FeetArmor;                                                // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeadArmorPerLevel;                                        // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BodyArmorPerLevel;                                        // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArmsArmorPerLevel;                                        // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LegsArmorPerLevel;                                        // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FeetArmorPerLevel;                                        // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FSlateBrush                                 ObjectiveIconBrush;                                       // 0x0108(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FWTLItemDropInfo>                    ItemsToDrop;                                              // 0x0190(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterLevelItemData
// 0x0010 (0x0018 - 0x0008)
struct FWTLCharacterLevelItemData : public FTableRowBase
{
	int                                                Experience;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExperienceToNextLevel;                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SkillPoints;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParametersPoints;                                         // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLLoadingAdviceItemData
// 0x0018 (0x0020 - 0x0008)
struct FWTLLoadingAdviceItemData : public FTableRowBase
{
	struct FText                                       AdviceText;                                               // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLLoadingScreenImagesItemData
// 0x0018 (0x0020 - 0x0008)
struct FWTLLoadingScreenImagesItemData : public FTableRowBase
{
	struct FSoftObjectPath                             Image;                                                    // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterCustomizationColorParameter
// 0x0010
struct FWTLCharacterCustomizationColorParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterCustomizationScalarParameter
// 0x0018
struct FWTLCharacterCustomizationScalarParameter
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      ScalarValueCount;                                         // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterCustomizationItemData
// 0x02D0 (0x02D8 - 0x0008)
struct FWTLCharacterCustomizationItemData : public FTableRowBase
{
	EWTLCharacterCustomizationPart                     Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCharacterClass                                 ClassType;                                                // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsDefaultClassObject;                                     // 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLSex                                            Sex;                                                      // 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                SteamID;                                                  // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<int>                                        RequiredSteamDLC;                                         // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               NeedLongPants;                                            // 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsHairlessHead;                                          // 0x0041(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TSoftObjectPtr<class USkeletalMesh>                SkeletalMesh;                                             // 0x0048(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>                SkeletalMeshVariant1;                                     // 0x0070(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       MaterialSlotName0;                                        // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       MaterialName0;                                            // 0x00A0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance0_Color0;                                 // 0x00B8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance0_Color1;                                 // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance0_Color2;                                 // 0x00D8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance0_Color3;                                 // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance0_ScalarParameter0;                       // 0x00F8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance0_ScalarParameter1;                       // 0x0110(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance0_ScalarParameter2;                       // 0x0128(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance0_ScalarParameter3;                       // 0x0140(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       MaterialSlotName1;                                        // 0x0158(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       MaterialName1;                                            // 0x0160(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance1_Color0;                                 // 0x0178(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance1_Color1;                                 // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance1_Color2;                                 // 0x0198(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance1_Color3;                                 // 0x01A8(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance1_ScalarParameter0;                       // 0x01B8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance1_ScalarParameter1;                       // 0x01D0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance1_ScalarParameter2;                       // 0x01E8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance1_ScalarParameter3;                       // 0x0200(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       MaterialSlotName2;                                        // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       MaterialName2;                                            // 0x0220(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance2_Color0;                                 // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance2_Color1;                                 // 0x0248(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance2_Color2;                                 // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationColorParameter    MaterialInstance2_Color3;                                 // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance2_ScalarParameter0;                       // 0x0278(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance2_ScalarParameter1;                       // 0x0290(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance2_ScalarParameter2;                       // 0x02A8(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FWTLCharacterCustomizationScalarParameter   MaterialInstance2_ScalarParameter3;                       // 0x02C0(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLItemClassRequirement
// 0x0008
struct FWTLItemClassRequirement
{
	EWTLCharacterClass                                 Class;                                                    // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Strength;                                                 // 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Dexterity;                                                // 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Stamina;                                                  // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Accuracy;                                                 // 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Intelligence;                                             // 0x0006(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Fortune;                                                  // 0x0007(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLUseItemResult
// 0x000C
struct FWTLUseItemResult
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLArtefactItemData
// 0x01C0 (0x01C8 - 0x0008)
struct FWTLArtefactItemData : public FTableRowBase
{
	EWTLArtefactType                                   Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShopDescription;                                          // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Validity;                                                 // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropChance;                                               // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x0064(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	TArray<struct FWTLItemClassRequirement>            ArenaClassRequirements;                                   // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLItemClassRequirement>            RPGClassRequirements;                                     // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              BasePrice;                                                // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   InventoryIcon;                                            // 0x0090(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   StoreIcon;                                                // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UClass>                       ItemPickupClass;                                          // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UStaticMesh>                  CharacterArtefactPreviewMesh;                             // 0x0108(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanBeUnited;                                              // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TArray<struct FWTLCharacterEffectInfluence>        Influences;                                               // 0x0138(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                HungerValue;                                              // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ThirstValue;                                              // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HealthValue;                                              // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StaminaValue;                                             // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AlcoholValue;                                             // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PoisonValue;                                              // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadiationValue;                                           // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BleedingValue;                                            // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WoundedValue;                                             // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	TArray<struct FWTLUseItemResult>                   ResultItems;                                              // 0x0170(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               CanBePlacedOnCommission;                                  // 0x0180(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0181(0x0007) MISSED OFFSET
	TArray<TSoftObjectPtr<class UTexture2D>>           Images;                                                   // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               CanTransferToSteam;                                       // 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0199(0x0003) MISSED OFFSET
	int                                                SteamMarketID;                                            // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UFMODEvent>                   UseSoundEvent;                                            // 0x01A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct WTL.WTLResourceItemData
// 0x00F8 (0x0100 - 0x0008)
struct FWTLResourceItemData : public FTableRowBase
{
	EWTLResourceType                                   Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShopDescription;                                          // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              BasePrice;                                                // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropChance;                                               // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   InventoryIcon;                                            // 0x0068(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   StoreIcon;                                                // 0x0090(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UClass>                       ItemPickupClass;                                          // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanBeUnited;                                              // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	TArray<struct FWTLCharacterEffectInfluence>        Influences;                                               // 0x00E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               CanBePlacedOnCommission;                                  // 0x00F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanTransferToSteam;                                       // 0x00F9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00FA(0x0002) MISSED OFFSET
	int                                                SteamMarketID;                                            // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLClothesItemData
// 0x0228 (0x0230 - 0x0008)
struct FWTLClothesItemData : public FTableRowBase
{
	EWTLClothesType                                    Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShopDescription;                                          // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                MasterClothesID;                                          // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CopyParametersFromMasterClothes;                          // 0x005C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLArmorClass                                     ArmorClass;                                               // 0x005D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
	int                                                ArmorMin;                                                 // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorMax;                                                 // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HaveFrontPlate;                                           // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<int>                                        AcceptableFrontPlates;                                    // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               HaveBackPlate;                                            // 0x0080(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<int>                                        AcceptableBackPlates;                                     // 0x0088(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              MonsterArmorMultiplier;                                   // 0x0098(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ConditionDelta;                                           // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CoverArms;                                                // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HidesBackpackStraps;                                      // 0x00A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReplaceBodyPart;                                          // 0x00AA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NeedLongPants;                                            // 0x00AB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClothesTorsoMeshVariant                        TorsoMeshVariant;                                         // 0x00AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x00AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	TArray<struct FWTLItemClassRequirement>            ArenaClassRequirements;                                   // 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLItemClassRequirement>            RPGClassRequirements;                                     // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              DropChance;                                               // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinRepairExperience;                                      // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BasePrice;                                                // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   InventoryIcon;                                            // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   StoreIcon;                                                // 0x0108(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UClass>                       ItemPickupClass;                                          // 0x0130(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>                MaleCharacterBodyMesh;                                    // 0x0158(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>                FemaleCharacterBodyMesh;                                  // 0x0180(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>                MaleCharacterBodyMeshVariant1;                            // 0x01A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>                FemaleCharacterBodyMeshVariant1;                          // 0x01D0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UStaticMesh>                  CharacterClothesPreviewMesh;                              // 0x01F8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanBeCustomized;                                          // 0x0220(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeCamouflaged;                                         // 0x0221(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBePlacedOnCommission;                                  // 0x0222(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeViewedThroughPreviewMeshesList;                      // 0x0223(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanTransferToSteam;                                       // 0x0224(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0225(0x0003) MISSED OFFSET
	int                                                SteamMarketID;                                            // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLWeaponAttachmentInstallInfo
// 0x00C0
struct FWTLWeaponAttachmentInstallInfo
{
	struct FVector                                     AimingOffset;                                             // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AimingHandsOffsetMale;                                    // 0x000C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AimingHandsOffsetFemale;                                  // 0x0018(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
	struct FTransform                                  AttachmentOffset;                                         // 0x0030(0x0030) (CPF_Edit, CPF_IsPlainOldData)
	TSoftObjectPtr<class UStaticMesh>                  MountMesh;                                                // 0x0060(0x0028) (CPF_Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	struct FTransform                                  MountOffset;                                              // 0x0090(0x0030) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLStuffItemData
// 0x03E0 (0x03E8 - 0x0008)
struct FWTLStuffItemData : public FTableRowBase
{
	EWTLStuffType                                      Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShopDescription;                                          // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Condition;                                                // 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ConditionDelta;                                           // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropChance;                                               // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinRepairExperience;                                      // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x006C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	TArray<struct FWTLItemClassRequirement>            ArenaClassRequirements;                                   // 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLItemClassRequirement>            RPGClassRequirements;                                     // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              BasePrice;                                                // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       BlueprintClass;                                           // 0x0098(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   InventoryIcon;                                            // 0x00C0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   StoreIcon;                                                // 0x00E8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UClass>                       ItemPickupClass;                                          // 0x0110(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   ScopeFrameTexture;                                        // 0x0138(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   ScopeReticleTexture;                                      // 0x0160(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   ScopeOpticalTrashTexture;                                 // 0x0188(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   ScopeReticleColorMaskTexture;                             // 0x01B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              ScopeOverlayScale;                                        // 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HasReticleIllumination;                                   // 0x01DC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReticleIsAlwaysIlluminated;                               // 0x01DD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x01DE(0x0002) MISSED OFFSET
	struct FLinearColor                                ReticleIlluminationColor;                                 // 0x01E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UStaticMesh>                  WeaponAttachmentMesh;                                     // 0x01F0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	EWTLWeaponAttachmentType                           WeaponAttachmentType;                                     // 0x0218(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              WeaponAttachmentZoom;                                     // 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     FlareRelativeOffset;                                      // 0x0220(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeaponAttachmentRecoilMultiplier;                         // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<uint16_t, struct FWTLWeaponAttachmentInstallInfo> WeaponInstallInfo;                                        // 0x0230(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	int                                                MaxEnergy;                                                // 0x0280(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialEnergy;                                            // 0x0284(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EnergyConsumptionPerSecond;                               // 0x0288(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	TArray<int>                                        CanBeChargedWithItems;                                    // 0x0290(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                DamageMin;                                                // 0x02A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageMax;                                                // 0x02A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMin;                                         // 0x02A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMax;                                         // 0x02AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaminaPerUse;                                            // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MiningMultiplier;                                         // 0x02B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UStaticMesh>                  PreviewPointerMesh;                                       // 0x02B8(0x0028) (CPF_Edit)
	float                                              PlacementAngleLimit;                                      // 0x02E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlacementRange;                                           // 0x02E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBePlacedOnlyOnLandscape;                               // 0x02E8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBePlacedInSafeZone;                                    // 0x02E9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x02EA(0x0002) MISSED OFFSET
	float                                              PlacementTime;                                            // 0x02EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UClass>                       PlacementActorClass;                                      // 0x02F0(0x0028) (CPF_Edit)
	bool                                               bIsSpecialPlacementStuff;                                 // 0x0318(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              PlacementShapeExtendMultiplier;                           // 0x031C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanBePlacedOnlyInStuffPlacementZone;                     // 0x0320(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLWeaponType                                     ModificationWeaponType;                                   // 0x0321(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0322(0x0006) MISSED OFFSET
	struct FString                                     ModificationData;                                         // 0x0328(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               CanBePlacedOnCommission;                                  // 0x0338(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLEquipmentType                                  EquipmentType;                                            // 0x0339(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x033A(0x0006) MISSED OFFSET
	TSoftObjectPtr<class UFMODEvent>                   ActivationSoundEvent;                                     // 0x0340(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UFMODEvent>                   DeactivationSoundEvent;                                   // 0x0368(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>                EquipmentMeshMale;                                        // 0x0390(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class USkeletalMesh>                EquipmentMeshFemale;                                      // 0x03B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               NeedHideGlasses;                                          // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanTransferToSteam;                                       // 0x03E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x03E2(0x0002) MISSED OFFSET
	int                                                SteamMarketID;                                            // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLMedicineItemData
// 0x0160 (0x0168 - 0x0008)
struct FWTLMedicineItemData : public FTableRowBase
{
	EWTLMedicineType                                   Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<struct FWTLMedicineEffect>                  Effects;                                                  // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterEffectInfluence>        CharacterEffectsInfluence;                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShopDescription;                                          // 0x0060(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Validity;                                                 // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExperienceDeltaPerUse;                                    // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropChance;                                               // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	TArray<struct FWTLItemClassRequirement>            ArenaClassRequirements;                                   // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLItemClassRequirement>            RPGClassRequirements;                                     // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              BasePrice;                                                // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   InventoryIcon;                                            // 0x00B8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   StoreIcon;                                                // 0x00E0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UClass>                       ItemPickupClass;                                          // 0x0108(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanBeUnited;                                              // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UFMODEvent>                   UseSoundEvent;                                            // 0x0138(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanBePlacedOnCommission;                                  // 0x0160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanTransferToSteam;                                       // 0x0161(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0162(0x0002) MISSED OFFSET
	int                                                SteamMarketID;                                            // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLPenetrationCapability
// 0x0010
struct FWTLPenetrationCapability
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              MaxSize;                                                  // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinVelocity;                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityPercentDeltaPerUnit;                              // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLAmmoItemData
// 0x01A0 (0x01A8 - 0x0008)
struct FWTLAmmoItemData : public FTableRowBase
{
	EWTLAmmoType                                       Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCaliber                                        Caliber;                                                  // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     TypeName;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       Description;                                              // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShopDescription;                                          // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                DamageMin;                                                // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageMax;                                                // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMin;                                         // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMax;                                         // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Accuracy;                                                 // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialVelocity;                                          // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestroyVelocity;                                          // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PhysicsImpulse;                                           // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RagdollImpulse;                                           // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLPenetrationCapability>           PenetrationCapabilities;                                  // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	EWTLAmmoProjectileType                             ProjectileType;                                           // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ProjectileCount;                                          // 0x00A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       ProjectileClass;                                          // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	class UCurveFloat*                                 VelocityCurve;                                            // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 GravityCurve;                                             // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseReliableHitEvent;                                      // 0x00E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseReliableRicochetEvent;                                 // 0x00E1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	float                                              ConditionDeltaMultiplier;                                 // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SpawnTracer;                                              // 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              SpawnTracerChance;                                        // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnTracerOffset;                                        // 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       TracerClass;                                              // 0x00F8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              BasePrice;                                                // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropChance;                                               // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TSoftObjectPtr<class UTexture2D>                   InventoryIcon;                                            // 0x0128(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   StoreIcon;                                                // 0x0150(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UClass>                       ItemPickupClass;                                          // 0x0178(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               CanBeUnited;                                              // 0x01A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBePlacedOnCommission;                                  // 0x01A1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanTransferToSteam;                                       // 0x01A2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x01A3(0x0001) MISSED OFFSET
	int                                                SteamMarketID;                                            // 0x01A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLWeaponItemData
// 0x01D0 (0x01D8 - 0x0008)
struct FWTLWeaponItemData : public FTableRowBase
{
	EWTLWeaponType                                     Type;                                                     // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCaliber                                        Caliber;                                                  // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Description;                                              // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       ShopDescription;                                          // 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      MagazineCapacity;                                         // 0x0058(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	int                                                DamageMin;                                                // 0x005C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageMax;                                                // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMin;                                         // 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMax;                                         // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CriticalHitChanceMultiplier;                              // 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BaseAmmoID;                                               // 0x0070(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Accuracy;                                                 // 0x0074(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EffectiveRange;                                           // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x007C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ConditionDelta;                                           // 0x0080(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OpticsConditionDeltaMultiplier;                           // 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Weight;                                                   // 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DropChance;                                               // 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinRepairExperience;                                      // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x0094(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	TArray<struct FWTLItemClassRequirement>            ArenaClassRequirements;                                   // 0x0098(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWTLItemClassRequirement>            RPGClassRequirements;                                     // 0x00A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              BasePrice;                                                // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       BlueprintClass;                                           // 0x00C0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   InventoryIcon;                                            // 0x00E8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   StoreIcon;                                                // 0x0110(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>                   KillsStatsIcon;                                           // 0x0138(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UClass>                       ItemPickupClass;                                          // 0x0160(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TSoftObjectPtr<class UStaticMesh>                  CharacterWeaponPreviewMesh;                               // 0x0188(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	TArray<struct FTransform>                          CharacterWeaponPreviewOffsets;                            // 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               CanBeCustomized;                                          // 0x01C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBePlacedOnCommission;                                  // 0x01C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanBeViewedThroughPreviewMeshesList;                      // 0x01C2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x01C3(0x0001) MISSED OFFSET
	int                                                MasterWeaponID;                                           // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CopyParametersFromMasterWeapon;                           // 0x01C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	float                                              ExperienceMultiplier;                                     // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsSteamMarketable;                                        // 0x01D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               CanTransferToSteam;                                       // 0x01D1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x01D2(0x0002) MISSED OFFSET
	int                                                SteamMarketID;                                            // 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLVoiceDataPacket
// 0x1688
struct FWTLVoiceDataPacket
{
	struct FDateTime                                   ReceiveTime;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      Data[0x1680];                                             // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.RespawnQueryElement
// 0x0010
struct FRespawnQueryElement
{
	struct FDateTime                                   RespawnTime;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor)
	class APlayerController*                           Controller;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLHitPointInfo
// 0x0018
struct FWTLHitPointInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLSteamItemInfo
// 0x0070
struct FWTLSteamItemInfo
{
	uint64_t                                           AccountID;                                                // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ItemID;                                                   // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           quantity;                                                 // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	uint64_t                                           originalitemid;                                           // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ItemDefID;                                                // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                appid;                                                    // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     acquired;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     State;                                                    // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Origin;                                                   // 0x0050(0x0010) (CPF_ZeroConstructor)
	struct FString                                     state_changed_timestamp;                                  // 0x0060(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLSteamInventoryRequest
// 0x0020
struct FWTLSteamInventoryRequest
{
	uint64_t                                           SteamID;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           RequestID;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ItemID;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ItemDefID;                                                // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterQuestStateArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLCharacterQuestStateArray : public FFastArraySerializer
{
	TArray<struct FWTLCharacterQuestState>             Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLWeaponItemArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLWeaponItemArray : public FFastArraySerializer
{
	TArray<struct FWTLWeaponItem>                      Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLAmmoItemArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLAmmoItemArray : public FFastArraySerializer
{
	TArray<struct FWTLAmmoItem>                        Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLMedicineItemArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLMedicineItemArray : public FFastArraySerializer
{
	TArray<struct FWTLMedicineItem>                    Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLStuffItemArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLStuffItemArray : public FFastArraySerializer
{
	TArray<struct FWTLStuffItem>                       Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLClothesItemArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLClothesItemArray : public FFastArraySerializer
{
	TArray<struct FWTLClothesItem>                     Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLResourceItemArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLResourceItemArray : public FFastArraySerializer
{
	TArray<struct FWTLResourceItem>                    Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLArtefactItemArray
// 0x0010 (0x00C0 - 0x00B0)
struct FWTLArtefactItemArray : public FFastArraySerializer
{
	TArray<struct FWTLArtefactItem>                    Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLReplicatedStorageContent
// 0x0550
struct FWTLReplicatedStorageContent
{
	EWTLStorageType                                    StorageType;                                              // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLLocationStorageType                            LocationStorageType;                                      // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	uint64_t                                           StorageID;                                                // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLWeaponItemArray                         WeaponItems;                                              // 0x0010(0x00C0)
	struct FWTLAmmoItemArray                           AmmoItems;                                                // 0x00D0(0x00C0)
	struct FWTLMedicineItemArray                       MedicineItems;                                            // 0x0190(0x00C0)
	struct FWTLStuffItemArray                          StuffItems;                                               // 0x0250(0x00C0)
	struct FWTLClothesItemArray                        ClothesItems;                                             // 0x0310(0x00C0)
	struct FWTLResourceItemArray                       ResourceItems;                                            // 0x03D0(0x00C0)
	struct FWTLArtefactItemArray                       ArtefactItems;                                            // 0x0490(0x00C0)
};

// ScriptStruct WTL.WTLStatisticsValue
// 0x0010 (0x0048 - 0x0038)
struct FWTLStatisticsValue : public FWTLPacket
{
	uint16_t                                           ParameterID;                                              // 0x0038(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	uint64_t                                           Value;                                                    // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLAccountAchievementsAndStats
// 0x0028 (0x0060 - 0x0038)
struct FWTLAccountAchievementsAndStats : public FWTLPacket
{
	uint64_t                                           AccountID;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLIdentity16>                      Achievements;                                             // 0x0040(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWTLStatisticsValue>                 StatisticsValues;                                         // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLAccountAchievementsList
// 0x0018 (0x0050 - 0x0038)
struct FWTLAccountAchievementsList : public FWTLPacket
{
	uint64_t                                           AccountID;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLIdentity16>                      Items;                                                    // 0x0040(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLTriggerAccountAchievementInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLTriggerAccountAchievementInfo : public FWTLPacket
{
	uint64_t                                           AccountID;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           AchievementID;                                            // 0x0040(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLAccountStatisticsValueDelta
// 0x0010 (0x0048 - 0x0038)
struct FWTLAccountStatisticsValueDelta : public FWTLPacket
{
	uint64_t                                           AccountID;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ParameterID;                                              // 0x0040(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Delta;                                                    // 0x0042(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterClanInfo
// 0x0028 (0x0060 - 0x0038)
struct FWTLCharacterClanInfo : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0040(0x0010) (CPF_ZeroConstructor)
	uint16_t                                           ClanID;                                                   // 0x0050(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLClanMemberType                                 ClanMemberType;                                           // 0x0052(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	uint64_t                                           ClanPolicyGroupID;                                        // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterFactionInfo
// 0x0020 (0x0058 - 0x0038)
struct FWTLCharacterFactionInfo : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        Faction;                                                  // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Reputation;                                               // 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	uint64_t                                           Score;                                                    // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Rank;                                                     // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterCustomizationItemRecord
// 0x0020 (0x0058 - 0x0038)
struct FWTLCharacterCustomizationItemRecord : public FWTLPacket
{
	int                                                ID;                                                       // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           SteamID;                                                  // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLIdentity32>                      RequiredSteamDLC;                                         // 0x0048(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCharacterContactRecord
// 0x0030 (0x0068 - 0x0038)
struct FWTLCharacterContactRecord : public FWTLPacket
{
	EWTLCharacterContactType                           Type;                                                     // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	uint64_t                                           CharacterID;                                              // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0058(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLGlobalEventInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLGlobalEventInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLCheaterReport
// 0x0018 (0x0050 - 0x0038)
struct FWTLCheaterReport : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLAnticheatResponse
// 0x0010 (0x0048 - 0x0038)
struct FWTLAnticheatResponse : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLVersionInfo
// 0x0008
struct FWTLVersionInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLAuthorization
// 0x0048 (0x0080 - 0x0038)
struct FWTLAuthorization : public FWTLPacket
{
	uint64_t                                           UserID;                                                   // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLPlatform                                       Platform;                                                 // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     Login;                                                    // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Password;                                                 // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLVersionInfo                             Version;                                                  // 0x0068(0x0008) (CPF_Edit)
	uint16_t                                           TicketSize;                                               // 0x0070(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0072(0x000E) MISSED OFFSET
};

// ScriptStruct WTL.WTLSteamAchievementTrigger
// 0x0018 (0x0050 - 0x0038)
struct FWTLSteamAchievementTrigger : public FWTLPacket
{
	uint64_t                                           SteamID;                                                  // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AchievementName;                                          // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLSteamFloatStatChange
// 0x0020 (0x0058 - 0x0038)
struct FWTLSteamFloatStatChange : public FWTLPacket
{
	uint64_t                                           SteamID;                                                  // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     StatName;                                                 // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Value;                                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDeltaValue;                                            // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLSteamIntStatChange
// 0x0020 (0x0058 - 0x0038)
struct FWTLSteamIntStatChange : public FWTLPacket
{
	uint64_t                                           SteamID;                                                  // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     StatName;                                                 // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Value;                                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDeltaValue;                                            // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLDedicatedServerStatistics
// 0x0040 (0x0078 - 0x0038)
struct FWTLDedicatedServerStatistics : public FWTLPacket
{
	uint32_t                                           ConnectionCount;                                          // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           CharactersCount;                                          // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           MonstersSpawned;                                          // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           MonstersKilled;                                           // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           MonstersAlive;                                            // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ExperienceTotal;                                          // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           ExperienceMaxValue;                                       // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           MoneyProduced;                                            // 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           MoneyConsumed;                                            // 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLChangeCreditsResult
// 0x0010 (0x0048 - 0x0038)
struct FWTLChangeCreditsResult : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           CreditsAmount;                                            // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MoneyAmount;                                              // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLChangeCreditsInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLChangeCreditsInfo : public FWTLPacket
{
	uint64_t                                           AccountID;                                                // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           CharacterID;                                              // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           CreditsAmount;                                            // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLClientMoveToLocationInfo
// 0x0020 (0x0058 - 0x0038)
struct FWTLClientMoveToLocationInfo : public FWTLPacket
{
	uint32_t                                           LocationID;                                               // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           PortalID;                                                 // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DedicatedServerAddress;                                   // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                DedicatedServerPort;                                      // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLMoveToLocationInfo
// 0x0538 (0x0570 - 0x0038)
struct FWTLMoveToLocationInfo : public FWTLPacket
{
	uint32_t                                           LocationID;                                               // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           PortalID;                                                 // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLFullCharacterInfo                       CharacterInfo;                                            // 0x0040(0x0530) (CPF_Edit)
};

// ScriptStruct WTL.WTLPrivateStorageContent
// 0x0008 (0x00C0 - 0x00B8)
struct FWTLPrivateStorageContent : public FWTLStorageContent
{
	uint32_t                                           NPCID;                                                    // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotCount;                                                // 0x00BC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterTravelInfo
// 0x0560 (0x0598 - 0x0038)
struct FWTLCharacterTravelInfo : public FWTLPacket
{
	struct FString                                     TicketUID;                                                // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	uint32_t                                           PortalID;                                                 // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	uint64_t                                           SteamID;                                                  // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLFullCharacterInfo                       CharacterInfo;                                            // 0x0058(0x0530) (CPF_Edit)
	TArray<struct FWTLPrivateStorageContent>           PrivateStorages;                                          // 0x0588(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLArenaLocationStateChange
// 0x0010 (0x0048 - 0x0038)
struct FWTLArenaLocationStateChange : public FWTLPacket
{
	uint32_t                                           ConfederationPlayersCount;                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           BlackSunsetPlayersCount;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ConfederationScores;                                      // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           BlackSunsetScores;                                        // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLArenaLocationInfo
// 0x0050 (0x0088 - 0x0038)
struct FWTLArenaLocationInfo : public FWTLPacket
{
	uint32_t                                           ID;                                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLLocationType                                   Type;                                                     // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	uint32_t                                           PlayersCount;                                             // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ConfederationPlayersCount;                                // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           BlackSunsetPlayersCount;                                  // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MinPlayersCount;                                          // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxPlayersCount;                                          // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MatchTime;                                                // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxMatchTime;                                             // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ConfederationScores;                                      // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           BlackSunsetScores;                                        // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ScoresToWin;                                              // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLArenaLocationList
// 0x0010 (0x0048 - 0x0038)
struct FWTLArenaLocationList : public FWTLPacket
{
	TArray<struct FWTLArenaLocationInfo>               Data;                                                     // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLSetActiveCharacterResult
// 0x0558 (0x0590 - 0x0038)
struct FWTLSetActiveCharacterResult : public FWTLPacket
{
	struct FString                                     DedicatedServerHost;                                      // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                DedicatedServerPort;                                      // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     TicketUID;                                                // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLFullCharacterInfo                       CharacterInfo;                                            // 0x0060(0x0530) (CPF_Edit)
};

// ScriptStruct WTL.WTLStatisticsCharacterParameterList
// 0x0010 (0x0048 - 0x0038)
struct FWTLStatisticsCharacterParameterList : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLStatisticsCharacterParameter
// 0x0018 (0x0050 - 0x0038)
struct FWTLStatisticsCharacterParameter : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterMainParameters
// 0x0008 (0x0040 - 0x0038)
struct FWTLCharacterMainParameters : public FWTLPacket
{
	int8_t                                             Strength;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             Dexterity;                                                // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             Stamina;                                                  // 0x003A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             Accuracy;                                                 // 0x003B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             Intelligence;                                             // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int8_t                                             Fortune;                                                  // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLDoorLockInfo
// 0x0028 (0x0060 - 0x0038)
struct FWTLDoorLockInfo : public FWTLPacket
{
	int64_t                                            BuildingID;                                               // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            BuildingDoorID;                                           // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLBuildingDoorLockType                           Type;                                                     // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     KeyCode;                                                  // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLDoorLockOperationInfo
// 0x0028 (0x0060 - 0x0038)
struct FWTLDoorLockOperationInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct WTL.WTLExperienceDelta
// 0x0010 (0x0048 - 0x0038)
struct FWTLExperienceDelta : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLSkill
// 0x0060 (0x0098 - 0x0038)
struct FWTLSkill : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET
};

// ScriptStruct WTL.WTLSkillEffect
// 0x0008 (0x0040 - 0x0038)
struct FWTLSkillEffect : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLUpdateCommissionItemInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLUpdateCommissionItemInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLReturnItemFromCommissionInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLReturnItemFromCommissionInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLPutItemOnCommissionInfo
// 0x0020 (0x0058 - 0x0038)
struct FWTLPutItemOnCommissionInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
};

// ScriptStruct WTL.WTLBalanceDelta
// 0x0018 (0x0050 - 0x0038)
struct FWTLBalanceDelta : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLShopCommissionItems
// 0x0078 (0x00B0 - 0x0038)
struct FWTLShopCommissionItems : public FWTLPacket
{
	int                                                ShopID;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FWTLCommissionWeaponItem>            WeaponItems;                                              // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionAmmoItem>              AmmoItems;                                                // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionMedicineItem>          MedicineItems;                                            // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionStuffItem>             StuffItems;                                               // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionClothesItem>           ClothesItems;                                             // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionResourceItem>          ResourceItems;                                            // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCommissionArtefactItem>          ArtefactItems;                                            // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLShortVersionInfo
// 0x0002
struct FWTLShortVersionInfo
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLDedicatedServerAuthorization
// 0x0038 (0x0070 - 0x0038)
struct FWTLDedicatedServerAuthorization : public FWTLPacket
{
	struct FWTLShortVersionInfo                        ProtocolVersion;                                          // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLVersionInfo                             Version;                                                  // 0x003A(0x0008) (CPF_Edit)
	unsigned char                                      Type;                                                     // 0x0042(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
	int                                                LocationID;                                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Port;                                                     // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FString                                     Hash;                                                     // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	uint32_t                                           MinPlayersCount;                                          // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxPlayersCount;                                          // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxMatchTime;                                             // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           ScoresToWin;                                              // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLBuyItemFromShopInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLBuyItemFromShopInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLSellItemToShopInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLSellItemToShopInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLShopBuyItem
// 0x0018 (0x0050 - 0x0038)
struct FWTLShopBuyItem : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ShopID;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0045(0x0001) MISSED OFFSET
	int16_t                                            ItemTypeID;                                               // 0x0046(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Price;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLShop
// 0x0060 (0x0098 - 0x0038)
struct FWTLShop : public FWTLPacket
{
	int                                                ID;                                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocationID;                                               // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLShopType                                       Type;                                                     // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0044(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0050(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Balance;                                                  // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CommissionPercent;                                        // 0x0074(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                CommissionWeaponItemsCount;                               // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionAmmoItemsCount;                                 // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMedicineItemsCount;                             // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionStuffItemsCount;                                // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionClothesItemsCount;                              // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionResourceItemsCount;                             // 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionArtefactItemsCount;                             // 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLMiningPointStateChange
// 0x0008 (0x0040 - 0x0038)
struct FWTLMiningPointStateChange : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterMuteState
// 0x0028 (0x0060 - 0x0038)
struct FWTLCharacterMuteState : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ChatMuteState;                                            // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               VoiceMuteState;                                           // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FWTLDateTime                                MuteEnds;                                                 // 0x0048(0x0008) (CPF_Edit)
	struct FString                                     Description;                                              // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLWorldInfo
// 0x0090 (0x00C8 - 0x0038)
struct FWTLWorldInfo : public FWTLPacket
{
	float                                              CurrentTime;                                              // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           TimeScale;                                                // 0x003C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CreditsToMoneyRate;                                       // 0x003E(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLWorldConfig                             Config;                                                   // 0x0040(0x0068) (CPF_Edit)
	TArray<struct FWTLGroup>                           Groups;                                                   // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCharacterMuteState>              CharactersMuteState;                                      // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLWorldTime
// 0x0008 (0x0040 - 0x0038)
struct FWTLWorldTime : public FWTLPacket
{
	float                                              CurrentTime;                                              // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            TimeScale;                                                // 0x003C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLGroupInvite
// 0x0050 (0x0088 - 0x0038)
struct FWTLGroupInvite : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           GroupId;                                                  // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           CharacterID;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           InviteInstigatorID;                                       // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     InviteInstigatorName;                                     // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     GroupName;                                                // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               Expired;                                                  // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MembersCount;                                             // 0x0079(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x007A(0x0006) MISSED OFFSET
	struct FWTLDateTime                                InviteTime;                                               // 0x0080(0x0008) (CPF_Edit)
};

// ScriptStruct WTL.WTLWeatherInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLWeatherInfo : public FWTLPacket
{
	EWTLWeatherType                                    WeatherType;                                              // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              WindStrength;                                             // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindSpeed;                                                // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindMinGustAmount;                                        // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindMaxGustAmount;                                        // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WindAngle;                                                // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLLocationStorage
// 0x0050 (0x0088 - 0x0038)
struct FWTLLocationStorage : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocationID;                                               // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	int64_t                                            LocationBuildingID;                                       // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            BuildingBlockID;                                          // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLLocationStorageType                            Type;                                                     // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x005C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0068(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AutoDestroy;                                              // 0x0074(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FWTLDateTime                                AutoDestroyTime;                                          // 0x0078(0x0008) (CPF_Edit)
	unsigned char                                      SlotCount;                                                // 0x0080(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLCamp
// 0x0040 (0x0078 - 0x0038)
struct FWTLCamp : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocationID;                                               // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	int64_t                                            CharacterID;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0050(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x005C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLBuildingBlock
// 0x0050 (0x0088 - 0x0038)
struct FWTLBuildingBlock : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            LocationBuildingID;                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            CharacterID;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BlockTypeID;                                              // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLBlockType                                      Type;                                                     // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0058(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0064(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLBuildingBlockState                             State;                                                    // 0x0070(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                Condition;                                                // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLDateTime                                CreationDate;                                             // 0x0078(0x0008) (CPF_Edit)
	int64_t                                            InteractiveObjectID;                                      // 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLBuildingDoor
// 0x0040 (0x0078 - 0x0038)
struct FWTLBuildingDoor : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            LocationBuildingID;                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            BuildingBlockID;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Closed;                                                   // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	int64_t                                            LockID;                                                   // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLBuildingDoorLockType                           LockType;                                                 // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Locked;                                                   // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
	struct FString                                     KeyCode;                                                  // 0x0068(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLBuildingWorkbench
// 0x0038 (0x0070 - 0x0038)
struct FWTLBuildingWorkbench : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            LocationBuildingID;                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            BuildingBlockID;                                          // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            LocationStorageID;                                        // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x0058(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0059(0x0017) MISSED OFFSET
};

// ScriptStruct WTL.WTLBuilding
// 0x0080 (0x00B8 - 0x0038)
struct FWTLBuilding : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocationID;                                               // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	int64_t                                            CharacterID;                                              // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLBuildingType                                   Type;                                                     // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0054(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0060(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FWTLDateTime                                CreationDate;                                             // 0x0070(0x0008) (CPF_Edit)
	struct FString                                     Name;                                                     // 0x0078(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLBuildingBlock>                   Blocks;                                                   // 0x0088(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLBuildingDoor>                    Doors;                                                    // 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLBuildingWorkbench>               Workbenches;                                              // 0x00A8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLMiningPointResource
// 0x0018 (0x0050 - 0x0038)
struct FWTLMiningPointResource : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocationMiningPointID;                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            ResourceID;                                               // 0x0044(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Value;                                                    // 0x0046(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            MaxValue;                                                 // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            ValueIncrement;                                           // 0x004A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            ValueDecrement;                                           // 0x004C(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLMiningPoint
// 0x0038 (0x0070 - 0x0038)
struct FWTLMiningPoint : public FWTLPacket
{
	int                                                ID;                                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LocationID;                                               // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLMiningPointType                                Type;                                                     // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SubType;                                                  // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0044(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0050(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ResourcePercent;                                          // 0x005C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<struct FWTLMiningPointResource>             Resources;                                                // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLLocationInfo
// 0x00B8 (0x00F0 - 0x0038)
struct FWTLLocationInfo : public FWTLPacket
{
	int                                                ID;                                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLLocationType                                   Type;                                                     // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FWTLWeatherInfo                             WeatherInfo;                                              // 0x0050(0x0050) (CPF_Edit)
	TArray<struct FWTLShortCharacterInfo>              Characters;                                               // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLLocationStorage>                 Storages;                                                 // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLCamp>                            Camps;                                                    // 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLBuilding>                        Buildings;                                                // 0x00D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FWTLMiningPoint>                     MiningPoints;                                             // 0x00E0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLInventoryItemDelta
// 0x0018 (0x0050 - 0x0038)
struct FWTLInventoryItemDelta : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLCraftItemPart
// 0x0018 (0x0050 - 0x0038)
struct FWTLCraftItemPart : public FWTLPacket
{
	int64_t                                            ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           CraftItemID;                                              // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0045(0x0001) MISSED OFFSET
	int16_t                                            ItemTypeID;                                               // 0x0046(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLCraftItem
// 0x0028 (0x0060 - 0x0038)
struct FWTLCraftItem : public FWTLPacket
{
	int                                                ID;                                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003D(0x0001) MISSED OFFSET
	int16_t                                            ItemTypeID;                                               // 0x003E(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemCount;                                                // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLCraftType                                      CraftType;                                                // 0x0044(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                MinCraftExperience;                                       // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CraftTime;                                                // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLCraftItemPart>                   Parts;                                                    // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCraftRequest
// 0x0038 (0x0070 - 0x0038)
struct FWTLCraftRequest : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int64_t                                            CharacterID;                                              // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	uint64_t                                           CraftItemID;                                              // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLDateTime                                StartTime;                                                // 0x0060(0x0008) (CPF_Edit)
	struct FWTLDateTime                                EndTime;                                                  // 0x0068(0x0008) (CPF_Edit)
};

// ScriptStruct WTL.WTLBuildingBlockType
// 0x0048 (0x0080 - 0x0038)
struct FWTLBuildingBlockType : public FWTLPacket
{
	int                                                ID;                                                       // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLBlockType                                      Type;                                                     // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Level;                                                    // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Durability;                                               // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BuildDurabilityIncrement;                                 // 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RepairDurabilityIncrement;                                // 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     PrefabName;                                               // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLBuildingBlockTypeList
// 0x0010 (0x0048 - 0x0038)
struct FWTLBuildingBlockTypeList : public FWTLPacket
{
	TArray<struct FWTLBuildingBlockType>               Data;                                                     // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLBuildingBlockResourceCostItem
// 0x0020 (0x0058 - 0x0038)
struct FWTLBuildingBlockResourceCostItem : public FWTLPacket
{
	int16_t                                            ResourceID;                                               // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FString                                     ResourceName;                                             // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLTextInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLTextInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLConsoleCommand
// 0x0020 (0x0058 - 0x0038)
struct FWTLConsoleCommand : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
};

// ScriptStruct WTL.WTLVoicePacket
// 0x0018 (0x0050 - 0x0038)
struct FWTLVoicePacket : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLVoiceCharacterPosition
// 0x0018 (0x0050 - 0x0038)
struct FWTLVoiceCharacterPosition : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLVoiceWorldInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLVoiceWorldInfo : public FWTLPacket
{
	TArray<struct FWTLVoiceCharacterPosition>          CharacterPositions;                                       // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLChatMessage
// 0x0030 (0x0068 - 0x0038)
struct FWTLChatMessage : public FWTLPacket
{
	int64_t                                            CharacterID;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	EWTLChatMessageType                                Type;                                                     // 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FString                                     Text;                                                     // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLChatMessageRequest
// 0x0028 (0x0060 - 0x0038)
struct FWTLChatMessageRequest : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct WTL.WTLConnectionCloseInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLConnectionCloseInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLClientErrorInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLClientErrorInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterDeathInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLCharacterDeathInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterDamageInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLCharacterDamageInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLMonsterHitCharacterInfo
// 0x0030 (0x0068 - 0x0038)
struct FWTLMonsterHitCharacterInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterHitMonsterInfo
// 0x0030 (0x0068 - 0x0038)
struct FWTLCharacterHitMonsterInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterHitCharacterInfo
// 0x0030 (0x0068 - 0x0038)
struct FWTLCharacterHitCharacterInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct WTL.WTLCurrentStateChangeInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLCurrentStateChangeInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLBuildingSettings
// 0x0008 (0x0040 - 0x0038)
struct FWTLBuildingSettings : public FWTLPacket
{
	int16_t                                            UpdateInterval;                                           // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLLoadAmmoInWeaponInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLLoadAmmoInWeaponInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLUniteAllItemsInfo
// 0x0008 (0x0040 - 0x0038)
struct FWTLUniteAllItemsInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLUniteItemsInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLUniteItemsInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLSplitItemInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLSplitItemInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLMoveItemsInfo
// 0x0028 (0x0060 - 0x0038)
struct FWTLMoveItemsInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct WTL.WTLServerShutdownInfo
// 0x0010 (0x0048 - 0x0038)
struct FWTLServerShutdownInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLMonsterTransform
// 0x0028 (0x0060 - 0x0038)
struct FWTLMonsterTransform : public FWTLPacket
{
	int64_t                                            MonsterID;                                                // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Timestamp;                                                // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0048(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0054(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterTransform
// 0x0038 (0x0070 - 0x0038)
struct FWTLCharacterTransform : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Timestamp;                                                // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PingCategory;                                             // 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x004C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0058(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0064(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCharacterCustomizationInfo
// 0x0020 (0x0058 - 0x0038)
struct FWTLCharacterCustomizationInfo : public FWTLPacket
{
	uint64_t                                           CharacterID;                                              // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLSex                                            Sex;                                                      // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BodyType;                                                 // 0x0041(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TArray<struct FWTLCharacterCustomizationRecord>    Parts;                                                    // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLStorageSlot
// 0x0010 (0x0048 - 0x0038)
struct FWTLStorageSlot : public FWTLPacket
{
	unsigned char                                      SlotNumber;                                               // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	uint64_t                                           ItemID;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLStorageOrder
// 0x0020 (0x0058 - 0x0038)
struct FWTLStorageOrder : public FWTLPacket
{
	EWTLStorageType                                    StorageType;                                              // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	uint64_t                                           StorageID;                                                // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FWTLStorageSlot>                     Slots;                                                    // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLBodyPartSlot
// 0x0010 (0x0048 - 0x0038)
struct FWTLBodyPartSlot : public FWTLPacket
{
	EWTLBodyPart                                       BodyPart;                                                 // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	uint64_t                                           ItemID;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentityStorage
// 0x0010 (0x0048 - 0x0038)
struct FWTLIdentityStorage : public FWTLPacket
{
	EWTLStorageType                                    Type;                                                     // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	uint64_t                                           ID;                                                       // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentityCommissionItem
// 0x0010 (0x0048 - 0x0038)
struct FWTLIdentityCommissionItem : public FWTLPacket
{
	uint32_t                                           ShopID;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       Type;                                                     // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	uint64_t                                           CommissionID;                                             // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLKeyValueThreeInt64Int64String
// 0x0020 (0x0058 - 0x0038)
struct FWTLKeyValueThreeInt64Int64String : public FWTLPacket
{
	uint64_t                                           Key;                                                      // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Value1;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Value2;                                                   // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLKeyValuePairInt64String
// 0x0018 (0x0050 - 0x0038)
struct FWTLKeyValuePairInt64String : public FWTLPacket
{
	uint64_t                                           Key;                                                      // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Value;                                                    // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLIdentityPair8
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentityPair8 : public FWTLPacket
{
	unsigned char                                      Value1;                                                   // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Value2;                                                   // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLIdentity8
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentity8 : public FWTLPacket
{
	unsigned char                                      Value;                                                    // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLIdentityPair16
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentityPair16 : public FWTLPacket
{
	uint16_t                                           Value1;                                                   // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Value2;                                                   // 0x003A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLIdentityPair32
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentityPair32 : public FWTLPacket
{
	uint32_t                                           Value1;                                                   // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Value2;                                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentityFour64
// 0x0020 (0x0058 - 0x0038)
struct FWTLIdentityFour64 : public FWTLPacket
{
	uint64_t                                           Value1;                                                   // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Value2;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Value3;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Value4;                                                   // 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentityThree64
// 0x0018 (0x0050 - 0x0038)
struct FWTLIdentityThree64 : public FWTLPacket
{
	uint64_t                                           Value1;                                                   // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Value2;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Value3;                                                   // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentityPair64
// 0x0010 (0x0048 - 0x0038)
struct FWTLIdentityPair64 : public FWTLPacket
{
	uint64_t                                           Value1;                                                   // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Value2;                                                   // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLIdentity64
// 0x0008 (0x0040 - 0x0038)
struct FWTLIdentity64 : public FWTLPacket
{
	uint64_t                                           Value;                                                    // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLServerInfo
// 0x0030 (0x0068 - 0x0038)
struct FWTLServerInfo : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLVersionInfo                             Version;                                                  // 0x0040(0x0008) (CPF_Edit)
	struct FWTLShortVersionInfo                        ProtocolVersion;                                          // 0x0048(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FWTLDateTime                                StartTime;                                                // 0x0050(0x0008) (CPF_Edit)
	int64_t                                            UpTime;                                                   // 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WorldTime;                                                // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            TimeScale;                                                // 0x0064(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0066(0x0002) MISSED OFFSET
};

// ScriptStruct WTL.WTLErrorInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLErrorInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLActivateTicketInfo
// 0x0020 (0x0058 - 0x0038)
struct FWTLActivateTicketInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
};

// ScriptStruct WTL.WTLGameServerShutdownInfo
// 0x0018 (0x0050 - 0x0038)
struct FWTLGameServerShutdownInfo : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
};

// ScriptStruct WTL.WTLGameServerShortInfo
// 0x0050 (0x0088 - 0x0038)
struct FWTLGameServerShortInfo : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLGameServerType                                 Type;                                                     // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLShortVersionInfo                        ProtocolVersion;                                          // 0x0041(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
	struct FWTLVersionInfo                             Version;                                                  // 0x0044(0x0008) (CPF_Edit)
	struct FWTLVersionInfo                             MinClientVersion;                                         // 0x004C(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     IPAddress;                                                // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int16_t                                            MainPort;                                                 // 0x0068(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            PingPort;                                                 // 0x006A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                MaxPlayers;                                               // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayersCount;                                             // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLGameServerInfo
// 0x00A0 (0x00D8 - 0x0038)
struct FWTLGameServerInfo : public FWTLPacket
{
	uint64_t                                           ID;                                                       // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLGameServerType                                 Type;                                                     // 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLShortVersionInfo                        ProtocolVersion;                                          // 0x0041(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0043(0x0001) MISSED OFFSET
	struct FWTLVersionInfo                             Version;                                                  // 0x0044(0x0008) (CPF_Edit)
	struct FWTLVersionInfo                             MinClientVersion;                                         // 0x004C(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FString                                     IPAddress;                                                // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int16_t                                            MainPort;                                                 // 0x0068(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            PingPort;                                                 // 0x006A(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Description;                                              // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
	int                                                MaxPlayers;                                               // 0x00C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayersCount;                                             // 0x00C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Hash;                                                     // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLGameClientInfo
// 0x0028 (0x0060 - 0x0038)
struct FWTLGameClientInfo : public FWTLPacket
{
	struct FWTLShortVersionInfo                        ProtocolVersion;                                          // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLVersionInfo                             Version;                                                  // 0x003A(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	uint64_t                                           AccountID;                                                // 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     TicketUID;                                                // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLClientAuthorizationInfo
// 0x0030 (0x0068 - 0x0038)
struct FWTLClientAuthorizationInfo : public FWTLPacket
{
	struct FWTLShortVersionInfo                        ProtocolVersion;                                          // 0x0038(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLVersionInfo                             Version;                                                  // 0x003A(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FString                                     Login;                                                    // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Password;                                                 // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLConnectionTest
// 0x0010 (0x0048 - 0x0038)
struct FWTLConnectionTest : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLPing
// 0x0008 (0x0040 - 0x0038)
struct FWTLPing : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLEventHeader
// 0x0008 (0x0040 - 0x0038)
struct FWTLEventHeader : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLRequest
// 0x0008 (0x0040 - 0x0038)
struct FWTLRequest : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLServerMessageHeader
// 0x0008 (0x0040 - 0x0038)
struct FWTLServerMessageHeader : public FWTLPacket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.WTLRandomMiningPoint
// 0x0014
struct FWTLRandomMiningPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Capacity;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLRangedWeaponFireAnimation
// 0x0018
struct FWTLRangedWeaponFireAnimation
{
	float                                              MaxTime;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   LastValue;                                                // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierX;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MultiplierY;                                              // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.InlineTextImageStyleRow
// 0x0098 (0x00A0 - 0x0008)
struct FInlineTextImageStyleRow : public FTableRowBase
{
	struct FInlineTextImageStyle                       InlineTextImageStyle;                                     // 0x0008(0x0098) (CPF_Edit)
};

// ScriptStruct WTL.HyperlinkTextStyleRow
// 0x0478 (0x0480 - 0x0008)
struct FHyperlinkTextStyleRow : public FTableRowBase
{
	struct FHyperlinkStyle                             HyperlinkStyle;                                           // 0x0008(0x0478) (CPF_Edit)
};

// ScriptStruct WTL.WTLScriptedEventInfo
// 0x0004
struct FWTLScriptedEventInfo
{
	EWTLScriptedEventMethodType                        Method;                                                   // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct WTL.WTLAnnounceEventScriptedEventInfo
// 0x001C (0x0020 - 0x0004)
struct FWTLAnnounceEventScriptedEventInfo : public FWTLScriptedEventInfo
{
	EWTLServerEventType                                EventType;                                                // 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     EventDescription;                                         // 0x0008(0x0010) (CPF_ZeroConstructor)
	float                                              EventDuration;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLSpawnEnemyScriptedEventInfo
// 0x005C (0x0060 - 0x0004)
struct FWTLSpawnEnemyScriptedEventInfo : public FWTLScriptedEventInfo
{
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           EnemyId;                                                  // 0x0008(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FString                                     EnemyAssetClass;                                          // 0x0010(0x0010) (CPF_ZeroConstructor)
	uint16_t                                           Count;                                                    // 0x0020(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinLevel;                                                 // 0x0022(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x0023(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Locations;                                                // 0x0028(0x0010) (CPF_ZeroConstructor)
	float                                              SpawnRange;                                               // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<struct FWTLItemDropInfo>                    AdditionalLoot;                                           // 0x0040(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomTag;                                                // 0x0050(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLSpawnMonsterScriptedEventInfo
// 0x0044 (0x0048 - 0x0004)
struct FWTLSpawnMonsterScriptedEventInfo : public FWTLScriptedEventInfo
{
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MonsterID;                                                // 0x0008(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Count;                                                    // 0x000A(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MinLevel;                                                 // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MaxLevel;                                                 // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<struct FVector>                             Locations;                                                // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              SpawnRange;                                               // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TArray<struct FWTLItemDropInfo>                    AdditionalLoot;                                           // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomTag;                                                // 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLSpawnObjectScriptedEventInfo
// 0x0034 (0x0038 - 0x0004)
struct FWTLSpawnObjectScriptedEventInfo : public FWTLScriptedEventInfo
{
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     AssetClass;                                               // 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<struct FTransform>                          Transforms;                                               // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     CustomTag;                                                // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLAdditionalLoot
// 0x0028
struct FWTLAdditionalLoot
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MinCount;                                                 // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           MaxCount;                                                 // 0x0006(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MinCondition;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           MaxCondition;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NormalChance;                                             // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     ModificationData;                                         // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLVoiceSettings
// 0x0008
struct FWTLVoiceSettings
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Port;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLServerStatisticsMonsters
// 0x0108
struct FWTLServerStatisticsMonsters
{
	uint64_t                                           Spawned;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Killed;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           Alive;                                                    // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<int, uint64_t>                                SpawnedByClass;                                           // 0x0018(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TMap<int, uint64_t>                                KilledByClass;                                            // 0x0068(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TMap<int, uint64_t>                                AliveByClass;                                             // 0x00B8(0x0050) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLServerStatisticsExperience
// 0x0010
struct FWTLServerStatisticsExperience
{
	uint64_t                                           Total;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           MaxValue;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLServerStatisticsMoney
// 0x0010
struct FWTLServerStatisticsMoney
{
	uint64_t                                           TotalProduced;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           TotalConsumed;                                            // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLServerStatistics
// 0x0128
struct FWTLServerStatistics
{
	struct FWTLServerStatisticsMonsters                Monsters;                                                 // 0x0000(0x0108) (CPF_Edit)
	struct FWTLServerStatisticsExperience              Experience;                                               // 0x0108(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLServerStatisticsMoney                   Money;                                                    // 0x0118(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLStoreItem
// 0x0080
struct FWTLStoreItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MoneyAmount;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0009(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x000A(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Condition;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationScalar;                                      // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CustomizationColor;                                       // 0x0015(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FString                                     CustomizationName;                                        // 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     ModificationData;                                         // 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FColor                                      BackgroundColor;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      NameColor;                                                // 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ItemQuality;                                              // 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     IconURL;                                                  // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FString                                     LargerIconURL;                                            // 0x0058(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Tags;                                                     // 0x0068(0x0010) (CPF_ZeroConstructor)
	int                                                Price;                                                    // 0x0078(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLPrivateLootItemInfo
// 0x0018
struct FWTLPrivateLootItemInfo
{
	uint64_t                                           CharacterID;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLItemType                                       ItemType;                                                 // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	uint64_t                                           ItemID;                                                   // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLEmotionAnimation
// 0x0020
struct FWTLEmotionAnimation
{
	int                                                EmotionTypeID;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EmotionID;                                                // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               BlockCameraRotation;                                      // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HideUsableItem;                                           // 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UAnimMontage*                                MaleMontage;                                              // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FemaleMontage;                                            // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCraftObjectProcessRecord
// 0x0028
struct FWTLCraftObjectProcessRecord
{
	uint64_t                                           CharacterID;                                              // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     CharacterName;                                            // 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                CraftItemID;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProductionTime;                                           // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProductionTimeLeft;                                       // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLMovementMemoryElement
// 0x0040
struct FWTLMovementMemoryElement
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (CPF_IsPlainOldData)
	float                                              Delta;                                                    // 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterMedicineEffect
// 0x0010
struct FWTLCharacterMedicineEffect
{
	float                                              TimeLeft;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EffectID;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            MedicineID;                                               // 0x0008(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.LipSyncData
// 0x0024
struct FLipSyncData
{
	float                                              E;                                                        // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FV;                                                       // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AI;                                                       // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              L;                                                        // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              O;                                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ETC;                                                      // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              U;                                                        // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WQ;                                                       // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MBP;                                                      // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLAmmoCaliberStatInfo
// 0x0018
struct FWTLAmmoCaliberStatInfo
{
	int                                                DamageMin;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DamageMax;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMin;                                         // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArmorPiercingMax;                                         // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AccuracyMin;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AccuracyMax;                                              // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLWeaponStatInfo
// 0x000C
struct FWTLWeaponStatInfo
{
	int                                                MinDamage;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxDamage;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DPS;                                                      // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLWeaponTypeStatInfo
// 0x0018
struct FWTLWeaponTypeStatInfo
{
	int                                                MinDamage;                                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxDamage;                                                // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinAccuracy;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxAccuracy;                                              // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinConditionDelta;                                        // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxConditionDelta;                                        // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLClanInviteInfo
// 0x0018
struct FWTLClanInviteInfo
{
	uint16_t                                           ClanID;                                                   // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     SenderCharacterName;                                      // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLCommissionListItemData
// 0x0030
struct FWTLCommissionListItemData
{
	EWTLItemType                                       Type;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           ID;                                                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           TypeID;                                                   // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                Count;                                                    // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CommissionMinBuyCount;                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CommissionPrice;                                          // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDateTime                                   CommissionDate;                                           // 0x0020(0x0008) (CPF_ZeroConstructor)
	struct FDateTime                                   CommissionExpireDate;                                     // 0x0028(0x0008) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLFortificationObjectRecord
// 0x00F8
struct FWTLFortificationObjectRecord
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFortificationObjectType                        Type;                                                     // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	uint64_t                                           CharacterID;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           CharacterGroupID;                                         // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CharacterClanID;                                          // 0x0018(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        CharacterFaction;                                         // 0x001A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotCount;                                                // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	uint32_t                                           Condition;                                                // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Energy;                                                   // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWTLStorageContent                          StorageContent;                                           // 0x0040(0x00B8) (CPF_Edit)
};

// ScriptStruct WTL.WTLFortificationCaptureScoreRecord
// 0x0018
struct FWTLFortificationCaptureScoreRecord
{
	uint64_t                                           CharacterID;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        CharacterFaction;                                         // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                KillsCount;                                               // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DeathsCount;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Score;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLLocationFortificationCommandCoreRecord
// 0x0028
struct FWTLLocationFortificationCommandCoreRecord
{
	int                                                CommandCoreID;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Energy;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDateTime                                   LastCaptureTime;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor)
	EWTLFaction                                        ControlFaction;                                           // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FWTLFortificationCaptureScoreRecord> CaptureScore;                                             // 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLLocationPlaceableStuffRecord
// 0x0048
struct FWTLLocationPlaceableStuffRecord
{
	uint64_t                                           ItemID;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           StuffID;                                                  // 0x0008(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	uint64_t                                           CharacterID;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           CharacterGroupID;                                         // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CharacterClanID;                                          // 0x0020(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        CharacterFaction;                                         // 0x0022(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0024(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0030(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Condition;                                                // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Energy;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLLocationStorageRecord
// 0x00E8
struct FWTLLocationStorageRecord
{
	uint64_t                                           CharacterID;                                              // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           CharacterGroupID;                                         // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           CharacterClanID;                                          // 0x0010(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLFaction                                        CharacterFaction;                                         // 0x0012(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0014(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Rotation;                                                 // 0x0020(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SlotCount;                                                // 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	struct FWTLStorageContent                          Content;                                                  // 0x0030(0x00B8) (CPF_Edit)
};

// ScriptStruct WTL.WTLLocationNameWithID
// 0x0020
struct FWTLLocationNameWithID
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct WTL.WTLWidgetWithOrder
// 0x0010
struct FWTLWidgetWithOrder
{
	class UUserWidget*                                 Widget;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Order;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLDaytimeCubemapScenario
// 0x0020
struct FWTLDaytimeCubemapScenario
{
	class UTextureCube*                                SourceCubemap;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureCube*                                DestinationCubemap;                                       // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FromDayTime;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ToDayTime;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLDaytimeCubemapBlendType                        BlendType;                                                // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLCustomizationColorIngredient
// 0x000C
struct FWTLCustomizationColorIngredient
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemTypeID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLShortMovementInfo
// 0x0010
struct FWTLShortMovementInfo
{
	unsigned char                                      Yaw;                                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C) (CPF_Edit)
};

// ScriptStruct WTL.WTLCharacterStateIndicatorTextureIdentity
// 0x0030
struct FWTLCharacterStateIndicatorTextureIdentity
{
	EWTLCharacterStateIndicatorType                    StateIndicatorType;                                       // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLCharacterEffectTextureIdentity
// 0x0030
struct FWTLCharacterEffectTextureIdentity
{
	EWTLCharacterEffectType                            EffectType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TSoftObjectPtr<class UTexture2D>                   Texture;                                                  // 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct WTL.WTLVisualItemCount
// 0x0010
struct FWTLVisualItemCount
{
	uint64_t                                           ItemID;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ItemCountInNewSlot;                                       // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OldItemCount;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLComboBoxSubTypeOption
// 0x0020
struct FWTLComboBoxSubTypeOption
{
	struct FText                                       SubTypeName;                                              // 0x0000(0x0018) (CPF_Edit)
	int16_t                                            SubTypeNumber;                                            // 0x0018(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLBuyItemInfo
// 0x0010
struct FWTLBuyItemInfo
{
	EWTLItemType                                       ItemType;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ItemTypeID;                                               // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Price;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PriceMultiplier;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCount;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.UpdatingReflestionCapture
// 0x0010
struct FUpdatingReflestionCapture
{
	class AReflectionCapture*                          Object;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastUpdateLevelTime;                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct WTL.WTLFastAccessSlotBindPermissions
// 0x0030
struct FWTLFastAccessSlotBindPermissions
{
	TArray<EWTLWeaponType>                             WeaponTypes;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<EWTLMedicineType>                           MedicineTypes;                                            // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<EWTLStuffType>                              StuffTypes;                                               // 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLLanguageOption
// 0x0020
struct FWTLLanguageOption
{
	struct FString                                     LanguageName;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     LanguagePrefix;                                           // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLOptionsParameter
// 0x0030
struct FWTLOptionsParameter
{
	struct FText                                       ParameterName;                                            // 0x0000(0x0018)
	struct FString                                     ParameterPrefix;                                          // 0x0018(0x0010) (CPF_ZeroConstructor)
	bool                                               bIsHiddenForUser;                                         // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLRadialMenuActionsInfoArray
// 0x0010
struct FWTLRadialMenuActionsInfoArray
{
	TArray<struct FWTLRadialMenuActionInfo>            RadialMenuActionsInfo;                                    // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLRadialMenuButton
// 0x0018
struct FWTLRadialMenuButton
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct WTL.WTLPopupButtonInfo
// 0x0038
struct FWTLPopupButtonInfo
{
	struct FText                                       ButtonName;                                               // 0x0000(0x0018)
	uint64_t                                           ID;                                                       // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     Object;                                                   // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     UFunctionName;                                            // 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct WTL.WTLPopupDialogButtonInfo
// 0x0030
struct FWTLPopupDialogButtonInfo
{
	struct FText                                       Text;                                                     // 0x0000(0x0018)
	uint64_t                                           ID;                                                       // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLMessageDialogButtonInfo
// 0x0028
struct FWTLMessageDialogButtonInfo
{
	struct FText                                       Text;                                                     // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct WTL.WTLCharacterStateIndicatorTypeConfig
// 0x0090
struct FWTLCharacterStateIndicatorTypeConfig
{
	EWTLCharacterStateIndicatorType                    Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateBrush                                 IconBrush;                                                // 0x0008(0x0088) (CPF_Edit)
};

// ScriptStruct WTL.WTLCharacterEffectTypeConfig
// 0x0090
struct FWTLCharacterEffectTypeConfig
{
	EWTLCharacterEffectType                            Type;                                                     // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateBrush                                 IconBrush;                                                // 0x0008(0x0088) (CPF_Edit)
};

// ScriptStruct WTL.WTLCustomizationPartsLoadPermissions
// 0x0002
struct FWTLCustomizationPartsLoadPermissions
{
	EWTLCharacterCustomizationPart                     PartType;                                                 // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsPermissionToLoad;                                      // 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLCustomizationRecord
// 0x0150
struct FWTLCustomizationRecord
{
	struct FWTLCharacterCustomizationRecord            CustomizationRecord;                                      // 0x0000(0x0148)
	unsigned char                                      MaterialIndex;                                            // 0x0148(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.WTLHUDVisibleException
// 0x0010
struct FWTLHUDVisibleException
{
	class UWTLHUDBase*                                 FullscreenWidget;                                         // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWTLHUDBase*                                 ExceptionWidget;                                          // 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct WTL.WTLHUDFullscreenWidget
// 0x0010
struct FWTLHUDFullscreenWidget
{
	class UWTLUIBase*                                  Widget;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	EWTLInputMode                                      InputMode;                                                // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWasVisible;                                              // 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLInputSetting
// 0x0098
struct FWTLInputSetting
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018)
	struct FKey                                        MainKey;                                                  // 0x0020(0x0018)
	bool                                               bIsMainKeySet;                                            // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FKey                                        AlternateKey;                                             // 0x0040(0x0018)
	bool                                               bIsAlternateKeySet;                                       // 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsAlternateKeyAllow;                                     // 0x0059(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FKey                                        DefaultMainKey;                                           // 0x0060(0x0018)
	struct FKey                                        DefaultAlternateKey;                                      // 0x0078(0x0018)
	float                                              AxisScale;                                                // 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsMouseKeysCanBind;                                      // 0x0094(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

// ScriptStruct WTL.WTLTakenDamageRecord
// 0x0020
struct FWTLTakenDamageRecord
{
	struct FDateTime                                   LastDamageTime;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor)
	int                                                HitCount;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageValue;                                              // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           GroupId;                                                  // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           ClanID;                                                   // 0x0018(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.WTLWeaponTypeDamageModifier
// 0x0008
struct FWTLWeaponTypeDamageModifier
{
	EWTLWeaponType                                     WeaponType;                                               // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DamageMultiplier;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.EnergyFieldDamageEvent
// 0x0008 (0x0018 - 0x0010)
struct FEnergyFieldDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.SuffocationDamageEvent
// 0x0008 (0x0018 - 0x0010)
struct FSuffocationDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct WTL.MonsterDamageEvent
// 0x0010 (0x0020 - 0x0010)
struct FMonsterDamageEvent : public FDamageEvent
{
	EWTLColliderType                                   ColliderType;                                             // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ArmorPiercingValue;                                       // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseArmor;                                                 // 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Critical;                                                 // 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct WTL.MedicineDamageEvent
// 0x0008 (0x0018 - 0x0010)
struct FMedicineDamageEvent : public FDamageEvent
{
	int16_t                                            MedicineID;                                               // 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                EffectID;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct WTL.CharacterEffectDamageEvent
// 0x0008 (0x0018 - 0x0010)
struct FCharacterEffectDamageEvent : public FDamageEvent
{
	EWTLCharacterEffectType                            EffectType;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct WTL.SuicideDamageEvent
// 0x0000 (0x0010 - 0x0010)
struct FSuicideDamageEvent : public FDamageEvent
{

};

// ScriptStruct WTL.MeleeDamageEvent
// 0x0010 (0x00B8 - 0x00A8)
struct FMeleeDamageEvent : public FPointDamageEvent
{
	uint16_t                                           WeaponTypeID;                                             // 0x00A8(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AA(0x0002) MISSED OFFSET
	float                                              ImpulseMultiplier;                                        // 0x00AC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Critical;                                                 // 0x00B0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	EWTLColliderType                                   ColliderType;                                             // 0x00B1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseArmor;                                                 // 0x00B2(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	float                                              ArmorPiercingValue;                                       // 0x00B4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
