#pragma once

// Will To Live Online (0.57) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum WTL.EWTLCharacterClass
enum class EWTLCharacterClass : uint8_t
{
	EWTLCharacterClass__None       = 0,
	EWTLCharacterClass__Miner      = 1,
	EWTLCharacterClass__Hunter     = 2,
	EWTLCharacterClass__Mercenary  = 3,
	EWTLCharacterClass__Engineer   = 4,
	EWTLCharacterClass__EWTLCharacterClass_MAX = 5
};


// Enum WTL.EWTLFaction
enum class EWTLFaction : uint8_t
{
	EWTLFaction__None              = 0,
	EWTLFaction__Confederation     = 1,
	EWTLFaction__BlackSunset       = 2,
	EWTLFaction__EWTLFaction_MAX   = 3
};


// Enum WTL.EWTLMailPackageState
enum class EWTLMailPackageState : uint8_t
{
	EWTLMailPackageState__None     = 0,
	EWTLMailPackageState__Traveling = 1,
	EWTLMailPackageState__ReadyToPickup = 2,
	EWTLMailPackageState__Delivered = 3,
	EWTLMailPackageState__EWTLMailPackageState_MAX = 4
};


// Enum WTL.EWTLArtefactType
enum class EWTLArtefactType : uint8_t
{
	EWTLArtefactType__None         = 0,
	EWTLArtefactType__Quest        = 1,
	EWTLArtefactType__Food         = 2,
	EWTLArtefactType__StimulatorContainer = 3,
	EWTLArtefactType__Artefact     = 4,
	EWTLArtefactType__Houseware    = 5,
	EWTLArtefactType__Instruments  = 6,
	EWTLArtefactType__Electronics  = 7,
	EWTLArtefactType__Junk         = 8,
	EWTLArtefactType__AmmoComponents = 9,
	EWTLArtefactType__Document     = 10,
	EWTLArtefactType__SpareParts   = 11,
	EWTLArtefactType__ModificationParts = 12,
	EWTLArtefactType__EWTLArtefactType_MAX = 13
};


// Enum WTL.EWTLResourceType
enum class EWTLResourceType : uint8_t
{
	EWTLResourceType__Base         = 0,
	EWTLResourceType__Complex      = 1,
	EWTLResourceType__EWTLResourceType_MAX = 2
};


// Enum WTL.EWTLArmorClass
enum class EWTLArmorClass : uint8_t
{
	EWTLArmorClass__None           = 0,
	EWTLArmorClass__Light          = 1,
	EWTLArmorClass__Medium         = 2,
	EWTLArmorClass__Heavy          = 3,
	EWTLArmorClass__EWTLArmorClass_MAX = 4
};


// Enum WTL.EWTLClothesType
enum class EWTLClothesType : uint8_t
{
	EWTLClothesType__None          = 0,
	EWTLClothesType__Boots         = 1,
	EWTLClothesType__Trousers      = 2,
	EWTLClothesType__Jacket        = 3,
	EWTLClothesType__Helmet        = 4,
	EWTLClothesType__ArmorPlate    = 5,
	EWTLClothesType__CustomizationItem = 6,
	EWTLClothesType__EWTLClothesType_MAX = 7
};


// Enum WTL.EWTLItemType
enum class EWTLItemType : uint8_t
{
	EWTLItemType__None             = 0,
	EWTLItemType__Weapon           = 1,
	EWTLItemType__Ammo             = 2,
	EWTLItemType__Medicine         = 3,
	EWTLItemType__Stuff            = 4,
	EWTLItemType__Clothes          = 5,
	EWTLItemType__Resource         = 6,
	EWTLItemType__Artefact         = 7,
	EWTLItemType__EWTLItemType_MAX = 8
};


// Enum WTL.EWTLStuffType
enum class EWTLStuffType : uint8_t
{
	EWTLStuffType__None            = 0,
	EWTLStuffType__WeaponRepairKit = 1,
	EWTLStuffType__AmmoReloadingKit = 2,
	EWTLStuffType__UnlockingKit    = 3,
	EWTLStuffType__FlashLight      = 4,
	EWTLStuffType__Equipment       = 5,
	EWTLStuffType__Detector        = 6,
	EWTLStuffType__ResourceMiner   = 7,
	EWTLStuffType__BuilderKit      = 8,
	EWTLStuffType__WeaponAttachment = 9,
	EWTLStuffType__OpticDevice     = 10,
	EWTLStuffType__Battery         = 11,
	EWTLStuffType__Extractor       = 12,
	EWTLStuffType__ArtefactContainerS = 13,
	EWTLStuffType__ArtefactContainerM = 14,
	EWTLStuffType__ArtefactContainerL = 15,
	EWTLStuffType__PDAModule       = 16,
	EWTLStuffType__ClothesRepairKit = 17,
	EWTLStuffType__PlacementKit    = 18,
	EWTLStuffType__WeaponSprayCan  = 19,
	EWTLStuffType__ClothesSprayCan = 20,
	EWTLStuffType__WeaponModificationKit = 21,
	EWTLStuffType__ClothesModificationKit = 22,
	EWTLStuffType__EngravingKit    = 23,
	EWTLStuffType__EWTLStuffType_MAX = 24
};


// Enum WTL.EWTLCharacterEffectType
enum class EWTLCharacterEffectType : uint8_t
{
	EWTLCharacterEffectType__None  = 0,
	EWTLCharacterEffectType__Radiation = 1,
	EWTLCharacterEffectType__Chemicals = 2,
	EWTLCharacterEffectType__Poison = 3,
	EWTLCharacterEffectType__Bleeding = 4,
	EWTLCharacterEffectType__Suffocation = 5,
	EWTLCharacterEffectType__Burn  = 6,
	EWTLCharacterEffectType__Wounded = 7,
	EWTLCharacterEffectType__Immobilization = 8,
	EWTLCharacterEffectType__Consternation = 9,
	EWTLCharacterEffectType__Alcohol = 10,
	EWTLCharacterEffectType__RadiationProtection = 11,
	EWTLCharacterEffectType__ChemicalsProtection = 12,
	EWTLCharacterEffectType__PoisonProtection = 13,
	EWTLCharacterEffectType__BleedingProtection = 14,
	EWTLCharacterEffectType__Medicine = 15,
	EWTLCharacterEffectType__Stimulator = 16,
	EWTLCharacterEffectType__IntruderState = 17,
	EWTLCharacterEffectType__IntruderStateLethal = 18,
	EWTLCharacterEffectType__Invulnerability = 19,
	EWTLCharacterEffectType__EWTLCharacterEffectType_MAX = 20
};


// Enum WTL.EWTLMedicineType
enum class EWTLMedicineType : uint8_t
{
	EWTLMedicineType__MedKit       = 0,
	EWTLMedicineType__Stimulator   = 1,
	EWTLMedicineType__EWTLMedicineType_MAX = 2
};


// Enum WTL.EWTLCaliber
enum class EWTLCaliber : uint8_t
{
	EWTLCaliber__None              = 0,
	EWTLCaliber__Caliber_22LR      = 1,
	EWTLCaliber__Caliber_9x18PM    = 2,
	EWTLCaliber__Caliber_9x19Parabellum = 3,
	EWTLCaliber__Caliber_7_62x25TT = 4,
	EWTLCaliber__Caliber_38Special = 5,
	EWTLCaliber__Caliber_45ACP     = 6,
	EWTLCaliber__Caliber           = 7,
	EWTLCaliber__Caliber01         = 8,
	EWTLCaliber__Caliber_5_45x39   = 9,
	EWTLCaliber__Caliber_5_56x45NATO = 10,
	EWTLCaliber__Caliber_7_62x39   = 11,
	EWTLCaliber__Caliber_308WIN    = 12,
	EWTLCaliber__Caliber_7_62x54   = 13,
	EWTLCaliber__Caliber_9x39      = 14,
	EWTLCaliber__Caliber_7_62x38   = 15,
	EWTLCaliber__Caliber_30_06     = 16,
	EWTLCaliber__Caliber_338LM     = 17,
	EWTLCaliber__Caliber_357Magnum = 18,
	EWTLCaliber__Caliber_5_7x28    = 19,
	EWTLCaliber__Caliber_43mm      = 20,
	EWTLCaliber__EWTLCaliber_MAX   = 21
};


// Enum WTL.EWTLAmmoType
enum class EWTLAmmoType : uint8_t
{
	EWTLAmmoType__Ammo             = 0,
	EWTLAmmoType__Case             = 1,
	EWTLAmmoType__Projectile       = 2,
	EWTLAmmoType__EWTLAmmoType_MAX = 3
};


// Enum WTL.EWTLWeaponType
enum class EWTLWeaponType : uint8_t
{
	EWTLWeaponType__None           = 0,
	EWTLWeaponType__Knife          = 1,
	EWTLWeaponType__Pistol         = 2,
	EWTLWeaponType__Shotgun        = 3,
	EWTLWeaponType__SubMachineGun  = 4,
	EWTLWeaponType__AssaultRifle   = 5,
	EWTLWeaponType__Rifle          = 6,
	EWTLWeaponType__Machinegun     = 7,
	EWTLWeaponType__GrenadeLauncher = 8,
	EWTLWeaponType__Missile        = 9,
	EWTLWeaponType__Explosive      = 10,
	EWTLWeaponType__EWTLWeaponType_MAX = 11
};


// Enum WTL.EWTLLocationStorageType
enum class EWTLLocationStorageType : uint8_t
{
	EWTLLocationStorageType__None  = 0,
	EWTLLocationStorageType__Stash = 1,
	EWTLLocationStorageType__CraftObject = 2,
	EWTLLocationStorageType__EWTLLocationStorageType_MAX = 3
};


// Enum WTL.EWTLStorageType
enum class EWTLStorageType : uint8_t
{
	EWTLStorageType__None          = 0,
	EWTLStorageType__Inventory     = 1,
	EWTLStorageType__Commission    = 2,
	EWTLStorageType__CraftObject   = 3,
	EWTLStorageType__LocationStorage = 4,
	EWTLStorageType__PrivateStorage = 5,
	EWTLStorageType__ClanStorage   = 6,
	EWTLStorageType__FortificationObject = 7,
	EWTLStorageType__MailPackage   = 8,
	EWTLStorageType__EWTLStorageType_MAX = 9
};


// Enum WTL.EWTLMailPackageDeliveryType
enum class EWTLMailPackageDeliveryType : uint8_t
{
	EWTLMailPackageDeliveryType__None = 0,
	EWTLMailPackageDeliveryType__Regular = 1,
	EWTLMailPackageDeliveryType__Fast = 2,
	EWTLMailPackageDeliveryType__EWTLMailPackageDeliveryType_MAX = 3
};


// Enum WTL.EWTLColliderType
enum class EWTLColliderType : uint8_t
{
	EWTLColliderType__None         = 0,
	EWTLColliderType__Body         = 1,
	EWTLColliderType__Head         = 2,
	EWTLColliderType__Arm          = 3,
	EWTLColliderType__Leg          = 4,
	EWTLColliderType__Foot         = 5,
	EWTLColliderType__EWTLColliderType_MAX = 6
};


// Enum WTL.EWTLAmmoProjectileType
enum class EWTLAmmoProjectileType : uint8_t
{
	EWTLAmmoProjectileType__FMJ    = 0,
	EWTLAmmoProjectileType__HP     = 1,
	EWTLAmmoProjectileType__AP     = 2,
	EWTLAmmoProjectileType__EWTLAmmoProjectileType_MAX = 3
};


// Enum WTL.EWTLPlayerType
enum class EWTLPlayerType : uint8_t
{
	EWTLPlayerType__Regular        = 0,
	EWTLPlayerType__Moderator      = 1,
	EWTLPlayerType__Administrator  = 2,
	EWTLPlayerType__EWTLPlayerType_MAX = 3
};


// Enum WTL.EWTLClanMemberType
enum class EWTLClanMemberType : uint8_t
{
	EWTLClanMemberType__None       = 0,
	EWTLClanMemberType__Leader     = 1,
	EWTLClanMemberType__DeputyLeader = 2,
	EWTLClanMemberType__Steward    = 3,
	EWTLClanMemberType__Member     = 4,
	EWTLClanMemberType__Candidate  = 5,
	EWTLClanMemberType__EWTLClanMemberType_MAX = 6
};


// Enum WTL.EWTLSex
enum class EWTLSex : uint8_t
{
	EWTLSex__Female                = 0,
	EWTLSex__Male                  = 1,
	EWTLSex__EWTLSex_MAX           = 2
};


// Enum WTL.EWTLQuestState
enum class EWTLQuestState : uint8_t
{
	EWTLQuestState__None           = 0,
	EWTLQuestState__InProgress     = 1,
	EWTLQuestState__Canceled       = 2,
	EWTLQuestState__CompletedSuccess = 3,
	EWTLQuestState__CompletedFailed = 4,
	EWTLQuestState__EWTLQuestState_MAX = 5
};


// Enum WTL.EWTLCharacterCustomizationPart
enum class EWTLCharacterCustomizationPart : uint8_t
{
	EWTLCharacterCustomizationPart__None = 0,
	EWTLCharacterCustomizationPart__Head = 1,
	EWTLCharacterCustomizationPart__Torso = 2,
	EWTLCharacterCustomizationPart__Legs = 3,
	EWTLCharacterCustomizationPart__Feet = 4,
	EWTLCharacterCustomizationPart__Glasses = 5,
	EWTLCharacterCustomizationPart__Watches = 6,
	EWTLCharacterCustomizationPart__Backpack = 7,
	EWTLCharacterCustomizationPart__EWTLCharacterCustomizationPart_MAX = 8
};


// Enum WTL.EDBConnectionType
enum class EDBConnectionType : uint8_t
{
	EDBConnectionType__TCP         = 0,
	EDBConnectionType__NamedPipe   = 1,
	EDBConnectionType__EDBConnectionType_MAX = 2
};


// Enum WTL.EDBDriverType
enum class EDBDriverType : uint8_t
{
	EDBDriverType__None            = 0,
	EDBDriverType__MySQL           = 1,
	EDBDriverType__MySQLDevart     = 2,
	EDBDriverType__MariaDB         = 3,
	EDBDriverType__EDBDriverType_MAX = 4
};


// Enum WTL.EWTLActivatableAnomalyState
enum class EWTLActivatableAnomalyState : uint8_t
{
	EWTLActivatableAnomalyState__Idle = 0,
	EWTLActivatableAnomalyState__BeginActivate = 1,
	EWTLActivatableAnomalyState__Activated = 2,
	EWTLActivatableAnomalyState__EWTLActivatableAnomalyState_MAX = 3
};


// Enum WTL.EWTLAmbientSoundDayTimeType
enum class EWTLAmbientSoundDayTimeType : uint8_t
{
	EWTLAmbientSoundDayTimeType__AllDay = 0,
	EWTLAmbientSoundDayTimeType__Day = 1,
	EWTLAmbientSoundDayTimeType__Night = 2,
	EWTLAmbientSoundDayTimeType__EWTLAmbientSoundDayTimeType_MAX = 3
};


// Enum WTL.EWTLAmbientSoundLocationType
enum class EWTLAmbientSoundLocationType : uint8_t
{
	EWTLAmbientSoundLocationType__Foreground = 0,
	EWTLAmbientSoundLocationType__Underground = 1,
	EWTLAmbientSoundLocationType__EWTLAmbientSoundLocationType_MAX = 2
};


// Enum WTL.EWTLReloadingNotifyType
enum class EWTLReloadingNotifyType : uint8_t
{
	EWTLReloadingNotifyType__ReloadStart = 0,
	EWTLReloadingNotifyType__ReloadEnd = 1,
	EWTLReloadingNotifyType__EWTLReloadingNotifyType_MAX = 2
};


// Enum WTL.EWTLAnomalyCheckResult
enum class EWTLAnomalyCheckResult : uint8_t
{
	EWTLAnomalyCheckResult__Result_False = 0,
	EWTLAnomalyCheckResult__Result_True = 1,
	EWTLAnomalyCheckResult__Result_MAX = 2
};


// Enum WTL.EWTLAnomalyActionResult
enum class EWTLAnomalyActionResult : uint8_t
{
	EWTLAnomalyActionResult__Failed = 0,
	EWTLAnomalyActionResult__Success = 1,
	EWTLAnomalyActionResult__EWTLAnomalyActionResult_MAX = 2
};


// Enum WTL.EWTLMonsterHuntObjectiveType
enum class EWTLMonsterHuntObjectiveType : uint8_t
{
	EWTLMonsterHuntObjectiveType__None = 0,
	EWTLMonsterHuntObjectiveType__KillMonsterOfType = 1,
	EWTLMonsterHuntObjectiveType__KillAnyMonster = 2,
	EWTLMonsterHuntObjectiveType__DestroyMonsterSpawnPoint = 3,
	EWTLMonsterHuntObjectiveType__EWTLMonsterHuntObjectiveType_MAX = 4
};


// Enum WTL.EWTLBPLogVerbosity
enum class EWTLBPLogVerbosity : uint8_t
{
	EWTLBPLogVerbosity__Information = 0,
	EWTLBPLogVerbosity__Warning    = 1,
	EWTLBPLogVerbosity__Error      = 2,
	EWTLBPLogVerbosity__Fatal      = 3,
	EWTLBPLogVerbosity__EWTLBPLogVerbosity_MAX = 4
};


// Enum WTL.EWTLCharacterAnimationInstanceMovementState
enum class EWTLCharacterAnimationInstanceMovementState : uint8_t
{
	EWTLCharacterAnimationInstanceMovementState__None = 0,
	EWTLCharacterAnimationInstanceMovementState__Stand = 1,
	EWTLCharacterAnimationInstanceMovementState__StandWalking = 2,
	EWTLCharacterAnimationInstanceMovementState__StandSprinting = 3,
	EWTLCharacterAnimationInstanceMovementState__Crouch = 4,
	EWTLCharacterAnimationInstanceMovementState__CrouchWalking = 5,
	EWTLCharacterAnimationInstanceMovementState__Prone = 6,
	EWTLCharacterAnimationInstanceMovementState__ProneWalking = 7,
	EWTLCharacterAnimationInstanceMovementState__EWTLCharacterAnimationInstanceMovementState_MAX = 8
};


// Enum WTL.EWTLRootMotionControlLockingType
enum class EWTLRootMotionControlLockingType : uint8_t
{
	EWTLRootMotionControlLockingType__None = 0,
	EWTLRootMotionControlLockingType__LockOnlyYaw = 1,
	EWTLRootMotionControlLockingType__LockOnlyPitch = 2,
	EWTLRootMotionControlLockingType__LockAll = 3,
	EWTLRootMotionControlLockingType__EWTLRootMotionControlLockingType_MAX = 4
};


// Enum WTL.EWTLSimplifiedIdentificationType
enum class EWTLSimplifiedIdentificationType : uint8_t
{
	EWTLSimplifiedIdentificationType__None = 0,
	EWTLSimplifiedIdentificationType__OriginalSimplified = 1,
	EWTLSimplifiedIdentificationType__HealthbarCombined = 2,
	EWTLSimplifiedIdentificationType__CharacterNameOnly = 3,
	EWTLSimplifiedIdentificationType__EWTLSimplifiedIdentificationType_MAX = 4
};


// Enum WTL.EWTLLadderMontageType
enum class EWTLLadderMontageType : uint8_t
{
	EWTLLadderMontageType__None    = 0,
	EWTLLadderMontageType__LadderUpStart = 1,
	EWTLLadderMontageType__LadderUpEnd = 2,
	EWTLLadderMontageType__LadderDownStart = 3,
	EWTLLadderMontageType__LadderDownEnd = 4,
	EWTLLadderMontageType__EWTLLadderMontageType_MAX = 5
};


// Enum WTL.EWTLCharacterPreviewType
enum class EWTLCharacterPreviewType : uint8_t
{
	EWTLCharacterPreviewType__None = 0,
	EWTLCharacterPreviewType__CustomizationOnly = 1,
	EWTLCharacterPreviewType__Equipment = 2,
	EWTLCharacterPreviewType__EquipmentWithUsableItem = 3,
	EWTLCharacterPreviewType__EWTLCharacterPreviewType_MAX = 4
};


// Enum WTL.EWTLTurretState
enum class EWTLTurretState : uint8_t
{
	EWTLTurretState__None          = 0,
	EWTLTurretState__Prewarm       = 1,
	EWTLTurretState__Firing        = 2,
	EWTLTurretState__Cooldown      = 3,
	EWTLTurretState__EWTLTurretState_MAX = 4
};


// Enum WTL.EWTLStoreButtonType
enum class EWTLStoreButtonType : uint8_t
{
	STEAM                          = 0,
	Own                            = 1,
	EWTLStoreButtonType_MAX        = 2
};


// Enum WTL.EWTLEnemyNPCExclamationType
enum class EWTLEnemyNPCExclamationType : uint8_t
{
	EWTLEnemyNPCExclamationType__None = 0,
	EWTLEnemyNPCExclamationType__Attack = 1,
	EWTLEnemyNPCExclamationType__DamageDone = 2,
	EWTLEnemyNPCExclamationType__Grenade = 3,
	EWTLEnemyNPCExclamationType__Reload = 4,
	EWTLEnemyNPCExclamationType__Warning = 5,
	EWTLEnemyNPCExclamationType__TargetSighted = 6,
	EWTLEnemyNPCExclamationType__TargetListened = 7,
	EWTLEnemyNPCExclamationType__TalkToTarget = 8,
	EWTLEnemyNPCExclamationType__EWTLEnemyNPCExclamationType_MAX = 9
};


// Enum WTL.EWTLEnemyNPCSpawnType
enum class EWTLEnemyNPCSpawnType : uint8_t
{
	EWTLEnemyNPCSpawnType__Wave    = 0,
	EWTLEnemyNPCSpawnType__ReplanishTheRanks = 1,
	EWTLEnemyNPCSpawnType__EWTLEnemyNPCSpawnType_MAX = 2
};


// Enum WTL.EWTLRadialMenuType
enum class EWTLRadialMenuType : uint8_t
{
	EWTLRadialMenuType__None       = 0,
	EWTLRadialMenuType__Use        = 1,
	EWTLRadialMenuType__Emotions   = 2,
	EWTLRadialMenuType__EWTLRadialMenuType_MAX = 3
};


// Enum WTL.EWTLSocialNetworkType
enum class EWTLSocialNetworkType : uint8_t
{
	EWTLSocialNetworkType__None    = 0,
	EWTLSocialNetworkType__VK      = 1,
	EWTLSocialNetworkType__Facebook = 2,
	EWTLSocialNetworkType__Twitter = 3,
	EWTLSocialNetworkType__EWTLSocialNetworkType_MAX = 4
};


// Enum WTL.EWTLArenaMatchState
enum class EWTLArenaMatchState : uint8_t
{
	EWTLArenaMatchState__None      = 0,
	EWTLArenaMatchState__WaitingForStart = 1,
	EWTLArenaMatchState__InProgress = 2,
	EWTLArenaMatchState__Done      = 3,
	EWTLArenaMatchState__EWTLArenaMatchState_MAX = 4
};


// Enum WTL.EWTLButtonText
enum class EWTLButtonText : uint8_t
{
	EWTLButtonText__None           = 0,
	EWTLButtonText__OK             = 1,
	EWTLButtonText__Cancel         = 2,
	EWTLButtonText__Yes            = 3,
	EWTLButtonText__No             = 4,
	EWTLButtonText__Apply          = 5,
	EWTLButtonText__Back           = 6,
	EWTLButtonText__EWTLButtonText_MAX = 7
};


// Enum WTL.EWTLTutorialMessageType
enum class EWTLTutorialMessageType : uint8_t
{
	EWTLTutorialMessageType__Tutorial = 0,
	EWTLTutorialMessageType__Warning = 1,
	EWTLTutorialMessageType__EWTLTutorialMessageType_MAX = 2
};


// Enum WTL.EWTLTutorialMessage
enum class EWTLTutorialMessage : uint8_t
{
	EWTLTutorialMessage__ShowPDA   = 0,
	EWTLTutorialMessage__ShowMap   = 1,
	EWTLTutorialMessage__ShowMapLegend = 2,
	EWTLTutorialMessage__EmotionsMenu = 3,
	EWTLTutorialMessage__FirstSkillPoint = 4,
	EWTLTutorialMessage__GasMaskStuffSlot = 5,
	EWTLTutorialMessage__HasSteamInventoryItems = 6,
	EWTLTutorialMessage__PlaceStash = 7,
	EWTLTutorialMessage__EWTLTutorialMessage_MAX = 8
};


// Enum WTL.EWTLFortificationNotificationState
enum class EWTLFortificationNotificationState : uint8_t
{
	EWTLFortificationNotificationState__None = 0,
	EWTLFortificationNotificationState__StartLoosingPoint = 1,
	EWTLFortificationNotificationState__StartCapturingPoint = 2,
	EWTLFortificationNotificationState__PointCaptured = 3,
	EWTLFortificationNotificationState__PointSecured = 4,
	EWTLFortificationNotificationState__PointLost = 5,
	EWTLFortificationNotificationState__PointCaptureFailed = 6,
	EWTLFortificationNotificationState__EWTLFortificationNotificationState_MAX = 7
};


// Enum WTL.EWTLFortificationPointState
enum class EWTLFortificationPointState : uint8_t
{
	EWTLFortificationPointState__None = 0,
	EWTLFortificationPointState__CaptureStarted = 1,
	EWTLFortificationPointState__Captured = 2,
	EWTLFortificationPointState__Restored = 3,
	EWTLFortificationPointState__EWTLFortificationPointState_MAX = 4
};


// Enum WTL.EWTLFortificationJammerState
enum class EWTLFortificationJammerState : uint8_t
{
	EWTLFortificationJammerState__None = 0,
	EWTLFortificationJammerState__Connected = 1,
	EWTLFortificationJammerState__ConnectedOutOfEnergy = 2,
	EWTLFortificationJammerState__ConnectionRefused = 3,
	EWTLFortificationJammerState__UnableToConnect = 4,
	EWTLFortificationJammerState__EWTLFortificationJammerState_MAX = 5
};


// Enum WTL.EWTLEquipmentType
enum class EWTLEquipmentType : uint8_t
{
	EWTLEquipmentType__None        = 0,
	EWTLEquipmentType__NightVision = 1,
	EWTLEquipmentType__NDPDetector = 2,
	EWTLEquipmentType__MetalDetector = 3,
	EWTLEquipmentType__RespiratoryProtection = 4,
	EWTLEquipmentType__EWTLEquipmentType_MAX = 5
};


// Enum WTL.EWTLAITeam
enum class EWTLAITeam : uint8_t
{
	EWTLAITeam__None               = 0,
	EWTLAITeam__Vagrants           = 1,
	EWTLAITeam__Confederation      = 2,
	EWTLAITeam__BlackSunset        = 3,
	EWTLAITeam__Monsters           = 4,
	EWTLAITeam__Neutrals           = 5,
	EWTLAITeam__EWTLAITeam_MAX     = 6
};


// Enum WTL.EWTLCharacterStunhitDirection
enum class EWTLCharacterStunhitDirection : uint8_t
{
	EWTLCharacterStunhitDirection__None = 0,
	EWTLCharacterStunhitDirection__Right = 1,
	EWTLCharacterStunhitDirection__Left = 2,
	EWTLCharacterStunhitDirection__InPlace = 3,
	EWTLCharacterStunhitDirection__Back = 4,
	EWTLCharacterStunhitDirection__EWTLCharacterStunhitDirection_MAX = 5
};


// Enum WTL.EWTLRenderTargetType
enum class EWTLRenderTargetType : uint8_t
{
	EWTLRenderTargetType__Square   = 0,
	EWTLRenderTargetType__Landscape = 1,
	EWTLRenderTargetType__EWTLRenderTargetType_MAX = 2
};


// Enum WTL.EWTLDialogMessageType
enum class EWTLDialogMessageType : uint8_t
{
	EWTLDialogMessageType__Information = 0,
	EWTLDialogMessageType__Warning = 1,
	EWTLDialogMessageType__Error   = 2,
	EWTLDialogMessageType__EWTLDialogMessageType_MAX = 3
};


// Enum WTL.EWTLNPCType
enum class EWTLNPCType : uint8_t
{
	EWTLNPCType__None              = 0,
	EWTLNPCType__Doctor            = 1,
	EWTLNPCType__Stockman          = 2,
	EWTLNPCType__Gunsmith          = 3,
	EWTLNPCType__Trader            = 4,
	EWTLNPCType__EWTLNPCType_MAX   = 5
};


// Enum WTL.EWTLReportFormResponseError
enum class EWTLReportFormResponseError : uint8_t
{
	EWTLReportFormResponseError__None = 0,
	EWTLReportFormResponseError__ServerDoesNotResponse = 1,
	EWTLReportFormResponseError__ServerRequestError = 2,
	EWTLReportFormResponseError__EWTLReportFormResponseError_MAX = 3
};


// Enum WTL.EWTLReportFormState
enum class EWTLReportFormState : uint8_t
{
	EWTLReportFormState__FeedbackForm = 0,
	EWTLReportFormState__RequestSending = 1,
	EWTLReportFormState__RequestSuccess = 2,
	EWTLReportFormState__RequestError = 3,
	EWTLReportFormState__EWTLReportFormState_MAX = 4
};


// Enum WTL.EWTLUseMenuActionType
enum class EWTLUseMenuActionType : uint8_t
{
	EWTLUseMenuActionType__None    = 0,
	EWTLUseMenuActionType__ShowInformationAboutCharacter = 1,
	EWTLUseMenuActionType__SendTextChatMessageToCharacter = 2,
	EWTLUseMenuActionType__GiveTokensToCharacter = 3,
	EWTLUseMenuActionType__OfferBarterToCharacter = 4,
	EWTLUseMenuActionType__InviteCharacterToGroup = 5,
	EWTLUseMenuActionType__MuteCharacter = 6,
	EWTLUseMenuActionType__UnmuteCharacter = 7,
	EWTLUseMenuActionType__TextChatMuteCharacter = 8,
	EWTLUseMenuActionType__TextChatUnmuteCharacter = 9,
	EWTLUseMenuActionType__ReportCharacter = 10,
	EWTLUseMenuActionType__CommendCharacter = 11,
	EWTLUseMenuActionType__Pickup  = 12,
	EWTLUseMenuActionType__Charge  = 13,
	EWTLUseMenuActionType__EWTLUseMenuActionType_MAX = 14
};


// Enum WTL.EWTLTriggerObjectActionType
enum class EWTLTriggerObjectActionType : uint8_t
{
	EWTLTriggerObjectActionType__None = 0,
	EWTLTriggerObjectActionType__Read = 1,
	EWTLTriggerObjectActionType__Inspect = 2,
	EWTLTriggerObjectActionType__InsertBatteries = 3,
	EWTLTriggerObjectActionType__EWTLTriggerObjectActionType_MAX = 4
};


// Enum WTL.EWTLQTEType
enum class EWTLQTEType : uint8_t
{
	EWTLQTEType__None              = 0,
	EWTLQTEType__Repetative        = 1,
	EWTLQTEType__RepetativeWithDecreasing = 2,
	EWTLQTEType__MachingSequence   = 3,
	EWTLQTEType__RepetativeControlsEnabled = 4,
	EWTLQTEType__RepetativeWithDecreasingControlsEnabled = 5,
	EWTLQTEType__EWTLQTEType_MAX   = 6
};


// Enum WTL.EWTLArmorPlateType
enum class EWTLArmorPlateType : uint8_t
{
	EWTLArmorPlateType__None       = 0,
	EWTLArmorPlateType__FrontPlate = 1,
	EWTLArmorPlateType__BackPlate  = 2,
	EWTLArmorPlateType__EWTLArmorPlateType_MAX = 3
};


// Enum WTL.EWTLHUDRequestWindowType
enum class EWTLHUDRequestWindowType : uint8_t
{
	EWTLHUDRequestWindowType__None = 0,
	EWTLHUDRequestWindowType__GroupInvite = 1,
	EWTLHUDRequestWindowType__ClanInvite = 2,
	EWTLHUDRequestWindowType__BarterOffer = 3,
	EWTLHUDRequestWindowType__EWTLHUDRequestWindowType_MAX = 4
};


// Enum WTL.EWTLMoneyTransferWindowWidgetType
enum class EWTLMoneyTransferWindowWidgetType : uint8_t
{
	EWTLMoneyTransferWindowWidgetType__None = 0,
	EWTLMoneyTransferWindowWidgetType__WithdrawFromClanStorage = 1,
	EWTLMoneyTransferWindowWidgetType__DepositToClanStorage = 2,
	EWTLMoneyTransferWindowWidgetType__EWTLMoneyTransferWindowWidgetType_MAX = 3
};


// Enum WTL.EWTLCommissionAddUpdateWindowType
enum class EWTLCommissionAddUpdateWindowType : uint8_t
{
	EWTLCommissionAddUpdateWindowType__None = 0,
	EWTLCommissionAddUpdateWindowType__Add = 1,
	EWTLCommissionAddUpdateWindowType__Update = 2,
	EWTLCommissionAddUpdateWindowType__EWTLCommissionAddUpdateWindowType_MAX = 3
};


// Enum WTL.EWTLCheatType
enum class EWTLCheatType : uint8_t
{
	EWTLCheatType__None            = 0,
	EWTLCheatType__RX_Throttle     = 1,
	EWTLCheatType__TX_Throttle     = 2,
	EWTLCheatType__BadPing         = 3,
	EWTLCheatType__TimeDiscrepancy = 4,
	EWTLCheatType__Unrandomizer    = 5,
	EWTLCheatType__ClientValuesHack = 6,
	EWTLCheatType__SpeedHack       = 7,
	EWTLCheatType__SuspiciousModule = 8,
	EWTLCheatType__AnticheatResponseFailed = 9,
	EWTLCheatType__EWTLCheatType_MAX = 10
};


// Enum WTL.EWTLCountdownSliderWidgetFillingType
enum class EWTLCountdownSliderWidgetFillingType : uint8_t
{
	EWTLCountdownSliderWidgetFillingType__Increasing = 0,
	EWTLCountdownSliderWidgetFillingType__Decreasing = 1,
	EWTLCountdownSliderWidgetFillingType__EWTLCountdownSliderWidgetFillingType_MAX = 2
};


// Enum WTL.EWTLActionTimerWidgetType
enum class EWTLActionTimerWidgetType : uint8_t
{
	EWTLActionTimerWidgetType__None = 0,
	EWTLActionTimerWidgetType__AnomalyResearch = 1,
	EWTLActionTimerWidgetType__SafeZoneLeaveInvulnerableCooldown = 2,
	EWTLActionTimerWidgetType__ItemPlacement = 3,
	EWTLActionTimerWidgetType__EWTLActionTimerWidgetType_MAX = 4
};


// Enum WTL.EWTLWarningTitleWidgetType
enum class EWTLWarningTitleWidgetType : uint8_t
{
	EWTLWarningTitleWidgetType__CannotPickupNotAnyAvailableSlotInInventory = 0,
	EWTLWarningTitleWidgetType__CannotWalkInventoryOverload = 1,
	EWTLWarningTitleWidgetType__CannotPickupInventoryOverload = 2,
	EWTLWarningTitleWidgetType__CannotUseNotCondition = 3,
	EWTLWarningTitleWidgetType__CannotUseNotEnergy = 4,
	EWTLWarningTitleWidgetType__WeaponReloadAdvice = 5,
	EWTLWarningTitleWidgetType__CannotUsePortal = 6,
	EWTLWarningTitleWidgetType__CannotInviteToGroupAlreadyIn = 7,
	EWTLWarningTitleWidgetType__NotInClan = 8,
	EWTLWarningTitleWidgetType__NotInFaction = 9,
	EWTLWarningTitleWidgetType__CannotUsePlaceableStuff = 10,
	EWTLWarningTitleWidgetType__CannotCollectWaterInventoryOverload = 11,
	EWTLWarningTitleWidgetType__CannotCollectWaterInventoryWillBeOverloaded = 12,
	EWTLWarningTitleWidgetType__CannotCollectWaterNotAnyAvailableSlotInInventory = 13,
	EWTLWarningTitleWidgetType__GunOverheated = 14,
	EWTLWarningTitleWidgetType__NoAmmoForShooting = 15,
	EWTLWarningTitleWidgetType__NoNutsInInventoryToThrow = 16,
	EWTLWarningTitleWidgetType__EventJoined = 17,
	EWTLWarningTitleWidgetType__EventLeaved = 18,
	EWTLWarningTitleWidgetType__EventCompleted = 19,
	EWTLWarningTitleWidgetType__EventFailed = 20,
	EWTLWarningTitleWidgetType__EWTLWarningTitleWidgetType_MAX = 21
};


// Enum WTL.EWTLItemSlotActionPermission
enum class EWTLItemSlotActionPermission : uint8_t
{
	EWTLItemSlotActionPermission__AddOnCustomization = 0,
	EWTLItemSlotActionPermission__AddForModification = 1,
	EWTLItemSlotActionPermission__RemoveFromCustomization = 2,
	EWTLItemSlotActionPermission__RemoveFromModification = 3,
	EWTLItemSlotActionPermission__OpenExtractor = 4,
	EWTLItemSlotActionPermission__CloseExtractor = 5,
	EWTLItemSlotActionPermission__AddToStimulatorContainerSlot = 6,
	EWTLItemSlotActionPermission__RemoveFromStimulatorContainerSlot = 7,
	EWTLItemSlotActionPermission__AddOnSale = 8,
	EWTLItemSlotActionPermission__AddOnRepair = 9,
	EWTLItemSlotActionPermission__AddToExtractor = 10,
	EWTLItemSlotActionPermission__AddToBarter = 11,
	EWTLItemSlotActionPermission__AddToSteamInventory = 12,
	EWTLItemSlotActionPermission__AddToMailBox = 13,
	EWTLItemSlotActionPermission__AddToCommission = 14,
	EWTLItemSlotActionPermission__RemoveFromSale = 15,
	EWTLItemSlotActionPermission__RemoveFromRepair = 16,
	EWTLItemSlotActionPermission__RemoveFromExtractor = 17,
	EWTLItemSlotActionPermission__RemoveFromBarter = 18,
	EWTLItemSlotActionPermission__RemoveFromSteamInventory = 19,
	EWTLItemSlotActionPermission__RemoveFromMailBox = 20,
	EWTLItemSlotActionPermission__PutInStorage = 21,
	EWTLItemSlotActionPermission__TakeFromStorage = 22,
	EWTLItemSlotActionPermission__PutInClanStorage = 23,
	EWTLItemSlotActionPermission__TakeFromClanStorage = 24,
	EWTLItemSlotActionPermission__AssignToFastAccess = 25,
	EWTLItemSlotActionPermission__RemoveFromFastAccess = 26,
	EWTLItemSlotActionPermission__PlaceItem = 27,
	EWTLItemSlotActionPermission__AttachToWeaponByStuffItem = 28,
	EWTLItemSlotActionPermission__AttachStuffItemToWeapon = 29,
	EWTLItemSlotActionPermission__RemoveAttachmentFromWeapon = 30,
	EWTLItemSlotActionPermission__RemoveAttachmentFromWeaponBySlot = 31,
	EWTLItemSlotActionPermission__RemoveAllAttachmentsFromWeapon = 32,
	EWTLItemSlotActionPermission__ChargeEnergySourceItemToStuff = 33,
	EWTLItemSlotActionPermission__ChargeStuffItemByEnergySource = 34,
	EWTLItemSlotActionPermission__ChangeGasMaskFilterFromFilter = 35,
	EWTLItemSlotActionPermission__ChangeGasMaskFilterFromGasMask = 36,
	EWTLItemSlotActionPermission__PlaceArtefactItemInContainer = 37,
	EWTLItemSlotActionPermission__RemoveArtefactItemFromContainer = 38,
	EWTLItemSlotActionPermission__InstallPDAModule = 39,
	EWTLItemSlotActionPermission__RepairWeaponByKit = 40,
	EWTLItemSlotActionPermission__RepairClothesByKit = 41,
	EWTLItemSlotActionPermission__ModifyWeaponByKit = 42,
	EWTLItemSlotActionPermission__ModifyClothesByKit = 43,
	EWTLItemSlotActionPermission__PaintWeaponBySprayCan = 44,
	EWTLItemSlotActionPermission__PaintClothesBySprayCan = 45,
	EWTLItemSlotActionPermission__LoadAmmoToWeapon = 46,
	EWTLItemSlotActionPermission__LoadWeapon = 47,
	EWTLItemSlotActionPermission__UnloadWeapon = 48,
	EWTLItemSlotActionPermission__BreakWeapon = 49,
	EWTLItemSlotActionPermission__InstallArmoredPlate = 50,
	EWTLItemSlotActionPermission__RemoveArmoredPlate = 51,
	EWTLItemSlotActionPermission__UseNewPassport = 52,
	EWTLItemSlotActionPermission__UseItem = 53,
	EWTLItemSlotActionPermission__ViewItem = 54,
	EWTLItemSlotActionPermission__EquipClothesItem = 55,
	EWTLItemSlotActionPermission__UnequipClothesItem = 56,
	EWTLItemSlotActionPermission__OpenArmoredPlatesWindow = 57,
	EWTLItemSlotActionPermission__RemoveAllArmoredPlates = 58,
	EWTLItemSlotActionPermission__EquipStuffItem = 59,
	EWTLItemSlotActionPermission__UnequipStuffItem = 60,
	EWTLItemSlotActionPermission__CombineItem = 61,
	EWTLItemSlotActionPermission__SplitItem = 62,
	EWTLItemSlotActionPermission__DropItem = 63,
	EWTLItemSlotActionPermission__DestroyItem = 64,
	EWTLItemSlotActionPermission__ShowItemInformation = 65,
	EWTLItemSlotActionPermission__EWTLItemSlotActionPermission_MAX = 66
};


// Enum WTL.EWTLMonsterActivityState
enum class EWTLMonsterActivityState : uint8_t
{
	EWTLMonsterActivityState__Normal = 0,
	EWTLMonsterActivityState__Passive = 1,
	EWTLMonsterActivityState__DeepSleep = 2,
	EWTLMonsterActivityState__EWTLMonsterActivityState_MAX = 3
};


// Enum WTL.EWTLMonsterActionBase
enum class EWTLMonsterActionBase : uint8_t
{
	EWTLMonsterActionBase__None    = 0,
	EWTLMonsterActionBase__MainAttack = 1,
	EWTLMonsterActionBase__SecondaryAttack = 2,
	EWTLMonsterActionBase__SpecialAbility0 = 3,
	EWTLMonsterActionBase__SpecialAbility1 = 4,
	EWTLMonsterActionBase__SpecialAbility2 = 5,
	EWTLMonsterActionBase__SpecialAbility3 = 6,
	EWTLMonsterActionBase__SpecialAbility4 = 7,
	EWTLMonsterActionBase__SpecialAbility5 = 8,
	EWTLMonsterActionBase__Immobilized = 9,
	EWTLMonsterActionBase__Stunned = 10,
	EWTLMonsterActionBase__Die     = 11,
	EWTLMonsterActionBase__CustomAction0 = 12,
	EWTLMonsterActionBase__CustomAction1 = 13,
	EWTLMonsterActionBase__CustomAction2 = 14,
	EWTLMonsterActionBase__CustomAction3 = 15,
	EWTLMonsterActionBase__CustomAction4 = 16,
	EWTLMonsterActionBase__CustomAction5 = 17,
	EWTLMonsterActionBase__CustomAction6 = 18,
	EWTLMonsterActionBase__CustomAction7 = 19,
	EWTLMonsterActionBase__CustomAction8 = 20,
	EWTLMonsterActionBase__CustomAction9 = 21,
	EWTLMonsterActionBase__EWTLMonsterActionBase_MAX = 22
};


// Enum WTL.EWTLMonsterAttachState
enum class EWTLMonsterAttachState : uint8_t
{
	EWTLMonsterAttachState__None   = 0,
	EWTLMonsterAttachState__AttachTo = 1,
	EWTLMonsterAttachState__Attached = 2,
	EWTLMonsterAttachState__DetachTo = 3,
	EWTLMonsterAttachState__Detached = 4,
	EWTLMonsterAttachState__AttachedForward = 5,
	EWTLMonsterAttachState__AttachedBack = 6,
	EWTLMonsterAttachState__EWTLMonsterAttachState_MAX = 7
};


// Enum WTL.EWTLMonsterAttackModificator
enum class EWTLMonsterAttackModificator : uint8_t
{
	EWTLMonsterAttackModificator__AllowCritical = 0,
	EWTLMonsterAttackModificator__DisallowCritical = 1,
	EWTLMonsterAttackModificator__AlwaysCritical = 2,
	EWTLMonsterAttackModificator__EWTLMonsterAttackModificator_MAX = 3
};


// Enum WTL.EWTLMonsterState
enum class EWTLMonsterState : uint8_t
{
	EWTLMonsterState__Idle         = 0,
	EWTLMonsterState__Walk         = 1,
	EWTLMonsterState__AggressUp    = 2,
	EWTLMonsterState__FollowTarget = 3,
	EWTLMonsterState__Attack       = 4,
	EWTLMonsterState__Escaping     = 5,
	EWTLMonsterState__Jump         = 6,
	EWTLMonsterState__JumpToEnemy  = 7,
	EWTLMonsterState__Teleport     = 8,
	EWTLMonsterState__Fly          = 9,
	EWTLMonsterState__FarAttackToBadCharacter = 10,
	EWTLMonsterState__ToStealth    = 11,
	EWTLMonsterState__InStealth    = 12,
	EWTLMonsterState__StealthMoveTo = 13,
	EWTLMonsterState__StealthFollowEnemy = 14,
	EWTLMonsterState__FromStealth  = 15,
	EWTLMonsterState__DropItemFromCharacter = 16,
	EWTLMonsterState__CustomAction0 = 17,
	EWTLMonsterState__CustomAction1 = 18,
	EWTLMonsterState__CustomAction2 = 19,
	EWTLMonsterState__CustomAction3 = 20,
	EWTLMonsterState__CustomAction4 = 21,
	EWTLMonsterState__CustomAction5 = 22,
	EWTLMonsterState__GetRandomTarget = 23,
	EWTLMonsterState__PlayMontage  = 24,
	EWTLMonsterState__EWTLMonsterState_MAX = 25
};


// Enum WTL.EWTLMonsterActionType
enum class EWTLMonsterActionType : uint8_t
{
	EWTLMonsterActionType__None    = 0,
	EWTLMonsterActionType__MainAttack = 1,
	EWTLMonsterActionType__SecondaryAttack = 2,
	EWTLMonsterActionType__SpecialAbility0 = 3,
	EWTLMonsterActionType__SpecialAbility1 = 4,
	EWTLMonsterActionType__SpecialAbility2 = 5,
	EWTLMonsterActionType__SpecialAbility3 = 6,
	EWTLMonsterActionType__SpecialAbility4 = 7,
	EWTLMonsterActionType__SpecialAbility5 = 8,
	EWTLMonsterActionType__Idle0   = 9,
	EWTLMonsterActionType__Idle1   = 10,
	EWTLMonsterActionType__Idle2   = 11,
	EWTLMonsterActionType__Idle3   = 12,
	EWTLMonsterActionType__Idle4   = 13,
	EWTLMonsterActionType__Idle5   = 14,
	EWTLMonsterActionType__Immobilized = 15,
	EWTLMonsterActionType__Stunned = 16,
	EWTLMonsterActionType__Die     = 17,
	EWTLMonsterActionType__CustomAction0 = 18,
	EWTLMonsterActionType__CustomAction1 = 19,
	EWTLMonsterActionType__CustomAction2 = 20,
	EWTLMonsterActionType__CustomAction3 = 21,
	EWTLMonsterActionType__CustomAction4 = 22,
	EWTLMonsterActionType__CustomAction5 = 23,
	EWTLMonsterActionType__CustomAction6 = 24,
	EWTLMonsterActionType__ToStealth = 25,
	EWTLMonsterActionType__InStealth = 26,
	EWTLMonsterActionType__FromStealth = 27,
	EWTLMonsterActionType__Aggression = 28,
	EWTLMonsterActionType__FarAttack0 = 29,
	EWTLMonsterActionType__FarAttack1 = 30,
	EWTLMonsterActionType__FarAttackToBadEnemy1 = 31,
	EWTLMonsterActionType__EWTLMonsterActionType_MAX = 32
};


// Enum WTL.EWTLMonsterMovementMode
enum class EWTLMonsterMovementMode : uint8_t
{
	EWTLMonsterMovementMode__None  = 0,
	EWTLMonsterMovementMode__Loaf  = 1,
	EWTLMonsterMovementMode__Walk  = 2,
	EWTLMonsterMovementMode__Sprint = 3,
	EWTLMonsterMovementMode__EWTLMonsterMovementMode_MAX = 4
};


// Enum WTL.EWTLPDAWidget
enum class EWTLPDAWidget : uint8_t
{
	EWTLPDAWidget__Menu            = 0,
	EWTLPDAWidget__CharacterInfo   = 1,
	EWTLPDAWidget__CharacterParameters = 2,
	EWTLPDAWidget__CharacterSkills = 3,
	EWTLPDAWidget__QuestLog        = 4,
	EWTLPDAWidget__Map             = 5,
	EWTLPDAWidget__Mail            = 6,
	EWTLPDAWidget__Group           = 7,
	EWTLPDAWidget__Clan            = 8,
	EWTLPDAWidget__Fraction        = 9,
	EWTLPDAWidget__FriendsAndEnemies = 10,
	EWTLPDAWidget__CraftRecipes    = 11,
	EWTLPDAWidget__Settings        = 12,
	EWTLPDAWidget__EWTLPDAWidget_MAX = 13
};


// Enum WTL.EWTLCustomizationColorPresetType
enum class EWTLCustomizationColorPresetType : uint8_t
{
	EWTLCustomizationColorPresetType__None = 0,
	EWTLCustomizationColorPresetType__Hair = 1,
	EWTLCustomizationColorPresetType__Skin = 2,
	EWTLCustomizationColorPresetType__Clothes = 3,
	EWTLCustomizationColorPresetType__Feet = 4,
	EWTLCustomizationColorPresetType__Backpack = 5,
	EWTLCustomizationColorPresetType__EWTLCustomizationColorPresetType_MAX = 6
};


// Enum WTL.EWTLPDAMenuButtonType
enum class EWTLPDAMenuButtonType : uint8_t
{
	EWTLPDAMenuButtonType__None    = 0,
	EWTLPDAMenuButtonType__CharacterInfo = 1,
	EWTLPDAMenuButtonType__CharacterParameters = 2,
	EWTLPDAMenuButtonType__Skills  = 3,
	EWTLPDAMenuButtonType__QuestLog = 4,
	EWTLPDAMenuButtonType__Map     = 5,
	EWTLPDAMenuButtonType__Settings = 6,
	EWTLPDAMenuButtonType__Mail    = 7,
	EWTLPDAMenuButtonType__Group   = 8,
	EWTLPDAMenuButtonType__Clan    = 9,
	EWTLPDAMenuButtonType__Fraction = 10,
	EWTLPDAMenuButtonType__CraftRecipes = 11,
	EWTLPDAMenuButtonType__Highlights = 12,
	EWTLPDAMenuButtonType__SocialNetworkVK = 13,
	EWTLPDAMenuButtonType__SocialNetworkFacebook = 14,
	EWTLPDAMenuButtonType__EWTLPDAMenuButtonType_MAX = 15
};


// Enum WTL.EWTLMonsterDangerLevel
enum class EWTLMonsterDangerLevel : uint8_t
{
	EWTLMonsterDangerLevel__None   = 0,
	EWTLMonsterDangerLevel__Low    = 1,
	EWTLMonsterDangerLevel__BelowNormal = 2,
	EWTLMonsterDangerLevel__Normal = 3,
	EWTLMonsterDangerLevel__AboveNormal = 4,
	EWTLMonsterDangerLevel__High   = 5,
	EWTLMonsterDangerLevel__Critical = 6,
	EWTLMonsterDangerLevel__EWTLMonsterDangerLevel_MAX = 7
};


// Enum WTL.EWTLMedicineEffectType
enum class EWTLMedicineEffectType : uint8_t
{
	EWTLMedicineEffectType__None   = 0,
	EWTLMedicineEffectType__Strength = 1,
	EWTLMedicineEffectType__Dexterity = 2,
	EWTLMedicineEffectType__Stamina = 3,
	EWTLMedicineEffectType__Accuracy = 4,
	EWTLMedicineEffectType__Intelligence = 5,
	EWTLMedicineEffectType__Fortune = 6,
	EWTLMedicineEffectType__MaxHealth = 7,
	EWTLMedicineEffectType__EWTLMedicineEffectType_MAX = 8
};


// Enum WTL.EWTLSuicideState
enum class EWTLSuicideState : uint8_t
{
	EWTLSuicideState__None         = 0,
	EWTLSuicideState__SuicideInProgress = 1,
	EWTLSuicideState__SuicideDone  = 2,
	EWTLSuicideState__EWTLSuicideState_MAX = 3
};


// Enum WTL.EWTLWeaponAttachmentType
enum class EWTLWeaponAttachmentType : uint8_t
{
	EWTLWeaponAttachmentType__None = 0,
	EWTLWeaponAttachmentType__RedDotSight = 1,
	EWTLWeaponAttachmentType__Scope = 2,
	EWTLWeaponAttachmentType__MuzzleBrake = 3,
	EWTLWeaponAttachmentType__Silencer = 4,
	EWTLWeaponAttachmentType__Flashlight = 5,
	EWTLWeaponAttachmentType__Laser = 6,
	EWTLWeaponAttachmentType__EWTLWeaponAttachmentType_MAX = 7
};


// Enum WTL.EWTLWeaponAttachmentSlotType
enum class EWTLWeaponAttachmentSlotType : uint8_t
{
	EWTLWeaponAttachmentSlotType__None = 0,
	EWTLWeaponAttachmentSlotType__Muzzle = 1,
	EWTLWeaponAttachmentSlotType__Flashlight = 2,
	EWTLWeaponAttachmentSlotType__Scope = 3,
	EWTLWeaponAttachmentSlotType__EWTLWeaponAttachmentSlotType_MAX = 4
};


// Enum WTL.EWTLCharacterParameterInfluenceType
enum class EWTLCharacterParameterInfluenceType : uint8_t
{
	EWTLCharacterParameterInfluenceType__Add = 0,
	EWTLCharacterParameterInfluenceType__Multiply = 1,
	EWTLCharacterParameterInfluenceType__Set = 2,
	EWTLCharacterParameterInfluenceType__EWTLCharacterParameterInfluenceType_MAX = 3
};


// Enum WTL.EWTLCharacterParameter
enum class EWTLCharacterParameter : uint8_t
{
	EWTLCharacterParameter__None   = 0,
	EWTLCharacterParameter__AdditionalInventorySlots = 1,
	EWTLCharacterParameter__MaxInventoryWeightMultiplier = 2,
	EWTLCharacterParameter__AvoidCriticalDamageChanceMultiplier = 3,
	EWTLCharacterParameter__CriticalDamageChanceMultiplier = 4,
	EWTLCharacterParameter__ReceivedDamageMultiplier = 5,
	EWTLCharacterParameter__MadeDamageMultiplier = 6,
	EWTLCharacterParameter__KnifeDamageMultiplier = 7,
	EWTLCharacterParameter__KnifeAccuracyMultiplier = 8,
	EWTLCharacterParameter__KnifeCriticalChanceMultiplier = 9,
	EWTLCharacterParameter__KnifeHandlingSpeedMultiplier = 10,
	EWTLCharacterParameter__PistolDamageMultiplier = 11,
	EWTLCharacterParameter__PistolAccuracyMultiplier = 12,
	EWTLCharacterParameter__PistolCriticalChanceMultiplier = 13,
	EWTLCharacterParameter__PistolHandlingSpeedMultiplier = 14,
	EWTLCharacterParameter__ShotgunDamageMultiplier = 15,
	EWTLCharacterParameter__ShotgunAccuracyMultiplier = 16,
	EWTLCharacterParameter__ShotgunCriticalChanceMultiplier = 17,
	EWTLCharacterParameter__ShotgunHandlingSpeedMultiplier = 18,
	EWTLCharacterParameter__SubMachineGunDamageMultiplier = 19,
	EWTLCharacterParameter__SubMachineGunAccuracyMultiplier = 20,
	EWTLCharacterParameter__SubMachineGunCriticalChanceMultiplier = 21,
	EWTLCharacterParameter__SubMachineGunHandlingSpeedMultiplier = 22,
	EWTLCharacterParameter__AssaultRifleDamageMultiplier = 23,
	EWTLCharacterParameter__AssaultRifleAccuracyMultiplier = 24,
	EWTLCharacterParameter__AssaultRifleCriticalChanceMultiplier = 25,
	EWTLCharacterParameter__AssaultRifleHandlingSpeedMultiplier = 26,
	EWTLCharacterParameter__RifleDamageMultiplier = 27,
	EWTLCharacterParameter__RifleAccuracyMultiplier = 28,
	EWTLCharacterParameter__RifleCriticalChanceMultiplier = 29,
	EWTLCharacterParameter__RifleHandlingSpeedMultiplier = 30,
	EWTLCharacterParameter__MachineGunDamageMultiplier = 31,
	EWTLCharacterParameter__MachineGunAccuracyMultiplier = 32,
	EWTLCharacterParameter__MachineGunCriticalChanceMultiplier = 33,
	EWTLCharacterParameter__MachineGunHandlingSpeedMultiplier = 34,
	EWTLCharacterParameter__GrenadeLauncherDamageMultiplier = 35,
	EWTLCharacterParameter__GrenadeLauncherAccuracyMultiplier = 36,
	EWTLCharacterParameter__GrenadeLauncherCriticalChanceMultiplier = 37,
	EWTLCharacterParameter__GrenadeLauncherHandlingSpeedMultiplier = 38,
	EWTLCharacterParameter__MissileDamageMultiplier = 39,
	EWTLCharacterParameter__MissileAccuracyMultiplier = 40,
	EWTLCharacterParameter__MissileCriticalChanceMultiplier = 41,
	EWTLCharacterParameter__MissileHandlingSpeedMultiplier = 42,
	EWTLCharacterParameter__ExplosiveDamageMultiplier = 43,
	EWTLCharacterParameter__ExplosiveAccuracyMultiplier = 44,
	EWTLCharacterParameter__ExplosiveCriticalChanceMultiplier = 45,
	EWTLCharacterParameter__ExplosiveHandlingSpeedMultiplier = 46,
	EWTLCharacterParameter__ExperienceMultiplier = 47,
	EWTLCharacterParameter__ItemTypeExperienceMultiplier = 48,
	EWTLCharacterParameter__MedkitHealingValueMultiplier = 49,
	EWTLCharacterParameter__MonsterDropResourceMultiplier = 50,
	EWTLCharacterParameter__MonsterDropPartsMultiplier = 51,
	EWTLCharacterParameter__LightArmorUseAbility = 52,
	EWTLCharacterParameter__MediumArmorUseAbility = 53,
	EWTLCharacterParameter__HeavyArmorUseAbility = 54,
	EWTLCharacterParameter__MaxHealthMultiplier = 55,
	EWTLCharacterParameter__WeaponHandlingSpeedMultiplier = 56,
	EWTLCharacterParameter__StaminaIncrementMultiplier = 57,
	EWTLCharacterParameter__StaminaDecrementMultiplier = 58,
	EWTLCharacterParameter__EnvironmentResistanceMultiplier = 59,
	EWTLCharacterParameter__MiningResourceCountMultiplier = 60,
	EWTLCharacterParameter__MiningResourceChanceMultiplier = 61,
	EWTLCharacterParameter__EWTLCharacterParameter_MAX = 62
};


// Enum WTL.EWTLStateSpeedAIMonster
enum class EWTLStateSpeedAIMonster : uint8_t
{
	EWTLStateSpeedAIMonster__Stop  = 0,
	EWTLStateSpeedAIMonster__Speed01 = 1,
	EWTLStateSpeedAIMonster__Speed03 = 2,
	EWTLStateSpeedAIMonster__Speed05 = 3,
	EWTLStateSpeedAIMonster__Speed07 = 4,
	EWTLStateSpeedAIMonster__Speed1 = 5,
	EWTLStateSpeedAIMonster__EWTLStateSpeedAIMonster_MAX = 6
};


// Enum WTL.EWTLItemSlotType
enum class EWTLItemSlotType : uint8_t
{
	EWTLItemSlotType__None         = 0,
	EWTLItemSlotType__Inventory    = 1,
	EWTLItemSlotType__Storage      = 2,
	EWTLItemSlotType__FastAccess   = 3,
	EWTLItemSlotType__Armor        = 4,
	EWTLItemSlotType__Buy          = 5,
	EWTLItemSlotType__Repair       = 6,
	EWTLItemSlotType__Extractor    = 7,
	EWTLItemSlotType__Customization = 8,
	EWTLItemSlotType__StimulatorContainer = 9,
	EWTLItemSlotType__Stuff        = 10,
	EWTLItemSlotType__ClanStorage  = 11,
	EWTLItemSlotType__Barter       = 12,
	EWTLItemSlotType__ArmoredPlate = 13,
	EWTLItemSlotType__Modification = 14,
	EWTLItemSlotType__SteamInventory = 15,
	EWTLItemSlotType__MailBox      = 16,
	EWTLItemSlotType__EWTLItemSlotType_MAX = 17
};


// Enum WTL.EWTLSplitWindowType
enum class EWTLSplitWindowType : uint8_t
{
	EWTLSplitWindowType__None      = 0,
	EWTLSplitWindowType__SplitInPlayerInventory = 1,
	EWTLSplitWindowType__TakeFromStorage = 2,
	EWTLSplitWindowType__PutInBuyStorage = 3,
	EWTLSplitWindowType__PutInStorage = 4,
	EWTLSplitWindowType__PutInExtractorStorage = 5,
	EWTLSplitWindowType__TakeFromClanStorage = 6,
	EWTLSplitWindowType__PutInClanStorage = 7,
	EWTLSplitWindowType__PutInBarterStorage = 8,
	EWTLSplitWindowType__PutInSteamInventoryStorage = 9,
	EWTLSplitWindowType__PutInMailBoxStorage = 10,
	EWTLSplitWindowType__DropFromInventory = 11,
	EWTLSplitWindowType__DestroyInInventory = 12,
	EWTLSplitWindowType__EWTLSplitWindowType_MAX = 13
};


// Enum WTL.EWTLFiltersChat
enum class EWTLFiltersChat : uint8_t
{
	EWTLFiltersChat__Common        = 0,
	EWTLFiltersChat__Faction       = 1,
	EWTLFiltersChat__Private       = 2,
	EWTLFiltersChat__Log           = 3,
	EWTLFiltersChat__Server        = 4,
	EWTLFiltersChat__Loot          = 5,
	EWTLFiltersChat__Environment   = 6,
	EWTLFiltersChat__ConsoleCommand = 7,
	EWTLFiltersChat__Chat          = 8,
	EWTLFiltersChat__Battle        = 9,
	EWTLFiltersChat__Group         = 10,
	EWTLFiltersChat__Clan          = 11,
	EWTLFiltersChat__Warning       = 12,
	EWTLFiltersChat__CollapseChatBox = 13,
	EWTLFiltersChat__EWTLFiltersChat_MAX = 14
};


// Enum WTL.EWTLCharacterStateIndicatorType
enum class EWTLCharacterStateIndicatorType : uint8_t
{
	EWTLCharacterStateIndicatorType__None = 0,
	EWTLCharacterStateIndicatorType__InSafeZone = 1,
	EWTLCharacterStateIndicatorType__MediumOverload = 2,
	EWTLCharacterStateIndicatorType__HeavyOverload = 3,
	EWTLCharacterStateIndicatorType__Invulnerable = 4,
	EWTLCharacterStateIndicatorType__InMobileResurectionPointWorkZone = 5,
	EWTLCharacterStateIndicatorType__InSafeZoneCannotSpawn = 6,
	EWTLCharacterStateIndicatorType__EWTLCharacterStateIndicatorType_MAX = 7
};


// Enum WTL.EWTLMedicineEffectParameter
enum class EWTLMedicineEffectParameter : uint8_t
{
	EWTLMedicineEffectParameter__None = 0,
	EWTLMedicineEffectParameter__Health = 1,
	EWTLMedicineEffectParameter__Strength = 2,
	EWTLMedicineEffectParameter__Dexterity = 3,
	EWTLMedicineEffectParameter__Stamina = 4,
	EWTLMedicineEffectParameter__Accuracy = 5,
	EWTLMedicineEffectParameter__Intelligence = 6,
	EWTLMedicineEffectParameter__Fortune = 7,
	EWTLMedicineEffectParameter__StaminaRecovery = 8,
	EWTLMedicineEffectParameter__EWTLMedicineEffectParameter_MAX = 9
};


// Enum WTL.EWTLCustomMovementMode
enum class EWTLCustomMovementMode : uint8_t
{
	EWTLCustomMovementMode__CUSTOM_None = 0,
	EWTLCustomMovementMode__CUSTOM_LadderClimbing = 1,
	EWTLCustomMovementMode__CUSTOM_MAX = 2
};


// Enum WTL.EWTLHUDNotificationType
enum class EWTLHUDNotificationType : uint8_t
{
	EWTLHUDNotificationType__None  = 0,
	EWTLHUDNotificationType__Experience = 1,
	EWTLHUDNotificationType__LevelUp = 2,
	EWTLHUDNotificationType__BalanceIncrease = 3,
	EWTLHUDNotificationType__BalanceDecrease = 4,
	EWTLHUDNotificationType__InventoryChange = 5,
	EWTLHUDNotificationType__ObjectivesChange = 6,
	EWTLHUDNotificationType__TeamLeadChange = 7,
	EWTLHUDNotificationType__GotItem = 8,
	EWTLHUDNotificationType__LostItem = 9,
	EWTLHUDNotificationType__Achievement = 10,
	EWTLHUDNotificationType__SafeZoneState = 11,
	EWTLHUDNotificationType__ReputationIncrease = 12,
	EWTLHUDNotificationType__ReputationDecrease = 13,
	EWTLHUDNotificationType__SystemEvent = 14,
	EWTLHUDNotificationType__SystemQuest = 15,
	EWTLHUDNotificationType__ConfederationReputationIncrease = 16,
	EWTLHUDNotificationType__ConfederationReputationDecrease = 17,
	EWTLHUDNotificationType__BlackSunsetReputationIncrease = 18,
	EWTLHUDNotificationType__BlackSunsetReputationDecrease = 19,
	EWTLHUDNotificationType__MailMessageReceived = 20,
	EWTLHUDNotificationType__QuestCompleted = 21,
	EWTLHUDNotificationType__QuestFailed = 22,
	EWTLHUDNotificationType__GetGroupInvite = 23,
	EWTLHUDNotificationType__RemoveFromGroup = 24,
	EWTLHUDNotificationType__BecameGroupLeader = 25,
	EWTLHUDNotificationType__InstableNetworkConnection = 26,
	EWTLHUDNotificationType__CraftObjectProcessStarted = 27,
	EWTLHUDNotificationType__CraftObjectProcessFinished = 28,
	EWTLHUDNotificationType__MailPackageReceived = 29,
	EWTLHUDNotificationType__StuffItemAttachedToWeapon = 30,
	EWTLHUDNotificationType__PDAModuleInstalled = 31,
	EWTLHUDNotificationType__ItemRepaired = 32,
	EWTLHUDNotificationType__ItemsRepaired = 33,
	EWTLHUDNotificationType__ItemEquipped = 34,
	EWTLHUDNotificationType__OnSendGlobalGroupInviteResponse = 35,
	EWTLHUDNotificationType__OnSteamInventoryConsumeItemError = 36,
	EWTLHUDNotificationType__JoinedClan = 37,
	EWTLHUDNotificationType__LeftClan = 38,
	EWTLHUDNotificationType__ExcludedFromClan = 39,
	EWTLHUDNotificationType__FactionScoreIncrease = 40,
	EWTLHUDNotificationType__FactionScoreDecrease = 41,
	EWTLHUDNotificationType__FactionRankIncrease = 42,
	EWTLHUDNotificationType__FactionRankDecrease = 43,
	EWTLHUDNotificationType__FortificationStartLoosingPoint = 44,
	EWTLHUDNotificationType__FortificationStartCapturingPoint = 45,
	EWTLHUDNotificationType__ForticiationPointCaptured = 46,
	EWTLHUDNotificationType__FortificationPointSecured = 47,
	EWTLHUDNotificationType__FortificationPointLost = 48,
	EWTLHUDNotificationType__FortificationPointCaptureFailed = 49,
	EWTLHUDNotificationType__QuestCanBeCompleted = 50,
	EWTLHUDNotificationType__AccountAchievementTrigger = 51,
	EWTLHUDNotificationType__EWTLHUDNotificationType_MAX = 52
};


// Enum WTL.EWTLArenaActivationVolumeType
enum class EWTLArenaActivationVolumeType : uint8_t
{
	EWTLArenaActivationVolumeType__None = 0,
	EWTLArenaActivationVolumeType__ActivatePlayerStart = 1,
	EWTLArenaActivationVolumeType__ActivatePlayerStartByRating = 2,
	EWTLArenaActivationVolumeType__ActivatableObject = 3,
	EWTLArenaActivationVolumeType__EWTLArenaActivationVolumeType_MAX = 4
};


// Enum WTL.EWTLEventLogRecordType
enum class EWTLEventLogRecordType : uint8_t
{
	EWTLEventLogRecordType__None   = 0,
	EWTLEventLogRecordType__MonsterKilled = 1,
	EWTLEventLogRecordType__CharacterKilled = 2,
	EWTLEventLogRecordType__EnemyNPCKilled = 3,
	EWTLEventLogRecordType__CharacterDied = 4,
	EWTLEventLogRecordType__CharacterSuicide = 5,
	EWTLEventLogRecordType__DamageToMonster = 6,
	EWTLEventLogRecordType__DamageToEnemyNPC = 7,
	EWTLEventLogRecordType__DamageToCharacter = 8,
	EWTLEventLogRecordType__CriticalDamageToMonster = 9,
	EWTLEventLogRecordType__CriticalDamageToEnemyNPC = 10,
	EWTLEventLogRecordType__CriticalDamageToCharacter = 11,
	EWTLEventLogRecordType__DamageFromMonster = 12,
	EWTLEventLogRecordType__CriticalDamageFromMonster = 13,
	EWTLEventLogRecordType__DamageFromEnemyNPC = 14,
	EWTLEventLogRecordType__CriticalDamageFromEnemyNPC = 15,
	EWTLEventLogRecordType__DamageFromCharacter = 16,
	EWTLEventLogRecordType__CriticalDamageFromCharacter = 17,
	EWTLEventLogRecordType__DamageFromEnvironment = 18,
	EWTLEventLogRecordType__CharacterEntersLocation = 19,
	EWTLEventLogRecordType__CharacterLeaveLocation = 20,
	EWTLEventLogRecordType__StartMatch = 21,
	EWTLEventLogRecordType__FinishMatch = 22,
	EWTLEventLogRecordType__MonsterHuntObjectiveChangeState = 23,
	EWTLEventLogRecordType__MonsterHuntObjectiveDone = 24,
	EWTLEventLogRecordType__CharacterEarnsExperience = 25,
	EWTLEventLogRecordType__CharacterLevelUp = 26,
	EWTLEventLogRecordType__CharacterDestroyMonsterSpawnPoint = 27,
	EWTLEventLogRecordType__CharacterGotItem = 28,
	EWTLEventLogRecordType__CharacterLostItem = 29,
	EWTLEventLogRecordType__CharacterDepositedItem = 30,
	EWTLEventLogRecordType__CharacterTakeItem = 31,
	EWTLEventLogRecordType__CharacterDropItem = 32,
	EWTLEventLogRecordType__CharacterEarnsScores = 33,
	EWTLEventLogRecordType__FactionEarnsScores = 34,
	EWTLEventLogRecordType__EnemyPositionsSentToTeamSuccess = 35,
	EWTLEventLogRecordType__EnemyPositionsSentToTeamError = 36,
	EWTLEventLogRecordType__TeamLeadChanged = 37,
	EWTLEventLogRecordType__CapturePointChanged = 38,
	EWTLEventLogRecordType__PointCaptureByTeam = 39,
	EWTLEventLogRecordType__PointCaptureByEnemy = 40,
	EWTLEventLogRecordType__PointCaptureFailed = 41,
	EWTLEventLogRecordType__SafeZoneEnter = 42,
	EWTLEventLogRecordType__SafeZoneLeave = 43,
	EWTLEventLogRecordType__ReputationIncrease = 44,
	EWTLEventLogRecordType__ReputationDecrease = 45,
	EWTLEventLogRecordType__BalanceChange = 46,
	EWTLEventLogRecordType__ConfederationReputationIncrease = 47,
	EWTLEventLogRecordType__ConfederationReputationDecrease = 48,
	EWTLEventLogRecordType__BlackSunsetReputationIncrease = 49,
	EWTLEventLogRecordType__BlackSunsetReputationDecrease = 50,
	EWTLEventLogRecordType__InstableNetworkConnection = 51,
	EWTLEventLogRecordType__EWTLEventLogRecordType_MAX = 52
};


// Enum WTL.EWTLMonsterEventType
enum class EWTLMonsterEventType : uint8_t
{
	EWTLMonsterEventType__None     = 0,
	EWTLMonsterEventType__MonsterMakeDamage = 1,
	EWTLMonsterEventType__StopedByDamage = 2,
	EWTLMonsterEventType__RecoverFromDamage = 3,
	EWTLMonsterEventType__Attack   = 4,
	EWTLMonsterEventType__FarAttack = 5,
	EWTLMonsterEventType__EWTLMonsterEventType_MAX = 6
};


// Enum WTL.EWTLMonsterAIStateOfAggression
enum class EWTLMonsterAIStateOfAggression : uint8_t
{
	EWTLMonsterAIStateOfAggression__None = 0,
	EWTLMonsterAIStateOfAggression__Normal = 1,
	EWTLMonsterAIStateOfAggression__Hard = 2,
	EWTLMonsterAIStateOfAggression__EWTLMonsterAIStateOfAggression_MAX = 3
};


// Enum WTL.EWTLMonsterAIStateMoving
enum class EWTLMonsterAIStateMoving : uint8_t
{
	EWTLMonsterAIStateMoving__Stop = 0,
	EWTLMonsterAIStateMoving__Moving = 1,
	EWTLMonsterAIStateMoving__EWTLMonsterAIStateMoving_MAX = 2
};


// Enum WTL.EWTLMonsterAIState
enum class EWTLMonsterAIState : uint8_t
{
	EWTLMonsterAIState__Walk       = 0,
	EWTLMonsterAIState__RateAggressUp = 1,
	EWTLMonsterAIState__FollowTarget = 2,
	EWTLMonsterAIState__Attack     = 3,
	EWTLMonsterAIState__FarAttack  = 4,
	EWTLMonsterAIState__FindInstigator = 5,
	EWTLMonsterAIState__Escaping   = 6,
	EWTLMonsterAIState__TakeDamageHigh = 7,
	EWTLMonsterAIState__Stealth    = 8,
	EWTLMonsterAIState__Bug        = 9,
	EWTLMonsterAIState__EWTLMonsterAIState_MAX = 10
};


// Enum WTL.EWTLMonsterAnimationState
enum class EWTLMonsterAnimationState : uint8_t
{
	EWTLMonsterAnimationState__Movement = 0,
	EWTLMonsterAnimationState__Idle = 1,
	EWTLMonsterAnimationState__Attack = 2,
	EWTLMonsterAnimationState__FarAttack = 3,
	EWTLMonsterAnimationState__Damage = 4,
	EWTLMonsterAnimationState__RateAggressUp = 5,
	EWTLMonsterAnimationState__TakeDamageHight = 6,
	EWTLMonsterAnimationState__Stealth = 7,
	EWTLMonsterAnimationState__Death = 8,
	EWTLMonsterAnimationState__EWTLMonsterAnimationState_MAX = 9
};


// Enum WTL.EWTLMonsterAIStateAnim
enum class EWTLMonsterAIStateAnim : uint8_t
{
	EWTLMonsterAIStateAnim__None   = 0,
	EWTLMonsterAIStateAnim__Movement = 1,
	EWTLMonsterAIStateAnim__Fly    = 2,
	EWTLMonsterAIStateAnim__Idle   = 3,
	EWTLMonsterAIStateAnim__Attack = 4,
	EWTLMonsterAIStateAnim__FarAttack = 5,
	EWTLMonsterAIStateAnim__Damage = 6,
	EWTLMonsterAIStateAnim__RateAggressUp = 7,
	EWTLMonsterAIStateAnim__TakeDamageHigh = 8,
	EWTLMonsterAIStateAnim__Stealth = 9,
	EWTLMonsterAIStateAnim__Death  = 10,
	EWTLMonsterAIStateAnim__EWTLMonsterAIStateAnim_MAX = 11
};


// Enum WTL.EWTLUsableItemUseType
enum class EWTLUsableItemUseType : uint8_t
{
	EWTLUsableItemUseType__None    = 0,
	EWTLUsableItemUseType__Main    = 1,
	EWTLUsableItemUseType__Alternative = 2,
	EWTLUsableItemUseType__EWTLUsableItemUseType_MAX = 3
};


// Enum WTL.EWTLUsableItemState
enum class EWTLUsableItemState : uint8_t
{
	EWTLUsableItemState__None      = 0,
	EWTLUsableItemState__Idle      = 1,
	EWTLUsableItemState__ReloadedOneRound = 2,
	EWTLUsableItemState__ReloadedFullMagazine = 3,
	EWTLUsableItemState__MissileThrow = 4,
	EWTLUsableItemState__TacticalPlace = 5,
	EWTLUsableItemState__TakeInArms = 6,
	EWTLUsableItemState__PutToInventory = 7,
	EWTLUsableItemState__MissileReadyToThrow = 8,
	EWTLUsableItemState__MeleeWeaponHit = 9,
	EWTLUsableItemState__ResourceMinerHit = 10,
	EWTLUsableItemState__ResourceMinerZoneUse = 11,
	EWTLUsableItemState__EWTLUsableItemState_MAX = 12
};


// Enum WTL.FSteelTargetState
enum class EFSteelTargetState : uint8_t
{
	FSteelTargetState__None        = 0,
	FSteelTargetState__Rised       = 1,
	FSteelTargetState__Droped      = 2,
	FSteelTargetState__FSteelTargetState_MAX = 3
};


// Enum WTL.FSteelTargetType
enum class EFSteelTargetType : uint8_t
{
	FSteelTargetType__None         = 0,
	FSteelTargetType__AlwaysActive = 1,
	FSteelTargetType__ActivateByCharacter = 2,
	FSteelTargetType__FSteelTargetType_MAX = 3
};


// Enum WTL.EWTLMonsterTakeDamageType
enum class EWTLMonsterTakeDamageType : uint8_t
{
	EWTLMonsterTakeDamageType__None = 0,
	EWTLMonsterTakeDamageType__Low = 1,
	EWTLMonsterTakeDamageType__Medium = 2,
	EWTLMonsterTakeDamageType__High = 3,
	EWTLMonsterTakeDamageType__EWTLMonsterTakeDamageType_MAX = 4
};


// Enum WTL.EWTLAIStateMoving
enum class EWTLAIStateMoving : uint8_t
{
	EWTLAIStateMoving__Stop        = 0,
	EWTLAIStateMoving__Walk        = 1,
	EWTLAIStateMoving__EasyRun     = 2,
	EWTLAIStateMoving__QuickRun    = 3,
	EWTLAIStateMoving__EWTLAIStateMoving_MAX = 4
};


// Enum WTL.EWTLAIStateMonster
enum class EWTLAIStateMonster : uint8_t
{
	EWTLAIStateMonster__Walk       = 0,
	EWTLAIStateMonster__RateAggressUp = 1,
	EWTLAIStateMonster__FollowTarget = 2,
	EWTLAIStateMonster__FindInstigator = 3,
	EWTLAIStateMonster__Escaping   = 4,
	EWTLAIStateMonster__EWTLAIStateMonster_MAX = 5
};


// Enum WTL.EWTLAITypeTakeDamage
enum class EWTLAITypeTakeDamage : uint8_t
{
	EWTLAITypeTakeDamage__None     = 0,
	EWTLAITypeTakeDamage__Low      = 1,
	EWTLAITypeTakeDamage__Medium   = 2,
	EWTLAITypeTakeDamage__High     = 3,
	EWTLAITypeTakeDamage__EWTLAITypeTakeDamage_MAX = 4
};


// Enum WTL.EWTLAIStateAnimMonster
enum class EWTLAIStateAnimMonster : uint8_t
{
	EWTLAIStateAnimMonster__Idle   = 0,
	EWTLAIStateAnimMonster__Idle2  = 1,
	EWTLAIStateAnimMonster__Idle3  = 2,
	EWTLAIStateAnimMonster__TakeHighDamage = 3,
	EWTLAIStateAnimMonster__RateAggressUp = 4,
	EWTLAIStateAnimMonster__Movement = 5,
	EWTLAIStateAnimMonster__Attack1 = 6,
	EWTLAIStateAnimMonster__Attack2 = 7,
	EWTLAIStateAnimMonster__Death  = 8,
	EWTLAIStateAnimMonster__EWTLAIStateAnimMonster_MAX = 9
};


// Enum WTL.EWTLWeaponState
enum class EWTLWeaponState : uint8_t
{
	EWTLWeaponState__Idle          = 0,
	EWTLWeaponState__Firing        = 1,
	EWTLWeaponState__FireLast      = 2,
	EWTLWeaponState__Reloading     = 3,
	EWTLWeaponState__Equiping      = 4,
	EWTLWeaponState__Empty         = 5,
	EWTLWeaponState__EWTLWeaponState_MAX = 6
};


// Enum WTL.EWTLFireMode
enum class EWTLFireMode : uint8_t
{
	EWTLFireMode__None             = 0,
	EWTLFireMode__Single           = 1,
	EWTLFireMode__Burst2           = 2,
	EWTLFireMode__Burst3           = 3,
	EWTLFireMode__Auto             = 4,
	EWTLFireMode__EWTLFireMode_MAX = 5
};


// Enum WTL.EProjectileType
enum class EProjectileType : uint8_t
{
	EProjectileType__None          = 0,
	EProjectileType__Bullet        = 1,
	EProjectileType__Grenade       = 2,
	EProjectileType__EProjectileType_MAX = 3
};


// Enum WTL.EWTLBulletType
enum class EWTLBulletType : uint8_t
{
	EWTLBulletType__FMJ            = 0,
	EWTLBulletType__HP             = 1,
	EWTLBulletType__AP             = 2,
	EWTLBulletType__EWTLBulletType_MAX = 3
};


// Enum WTL.EWTLCharacterMoveState
enum class EWTLCharacterMoveState : uint8_t
{
	EWTLCharacterMoveState__NotMoving = 0,
	EWTLCharacterMoveState__Prone  = 1,
	EWTLCharacterMoveState__Crouch = 2,
	EWTLCharacterMoveState__Walk   = 3,
	EWTLCharacterMoveState__Sprint = 4,
	EWTLCharacterMoveState__EWTLCharacterMoveState_MAX = 5
};


// Enum WTL.EWTLCharacterPose
enum class EWTLCharacterPose : uint8_t
{
	EWTLCharacterPose__Stand       = 0,
	EWTLCharacterPose__Crouch      = 1,
	EWTLCharacterPose__Prone       = 2,
	EWTLCharacterPose__EWTLCharacterPose_MAX = 3
};


// Enum WTL.EWTLHandsState
enum class EWTLHandsState : uint8_t
{
	EWTLHandsState__Empty          = 0,
	EWTLHandsState__Idle           = 1,
	EWTLHandsState__TakingItemInArms = 2,
	EWTLHandsState__PuttingItemInInventory = 3,
	EWTLHandsState__Reloading      = 4,
	EWTLHandsState__Action         = 5,
	EWTLHandsState__Running        = 6,
	EWTLHandsState__AimingTransition = 7,
	EWTLHandsState__Jamming        = 8,
	EWTLHandsState__ItemPlacement  = 9,
	EWTLHandsState__ThrowNut       = 10,
	EWTLHandsState__EWTLHandsState_MAX = 11
};


// Enum WTL.EWTLClientMessageType
enum class EWTLClientMessageType : uint8_t
{
	EWTLClientMessageType__Building = 0,
	EWTLClientMessageType__Mining  = 1,
	EWTLClientMessageType__EWTLClientMessageType_MAX = 2
};


// Enum WTL.EWTLArenaGameModeType
enum class EWTLArenaGameModeType : uint8_t
{
	EWTLArenaGameModeType__None    = 0,
	EWTLArenaGameModeType__Domination = 1,
	EWTLArenaGameModeType__MonsterHunt = 2,
	EWTLArenaGameModeType__EWTLArenaGameModeType_MAX = 3
};


// Enum WTL.EWTLInputMode
enum class EWTLInputMode : uint8_t
{
	EWTLInputMode__Game            = 0,
	EWTLInputMode__GameAndUI       = 1,
	EWTLInputMode__UI              = 2,
	EWTLInputMode__EWTLInputMode_MAX = 3
};


// Enum WTL.EWTLMapMarkerType
enum class EWTLMapMarkerType : uint8_t
{
	EWTLMapMarkerType__Player      = 0,
	EWTLMapMarkerType__Enemy       = 1,
	EWTLMapMarkerType__Ally        = 2,
	EWTLMapMarkerType__Monster     = 3,
	EWTLMapMarkerType__QuestMonster = 4,
	EWTLMapMarkerType__CapturePoint = 5,
	EWTLMapMarkerType__TeamLead    = 6,
	EWTLMapMarkerType__SafeHouse   = 7,
	EWTLMapMarkerType__MobileStartPoint = 8,
	EWTLMapMarkerType__QuestPoint  = 9,
	EWTLMapMarkerType__CompleteQuestPoint = 10,
	EWTLMapMarkerType__CompleteActiveQuestPoint = 11,
	EWTLMapMarkerType__TakeQuestPoint = 12,
	EWTLMapMarkerType__PlayerKiller = 13,
	EWTLMapMarkerType__LastDeath   = 14,
	EWTLMapMarkerType__CampfireLocation = 15,
	EWTLMapMarkerType__StashLocation = 16,
	EWTLMapMarkerType__NPC         = 17,
	EWTLMapMarkerType__Label       = 18,
	EWTLMapMarkerType__Portal      = 19,
	EWTLMapMarkerType__PortalQuestPoint = 20,
	EWTLMapMarkerType__PortalCompleteQuestPoint = 21,
	EWTLMapMarkerType__PortalCompleteActiveQuestPoint = 22,
	EWTLMapMarkerType__WaterSource = 23,
	EWTLMapMarkerType__NPCDoctor   = 24,
	EWTLMapMarkerType__NPCStockman = 25,
	EWTLMapMarkerType__NPCGunsmith = 26,
	EWTLMapMarkerType__NPCTrader   = 27,
	EWTLMapMarkerType__FortificationNeutralCaptureInProgress = 28,
	EWTLMapMarkerType__FortificationConfederationCaptureInProgress = 29,
	EWTLMapMarkerType__FortificationBlackSunsetCaptureInProgress = 30,
	EWTLMapMarkerType__FortificationNeutralCanBeCaptured = 31,
	EWTLMapMarkerType__FortificationConfederationCanBeCaptured = 32,
	EWTLMapMarkerType__FortificationBlackSunsetCanBeCaptured = 33,
	EWTLMapMarkerType__FortificationNeutralCannotBeCaptured = 34,
	EWTLMapMarkerType__FortificationConfederationCannotBeCaptured = 35,
	EWTLMapMarkerType__FortificationBlackSunsetCannotBeCaptured = 36,
	EWTLMapMarkerType__EventPointMonsterSpawn = 37,
	EWTLMapMarkerType__EventPointEnvironment = 38,
	EWTLMapMarkerType__EventPointFindItem = 39,
	EWTLMapMarkerType__EWTLMapMarkerType_MAX = 40
};


// Enum WTL.EWTLEventPointType
enum class EWTLEventPointType : uint8_t
{
	EWTLEventPointType__MonsterSpawn = 0,
	EWTLEventPointType__Environment = 1,
	EWTLEventPointType__FindItem   = 2,
	EWTLEventPointType__EWTLEventPointType_MAX = 3
};


// Enum WTL.EWTLHumanoidAnimInstanceState
enum class EWTLHumanoidAnimInstanceState : uint8_t
{
	EWTLHumanoidAnimInstanceState__None = 0,
	EWTLHumanoidAnimInstanceState__Walking = 1,
	EWTLHumanoidAnimInstanceState__Crouch = 2,
	EWTLHumanoidAnimInstanceState__CombatWalking = 3,
	EWTLHumanoidAnimInstanceState__CombatCrouch = 4,
	EWTLHumanoidAnimInstanceState__EWTLHumanoidAnimInstanceState_MAX = 5
};


// Enum WTL.EWTLMonsterAcceleration
enum class EWTLMonsterAcceleration : uint8_t
{
	EWTLMonsterAcceleration__Normal = 0,
	EWTLMonsterAcceleration__Fast  = 1,
	EWTLMonsterAcceleration__EWTLMonsterAcceleration_MAX = 2
};


// Enum WTL.EWTLMonsterFindingVisibleCharacterType
enum class EWTLMonsterFindingVisibleCharacterType : uint8_t
{
	EWTLMonsterFindingVisibleCharacterType__Random = 0,
	EWTLMonsterFindingVisibleCharacterType__Near = 1,
	EWTLMonsterFindingVisibleCharacterType__Hamster = 2,
	EWTLMonsterFindingVisibleCharacterType__Stimulus = 3,
	EWTLMonsterFindingVisibleCharacterType__EWTLMonsterFindingVisibleCharacterType_MAX = 4
};


// Enum WTL.EWTLMonsterFindingCharacterType
enum class EWTLMonsterFindingCharacterType : uint8_t
{
	EWTLMonsterFindingCharacterType__Random = 0,
	EWTLMonsterFindingCharacterType__MinHealth = 1,
	EWTLMonsterFindingCharacterType__MaxHealth = 2,
	EWTLMonsterFindingCharacterType__MinLevel = 3,
	EWTLMonsterFindingCharacterType__MaxLevel = 4,
	EWTLMonsterFindingCharacterType__MinTotalTakeDamage = 5,
	EWTLMonsterFindingCharacterType__MaxTotalTakeDamage = 6,
	EWTLMonsterFindingCharacterType__Near = 7,
	EWTLMonsterFindingCharacterType__EWTLMonsterFindingCharacterType_MAX = 8
};


// Enum WTL.EWTLMonsterStateDeath
enum class EWTLMonsterStateDeath : uint8_t
{
	EWTLMonsterStateDeath__None    = 0,
	EWTLMonsterStateDeath__ToDeath = 1,
	EWTLMonsterStateDeath__Death   = 2,
	EWTLMonsterStateDeath__EWTLMonsterStateDeath_MAX = 3
};


// Enum WTL.EWTLMonsterSpawnerSpawnMethod
enum class EWTLMonsterSpawnerSpawnMethod : uint8_t
{
	EWTLMonsterSpawnerSpawnMethod__Reachable = 0,
	EWTLMonsterSpawnerSpawnMethod__Navigable = 1,
	EWTLMonsterSpawnerSpawnMethod__EWTLMonsterSpawnerSpawnMethod_MAX = 2
};


// Enum WTL.EWTLWayPointMovingType
enum class EWTLWayPointMovingType : uint8_t
{
	EWTLWayPointMovingType__Sequential = 0,
	EWTLWayPointMovingType__Random = 1,
	EWTLWayPointMovingType__EWTLWayPointMovingType_MAX = 2
};


// Enum WTL.EWTLNPCReplicaAction
enum class EWTLNPCReplicaAction : uint8_t
{
	EWTLNPCReplicaAction__None     = 0,
	EWTLNPCReplicaAction__ShowMainDialog = 1,
	EWTLNPCReplicaAction__ShowGreetingDefault = 2,
	EWTLNPCReplicaAction__ShowGreetingDialog = 3,
	EWTLNPCReplicaAction__ShowGreetingAndMainDialog = 4,
	EWTLNPCReplicaAction__ShowTakeQuestDialog = 5,
	EWTLNPCReplicaAction__ShowCompleteQuestDialog = 6,
	EWTLNPCReplicaAction__EndDialog = 7,
	EWTLNPCReplicaAction__EWTLNPCReplicaAction_MAX = 8
};


// Enum WTL.EWTLCharacterCanTakeCompleteQuest
enum class EWTLCharacterCanTakeCompleteQuest : uint8_t
{
	EWTLCharacterCanTakeCompleteQuest__None = 0,
	EWTLCharacterCanTakeCompleteQuest__Take = 1,
	EWTLCharacterCanTakeCompleteQuest__Complete = 2,
	EWTLCharacterCanTakeCompleteQuest__TakeComplete = 3,
	EWTLCharacterCanTakeCompleteQuest__EWTLCharacterCanTakeCompleteQuest_MAX = 4
};


// Enum WTL.EWTLInventoryToSteamConversionErrorCode
enum class EWTLInventoryToSteamConversionErrorCode : uint8_t
{
	EWTLInventoryToSteamConversionErrorCode__None = 0,
	EWTLInventoryToSteamConversionErrorCode__InternalError = 1,
	EWTLInventoryToSteamConversionErrorCode__ItemsNotFoundInInventory = 2,
	EWTLInventoryToSteamConversionErrorCode__ItemsConditionsError = 3,
	EWTLInventoryToSteamConversionErrorCode__WrongItemType = 4,
	EWTLInventoryToSteamConversionErrorCode__SteamResponseError = 5,
	EWTLInventoryToSteamConversionErrorCode__EWTLInventoryToSteamConversionErrorCode_MAX = 6
};


// Enum WTL.EWTLNPCReason
enum class EWTLNPCReason : uint8_t
{
	EWTLNPCReason__None            = 0,
	EWTLNPCReason__FullBag         = 1,
	EWTLNPCReason__WeightOverload  = 2,
	EWTLNPCReason__EWTLNPCReason_MAX = 3
};


// Enum WTL.EWTLNPCCheckResult
enum class EWTLNPCCheckResult : uint8_t
{
	EWTLNPCCheckResult__Result_False = 0,
	EWTLNPCCheckResult__Result_True = 1,
	EWTLNPCCheckResult__Result_MAX = 2
};


// Enum WTL.EWTLNPCActionResult
enum class EWTLNPCActionResult : uint8_t
{
	EWTLNPCActionResult__Success   = 0,
	EWTLNPCActionResult__Failed    = 1,
	EWTLNPCActionResult__EWTLNPCActionResult_MAX = 2
};


// Enum WTL.EWTLNPCAction
enum class EWTLNPCAction : uint8_t
{
	EWTLNPCAction__DoNothing       = 0,
	EWTLNPCAction__SpawnReplica    = 1,
	EWTLNPCAction__GiveExperience  = 2,
	EWTLNPCAction__GiveItem        = 3,
	EWTLNPCAction__EWTLNPCAction_MAX = 4
};


// Enum WTL.EWTLHighlightID
enum class EWTLHighlightID : uint8_t
{
	EWTLHighlightID__None          = 0,
	EWTLHighlightID__BossKill      = 1,
	EWTLHighlightID__Kill          = 2,
	EWTLHighlightID__DoubleKill    = 3,
	EWTLHighlightID__MultiKill     = 4,
	EWTLHighlightID__TrophyKill    = 5,
	EWTLHighlightID__LongDistanceHit = 6,
	EWTLHighlightID__EWTLHighlightID_MAX = 7
};


// Enum WTL.EWTLPortalActionResult
enum class EWTLPortalActionResult : uint8_t
{
	EWTLPortalActionResult__Success = 0,
	EWTLPortalActionResult__Failed = 1,
	EWTLPortalActionResult__EWTLPortalActionResult_MAX = 2
};


// Enum WTL.EWTLPlatform
enum class EWTLPlatform : uint8_t
{
	EWTLPlatform__None             = 0,
	EWTLPlatform__Steam            = 1,
	EWTLPlatform__Abyss            = 2,
	EWTLPlatform__EWTLPlatform_MAX = 3
};


// Enum WTL.EWTLCharacterContactType
enum class EWTLCharacterContactType : uint8_t
{
	EWTLCharacterContactType__None = 0,
	EWTLCharacterContactType__Friend = 1,
	EWTLCharacterContactType__Enemy = 2,
	EWTLCharacterContactType__EWTLCharacterContactType_MAX = 3
};


// Enum WTL.EWTLVoicePacketType
enum class EWTLVoicePacketType : uint8_t
{
	EWTLVoicePacketType__None      = 0,
	EWTLVoicePacketType__ClientIdentity = 1,
	EWTLVoicePacketType__Regular   = 2,
	EWTLVoicePacketType__Private   = 3,
	EWTLVoicePacketType__Group     = 4,
	EWTLVoicePacketType__Clan      = 5,
	EWTLVoicePacketType__EWTLVoicePacketType_MAX = 6
};


// Enum WTL.EWTLAccountType
enum class EWTLAccountType : uint8_t
{
	EWTLAccountType__Regular       = 0,
	EWTLAccountType__Tester        = 1,
	EWTLAccountType__Developer     = 2,
	EWTLAccountType__EWTLAccountType_MAX = 3
};


// Enum WTL.EWTLClanStorageMoneyOperationType
enum class EWTLClanStorageMoneyOperationType : uint8_t
{
	EWTLClanStorageMoneyOperationType__None = 0,
	EWTLClanStorageMoneyOperationType__PutMoney = 1,
	EWTLClanStorageMoneyOperationType__TakeMoney = 2,
	EWTLClanStorageMoneyOperationType__EWTLClanStorageMoneyOperationType_MAX = 3
};


// Enum WTL.EWTLClanStorageItemOperationType
enum class EWTLClanStorageItemOperationType : uint8_t
{
	EWTLClanStorageItemOperationType__None = 0,
	EWTLClanStorageItemOperationType__PutItem = 1,
	EWTLClanStorageItemOperationType__TakeItem = 2,
	EWTLClanStorageItemOperationType__EWTLClanStorageItemOperationType_MAX = 3
};


// Enum WTL.EWTLServerEventType
enum class EWTLServerEventType : uint8_t
{
	EWTLServerEventType__None      = 0,
	EWTLServerEventType__ServerShutdown = 1,
	EWTLServerEventType__VersionUpdate = 2,
	EWTLServerEventType__Important = 3,
	EWTLServerEventType__Average   = 4,
	EWTLServerEventType__Quest     = 5,
	EWTLServerEventType__EWTLServerEventType_MAX = 6
};


// Enum WTL.EWTLQuestType
enum class EWTLQuestType : uint8_t
{
	EWTLQuestType__None            = 0,
	EWTLQuestType__OneTime         = 1,
	EWTLQuestType__Repeatable      = 2,
	EWTLQuestType__EWTLQuestType_MAX = 3
};


// Enum WTL.EWTLGameServerStopReason
enum class EWTLGameServerStopReason : uint8_t
{
	EWTLGameServerStopReason__None = 0,
	EWTLGameServerStopReason__ConnectionLost = 1,
	EWTLGameServerStopReason__Shutdown = 2,
	EWTLGameServerStopReason__EWTLGameServerStopReason_MAX = 3
};


// Enum WTL.EWTLGameServerType
enum class EWTLGameServerType : uint8_t
{
	EWTLGameServerType__None       = 0,
	EWTLGameServerType__Official   = 1,
	EWTLGameServerType__Community  = 2,
	EWTLGameServerType__EWTLGameServerType_MAX = 3
};


// Enum WTL.EWTLCraftType
enum class EWTLCraftType : uint8_t
{
	EWTLCraftType__None            = 0,
	EWTLCraftType__Inventory       = 1,
	EWTLCraftType__CampFire        = 2,
	EWTLCraftType__Furnace         = 3,
	EWTLCraftType__PressMachine    = 4,
	EWTLCraftType__ChemicalStation = 5,
	EWTLCraftType__AmmoPress       = 6,
	EWTLCraftType__SmallCNCMachine = 7,
	EWTLCraftType__BigCNCMachine   = 8,
	EWTLCraftType__EWTLCraftType_MAX = 9
};


// Enum WTL.EWTLBuildingDoorLockType
enum class EWTLBuildingDoorLockType : uint8_t
{
	EWTLBuildingDoorLockType__None = 0,
	EWTLBuildingDoorLockType__KeyLock = 1,
	EWTLBuildingDoorLockType__CodeLock = 2,
	EWTLBuildingDoorLockType__EWTLBuildingDoorLockType_MAX = 3
};


// Enum WTL.EWTLSkillDependencyType
enum class EWTLSkillDependencyType : uint8_t
{
	EWTLSkillDependencyType__MustHave = 0,
	EWTLSkillDependencyType__MustNotHave = 1,
	EWTLSkillDependencyType__EWTLSkillDependencyType_MAX = 2
};


// Enum WTL.EWTLSkillType
enum class EWTLSkillType : uint8_t
{
	EWTLSkillType__Passive         = 0,
	EWTLSkillType__Active          = 1,
	EWTLSkillType__EWTLSkillType_MAX = 2
};


// Enum WTL.EWTLBalanceChangeType
enum class EWTLBalanceChangeType : uint8_t
{
	EWTLBalanceChangeType__Income  = 0,
	EWTLBalanceChangeType__Charge  = 1,
	EWTLBalanceChangeType__EWTLBalanceChangeType_MAX = 2
};


// Enum WTL.EWTLShopType
enum class EWTLShopType : uint8_t
{
	EWTLShopType__System           = 0,
	EWTLShopType__EWTLShopType_MAX = 1
};


// Enum WTL.EWTLMiningPointType
enum class EWTLMiningPointType : uint8_t
{
	EWTLMiningPointType__None      = 0,
	EWTLMiningPointType__Tree      = 1,
	EWTLMiningPointType__EWTLMiningPointType_MAX = 2
};


// Enum WTL.EWTLBuildingBlockState
enum class EWTLBuildingBlockState : uint8_t
{
	EWTLBuildingBlockState__Stable = 0,
	EWTLBuildingBlockState__Building = 1,
	EWTLBuildingBlockState__Repairing = 2,
	EWTLBuildingBlockState__EWTLBuildingBlockState_MAX = 3
};


// Enum WTL.EWTLBuildingJointType
enum class EWTLBuildingJointType : uint8_t
{
	EWTLBuildingJointType__None    = 0,
	EWTLBuildingJointType__North   = 1,
	EWTLBuildingJointType__East    = 2,
	EWTLBuildingJointType__South   = 3,
	EWTLBuildingJointType__West    = 4,
	EWTLBuildingJointType__Top     = 5,
	EWTLBuildingJointType__Middle  = 6,
	EWTLBuildingJointType__EWTLBuildingJointType_MAX = 7
};


// Enum WTL.EWTLBuildingType
enum class EWTLBuildingType : uint8_t
{
	EWTLBuildingType__None         = 0,
	EWTLBuildingType__House        = 1,
	EWTLBuildingType__EWTLBuildingType_MAX = 2
};


// Enum WTL.EWTLBlockType
enum class EWTLBlockType : uint8_t
{
	EWTLBlockType__Base            = 0,
	EWTLBlockType__Wall            = 1,
	EWTLBlockType__WindowBlock     = 2,
	EWTLBlockType__DoorBlock       = 3,
	EWTLBlockType__Pillar          = 4,
	EWTLBlockType__Top             = 5,
	EWTLBlockType__FrontSteps      = 6,
	EWTLBlockType__Stairs          = 7,
	EWTLBlockType__Staircase       = 8,
	EWTLBlockType__StorageBox      = 9,
	EWTLBlockType__Workbench       = 10,
	EWTLBlockType__Empty           = 11,
	EWTLBlockType__EWTLBlockType_MAX = 12
};


// Enum WTL.EWTLBodyPart
enum class EWTLBodyPart : uint8_t
{
	EWTLBodyPart__None             = 0,
	EWTLBodyPart__Head             = 1,
	EWTLBodyPart__Torso            = 2,
	EWTLBodyPart__Legs             = 3,
	EWTLBodyPart__Feet             = 4,
	EWTLBodyPart__EWTLBodyPart_MAX = 5
};


// Enum WTL.EWTLChatMessageType
enum class EWTLChatMessageType : uint8_t
{
	EWTLChatMessageType__Common    = 0,
	EWTLChatMessageType__Private   = 1,
	EWTLChatMessageType__Group     = 2,
	EWTLChatMessageType__Clan      = 3,
	EWTLChatMessageType__Faction   = 4,
	EWTLChatMessageType__System    = 5,
	EWTLChatMessageType__EWTLChatMessageType_MAX = 6
};


// Enum WTL.EWTLWeatherType
enum class EWTLWeatherType : uint8_t
{
	EWTLWeatherType__Clear         = 0,
	EWTLWeatherType__Cloudy        = 1,
	EWTLWeatherType__Rain          = 2,
	EWTLWeatherType__HeavyRain     = 3,
	EWTLWeatherType__EWTLWeatherType_MAX = 4
};


// Enum WTL.EWTLCloudsType
enum class EWTLCloudsType : uint8_t
{
	EWTLCloudsType__Custom         = 0,
	EWTLCloudsType__None           = 1,
	EWTLCloudsType__Few            = 2,
	EWTLCloudsType__Scattered      = 3,
	EWTLCloudsType__Broken         = 4,
	EWTLCloudsType__Overcast       = 5,
	EWTLCloudsType__EWTLCloudsType_MAX = 6
};


// Enum WTL.EWTLConnectionCloseType
enum class EWTLConnectionCloseType : uint8_t
{
	EWTLConnectionCloseType__InvalidPackets = 0,
	EWTLConnectionCloseType__InvalidLogin = 1,
	EWTLConnectionCloseType__ServerConsoleCommand = 2,
	EWTLConnectionCloseType__HighPingValue = 3,
	EWTLConnectionCloseType__CharacterBan = 4,
	EWTLConnectionCloseType__ConnecionClosedByServer = 5,
	EWTLConnectionCloseType__EWTLConnectionCloseType_MAX = 6
};


// Enum WTL.EWTLAITargetState
enum class EWTLAITargetState : uint8_t
{
	EWTLAITargetState__None        = 0,
	EWTLAITargetState__Warning     = 1,
	EWTLAITargetState__Chasing     = 2,
	EWTLAITargetState__EWTLAITargetState_MAX = 3
};


// Enum WTL.EWTLAITargetType
enum class EWTLAITargetType : uint8_t
{
	EWTLAITargetType__None         = 0,
	EWTLAITargetType__Waypoint     = 1,
	EWTLAITargetType__Player       = 2,
	EWTLAITargetType__Monster      = 3,
	EWTLAITargetType__EWTLAITargetType_MAX = 4
};


// Enum WTL.EWTLNPCAIClientEventType
enum class EWTLNPCAIClientEventType : uint8_t
{
	EWTLNPCAIClientEventType__None = 0,
	EWTLNPCAIClientEventType__TargetEnterSightRange = 1,
	EWTLNPCAIClientEventType__TargetLeaveSightRange = 2,
	EWTLNPCAIClientEventType__TargetEnterWarningRange = 3,
	EWTLNPCAIClientEventType__TargetLeaveWarningRange = 4,
	EWTLNPCAIClientEventType__TargetEnterChaseRange = 5,
	EWTLNPCAIClientEventType__TargetLeaveChaseRange = 6,
	EWTLNPCAIClientEventType__EWTLNPCAIClientEventType_MAX = 7
};


// Enum WTL.EWTLAIState
enum class EWTLAIState : uint8_t
{
	EWTLAIState__Sleeping          = 0,
	EWTLAIState__Idle              = 1,
	EWTLAIState__WalkingToWaypoint = 2,
	EWTLAIState__Warning           = 3,
	EWTLAIState__Chasing           = 4,
	EWTLAIState__Escaping          = 5,
	EWTLAIState__Dead              = 6,
	EWTLAIState__EWTLAIState_MAX   = 7
};


// Enum WTL.EWTLLocationType
enum class EWTLLocationType : uint8_t
{
	EWTLLocationType__Normal       = 0,
	EWTLLocationType__Underground  = 1,
	EWTLLocationType__Arena_Domination = 2,
	EWTLLocationType__Arena_TeamDeathMatch = 3,
	EWTLLocationType__EWTLLocationType_MAX = 4
};


// Enum WTL.EWTLPlaceType
enum class EWTLPlaceType : uint8_t
{
	EWTLPlaceType__Normal          = 0,
	EWTLPlaceType__Underground     = 1,
	EWTLPlaceType__EWTLPlaceType_MAX = 2
};


// Enum WTL.EWTLQuestCheckResult
enum class EWTLQuestCheckResult : uint8_t
{
	EWTLQuestCheckResult__Result_False = 0,
	EWTLQuestCheckResult__Result_True = 1,
	EWTLQuestCheckResult__Result_MAX = 2
};


// Enum WTL.EWTLObjFAActionResult
enum class EWTLObjFAActionResult : uint8_t
{
	EWTLObjFAActionResult__Success = 0,
	EWTLObjFAActionResult__Failed  = 1,
	EWTLObjFAActionResult__EWTLObjFAActionResult_MAX = 2
};


// Enum WTL.EWTLObjFACheckResult
enum class EWTLObjFACheckResult : uint8_t
{
	EWTLObjFACheckResult__Result_False = 0,
	EWTLObjFACheckResult__Result_True = 1,
	EWTLObjFACheckResult__Result_MAX = 2
};


// Enum WTL.EWTLRainAudioRemoveMethod
enum class EWTLRainAudioRemoveMethod : uint8_t
{
	EWTLRainAudioRemoveMethod__None = 0,
	EWTLRainAudioRemoveMethod__AlwaysCovered = 1,
	EWTLRainAudioRemoveMethod__RemoveCompletely = 2,
	EWTLRainAudioRemoveMethod__EWTLRainAudioRemoveMethod_MAX = 3
};


// Enum WTL.EWTLScriptedEventMethodType
enum class EWTLScriptedEventMethodType : uint8_t
{
	EWTLScriptedEventMethodType__SpawnObject = 0,
	EWTLScriptedEventMethodType__SpawnMonster = 1,
	EWTLScriptedEventMethodType__SpawnEnemy = 2,
	EWTLScriptedEventMethodType__AnnounceEvent = 3,
	EWTLScriptedEventMethodType__EWTLScriptedEventMethodType_MAX = 4
};


// Enum WTL.EWTLClanRelation
enum class EWTLClanRelation : uint8_t
{
	EWTLClanRelation__Neutral      = 0,
	EWTLClanRelation__Friend       = 1,
	EWTLClanRelation__Enemy        = 2,
	EWTLClanRelation__EWTLClanRelation_MAX = 3
};


// Enum WTL.EWTLTiltState
enum class EWTLTiltState : uint8_t
{
	EWTLTiltState__None            = 0,
	EWTLTiltState__TiltRight       = 1,
	EWTLTiltState__TiltLeft        = 2,
	EWTLTiltState__EWTLTiltState_MAX = 3
};


// Enum WTL.EWTLTriggerCheckResult
enum class EWTLTriggerCheckResult : uint8_t
{
	EWTLTriggerCheckResult__Result_False = 0,
	EWTLTriggerCheckResult__Result_True = 1,
	EWTLTriggerCheckResult__Result_MAX = 2
};


// Enum WTL.EWTLTriggerObjectState
enum class EWTLTriggerObjectState : uint8_t
{
	EWTLTriggerObjectState__Off    = 0,
	EWTLTriggerObjectState__On     = 1,
	EWTLTriggerObjectState__EWTLTriggerObjectState_MAX = 2
};


// Enum WTL.EWTLTriggerActionResult
enum class EWTLTriggerActionResult : uint8_t
{
	EWTLTriggerActionResult__Failed = 0,
	EWTLTriggerActionResult__Success = 1,
	EWTLTriggerActionResult__EWTLTriggerActionResult_MAX = 2
};


// Enum WTL.EWTLBPCheckResult
enum class EWTLBPCheckResult : uint8_t
{
	EWTLBPCheckResult__Result_False = 0,
	EWTLBPCheckResult__Result_True = 1,
	EWTLBPCheckResult__Result_MAX  = 2
};


// Enum WTL.EWTLBPActionResult
enum class EWTLBPActionResult : uint8_t
{
	EWTLBPActionResult__Failed     = 0,
	EWTLBPActionResult__Success    = 1,
	EWTLBPActionResult__EWTLBPActionResult_MAX = 2
};


// Enum WTL.EWTLClothesTorsoMeshVariant
enum class EWTLClothesTorsoMeshVariant : uint8_t
{
	EWTLClothesTorsoMeshVariant__Full = 0,
	EWTLClothesTorsoMeshVariant__FullArms = 1,
	EWTLClothesTorsoMeshVariant__HalfArms = 2,
	EWTLClothesTorsoMeshVariant__HandsOnly = 3,
	EWTLClothesTorsoMeshVariant__EWTLClothesTorsoMeshVariant_MAX = 4
};


// Enum WTL.EWTLFortificationObjectType
enum class EWTLFortificationObjectType : uint8_t
{
	EWTLFortificationObjectType__None = 0,
	EWTLFortificationObjectType__MachinuGun = 1,
	EWTLFortificationObjectType__EWTLFortificationObjectType_MAX = 2
};


// Enum WTL.EWTLNPCIdentificationAbility
enum class EWTLNPCIdentificationAbility : uint8_t
{
	EWTLNPCIdentificationAbility__CanTrade = 0,
	EWTLNPCIdentificationAbility__HasStorage = 1,
	EWTLNPCIdentificationAbility__CanTakeQuest = 2,
	EWTLNPCIdentificationAbility__CanCompleteQuest = 3,
	EWTLNPCIdentificationAbility__IsGunsmith = 4,
	EWTLNPCIdentificationAbility__HasComission = 5,
	EWTLNPCIdentificationAbility__EWTLNPCIdentificationAbility_MAX = 6
};


// Enum WTL.EWTLDaytimeCubemapBlendType
enum class EWTLDaytimeCubemapBlendType : uint8_t
{
	EWTLDaytimeCubemapBlendType__Increment = 0,
	EWTLDaytimeCubemapBlendType__Decrement = 1,
	EWTLDaytimeCubemapBlendType__EWTLDaytimeCubemapBlendType_MAX = 2
};


// Enum WTL.EWTLEnergyFieldType
enum class EWTLEnergyFieldType : uint8_t
{
	EWTLEnergyFieldType__None      = 0,
	EWTLEnergyFieldType__SafeZone  = 1,
	EWTLEnergyFieldType__EWTLEnergyFieldType_MAX = 2
};


// Enum WTL.EWTLSuffocationVolumeType
enum class EWTLSuffocationVolumeType : uint8_t
{
	EWTLSuffocationVolumeType__None = 0,
	EWTLSuffocationVolumeType__Water = 1,
	EWTLSuffocationVolumeType__EWTLSuffocationVolumeType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
