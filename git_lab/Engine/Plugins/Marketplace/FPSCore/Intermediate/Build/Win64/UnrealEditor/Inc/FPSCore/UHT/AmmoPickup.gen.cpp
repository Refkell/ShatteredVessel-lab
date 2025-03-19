// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/AmmoPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AAmmoPickup();
	FPSCORE_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionBase();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAmmoAmount();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAmmoType();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoTypeData();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmmoAmount;
	static UEnum* EAmmoAmount_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAmmoAmount.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAmmoAmount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EAmmoAmount, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("EAmmoAmount"));
		}
		return Z_Registration_Info_UEnum_EAmmoAmount.OuterSingleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EAmmoAmount>()
	{
		return EAmmoAmount_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::Enumerators[] = {
		{ "EAmmoAmount::Low", (int64)EAmmoAmount::Low },
		{ "EAmmoAmount::Medium", (int64)EAmmoAmount::Medium },
		{ "EAmmoAmount::High", (int64)EAmmoAmount::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum for the ammo amounts that a pickup can have */" },
		{ "High.DisplayName", "High Ammo" },
		{ "High.Name", "EAmmoAmount::High" },
		{ "Low.DisplayName", "Low Ammo" },
		{ "Low.Name", "EAmmoAmount::Low" },
		{ "Medium.DisplayName", "Medium Ammo" },
		{ "Medium.Name", "EAmmoAmount::Medium" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Enum for the ammo amounts that a pickup can have" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		"EAmmoAmount",
		"EAmmoAmount",
		Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FPSCore_EAmmoAmount()
	{
		if (!Z_Registration_Info_UEnum_EAmmoAmount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmmoAmount.InnerSingleton, Z_Construct_UEnum_FPSCore_EAmmoAmount_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAmmoAmount.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AmmoTypeData;
class UScriptStruct* FAmmoTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AmmoTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AmmoTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoTypeData, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("AmmoTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_AmmoTypeData.OuterSingleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FAmmoTypeData>()
{
	return FAmmoTypeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAmmoTypeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FullAmmoBoxes_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FullAmmoBoxes_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FullAmmoBoxes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullAmmoBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FullAmmoBoxes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyAmmoBoxes_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmptyAmmoBoxes_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmptyAmmoBoxes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyAmmoBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EmptyAmmoBoxes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoCounts_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoCounts_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoCounts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoCounts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AmmoCounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PickupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that keeps track of all our data per ammo type */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Struct that keeps track of all our data per ammo type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmoTypeData>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_ValueProp = { "FullAmmoBoxes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp = { "FullAmmoBoxes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(0, nullptr) }; // 3966453154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_MetaData[] = {
		{ "Category", "Ammo Pickup" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes = { "FullAmmoBoxes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmoTypeData, FullAmmoBoxes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_MetaData), Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_MetaData) }; // 3966453154
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_ValueProp = { "EmptyAmmoBoxes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp = { "EmptyAmmoBoxes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(0, nullptr) }; // 3966453154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_MetaData[] = {
		{ "Category", "Ammo Pickup" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes = { "EmptyAmmoBoxes", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmoTypeData, EmptyAmmoBoxes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_MetaData), Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_MetaData) }; // 3966453154
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_ValueProp = { "AmmoCounts", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp = { "AmmoCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(0, nullptr) }; // 3966453154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_MetaData[] = {
		{ "Category", "Ammo Pickup" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts = { "AmmoCounts", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmoTypeData, AmmoCounts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_MetaData), Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_MetaData) }; // 3966453154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_PickupName_MetaData[] = {
		{ "Category", "Ammo Pickup" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_PickupName = { "PickupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAmmoTypeData, PickupName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_PickupName_MetaData), Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_PickupName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmoTypeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_PickupName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		&NewStructOps,
		"AmmoTypeData",
		Z_Construct_UScriptStruct_FAmmoTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::PropPointers),
		sizeof(FAmmoTypeData),
		alignof(FAmmoTypeData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAmmoTypeData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAmmoTypeData()
	{
		if (!Z_Registration_Info_UScriptStruct_AmmoTypeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AmmoTypeData.InnerSingleton, Z_Construct_UScriptStruct_FAmmoTypeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AmmoTypeData.InnerSingleton;
	}
	void AAmmoPickup::StaticRegisterNativesAAmmoPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoPickup);
	UClass* Z_Construct_UClass_AAmmoPickup_NoRegister()
	{
		return AAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PickupName_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PickupName_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PickupName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PickupName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmmoData_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoData_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AmmoData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoAmount_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoAmount_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoAmount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInfinite_MetaData[];
#endif
		static void NewProp_bInfinite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfinite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupSFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSFX;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AmmoPickup.h" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_ValueProp = { "PickupName", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp = { "PickupName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(0, nullptr) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** Map to keep track of the name showed to the player for each ammo type */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Please set pickup names in AmmoData instead." },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Map to keep track of the name showed to the player for each ammo type" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName = { "PickupName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, PickupName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_MetaData) }; // 118655827
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_ValueProp = { "AmmoData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAmmoTypeData, METADATA_PARAMS(0, nullptr) }; // 632220360
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp = { "AmmoData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(0, nullptr) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Map to keep track of all values for the meshes and ammo counts */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Map to keep track of all values for the meshes and ammo counts" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, AmmoData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_MetaData) }; // 118655827 632220360
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The amount of ammo (low/medium/high that this instance should have */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "The amount of ammo (low/medium/high that this instance should have" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, AmmoAmount), Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_MetaData) }; // 3966453154
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The type of ammo that this instance should have */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "The type of ammo that this instance should have" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, AmmoType), Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_MetaData) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Whether this is an infinite ammo box or not */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Whether this is an infinite ammo box or not" },
	};
#endif
	void Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_SetBit(void* Obj)
	{
		((AAmmoPickup*)Obj)->bInfinite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite = { "bInfinite", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAmmoPickup), &Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Whether debug print statements should be shown */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Whether debug print statements should be shown" },
	};
#endif
	void Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((AAmmoPickup*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAmmoPickup), &Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX_MetaData[] = {
		{ "Category", "Sound bases" },
		{ "Comment", "/** The sound effect to play when ammunition is collected */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "The sound effect to play when ammunition is collected" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX = { "PickupSFX", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoPickup, PickupSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX_MetaData), Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickup_Statics::ClassParams = {
		&AAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmoPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAmmoPickup()
	{
		if (!Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton, Z_Construct_UClass_AAmmoPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAmmoPickup.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AAmmoPickup>()
	{
		return AAmmoPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickup);
	AAmmoPickup::~AAmmoPickup() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::EnumInfo[] = {
		{ EAmmoAmount_StaticEnum, TEXT("EAmmoAmount"), &Z_Registration_Info_UEnum_EAmmoAmount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3966453154U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::ScriptStructInfo[] = {
		{ FAmmoTypeData::StaticStruct, Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewStructOps, TEXT("AmmoTypeData"), &Z_Registration_Info_UScriptStruct_AmmoTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAmmoTypeData), 632220360U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoPickup, AAmmoPickup::StaticClass, TEXT("AAmmoPickup"), &Z_Registration_Info_UClass_AAmmoPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoPickup), 2660205655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_3351031184(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
