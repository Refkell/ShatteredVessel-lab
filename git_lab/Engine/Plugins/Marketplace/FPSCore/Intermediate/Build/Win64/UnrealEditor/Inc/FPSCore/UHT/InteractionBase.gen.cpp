// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/InteractionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionBase();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionBase_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	void AInteractionBase::StaticRegisterNativesAInteractionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionBase);
	UClass* Z_Construct_UClass_AInteractionBase_NoRegister()
	{
		return AInteractionBase::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionBase.h" },
		{ "ModuleRelativePath", "Public/InteractionBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionBase_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The mesh which to render */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionBase.h" },
		{ "ToolTip", "The mesh which to render" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractionBase, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionBase_Statics::NewProp_MeshComp_MetaData), Z_Construct_UClass_AInteractionBase_Statics::NewProp_MeshComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractionBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionBase_Statics::NewProp_MeshComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractionBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractionBase, IInteractInterface), false },  // 4208095334
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionBase_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionBase_Statics::ClassParams = {
		&AInteractionBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractionBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractionBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AInteractionBase()
	{
		if (!Z_Registration_Info_UClass_AInteractionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionBase.OuterSingleton, Z_Construct_UClass_AInteractionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractionBase.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AInteractionBase>()
	{
		return AInteractionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionBase);
	AInteractionBase::~AInteractionBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionBase, AInteractionBase::StaticClass, TEXT("AInteractionBase"), &Z_Registration_Info_UClass_AInteractionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionBase), 4138130930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionBase_h_611133602(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
