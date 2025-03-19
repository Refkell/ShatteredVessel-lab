// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/WeaponBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponBase();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAmmoType();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAttachmentType();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentData();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHandsAnimSet();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeWeaponData();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticWeaponData();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmmoType;
	static UEnum* EAmmoType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAmmoType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAmmoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EAmmoType, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("EAmmoType"));
		}
		return Z_Registration_Info_UEnum_EAmmoType.OuterSingleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EAmmoType>()
	{
		return EAmmoType_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSCore_EAmmoType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSCore_EAmmoType_Statics::Enumerators[] = {
		{ "EAmmoType::Pistol", (int64)EAmmoType::Pistol },
		{ "EAmmoType::Rifle", (int64)EAmmoType::Rifle },
		{ "EAmmoType::Shotgun", (int64)EAmmoType::Shotgun },
		{ "EAmmoType::Special", (int64)EAmmoType::Special },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSCore_EAmmoType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumerator holding the 4 types of ammunition that weapons can use (used as part of the FSingleWeaponParams struct)\n * and to keep track of the total ammo the player has (ammoMap) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "Pistol.DisplayName", "Pistol Ammo" },
		{ "Pistol.Name", "EAmmoType::Pistol" },
		{ "Rifle.DisplayName", "Rifle Ammo" },
		{ "Rifle.Name", "EAmmoType::Rifle" },
		{ "Shotgun.DisplayName", "Shotgun Ammo" },
		{ "Shotgun.Name", "EAmmoType::Shotgun" },
		{ "Special.DisplayName", "Special Ammo" },
		{ "Special.Name", "EAmmoType::Special" },
		{ "ToolTip", "Enumerator holding the 4 types of ammunition that weapons can use (used as part of the FSingleWeaponParams struct)\nand to keep track of the total ammo the player has (ammoMap)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSCore_EAmmoType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		"EAmmoType",
		"EAmmoType",
		Z_Construct_UEnum_FPSCore_EAmmoType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EAmmoType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EAmmoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSCore_EAmmoType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FPSCore_EAmmoType()
	{
		if (!Z_Registration_Info_UEnum_EAmmoType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmmoType.InnerSingleton, Z_Construct_UEnum_FPSCore_EAmmoType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAmmoType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttachmentType;
	static UEnum* EAttachmentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttachmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EAttachmentType, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("EAttachmentType"));
		}
		return Z_Registration_Info_UEnum_EAttachmentType.OuterSingleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EAttachmentType>()
	{
		return EAttachmentType_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSCore_EAttachmentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::Enumerators[] = {
		{ "EAttachmentType::Barrel", (int64)EAttachmentType::Barrel },
		{ "EAttachmentType::Magazine", (int64)EAttachmentType::Magazine },
		{ "EAttachmentType::Sights", (int64)EAttachmentType::Sights },
		{ "EAttachmentType::Stock", (int64)EAttachmentType::Stock },
		{ "EAttachmentType::Grip", (int64)EAttachmentType::Grip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::Enum_MetaDataParams[] = {
		{ "Barrel.DisplayName", "Barrel Attachment" },
		{ "Barrel.Name", "EAttachmentType::Barrel" },
		{ "Comment", "/** Enumerator holding all the possible typed of attachment */" },
		{ "Grip.DispayName", "Grip Attachment" },
		{ "Grip.Name", "EAttachmentType::Grip" },
		{ "Magazine.DisplayName", "Magazine Attachment" },
		{ "Magazine.Name", "EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "Sights.DisplayName", "Sights Attachment" },
		{ "Sights.Name", "EAttachmentType::Sights" },
		{ "Stock.DispayName", "Stock Attachment" },
		{ "Stock.Name", "EAttachmentType::Stock" },
		{ "ToolTip", "Enumerator holding all the possible typed of attachment" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		"EAttachmentType",
		"EAttachmentType",
		Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FPSCore_EAttachmentType()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttachmentType.InnerSingleton, Z_Construct_UEnum_FPSCore_EAttachmentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttachmentType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HandsAnimSet;
class UScriptStruct* FHandsAnimSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HandsAnimSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HandsAnimSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHandsAnimSet, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("HandsAnimSet"));
	}
	return Z_Registration_Info_UScriptStruct_HandsAnimSet.OuterSingleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FHandsAnimSet>()
{
	return FHandsAnimSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHandsAnimSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BS_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BS_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BS_Ads_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BS_Ads_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Ads_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Ads_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_Start_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_End_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Fall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Fall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Sprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Sprint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct containing all the animations needed by FPS Core, in order to simplify blueprint operations */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "A struct containing all the animations needed by FPS Core, in order to simplify blueprint operations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHandsAnimSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Walk_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The walking BlendSpace */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The walking BlendSpace" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Walk = { "BS_Walk", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, BS_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Walk_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Ads_Walk_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The ADS Walking BlendSpace */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The ADS Walking BlendSpace" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Ads_Walk = { "BS_Ads_Walk", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, BS_Ads_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Ads_Walk_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Ads_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Idle_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The Idle animation sequence */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The Idle animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Idle = { "Anim_Idle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, Anim_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Idle_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Ads_Idle_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The ADS Idle animation sequence */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The ADS Idle animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Ads_Idle = { "Anim_Ads_Idle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, Anim_Ads_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Ads_Idle_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Ads_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_Start_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon, is idle, and is aiming down sights" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_Start = { "Anim_Jump_Start", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, Anim_Jump_Start), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_Start_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_End_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon, is idle, and is aiming down sights" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_End = { "Anim_Jump_End", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, Anim_Jump_End), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_End_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_End_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Fall_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon, is idle, and is aiming down sights" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Fall = { "Anim_Fall", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, Anim_Fall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Fall_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Fall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Sprint_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The sprinting animation sequence */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The sprinting animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Sprint = { "Anim_Sprint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHandsAnimSet, Anim_Sprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Sprint_MetaData), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Sprint_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHandsAnimSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_BS_Ads_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Ads_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Jump_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Fall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewProp_Anim_Sprint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHandsAnimSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		&NewStructOps,
		"HandsAnimSet",
		Z_Construct_UScriptStruct_FHandsAnimSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::PropPointers),
		sizeof(FHandsAnimSet),
		alignof(FHandsAnimSet),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHandsAnimSet_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHandsAnimSet_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FHandsAnimSet()
	{
		if (!Z_Registration_Info_UScriptStruct_HandsAnimSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HandsAnimSet.InnerSingleton, Z_Construct_UScriptStruct_FHandsAnimSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HandsAnimSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeWeaponData;
class UScriptStruct* FRuntimeWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeWeaponData, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("RuntimeWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeWeaponData.OuterSingleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FRuntimeWeaponData>()
{
	return FRuntimeWeaponData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClassReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClassReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponHealth;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAttachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponAttachments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct keeping track of important weapon variables modified at runtime. This structs contains data that is either\n *\x09modified at runtime, such as the amount of ammunition in the weapon, but also data required to spawn attachments\n *\x09""and pickups\n */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Struct keeping track of important weapon variables modified at runtime. This structs contains data that is either\n   modified at runtime, such as the amount of ammunition in the weapon, but also data required to spawn attachments\n   and pickups" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeWeaponData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponClassReference_MetaData[] = {
		{ "Category", "Weapon Data" },
		{ "Comment", "/** A reference to the weapon class of the given weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "A reference to the weapon class of the given weapon" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponClassReference = { "WeaponClassReference", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeWeaponData, WeaponClassReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponClassReference_MetaData), Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponClassReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipCapacity_MetaData[] = {
		{ "Category", "Weapon Data" },
		{ "Comment", "/** The maximum size of the player's magazine */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The maximum size of the player's magazine" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipCapacity = { "ClipCapacity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeWeaponData, ClipCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipCapacity_MetaData), Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipCapacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipSize_MetaData[] = {
		{ "Category", "Weapon Data" },
		{ "Comment", "/** The amount of ammunition currently in the magazine */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The amount of ammunition currently in the magazine" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeWeaponData, ClipSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipSize_MetaData), Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipSize_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_AmmoType_MetaData[] = {
		{ "Category", "Weapon Data" },
		{ "Comment", "/** Enumerator holding the 4 possible ammo types defined above */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Enumerator holding the 4 possible ammo types defined above" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeWeaponData, AmmoType), Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_AmmoType_MetaData), Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_AmmoType_MetaData) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponHealth_MetaData[] = {
		{ "Category", "Weapon Data" },
		{ "Comment", "/** The current health of the weapon (degradation values are in the weapon class) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The current health of the weapon (degradation values are in the weapon class)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponHealth = { "WeaponHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeWeaponData, WeaponHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponHealth_MetaData), Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponHealth_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponAttachments_Inner = { "WeaponAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponAttachments_MetaData[] = {
		{ "Category", "Weapon Data" },
		{ "Comment", "/** The attachments used in the current weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The attachments used in the current weapon" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponAttachments = { "WeaponAttachments", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeWeaponData, WeaponAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponAttachments_MetaData), Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponAttachments_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponClassReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_ClipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_AmmoType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_AmmoType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewProp_WeaponAttachments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		&NewStructOps,
		"RuntimeWeaponData",
		Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::PropPointers),
		sizeof(FRuntimeWeaponData),
		alignof(FRuntimeWeaponData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeWeaponData()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeWeaponData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeWeaponData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAttachmentData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAttachmentData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttachmentData;
class UScriptStruct* FAttachmentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttachmentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttachmentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachmentData, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("AttachmentData"));
	}
	return Z_Registration_Info_UScriptStruct_AttachmentData.OuterSingleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FAttachmentData>()
{
	return FAttachmentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttachmentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_IncompatibleAttachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncompatibleAttachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncompatibleAttachments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamageImpact_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamageImpact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponPitchVariationImpact_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponPitchVariationImpact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponYawVariationImpact_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponYawVariationImpact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoilMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalRecoilMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoilMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRecoilMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocationOverride_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleLocationOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSpawnLocationOverride_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticleSpawnLocationOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSilenced_MetaData[];
#endif
		static void NewProp_bSilenced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilenced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BS_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BS_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BS_Ads_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BS_Ads_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Ads_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Ads_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_Start_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_End_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Fall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Fall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Sprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Sprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastWeaponShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeaponShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsADSShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsADSShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponEquip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponEquip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsInspect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsInspect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInspect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInspect;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoToUse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoToUse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticFire_MetaData[];
#endif
		static void NewProp_AutomaticFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutomaticFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReload_MetaData[];
#endif
		static void NewProp_bAutoReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFireAfterReload_MetaData[];
#endif
		static void NewProp_bAutoFireAfterReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFireAfterReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoilCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalRecoilCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoilCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalRecoilCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilCameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RecoilCameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShotgun_MetaData[];
#endif
		static void NewProp_bIsShotgun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShotgun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunPellets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotgunPellets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccuracyDebuff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccuracyDebuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForAnim_MetaData[];
#endif
		static void NewProp_bWaitForAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventRapidManualFire_MetaData[];
#endif
		static void NewProp_bPreventRapidManualFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventRapidManualFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyWeaponReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyWeaponReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyPlayerReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyPlayerReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SilencedFiringSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SilencedFiringSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCameraOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalCameraOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAimingFOV_MetaData[];
#endif
		static void NewProp_bAimingFOV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimingFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingFOVChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingFOVChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopeMagnification_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScopeMagnification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnmagnifiedLFoV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmagnifiedLFoV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct holding all data required by an attachment */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Struct holding all data required by an attachment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachmentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachmentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentMesh_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The skeletal mesh displayed on the weapon itself */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The skeletal mesh displayed on the weapon itself" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentMesh = { "AttachmentMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, AttachmentMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentMesh_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The static mesh displayed on the weapon pickup */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The static mesh displayed on the weapon pickup" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, PickupMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PickupMesh_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PickupMesh_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The type of attachment */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The type of attachment" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentType = { "AttachmentType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, AttachmentType), Z_Construct_UEnum_FPSCore_EAttachmentType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentType_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentType_MetaData) }; // 2467205341
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_IncompatibleAttachments_Inner = { "IncompatibleAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_IncompatibleAttachments_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Attachments that are incompatible with the given attachment */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Attachments that are incompatible with the given attachment" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_IncompatibleAttachments = { "IncompatibleAttachments", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, IncompatibleAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_IncompatibleAttachments_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_IncompatibleAttachments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BaseDamageImpact_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The impact that this attachment has on the base damage of the weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The impact that this attachment has on the base damage of the weapon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BaseDamageImpact = { "BaseDamageImpact", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, BaseDamageImpact), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BaseDamageImpact_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BaseDamageImpact_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponPitchVariationImpact_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The pitch variation impact of this attachment */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The pitch variation impact of this attachment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponPitchVariationImpact = { "WeaponPitchVariationImpact", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, WeaponPitchVariationImpact), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponPitchVariationImpact_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponPitchVariationImpact_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponYawVariationImpact_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The yaw variation impact of this attachment */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The yaw variation impact of this attachment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponYawVariationImpact = { "WeaponYawVariationImpact", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, WeaponYawVariationImpact), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponYawVariationImpact_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponYawVariationImpact_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilMultiplier_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** How much this attachment multiplies the vertical recoil of the weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "How much this attachment multiplies the vertical recoil of the weapon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilMultiplier = { "VerticalRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, VerticalRecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilMultiplier_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilMultiplier_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** How much this attachment multiplies the horizontal recoil of this weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "How much this attachment multiplies the horizontal recoil of this weapon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilMultiplier = { "HorizontalRecoilMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, HorizontalRecoilMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilMultiplier_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_MuzzleLocationOverride_MetaData[] = {
		{ "Category", "Barrel" },
		{ "Comment", "/** The name of the socket on the muzzle attachment's skeletal mesh with which to override the muzzle */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Barrel" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The name of the socket on the muzzle attachment's skeletal mesh with which to override the muzzle" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_MuzzleLocationOverride = { "MuzzleLocationOverride", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, MuzzleLocationOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_MuzzleLocationOverride_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_MuzzleLocationOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ParticleSpawnLocationOverride_MetaData[] = {
		{ "Category", "Barrel" },
		{ "Comment", "/** The name of the socket at which to spawn particles for muzzle flash */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Barrel" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The name of the socket at which to spawn particles for muzzle flash" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ParticleSpawnLocationOverride = { "ParticleSpawnLocationOverride", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, ParticleSpawnLocationOverride), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ParticleSpawnLocationOverride_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ParticleSpawnLocationOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bSilenced_MetaData[] = {
		{ "Category", "Barrel" },
		{ "Comment", "/** Whether the current barrel attachment is silenced or not */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Barrel" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the current barrel attachment is silenced or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bSilenced_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->bSilenced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bSilenced = { "bSilenced", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bSilenced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bSilenced_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bSilenced_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Walk_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default walk BlendSpace */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default walk BlendSpace" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Walk = { "BS_Walk", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, BS_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Walk_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Ads_Walk_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default ADS walk BlendSpace */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default ADS walk BlendSpace" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Ads_Walk = { "BS_Ads_Walk", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, BS_Ads_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Ads_Walk_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Ads_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Idle_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default idle animation sequence */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default idle animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Idle = { "Anim_Idle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, Anim_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Idle_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Ads_Idle_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default ADS idle animation sequence */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default ADS idle animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Ads_Idle = { "Anim_Ads_Idle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, Anim_Ads_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Ads_Idle_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Ads_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_Start_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default jump start animation sequence  */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default jump start animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_Start = { "Anim_Jump_Start", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, Anim_Jump_Start), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_Start_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_End_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default jump end animation sequence */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default jump end animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_End = { "Anim_Jump_End", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, Anim_Jump_End), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_End_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_End_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Fall_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default fall animation sequence */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default fall animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Fall = { "Anim_Fall", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, Anim_Fall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Fall_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Fall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Sprint_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** An override for the default sprint animation sequence */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the default sprint animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Sprint = { "Anim_Sprint", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, Anim_Sprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Sprint_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Sprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponShot_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** The shooting animation for the weapon itself (bolt shooting back/forward) */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the weapon itself (bolt shooting back/forward)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponShot = { "WeaponShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, WeaponShot), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponShot_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_LastWeaponShot_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** The shooting animation for the weapon itself (bolt shooting back/forward) */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the weapon itself (bolt shooting back/forward)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_LastWeaponShot = { "LastWeaponShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, LastWeaponShot), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_LastWeaponShot_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_LastWeaponShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsShot_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** The shooting animation for the player's hands */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the player's hands" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsShot = { "HandsShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, HandsShot), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsShot_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsADSShot_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** The shooting animation for the player's hands */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the player's hands" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsADSShot = { "HandsADSShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, HandsADSShot), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsADSShot_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsADSShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponEquip_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** Unequip animation for the current weapon */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Unequip animation for the current weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponEquip = { "WeaponEquip", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, WeaponEquip), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponEquip_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponEquip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsInspect_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** The player's inspect animation */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The player's inspect animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsInspect = { "HandsInspect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, HandsInspect), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsInspect_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsInspect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponInspect_MetaData[] = {
		{ "Category", "Grip" },
		{ "Comment", "/** The player's inspect animation */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Grip" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The player's inspect animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponInspect = { "WeaponInspect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, WeaponInspect), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponInspect_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponInspect_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AmmoToUse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AmmoToUse_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The ammunition type to be used (Spawned on the pickup) */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The ammunition type to be used (Spawned on the pickup)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AmmoToUse = { "AmmoToUse", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, AmmoToUse), Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AmmoToUse_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AmmoToUse_MetaData) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipCapacity_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The clip capacity of the weapon (Spawned on the pickup) */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The clip capacity of the weapon (Spawned on the pickup)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipCapacity = { "ClipCapacity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, ClipCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipCapacity_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipCapacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipSize_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The clip size of the weapon (Spawned on the pickup) */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The clip size of the weapon (Spawned on the pickup)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, ClipSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipSize_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponHealth_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The default health of the weapon (Spawned on the pickup) */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The default health of the weapon (Spawned on the pickup)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponHealth = { "WeaponHealth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, WeaponHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponHealth_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The rate of fire (In rounds per minute/RPM) of this magazine attachment */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The rate of fire (In rounds per minute/RPM) of this magazine attachment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FireRate_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AutomaticFire_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Whether this magazine supports automatic fire */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether this magazine supports automatic fire" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AutomaticFire_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->AutomaticFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AutomaticFire = { "AutomaticFire", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AutomaticFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AutomaticFire_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AutomaticFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoReload_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoReload_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->bAutoReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoReload = { "bAutoReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoReload_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoFireAfterReload_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoFireAfterReload_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->bAutoFireAfterReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoFireAfterReload = { "bAutoFireAfterReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoFireAfterReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoFireAfterReload_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoFireAfterReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilCurve_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The vertical recoil curve to be used with this magazine */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The vertical recoil curve to be used with this magazine" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilCurve = { "VerticalRecoilCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, VerticalRecoilCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilCurve_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilCurve_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The horizontal recoil curve to be used with this magazine */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The horizontal recoil curve to be used with this magazine" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilCurve = { "HorizontalRecoilCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, HorizontalRecoilCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilCurve_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_RecoilCameraShake_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The camera shake to be applied to the recoil from this magazine */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The camera shake to be applied to the recoil from this magazine" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_RecoilCameraShake = { "RecoilCameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, RecoilCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_RecoilCameraShake_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_RecoilCameraShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bIsShotgun_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Whether this magazine fires shotgun shells (should we fire lots of pellets or just one bullet?) */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether this magazine fires shotgun shells (should we fire lots of pellets or just one bullet?)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bIsShotgun_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->bIsShotgun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bIsShotgun = { "bIsShotgun", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bIsShotgun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bIsShotgun_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bIsShotgun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunRange_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The range of the shotgun shells in this magazine */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The range of the shotgun shells in this magazine" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunRange = { "ShotgunRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, ShotgunRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunRange_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunPellets_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The amount of pellets fired */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The amount of pellets fired" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunPellets = { "ShotgunPellets", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, ShotgunPellets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunPellets_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunPellets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AccuracyDebuff_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The increase in shot variation when the player is not aiming down the sights */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The increase in shot variation when the player is not aiming down the sights" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AccuracyDebuff = { "AccuracyDebuff", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, AccuracyDebuff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AccuracyDebuff_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AccuracyDebuff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bWaitForAnim_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** We wait for the animation to finish before the player is allowed to fire again (for weapons where the character has to perform an action before being able to fire again) Requires fireMontage to be set */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "We wait for the animation to finish before the player is allowed to fire again (for weapons where the character has to perform an action before being able to fire again) Requires fireMontage to be set" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bWaitForAnim_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->bWaitForAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bWaitForAnim = { "bWaitForAnim", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bWaitForAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bWaitForAnim_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bWaitForAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bPreventRapidManualFire_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** Whether to prevent players from spam-firing this weapon faster than the assigned Rate of Fire */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether to prevent players from spam-firing this weapon faster than the assigned Rate of Fire" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bPreventRapidManualFire_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->bPreventRapidManualFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bPreventRapidManualFire = { "bPreventRapidManualFire", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bPreventRapidManualFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bPreventRapidManualFire_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bPreventRapidManualFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyWeaponReload_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** An override for the weapon's empty reload animation */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the weapon's empty reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyWeaponReload = { "EmptyWeaponReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, EmptyWeaponReload), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyWeaponReload_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyWeaponReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponReload_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** An override for the weapon's reload animation */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the weapon's reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponReload = { "WeaponReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, WeaponReload), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponReload_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyPlayerReload_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** An override for the player's empty reload animation */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the player's empty reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyPlayerReload = { "EmptyPlayerReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, EmptyPlayerReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyPlayerReload_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyPlayerReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PlayerReload_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** An override for the player's reload animation */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the player's reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PlayerReload = { "PlayerReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, PlayerReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PlayerReload_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PlayerReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FiringSoundOverride_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The firing sound to use instead of the default for this particular magazine attachment */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The firing sound to use instead of the default for this particular magazine attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FiringSoundOverride = { "FiringSoundOverride", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, FiringSoundOverride), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FiringSoundOverride_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FiringSoundOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_SilencedFiringSoundOverride_MetaData[] = {
		{ "Category", "Magazine" },
		{ "Comment", "/** The silenced firing sound to use instead of the default for this particular magazine attachment */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Magazine" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The silenced firing sound to use instead of the default for this particular magazine attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_SilencedFiringSoundOverride = { "SilencedFiringSoundOverride", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, SilencedFiringSoundOverride), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_SilencedFiringSoundOverride_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_SilencedFiringSoundOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalCameraOffset_MetaData[] = {
		{ "Category", "Sights" },
		{ "Comment", "/** The offset applied to the camera to align with the sights */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Sights" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The offset applied to the camera to align with the sights" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalCameraOffset = { "VerticalCameraOffset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, VerticalCameraOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalCameraOffset_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalCameraOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAimingFOV_MetaData[] = {
		{ "Category", "Sights" },
		{ "Comment", "/** Whether the player's FOV should change when aiming with this weapon */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Sights" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the player's FOV should change when aiming with this weapon" },
	};
#endif
	void Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAimingFOV_SetBit(void* Obj)
	{
		((FAttachmentData*)Obj)->bAimingFOV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAimingFOV = { "bAimingFOV", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAttachmentData), &Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAimingFOV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAimingFOV_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAimingFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AimingFOVChange_MetaData[] = {
		{ "Category", "Sights" },
		{ "Comment", "/** The decrease in FOV of the camera to when aim down sights */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Sights" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The decrease in FOV of the camera to when aim down sights" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AimingFOVChange = { "AimingFOVChange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, AimingFOVChange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AimingFOVChange_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AimingFOVChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ScopeMagnification_MetaData[] = {
		{ "Category", "Sights" },
		{ "Comment", "/** The Magnification of the scope */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Sights" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The Magnification of the scope" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ScopeMagnification = { "ScopeMagnification", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, ScopeMagnification), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ScopeMagnification_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ScopeMagnification_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_UnmagnifiedLFoV_MetaData[] = {
		{ "Category", "Sights" },
		{ "Comment", "/** The linear FOV at a magnification of 1x */" },
		{ "EditCondition", "AttachmentType == EAttachmentType::Sights" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The linear FOV at a magnification of 1x" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_UnmagnifiedLFoV = { "UnmagnifiedLFoV", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentData, UnmagnifiedLFoV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_UnmagnifiedLFoV_MetaData), Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_UnmagnifiedLFoV_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachmentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PickupMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AttachmentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_IncompatibleAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_IncompatibleAttachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BaseDamageImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponPitchVariationImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponYawVariationImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_MuzzleLocationOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ParticleSpawnLocationOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bSilenced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_BS_Ads_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Ads_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Jump_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Fall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_Anim_Sprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_LastWeaponShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsADSShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponEquip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HandsInspect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponInspect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AmmoToUse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AmmoToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ClipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AutomaticFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAutoFireAfterReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalRecoilCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_HorizontalRecoilCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_RecoilCameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bIsShotgun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ShotgunPellets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AccuracyDebuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bWaitForAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bPreventRapidManualFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyWeaponReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_WeaponReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_EmptyPlayerReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_PlayerReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_FiringSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_SilencedFiringSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_VerticalCameraOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_bAimingFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_AimingFOVChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_ScopeMagnification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentData_Statics::NewProp_UnmagnifiedLFoV,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachmentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AttachmentData",
		Z_Construct_UScriptStruct_FAttachmentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::PropPointers),
		sizeof(FAttachmentData),
		alignof(FAttachmentData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttachmentData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttachmentData()
	{
		if (!Z_Registration_Info_UScriptStruct_AttachmentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttachmentData.InnerSingleton, Z_Construct_UScriptStruct_FAttachmentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttachmentData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStaticWeaponData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStaticWeaponData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticWeaponData;
class UScriptStruct* FStaticWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticWeaponData, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("StaticWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_StaticWeaponData.OuterSingleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FStaticWeaponData>()
{
	return FStaticWeaponData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticWeaponData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PickupReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachmentSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAttachmentSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadshotMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadshotMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDegradationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponDegradationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponPitchVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponPitchVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponYawVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponYawVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasAttachments_MetaData[];
#endif
		static void NewProp_bHasAttachments_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAttachments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentsDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentsDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BS_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BS_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BS_Ads_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BS_Ads_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Ads_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Ads_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_Start_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_End_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Fall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Fall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyWeaponReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyWeaponReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyPlayerReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyPlayerReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsInspect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsInspect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInspect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInspect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Sprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Sprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastWeaponShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastWeaponShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsADSShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsADSShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponEquip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponEquip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponUnequip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponUnequip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeChambered_MetaData[];
#endif
		static void NewProp_bCanBeChambered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeChambered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSilenced_MetaData[];
#endif
		static void NewProp_bSilenced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSilenced;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForAnim_MetaData[];
#endif
		static void NewProp_bWaitForAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventRapidManualFire_MetaData[];
#endif
		static void NewProp_bPreventRapidManualFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventRapidManualFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReload_MetaData[];
#endif
		static void NewProp_bAutoReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFireAfterReload_MetaData[];
#endif
		static void NewProp_bAutoFireAfterReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFireAfterReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShotgun_MetaData[];
#endif
		static void NewProp_bIsShotgun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShotgun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAimingFOV_MetaData[];
#endif
		static void NewProp_bAimingFOV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimingFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingFOVChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimingFOVChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopeMagnification_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScopeMagnification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnmagnifiedLFoV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmagnifiedLFoV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MuzzleLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticleSpawnLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoToUse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoToUse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateOfFire_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateOfFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticFire_MetaData[];
#endif
		static void NewProp_bAutomaticFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoilCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalRecoilCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoilCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalRecoilCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilCameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RecoilCameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShotgunRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotgunPellets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotgunPellets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccuracyDebuff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccuracyDebuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalDamageSurface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalDamageSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadshotDamageSurface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadshotDamageSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSurface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RockSurface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RockSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHitEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyHitEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundHitEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RockHitEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RockHitEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultHitEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletTrace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SilencedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SilencedSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyFireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyFireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct holding all required information about the weapon class. This data is set once at tbe beginning of this\n * actor's lifetime, and then remains unchanged for it's duration. It encapsulates all the data regarding the statistics\n * of this weapon, as well as data regarding it's appearance, such as animations and particle effects.\n */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Struct holding all required information about the weapon class. This data is set once at tbe beginning of this\nactor's lifetime, and then remains unchanged for it's duration. It encapsulates all the data regarding the statistics\nof this weapon, as well as data regarding it's appearance, such as animations and particle effects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticWeaponData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PickupReference_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/**Pickup reference */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Pickup reference" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PickupReference = { "PickupReference", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, PickupReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponPickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PickupReference_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PickupReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponAttachmentSocketName_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/** Determines the socket or bone with which the weapon will be attached to the character's hand (typically the root bone or the grip bone) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Determines the socket or bone with which the weapon will be attached to the character's hand (typically the root bone or the grip bone)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponAttachmentSocketName = { "WeaponAttachmentSocketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponAttachmentSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponAttachmentSocketName_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponAttachmentSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LengthMultiplier_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/** The distance the shot will travel */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The distance the shot will travel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LengthMultiplier = { "LengthMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, LengthMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LengthMultiplier_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LengthMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/** unmodified damage values of this weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "unmodified damage values of this weapon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BaseDamage_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BaseDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotMultiplier_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/** multiplier to be applied when the player hits an enemy's head bone */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "multiplier to be applied when the player hits an enemy's head bone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotMultiplier = { "HeadshotMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, HeadshotMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotMultiplier_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponDegradationRate_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/** The amount of health taken away from the weapon every time the trigger is pulled */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The amount of health taken away from the weapon every time the trigger is pulled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponDegradationRate = { "WeaponDegradationRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponDegradationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponDegradationRate_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponDegradationRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponPitchVariation_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/** The pitch variation applied to the bullet as it leaves the barrel */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The pitch variation applied to the bullet as it leaves the barrel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponPitchVariation = { "WeaponPitchVariation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponPitchVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponPitchVariation_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponPitchVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponYawVariation_MetaData[] = {
		{ "Category", "Required" },
		{ "Comment", "/** The yaw variation applied to the bullet as it leaves the barrel */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The yaw variation applied to the bullet as it leaves the barrel" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponYawVariation = { "WeaponYawVariation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponYawVariation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponYawVariation_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponYawVariation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bHasAttachments_MetaData[] = {
		{ "Category", "Attachments" },
		{ "Comment", "/** Whether this weapon has a unique set of attachments and is broken up into multiple meshes or is unique */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether this weapon has a unique set of attachments and is broken up into multiple meshes or is unique" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bHasAttachments_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bHasAttachments = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bHasAttachments = { "bHasAttachments", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bHasAttachments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bHasAttachments_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bHasAttachments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AttachmentsDataTable_MetaData[] = {
		{ "Category", "Attachments" },
		{ "Comment", "/** The table which holds the attachment data */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The table which holds the attachment data" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AttachmentsDataTable = { "AttachmentsDataTable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, AttachmentsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AttachmentsDataTable_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AttachmentsDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Walk_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The walking BlendSpace */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The walking BlendSpace" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Walk = { "BS_Walk", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, BS_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Walk_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Ads_Walk_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The ADS Walking BlendSpace */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The ADS Walking BlendSpace" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Ads_Walk = { "BS_Ads_Walk", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, BS_Ads_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Ads_Walk_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Ads_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Idle_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The Idle animation sequence */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The Idle animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Idle = { "Anim_Idle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, Anim_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Idle_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Ads_Idle_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The ADS Idle animation sequence */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The ADS Idle animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Ads_Idle = { "Anim_Ads_Idle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, Anim_Ads_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Ads_Idle_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Ads_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_Start_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon, is idle, and is aiming down sights" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_Start = { "Anim_Jump_Start", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, Anim_Jump_Start), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_Start_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_End_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon, is idle, and is aiming down sights" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_End = { "Anim_Jump_End", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, Anim_Jump_End), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_End_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_End_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Fall_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon, is idle, and is aiming down sights" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Fall = { "Anim_Fall", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, Anim_Fall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Fall_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Fall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyWeaponReload_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The weapon's empty reload animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The weapon's empty reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyWeaponReload = { "EmptyWeaponReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, EmptyWeaponReload), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyWeaponReload_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyWeaponReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponReload_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The weapon's reload animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The weapon's reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponReload = { "WeaponReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponReload), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponReload_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyPlayerReload_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The player's empty reload animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The player's empty reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyPlayerReload = { "EmptyPlayerReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, EmptyPlayerReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyPlayerReload_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyPlayerReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PlayerReload_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The player's reload animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The player's reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PlayerReload = { "PlayerReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, PlayerReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PlayerReload_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PlayerReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsInspect_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The player's inspect animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The player's inspect animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsInspect = { "HandsInspect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, HandsInspect), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsInspect_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsInspect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponInspect_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The weapon's half of the inspect animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The weapon's half of the inspect animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponInspect = { "WeaponInspect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponInspect), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponInspect_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponInspect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Sprint_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The sprinting animation sequence */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The sprinting animation sequence" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Sprint = { "Anim_Sprint", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, Anim_Sprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Sprint_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Sprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponShot_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The shooting animation for the weapon itself (bolt shooting back/forward) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the weapon itself (bolt shooting back/forward)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponShot = { "WeaponShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponShot), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponShot_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LastWeaponShot_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The shooting animation for the weapon itself (bolt shooting back/forward) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the weapon itself (bolt shooting back/forward)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LastWeaponShot = { "LastWeaponShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, LastWeaponShot), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LastWeaponShot_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LastWeaponShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsShot_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The shooting animation for the player's hands */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the player's hands" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsShot = { "HandsShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, HandsShot), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsShot_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsADSShot_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The shooting animation for the player's hands */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The shooting animation for the player's hands" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsADSShot = { "HandsADSShot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, HandsADSShot), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsADSShot_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsADSShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponEquip_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** An override for the player's reload animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the player's reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponEquip = { "WeaponEquip", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponEquip), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponEquip_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponEquip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponUnequip_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** An override for the player's reload animation */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "An override for the player's reload animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponUnequip = { "WeaponUnequip", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponUnequip), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponUnequip_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponUnequip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bCanBeChambered_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Determines if the weapon can have a round in the chamber or not */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Determines if the weapon can have a round in the chamber or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bCanBeChambered_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bCanBeChambered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bCanBeChambered = { "bCanBeChambered", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bCanBeChambered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bCanBeChambered_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bCanBeChambered_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bSilenced_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Whether the weapon is silenced or not */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the weapon is silenced or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bSilenced_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bSilenced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bSilenced = { "bSilenced", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bSilenced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bSilenced_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bSilenced_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bWaitForAnim_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** We wait for the animation to finish before the player is allowed to fire again (for weapons where the character has to perform an action before being able to fire again) Requires fireMontage to be set */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "We wait for the animation to finish before the player is allowed to fire again (for weapons where the character has to perform an action before being able to fire again) Requires fireMontage to be set" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bWaitForAnim_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bWaitForAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bWaitForAnim = { "bWaitForAnim", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bWaitForAnim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bWaitForAnim_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bWaitForAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bPreventRapidManualFire_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Whether to prevent players from spam-firing this weapon faster than the assigned Rate of Fire */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether to prevent players from spam-firing this weapon faster than the assigned Rate of Fire" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bPreventRapidManualFire_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bPreventRapidManualFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bPreventRapidManualFire = { "bPreventRapidManualFire", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bPreventRapidManualFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bPreventRapidManualFire_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bPreventRapidManualFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoReload_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoReload_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bAutoReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoReload = { "bAutoReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoReload_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoFireAfterReload_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the weapon should automatically reload when the player is holding down the fire button and has run out of ammo" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoFireAfterReload_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bAutoFireAfterReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoFireAfterReload = { "bAutoFireAfterReload", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoFireAfterReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoFireAfterReload_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoFireAfterReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bIsShotgun_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Whether this weapon is a shotgun or not */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether this weapon is a shotgun or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bIsShotgun_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bIsShotgun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bIsShotgun = { "bIsShotgun", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bIsShotgun_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bIsShotgun_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bIsShotgun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAimingFOV_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Whether the player's FOV should change when aiming with this weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether the player's FOV should change when aiming with this weapon" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAimingFOV_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bAimingFOV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAimingFOV = { "bAimingFOV", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAimingFOV_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAimingFOV_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAimingFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AimingFOVChange_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The decrease in FOV of the camera to when aim down sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The decrease in FOV of the camera to when aim down sights" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AimingFOVChange = { "AimingFOVChange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, AimingFOVChange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AimingFOVChange_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AimingFOVChange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ScopeMagnification_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The Magnification of the scope */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The Magnification of the scope" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ScopeMagnification = { "ScopeMagnification", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, ScopeMagnification), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ScopeMagnification_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ScopeMagnification_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_UnmagnifiedLFoV_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The linear FOV at a magnification of 1x */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The linear FOV at a magnification of 1x" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_UnmagnifiedLFoV = { "UnmagnifiedLFoV", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, UnmagnifiedLFoV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_UnmagnifiedLFoV_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_UnmagnifiedLFoV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleLocation_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The name of the socket which denotes the end of the muzzle (used for gunfire) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The name of the socket which denotes the end of the muzzle (used for gunfire)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, MuzzleLocation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleLocation_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ParticleSpawnLocation_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The name of the socket at which to spawn particles for muzzle flash */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The name of the socket at which to spawn particles for muzzle flash" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ParticleSpawnLocation = { "ParticleSpawnLocation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, ParticleSpawnLocation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ParticleSpawnLocation_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ParticleSpawnLocation_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AmmoToUse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AmmoToUse_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The ammunition type to be used (Spawned on the pickup) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The ammunition type to be used (Spawned on the pickup)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AmmoToUse = { "AmmoToUse", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, AmmoToUse), Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AmmoToUse_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AmmoToUse_MetaData) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipCapacity_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The clip capacity of the weapon (Spawned on the pickup) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The clip capacity of the weapon (Spawned on the pickup)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipCapacity = { "ClipCapacity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, ClipCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipCapacity_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipCapacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipSize_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The clip size of the weapon (Spawned on the pickup) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The clip size of the weapon (Spawned on the pickup)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, ClipSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipSize_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RateOfFire_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The rate of fire (In rounds per minute/RPM) of the weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The rate of fire (In rounds per minute/RPM) of the weapon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RateOfFire = { "RateOfFire", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, RateOfFire), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RateOfFire_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RateOfFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutomaticFire_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** Whether this weapon supports automatic fire */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether this weapon supports automatic fire" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutomaticFire_SetBit(void* Obj)
	{
		((FStaticWeaponData*)Obj)->bAutomaticFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutomaticFire = { "bAutomaticFire", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStaticWeaponData), &Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutomaticFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutomaticFire_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutomaticFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_VerticalRecoilCurve_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The vertical recoil curve to be used with this weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The vertical recoil curve to be used with this weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_VerticalRecoilCurve = { "VerticalRecoilCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, VerticalRecoilCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_VerticalRecoilCurve_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_VerticalRecoilCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HorizontalRecoilCurve_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The horizontal recoil curve to be used with this weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The horizontal recoil curve to be used with this weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HorizontalRecoilCurve = { "HorizontalRecoilCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, HorizontalRecoilCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HorizontalRecoilCurve_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HorizontalRecoilCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RecoilCameraShake_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The camera shake to be applied to the recoil from this weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The camera shake to be applied to the recoil from this weapon" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RecoilCameraShake = { "RecoilCameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, RecoilCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RecoilCameraShake_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RecoilCameraShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunRange_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The range of the shotgun shells of this weapon */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The range of the shotgun shells of this weapon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunRange = { "ShotgunRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, ShotgunRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunRange_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunPellets_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The amount of pellets fired */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The amount of pellets fired" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunPellets = { "ShotgunPellets", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, ShotgunPellets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunPellets_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunPellets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AccuracyDebuff_MetaData[] = {
		{ "Category", "Unique Weapon (No Attachments)" },
		{ "Comment", "/** The increase in shot variation when the player is not aiming down the sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The increase in shot variation when the player is not aiming down the sights" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AccuracyDebuff = { "AccuracyDebuff", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, AccuracyDebuff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AccuracyDebuff_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AccuracyDebuff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_NormalDamageSurface_MetaData[] = {
		{ "Category", "Damage Surfaces" },
		{ "Comment", "/** surface (physical material) for areas which should spawn blood particles when hit and receive normal damage (equivalent to the baseDamage variable) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "surface (physical material) for areas which should spawn blood particles when hit and receive normal damage (equivalent to the baseDamage variable)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_NormalDamageSurface = { "NormalDamageSurface", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, NormalDamageSurface), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_NormalDamageSurface_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_NormalDamageSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotDamageSurface_MetaData[] = {
		{ "Category", "Damage Surfaces" },
		{ "Comment", "/** surface (physical material) for areas which should spawn blood particles when hit and receive boosted damage (equivalent to the baseDamage variable multiplied by the headshotMultiplier) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "surface (physical material) for areas which should spawn blood particles when hit and receive boosted damage (equivalent to the baseDamage variable multiplied by the headshotMultiplier)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotDamageSurface = { "HeadshotDamageSurface", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, HeadshotDamageSurface), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotDamageSurface_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotDamageSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundSurface_MetaData[] = {
		{ "Category", "Damage Surfaces" },
		{ "Comment", "/** surface (physical material) for areas which should spawn ground particles when hit) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "surface (physical material) for areas which should spawn ground particles when hit)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundSurface = { "GroundSurface", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, GroundSurface), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundSurface_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockSurface_MetaData[] = {
		{ "Category", "Damage Surfaces" },
		{ "Comment", "/** surface (physical material) for areas which should spawn rock particles when hit) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "surface (physical material) for areas which should spawn rock particles when hit)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockSurface = { "RockSurface", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, RockSurface), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockSurface_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EnemyHitEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "Comment", "/** particle effect (Niagara system) to be spawned when an enemy is hit */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "particle effect (Niagara system) to be spawned when an enemy is hit" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EnemyHitEffect = { "EnemyHitEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, EnemyHitEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EnemyHitEffect_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EnemyHitEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundHitEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "Comment", "/** particle effect (Niagara system) to be spawned when the ground is hit */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "particle effect (Niagara system) to be spawned when the ground is hit" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundHitEffect = { "GroundHitEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, GroundHitEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundHitEffect_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundHitEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockHitEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "Comment", "/** particle effect (Niagara system) to be spawned when a rock is hit */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "particle effect (Niagara system) to be spawned when a rock is hit" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockHitEffect = { "RockHitEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, RockHitEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockHitEffect_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockHitEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_DefaultHitEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "Comment", "/** particle effect (Niagara system) to be spawned when no defined type is hit */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "particle effect (Niagara system) to be spawned when no defined type is hit" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_DefaultHitEffect = { "DefaultHitEffect", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, DefaultHitEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_DefaultHitEffect_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_DefaultHitEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "VFX" },
		{ "Comment", "/** particle effect to be spawned at the muzzle when a shot is fired */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "particle effect to be spawned at the muzzle when a shot is fired" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, MuzzleFlash), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleFlash_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BulletTrace_MetaData[] = {
		{ "Category", "VFX" },
		{ "Comment", "/** particle effect to be spawned at the muzzle that shows the path of the bullet */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "particle effect to be spawned at the muzzle that shows the path of the bullet" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BulletTrace = { "BulletTrace", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, BulletTrace), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BulletTrace_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BulletTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Sound bases" },
		{ "Comment", "/** Firing sound */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Firing sound" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_FireSound_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_FireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_SilencedSound_MetaData[] = {
		{ "Category", "Sound bases" },
		{ "Comment", "/** Silenced firing sound */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Silenced firing sound" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_SilencedSound = { "SilencedSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, SilencedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_SilencedSound_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_SilencedSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyFireSound_MetaData[] = {
		{ "Category", "Sound bases" },
		{ "Comment", "/** Empty firing sound */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Empty firing sound" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyFireSound = { "EmptyFireSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, EmptyFireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyFireSound_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyFireSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** The name of this weapon, to be used for UI */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The name of this weapon, to be used for UI" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponName_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponIcon_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** A display image associated with this weapon which can be used for UI */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "A display image associated with this weapon which can be used for UI" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponIcon = { "WeaponIcon", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStaticWeaponData, WeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponIcon_MetaData), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponIcon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticWeaponData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PickupReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponAttachmentSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponDegradationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponPitchVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponYawVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bHasAttachments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AttachmentsDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BS_Ads_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Ads_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Jump_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Fall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyWeaponReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyPlayerReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_PlayerReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsInspect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponInspect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_Anim_Sprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_LastWeaponShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HandsADSShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponEquip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponUnequip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bCanBeChambered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bSilenced,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bWaitForAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bPreventRapidManualFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutoFireAfterReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bIsShotgun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAimingFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AimingFOVChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ScopeMagnification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_UnmagnifiedLFoV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ParticleSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AmmoToUse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AmmoToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ClipSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RateOfFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_bAutomaticFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_VerticalRecoilCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HorizontalRecoilCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RecoilCameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_ShotgunPellets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_AccuracyDebuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_NormalDamageSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_HeadshotDamageSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EnemyHitEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_GroundHitEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_RockHitEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_DefaultHitEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_BulletTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_SilencedSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_EmptyFireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewProp_WeaponIcon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StaticWeaponData",
		Z_Construct_UScriptStruct_FStaticWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::PropPointers),
		sizeof(FStaticWeaponData),
		alignof(FStaticWeaponData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStaticWeaponData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticWeaponData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStaticWeaponData()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticWeaponData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FStaticWeaponData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticWeaponData.InnerSingleton;
	}
	DEFINE_FUNCTION(AWeaponBase::execHandleRecoveryProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleRecoveryProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execGetVerticalCameraOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVerticalCameraOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execGetMainMeshComp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMainMeshComp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execGetWeaponAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHandsAnimSet*)Z_Param__Result=P_THIS->GetWeaponAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWeaponBase::execSetShowDebug)
	{
		P_GET_UBOOL(Z_Param_IsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowDebug(Z_Param_IsVisible);
		P_NATIVE_END;
	}
	static FName NAME_AWeaponBase_FinishReload = FName(TEXT("FinishReload"));
	void AWeaponBase::FinishReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_FinishReload),NULL);
	}
	static FName NAME_AWeaponBase_GunFired = FName(TEXT("GunFired"));
	void AWeaponBase::GunFired()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_GunFired),NULL);
	}
	static FName NAME_AWeaponBase_StartReload = FName(TEXT("StartReload"));
	void AWeaponBase::StartReload()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponBase_StartReload),NULL);
	}
	void AWeaponBase::StaticRegisterNativesAWeaponBase()
	{
		UClass* Class = AWeaponBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainMeshComp", &AWeaponBase::execGetMainMeshComp },
			{ "GetVerticalCameraOffset", &AWeaponBase::execGetVerticalCameraOffset },
			{ "GetWeaponAnimations", &AWeaponBase::execGetWeaponAnimations },
			{ "HandleRecoveryProgress", &AWeaponBase::execHandleRecoveryProgress },
			{ "SetShowDebug", &AWeaponBase::execSetShowDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponBase_FinishReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_FinishReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_FinishReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "FinishReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_FinishReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_FinishReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeaponBase_FinishReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_FinishReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics
	{
		struct WeaponBase_eventGetMainMeshComp_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetMainMeshComp_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetMainMeshComp", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::WeaponBase_eventGetMainMeshComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::WeaponBase_eventGetMainMeshComp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeaponBase_GetMainMeshComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetMainMeshComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics
	{
		struct WeaponBase_eventGetVerticalCameraOffset_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetVerticalCameraOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "Comment", "/** Returns the vertical camera offset for this weapon instance */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Returns the vertical camera offset for this weapon instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetVerticalCameraOffset", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::WeaponBase_eventGetVerticalCameraOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::WeaponBase_eventGetVerticalCameraOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics
	{
		struct WeaponBase_eventGetWeaponAnimations_Parms
		{
			FHandsAnimSet ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetWeaponAnimations_Parms, ReturnValue), Z_Construct_UScriptStruct_FHandsAnimSet, METADATA_PARAMS(0, nullptr) }; // 4236425574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "Comment", "/** Returns the character's set of animations */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Returns the character's set of animations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetWeaponAnimations", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::WeaponBase_eventGetWeaponAnimations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::WeaponBase_eventGetWeaponAnimations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_GunFired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_GunFired_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GunFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GunFired", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GunFired_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GunFired_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeaponBase_GunFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GunFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics
	{
		struct WeaponBase_eventHandleRecoveryProgress_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventHandleRecoveryProgress_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Interpolates the player back to their initial view vector */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Interpolates the player back to their initial view vector" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "HandleRecoveryProgress", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::WeaponBase_eventHandleRecoveryProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::WeaponBase_eventHandleRecoveryProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics
	{
		struct WeaponBase_eventSetShowDebug_Parms
		{
			bool IsVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsVisible_MetaData[];
#endif
		static void NewProp_IsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::NewProp_IsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::NewProp_IsVisible_SetBit(void* Obj)
	{
		((WeaponBase_eventSetShowDebug_Parms*)Obj)->IsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventSetShowDebug_Parms), &Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::NewProp_IsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::NewProp_IsVisible_MetaData), Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::NewProp_IsVisible_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::NewProp_IsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "SetShowDebug", nullptr, nullptr, Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::WeaponBase_eventSetShowDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::WeaponBase_eventSetShowDebug_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AWeaponBase_SetShowDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_SetShowDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWeaponBase_StartReload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponBase_StartReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_StartReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "StartReload", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StartReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_StartReload_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeaponBase_StartReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_StartReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponBase);
	UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
	{
		return AWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarrelAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BarrelAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagazineAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MagazineAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightsAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SightsAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StockAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StockAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GripAttachment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GripAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopeFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScopeFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTableNameRef_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataTableNameRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[];
#endif
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawObstructiveDebugs_MetaData[];
#endif
		static void NewProp_bDrawObstructiveDebugs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawObstructiveDebugs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecoveryCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EjectedCasing_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EjectedCasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalRecoilCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalRecoilCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRecoilCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalRecoilCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCameraOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalCameraOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponEquip_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponEquip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkBlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WalkBlendSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ADSWalkBlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ADSWalkBlendSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Sprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Sprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_ADS_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_ADS_Idle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_Start_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Jump_End_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Jump_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Fall_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Fall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyWeaponReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyWeaponReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyPlayerReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyPlayerReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerReload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerReload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_FinishReload, "FinishReload" }, // 3758410538
		{ &Z_Construct_UFunction_AWeaponBase_GetMainMeshComp, "GetMainMeshComp" }, // 155414854
		{ &Z_Construct_UFunction_AWeaponBase_GetVerticalCameraOffset, "GetVerticalCameraOffset" }, // 1904794171
		{ &Z_Construct_UFunction_AWeaponBase_GetWeaponAnimations, "GetWeaponAnimations" }, // 3391669076
		{ &Z_Construct_UFunction_AWeaponBase_GunFired, "GunFired" }, // 1246934705
		{ &Z_Construct_UFunction_AWeaponBase_HandleRecoveryProgress, "HandleRecoveryProgress" }, // 1196859625
		{ &Z_Construct_UFunction_AWeaponBase_SetShowDebug, "SetShowDebug" }, // 2039047740
		{ &Z_Construct_UFunction_AWeaponBase_StartReload, "StartReload" }, // 2111308855
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponBase.h" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The main skeletal mesh - holds the weapon model */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The main skeletal mesh - holds the weapon model" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_BarrelAttachment_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The skeletal mesh used to hold the current barrel attachment */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The skeletal mesh used to hold the current barrel attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_BarrelAttachment = { "BarrelAttachment", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, BarrelAttachment), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_BarrelAttachment_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_BarrelAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineAttachment_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The skeletal mesh used to hold the current magazine attachment */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The skeletal mesh used to hold the current magazine attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineAttachment = { "MagazineAttachment", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, MagazineAttachment), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineAttachment_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_SightsAttachment_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The skeletal mesh used to hold the current sights attachment */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The skeletal mesh used to hold the current sights attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_SightsAttachment = { "SightsAttachment", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, SightsAttachment), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_SightsAttachment_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_SightsAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_StockAttachment_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The skeletal mesh used to hold the current stock attachment */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The skeletal mesh used to hold the current stock attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_StockAttachment = { "StockAttachment", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, StockAttachment), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_StockAttachment_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_StockAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_GripAttachment_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The skeletal mesh used to hold the current grip attachment */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The skeletal mesh used to hold the current grip attachment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_GripAttachment = { "GripAttachment", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, GripAttachment), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_GripAttachment_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_GripAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_ScopeFrameRate_MetaData[] = {
		{ "Category", "Temp" },
		{ "Comment", "/** The framerate that the scope widget renders at. Cannot be faster than the game framerate - if so it will render\n\x09 *\x09""at the game's framerate */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The framerate that the scope widget renders at. Cannot be faster than the game framerate - if so it will render\n    at the game's framerate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ScopeFrameRate = { "ScopeFrameRate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ScopeFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ScopeFrameRate_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_ScopeFrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable_MetaData[] = {
		{ "Category", "Data | Data Table" },
		{ "Comment", "/** Data table reference */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Data table reference" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable = { "WeaponDataTable", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_DataTableNameRef_MetaData[] = {
		{ "Category", "Data | Data Table" },
		{ "Comment", "/** The Key reference to the weapon data table */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The Key reference to the weapon data table" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_DataTableNameRef = { "DataTableNameRef", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, DataTableNameRef), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_DataTableNameRef_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_DataTableNameRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_bShowDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug boolean, toggle for debug strings and line traces to be shown */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Debug boolean, toggle for debug strings and line traces to be shown" },
	};
#endif
	void Z_Construct_UClass_AWeaponBase_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((AWeaponBase*)Obj)->bShowDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bShowDebug_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_bShowDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_bDrawObstructiveDebugs_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Whether to draw debugs that obstruct the screen (such as more informative weapon tracing information) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Whether to draw debugs that obstruct the screen (such as more informative weapon tracing information)" },
	};
#endif
	void Z_Construct_UClass_AWeaponBase_Statics::NewProp_bDrawObstructiveDebugs_SetBit(void* Obj)
	{
		((AWeaponBase*)Obj)->bDrawObstructiveDebugs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bDrawObstructiveDebugs = { "bDrawObstructiveDebugs", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_bDrawObstructiveDebugs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_bDrawObstructiveDebugs_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_bDrawObstructiveDebugs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Data | Damage" },
		{ "Comment", "/** damage type (set in blueprints) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "damage type (set in blueprints)" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageType_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoveryCurve_MetaData[] = {
		{ "Category", "Data | Recoil Recovery" },
		{ "Comment", "/** The curve for recovery */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The curve for recovery" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoveryCurve = { "RecoveryCurve", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RecoveryCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoveryCurve_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoveryCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_EjectedCasing_MetaData[] = {
		{ "Category", "Particles" },
		{ "Comment", "/** The ejected casing particle effect to be played after each shot */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The ejected casing particle effect to be played after each shot" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_EjectedCasing = { "EjectedCasing", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, EjectedCasing), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_EjectedCasing_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_EjectedCasing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Hit_MetaData[] = {
		{ "Comment", "/** hit result variable set when a line trace is spawned */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "hit result variable set when a line trace is spawned" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Hit_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_Hit_MetaData) }; // 1891709922
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalRecoilCurve_MetaData[] = {
		{ "Comment", "/** The curve for vertical recoil (set from WeaponData) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The curve for vertical recoil (set from WeaponData)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalRecoilCurve = { "VerticalRecoilCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, VerticalRecoilCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalRecoilCurve_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalRecoilCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_HorizontalRecoilCurve_MetaData[] = {
		{ "Comment", "/** The curve for horizontal recoil (set from WeaponData) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The curve for horizontal recoil (set from WeaponData)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_HorizontalRecoilCurve = { "HorizontalRecoilCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, HorizontalRecoilCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_HorizontalRecoilCurve_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_HorizontalRecoilCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalCameraOffset_MetaData[] = {
		{ "Comment", "/** The offset given to the camera in order to align the gun sights */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "The offset given to the camera in order to align the gun sights" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalCameraOffset = { "VerticalCameraOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, VerticalCameraOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalCameraOffset_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalCameraOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponEquip_MetaData[] = {
		{ "Comment", "/** Local instances of animations for use in AnimBP (Set from WeaponData and/or Attachments) */" },
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
		{ "ToolTip", "Local instances of animations for use in AnimBP (Set from WeaponData and/or Attachments)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponEquip = { "WeaponEquip", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponEquip), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponEquip_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponEquip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WalkBlendSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WalkBlendSpace = { "WalkBlendSpace", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WalkBlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WalkBlendSpace_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_WalkBlendSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_ADSWalkBlendSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ADSWalkBlendSpace = { "ADSWalkBlendSpace", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ADSWalkBlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_ADSWalkBlendSpace_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_ADSWalkBlendSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Idle_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Idle = { "Anim_Idle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Anim_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Idle_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Sprint_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Sprint = { "Anim_Sprint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Anim_Sprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Sprint_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Sprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_ADS_Idle_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_ADS_Idle = { "Anim_ADS_Idle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Anim_ADS_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_ADS_Idle_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_ADS_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_Start_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_Start = { "Anim_Jump_Start", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Anim_Jump_Start), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_Start_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_End_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_End = { "Anim_Jump_End", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Anim_Jump_End), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_End_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_End_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Fall_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Fall = { "Anim_Fall", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Anim_Fall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Fall_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Fall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyWeaponReload_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyWeaponReload = { "EmptyWeaponReload", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, EmptyWeaponReload), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyWeaponReload_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyWeaponReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponReload_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponReload = { "WeaponReload", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponReload), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponReload_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyPlayerReload_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyPlayerReload = { "EmptyPlayerReload", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, EmptyPlayerReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyPlayerReload_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyPlayerReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayerReload_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeaponBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayerReload = { "PlayerReload", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, PlayerReload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayerReload_MetaData), Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayerReload_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_BarrelAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_MagazineAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_SightsAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_StockAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_GripAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ScopeFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_DataTableNameRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bShowDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bDrawObstructiveDebugs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RecoveryCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_EjectedCasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalRecoilCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_HorizontalRecoilCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_VerticalCameraOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponEquip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WalkBlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ADSWalkBlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Sprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_ADS_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Jump_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Anim_Fall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyWeaponReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_EmptyPlayerReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayerReload,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
		&AWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeaponBase()
	{
		if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AWeaponBase>()
	{
		return AWeaponBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
	AWeaponBase::~AWeaponBase() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::EnumInfo[] = {
		{ EAmmoType_StaticEnum, TEXT("EAmmoType"), &Z_Registration_Info_UEnum_EAmmoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 118655827U) },
		{ EAttachmentType_StaticEnum, TEXT("EAttachmentType"), &Z_Registration_Info_UEnum_EAttachmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2467205341U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::ScriptStructInfo[] = {
		{ FHandsAnimSet::StaticStruct, Z_Construct_UScriptStruct_FHandsAnimSet_Statics::NewStructOps, TEXT("HandsAnimSet"), &Z_Registration_Info_UScriptStruct_HandsAnimSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHandsAnimSet), 4236425574U) },
		{ FRuntimeWeaponData::StaticStruct, Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics::NewStructOps, TEXT("RuntimeWeaponData"), &Z_Registration_Info_UScriptStruct_RuntimeWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeWeaponData), 4138968257U) },
		{ FAttachmentData::StaticStruct, Z_Construct_UScriptStruct_FAttachmentData_Statics::NewStructOps, TEXT("AttachmentData"), &Z_Registration_Info_UScriptStruct_AttachmentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttachmentData), 63555279U) },
		{ FStaticWeaponData::StaticStruct, Z_Construct_UScriptStruct_FStaticWeaponData_Statics::NewStructOps, TEXT("StaticWeaponData"), &Z_Registration_Info_UScriptStruct_StaticWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticWeaponData), 3290609762U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 4204362257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_3261549166(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
