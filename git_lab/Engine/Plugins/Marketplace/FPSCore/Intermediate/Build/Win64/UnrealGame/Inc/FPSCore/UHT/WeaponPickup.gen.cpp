// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/WeaponPickup.h"
#include "FPSCore/Public/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPickup() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionBase();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponPickup();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeWeaponData();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponPickup::execSpawnAttachmentMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAttachmentMesh();
		P_NATIVE_END;
	}
	void AWeaponPickup::StaticRegisterNativesAWeaponPickup()
	{
		UClass* Class = AWeaponPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnAttachmentMesh", &AWeaponPickup::execSpawnAttachmentMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Pickup" },
		{ "Comment", "/** Spawns attachment meshes from data table */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Spawns attachment meshes from data table" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "SpawnAttachmentMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponPickup);
	UClass* Z_Construct_UClass_AWeaponPickup_NoRegister()
	{
		return AWeaponPickup::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentArrayOverride_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentArrayOverride_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachmentArrayOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponReference_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentsDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentsDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStatic_MetaData[];
#endif
		static void NewProp_bStatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_WeaponName;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh, "SpawnAttachmentMesh" }, // 3693474529
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponPickup.h" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_Inner = { "AttachmentArrayOverride", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** The array of attachments to spawn (usually inherited, can be set by instance) */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "The array of attachments to spawn (usually inherited, can be set by instance)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride = { "AttachmentArrayOverride", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, AttachmentArrayOverride), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Weapon to spawn when picked up */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Weapon to spawn when picked up" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference = { "WeaponReference", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, WeaponReference), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct_MetaData[] = {
		{ "Comment", "/** Local weapon data struct to keep track of ammo amounts and weapon health */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Local weapon data struct to keep track of ammo amounts and weapon health" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct = { "DataStruct", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, DataStruct), Z_Construct_UScriptStruct_FRuntimeWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct_MetaData) }; // 4138968257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable_MetaData[] = {
		{ "Category", "Data Table" },
		{ "Comment", "/** Data table reference for weapon (used to see if the weapon has attachments) */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Data table reference for weapon (used to see if the weapon has attachments)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable = { "WeaponDataTable", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, WeaponDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable_MetaData[] = {
		{ "Category", "Data Table" },
		{ "Comment", "/** Data table reference for attachments */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Data table reference for attachments" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable = { "AttachmentsDataTable", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, AttachmentsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Whether to run physics simulations or not */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Whether to run physics simulations or not" },
	};
#endif
	void Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_SetBit(void* Obj)
	{
		((AWeaponPickup*)Obj)->bStatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic = { "bStatic", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponPickup), &Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** Visualisation name */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Visualisation name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, WeaponName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment_MetaData[] = {
		{ "Comment", "/** Meshes for Attachments */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Meshes for Attachments" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment = { "BarrelAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, BarrelAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment = { "MagazineAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, MagazineAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment = { "SightsAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, SightsAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment = { "StockAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, StockAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment = { "GripAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponPickup, GripAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment_MetaData), Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPickup_Statics::ClassParams = {
		&AWeaponPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeaponPickup()
	{
		if (!Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton, Z_Construct_UClass_AWeaponPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AWeaponPickup>()
	{
		return AWeaponPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPickup);
	AWeaponPickup::~AWeaponPickup() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponPickup, AWeaponPickup::StaticClass, TEXT("AWeaponPickup"), &Z_Registration_Info_UClass_AWeaponPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponPickup), 1145462224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_2406353205(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
