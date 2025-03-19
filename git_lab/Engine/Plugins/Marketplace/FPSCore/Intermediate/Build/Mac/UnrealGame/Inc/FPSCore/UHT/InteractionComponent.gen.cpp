// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/Components/InteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionBase_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInteractionComponent();
	FPSCORE_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	FPSCORE_API UFunction* Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics
	{
		struct _Script_FPSCore_eventGetCurrentHitActorSignature_Parms
		{
			AInteractionBase* HitInteractionBase;
			bool bIsValid;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitInteractionBase;
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::NewProp_HitInteractionBase = { "HitInteractionBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FPSCore_eventGetCurrentHitActorSignature_Parms, HitInteractionBase), Z_Construct_UClass_AInteractionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((_Script_FPSCore_eventGetCurrentHitActorSignature_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_FPSCore_eventGetCurrentHitActorSignature_Parms), &Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::NewProp_HitInteractionBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::NewProp_bIsValid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPSCore, nullptr, "GetCurrentHitActorSignature__DelegateSignature", "InteractionComponent", "GetCurrentHitActor", Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::_Script_FPSCore_eventGetCurrentHitActorSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::_Script_FPSCore_eventGetCurrentHitActorSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGetCurrentHitActorSignature_DelegateWrapper(const FMulticastScriptDelegate& GetCurrentHitActorSignature, AInteractionBase* HitInteractionBase, bool bIsValid)
{
	struct _Script_FPSCore_eventGetCurrentHitActorSignature_Parms
	{
		AInteractionBase* HitInteractionBase;
		bool bIsValid;
	};
	_Script_FPSCore_eventGetCurrentHitActorSignature_Parms Parms;
	Parms.HitInteractionBase=HitInteractionBase;
	Parms.bIsValid=bIsValid ? true : false;
	GetCurrentHitActorSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInteractionComponent::execCanInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execGetInteractText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractText();
		P_NATIVE_END;
	}
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
		UClass* Class = UInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &UInteractionComponent::execCanInteract },
			{ "GetInteractText", &UInteractionComponent::execGetInteractText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics
	{
		struct InteractionComponent_eventCanInteract_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction Component" },
		{ "Comment", "/** Returns the result of the interaction trace, which is true if the object that we are looking at is able to be\n\x09\x09interacted with */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "Returns the result of the interaction trace, which is true if the object that we are looking at is able to be\n              interacted with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "CanInteract", nullptr, nullptr, Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::InteractionComponent_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::InteractionComponent_eventCanInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractionComponent_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics
	{
		struct InteractionComponent_eventGetInteractText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionComponent_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction Component" },
		{ "Comment", "/** Returns the display text of the current interactable object that the player is looking at */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "Returns the display text of the current interactable object that the player is looking at" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "GetInteractText", nullptr, nullptr, Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::InteractionComponent_eventGetInteractText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::InteractionComponent_eventGetInteractText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInteractionComponent_GetInteractText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionComponent);
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GetCurrentHitActor_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetCurrentHitActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InteractText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_CanInteract, "CanInteract" }, // 729997280
		{ &Z_Construct_UFunction_UInteractionComponent_GetInteractText, "GetInteractText" }, // 1844181130
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "Blueprintable", "" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_GetCurrentHitActor_MetaData[] = {
		{ "Category", "Interaction Component" },
		{ "Comment", "/** Returns the current interaction actor, or, if no actor is hit, nullptr\n\x09 *\x09@warning this function is not guaranteed to return a value, make sure to check if the output is valid before performing logic on it\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "Returns the current interaction actor, or, if no actor is hit, nullptr\n    @warning this function is not guaranteed to return a value, make sure to check if the output is valid before performing logic on it" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_GetCurrentHitActor = { "GetCurrentHitActor", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, GetCurrentHitActor), Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_GetCurrentHitActor_MetaData), Z_Construct_UClass_UInteractionComponent_Statics::NewProp_GetCurrentHitActor_MetaData) }; // 4108257184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Comment", "/** The input action for interacting with the world */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "The input action for interacting with the world" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText_MetaData[] = {
		{ "Comment", "/** The current message to be displayed above the screen (if any) */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "The current message to be displayed above the screen (if any)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, InteractText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText_MetaData), Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** The maximum distance in unreal units at which the player can interact with an object */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "The maximum distance in unreal units at which the player can interact with an object" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance = { "InteractDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, InteractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance_MetaData), Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_GetCurrentHitActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
		&UInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<UInteractionComponent>()
	{
		return UInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
	UInteractionComponent::~UInteractionComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionComponent, UInteractionComponent::StaticClass, TEXT("UInteractionComponent"), &Z_Registration_Info_UClass_UInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionComponent), 2310631028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_2184661157(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
