// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/InteractedActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractedActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractedActor();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractedActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	static FName NAME_AInteractedActor_OnInteracted = FName(TEXT("OnInteracted"));
	void AInteractedActor::OnInteracted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractedActor_OnInteracted),NULL);
	}
	void AInteractedActor::StaticRegisterNativesAInteractedActor()
	{
	}
	struct Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function implemented in blueprints from which to perform logic\n" },
		{ "ModuleRelativePath", "Public/InteractedActor.h" },
		{ "ToolTip", "Function implemented in blueprints from which to perform logic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractedActor, nullptr, "OnInteracted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AInteractedActor_OnInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractedActor);
	UClass* Z_Construct_UClass_AInteractedActor_NoRegister()
	{
		return AInteractedActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractedActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractedActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractedActor_OnInteracted, "OnInteracted" }, // 2263348370
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractedActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractedActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractedActor.h" },
		{ "ModuleRelativePath", "Public/InteractedActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractedActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractedActor_Statics::ClassParams = {
		&AInteractedActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractedActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractedActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AInteractedActor()
	{
		if (!Z_Registration_Info_UClass_AInteractedActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractedActor.OuterSingleton, Z_Construct_UClass_AInteractedActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractedActor.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AInteractedActor>()
	{
		return AInteractedActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractedActor);
	AInteractedActor::~AInteractedActor() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractedActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractedActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractedActor, AInteractedActor::StaticClass, TEXT("AInteractedActor"), &Z_Registration_Info_UClass_AInteractedActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractedActor), 1313050087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractedActor_h_1942704845(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractedActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractedActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
