// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/FPSCharacterController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacterController();
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacterController_NoRegister();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAmmoType();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	void AFPSCharacterController::StaticRegisterNativesAFPSCharacterController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCharacterController);
	UClass* Z_Construct_UClass_AFPSCharacterController_NoRegister()
	{
		return AFPSCharacterController::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmmoMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmmoMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AmmoMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoBoxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoBoxCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FPSCharacterController.h" },
		{ "ModuleRelativePath", "Public/FPSCharacterController.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_ValueProp = { "AmmoMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp = { "AmmoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(0, nullptr) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Stored ammo data for the player character */" },
		{ "ModuleRelativePath", "Public/FPSCharacterController.h" },
		{ "ToolTip", "Stored ammo data for the player character" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap = { "AmmoMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacterController, AmmoMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_MetaData), Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_MetaData) }; // 118655827
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** The amount of ammunition boxes that the player has */" },
		{ "ModuleRelativePath", "Public/FPSCharacterController.h" },
		{ "ToolTip", "The amount of ammunition boxes that the player has" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount = { "AmmoBoxCount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacterController, AmmoBoxCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount_MetaData), Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacterController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacterController_Statics::ClassParams = {
		&AFPSCharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSCharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacterController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPSCharacterController()
	{
		if (!Z_Registration_Info_UClass_AFPSCharacterController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacterController.OuterSingleton, Z_Construct_UClass_AFPSCharacterController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSCharacterController.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AFPSCharacterController>()
	{
		return AFPSCharacterController::StaticClass();
	}
	AFPSCharacterController::AFPSCharacterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacterController);
	AFPSCharacterController::~AFPSCharacterController() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacterController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacterController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacterController, AFPSCharacterController::StaticClass, TEXT("AFPSCharacterController"), &Z_Registration_Info_UClass_AFPSCharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacterController), 2536442185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacterController_h_146832131(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacterController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacterController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
