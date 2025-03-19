// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/InteractionActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractedActor_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionActor();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionActor_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionBase();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	DEFINE_FUNCTION(AInteractionActor::execUpdateInteractionPopupText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewInteractionText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInteractionPopupText(Z_Param_NewInteractionText);
		P_NATIVE_END;
	}
	struct InteractionActor_eventOnInteraction_Parms
	{
		AActor* ImplementedActor;
	};
	static FName NAME_AInteractionActor_InteractionCompleted = FName(TEXT("InteractionCompleted"));
	void AInteractionActor::InteractionCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractionActor_InteractionCompleted),NULL);
	}
	static FName NAME_AInteractionActor_OnInteraction = FName(TEXT("OnInteraction"));
	void AInteractionActor::OnInteraction(AActor* ImplementedActor)
	{
		InteractionActor_eventOnInteraction_Parms Parms;
		Parms.ImplementedActor=ImplementedActor;
		ProcessEvent(FindFunctionChecked(NAME_AInteractionActor_OnInteraction),&Parms);
	}
	void AInteractionActor::StaticRegisterNativesAInteractionActor()
	{
		UClass* Class = AInteractionActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateInteractionPopupText", &AInteractionActor::execUpdateInteractionPopupText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the interaction is completed\n" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "Called when the interaction is completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActor, nullptr, "InteractionCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AInteractionActor_InteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImplementedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::NewProp_ImplementedActor = { "ImplementedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionActor_eventOnInteraction_Parms, ImplementedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::NewProp_ImplementedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called for every item interacted with\n" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "Called for every item interacted with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActor, nullptr, "OnInteraction", nullptr, nullptr, Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::PropPointers), sizeof(InteractionActor_eventOnInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::PropPointers) < 2048);
	static_assert(sizeof(InteractionActor_eventOnInteraction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInteractionActor_OnInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics
	{
		struct InteractionActor_eventUpdateInteractionPopupText_Parms
		{
			FText NewInteractionText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInteractionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewInteractionText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::NewProp_NewInteractionText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::NewProp_NewInteractionText = { "NewInteractionText", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionActor_eventUpdateInteractionPopupText_Parms, NewInteractionText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::NewProp_NewInteractionText_MetaData), Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::NewProp_NewInteractionText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::NewProp_NewInteractionText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActor, nullptr, "UpdateInteractionPopupText", nullptr, nullptr, Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::PropPointers), sizeof(Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::InteractionActor_eventUpdateInteractionPopupText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::Function_MetaDataParams), Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::InteractionActor_eventUpdateInteractionPopupText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractionActor);
	UClass* Z_Construct_UClass_AInteractionActor_NoRegister()
	{
		return AInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractionActor_InteractionCompleted, "InteractionCompleted" }, // 3226314437
		{ &Z_Construct_UFunction_AInteractionActor_OnInteraction, "OnInteraction" }, // 2971905563
		{ &Z_Construct_UFunction_AInteractionActor_UpdateInteractionPopupText, "UpdateInteractionPopupText" }, // 224324335
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionActor.h" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_Inner = { "InteractedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AInteractedActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_MetaData[] = {
		{ "Category", "Interacted Actor" },
		{ "Comment", "// The actors to which we cast upon receiving an interaction\n" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "The actors to which we cast upon receiving an interaction" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors = { "InteractedActors", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractionActor, InteractedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_MetaData), Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionActor_Statics::ClassParams = {
		&AInteractionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractionActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AInteractionActor()
	{
		if (!Z_Registration_Info_UClass_AInteractionActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionActor.OuterSingleton, Z_Construct_UClass_AInteractionActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractionActor.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AInteractionActor>()
	{
		return AInteractionActor::StaticClass();
	}
	AInteractionActor::AInteractionActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionActor);
	AInteractionActor::~AInteractionActor() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionActor, AInteractionActor::StaticClass, TEXT("AInteractionActor"), &Z_Registration_Info_UClass_AInteractionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionActor), 2507795099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_2025679404(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
