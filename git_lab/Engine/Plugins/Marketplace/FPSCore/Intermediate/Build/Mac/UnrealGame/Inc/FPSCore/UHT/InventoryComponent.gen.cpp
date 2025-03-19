// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/Components/InventoryComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "FPSCore/Public/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInventoryComponent();
	FPSCORE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EMovementState();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour();
	FPSCORE_API UFunction* Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature();
	FPSCORE_API UFunction* Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeWeaponData();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStarterWeaponData();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics
	{
		struct _Script_FPSCore_eventHitActor_Parms
		{
			FHitResult HitResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FPSCore_eventHitActor_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPSCore, nullptr, "HitActor__DelegateSignature", "InventoryComponent", "EventHitActor", Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::_Script_FPSCore_eventHitActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::_Script_FPSCore_eventHitActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHitActor_DelegateWrapper(const FMulticastScriptDelegate& HitActor, FHitResult HitResult)
{
	struct _Script_FPSCore_eventHitActor_Parms
	{
		FHitResult HitResult;
	};
	_Script_FPSCore_eventHitActor_Parms Parms;
	Parms.HitResult=HitResult;
	HitActor.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FPSCore, nullptr, "FailedToReload__DelegateSignature", "InventoryComponent", "EventFailedToReload", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FFailedToReload_DelegateWrapper(const FMulticastScriptDelegate& FailedToReload)
{
	FailedToReload.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReloadFailedBehaviour;
	static UEnum* EReloadFailedBehaviour_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReloadFailedBehaviour.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReloadFailedBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("EReloadFailedBehaviour"));
		}
		return Z_Registration_Info_UEnum_EReloadFailedBehaviour.OuterSingleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EReloadFailedBehaviour>()
	{
		return EReloadFailedBehaviour_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::Enumerators[] = {
		{ "EReloadFailedBehaviour::Retry", (int64)EReloadFailedBehaviour::Retry },
		{ "EReloadFailedBehaviour::ChangeState", (int64)EReloadFailedBehaviour::ChangeState },
		{ "EReloadFailedBehaviour::HandleInBP", (int64)EReloadFailedBehaviour::HandleInBP },
		{ "EReloadFailedBehaviour::Ignore", (int64)EReloadFailedBehaviour::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChangeState.DisplayName", "Change movement state to be able to successfuly reload" },
		{ "ChangeState.Name", "EReloadFailedBehaviour::ChangeState" },
		{ "HandleInBP.DisplayName", "Handle in Blueprint" },
		{ "HandleInBP.Name", "EReloadFailedBehaviour::HandleInBP" },
		{ "Ignore.DisplayName", "Ignore unsuccessful reload" },
		{ "Ignore.Name", "EReloadFailedBehaviour::Ignore" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "Retry.DisplayName", "Retry until successful" },
		{ "Retry.Name", "EReloadFailedBehaviour::Retry" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		"EReloadFailedBehaviour",
		"EReloadFailedBehaviour",
		Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour()
	{
		if (!Z_Registration_Info_UEnum_EReloadFailedBehaviour.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReloadFailedBehaviour.InnerSingleton, Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReloadFailedBehaviour.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponSwapBehaviour;
	static UEnum* EWeaponSwapBehaviour_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponSwapBehaviour.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponSwapBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("EWeaponSwapBehaviour"));
		}
		return Z_Registration_Info_UEnum_EWeaponSwapBehaviour.OuterSingleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EWeaponSwapBehaviour>()
	{
		return EWeaponSwapBehaviour_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::Enumerators[] = {
		{ "EWeaponSwapBehaviour::UseNewValue", (int64)EWeaponSwapBehaviour::UseNewValue },
		{ "EWeaponSwapBehaviour::Ignore", (int64)EWeaponSwapBehaviour::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ignore.DisplayName", "Ignore subsequent swaps" },
		{ "Ignore.Name", "EWeaponSwapBehaviour::Ignore" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "UseNewValue.DisplayName", "Swap to new value" },
		{ "UseNewValue.Name", "EWeaponSwapBehaviour::UseNewValue" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		"EWeaponSwapBehaviour",
		"EWeaponSwapBehaviour",
		Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour()
	{
		if (!Z_Registration_Info_UEnum_EWeaponSwapBehaviour.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponSwapBehaviour.InnerSingleton, Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponSwapBehaviour.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StarterWeaponData;
class UScriptStruct* FStarterWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StarterWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StarterWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStarterWeaponData, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("StarterWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_StarterWeaponData.OuterSingleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FStarterWeaponData>()
{
	return FStarterWeaponData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStarterWeaponData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClassRef_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClassRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponDataTableRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponDataTableRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentsDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentsDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataStruct;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachmentArrayOverrideRef_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentArrayOverrideRef_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachmentArrayOverrideRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarterWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStarterWeaponData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponClassRef_MetaData[] = {
		{ "Category", "Data Table" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponClassRef = { "WeaponClassRef", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarterWeaponData, WeaponClassRef), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponClassRef_MetaData), Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponClassRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponDataTableRef_MetaData[] = {
		{ "Category", "Data Table" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponDataTableRef = { "WeaponDataTableRef", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarterWeaponData, WeaponDataTableRef), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponDataTableRef_MetaData), Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponDataTableRef_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentsDataTable_MetaData[] = {
		{ "Category", "Data Table" },
		{ "Comment", "/** Data table reference for attachments */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Data table reference for attachments" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentsDataTable = { "AttachmentsDataTable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarterWeaponData, AttachmentsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentsDataTable_MetaData), Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentsDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_DataStruct_MetaData[] = {
		{ "Comment", "/** Local weapon data struct to keep track of ammo amounts and weapon health */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Local weapon data struct to keep track of ammo amounts and weapon health" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_DataStruct = { "DataStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarterWeaponData, DataStruct), Z_Construct_UScriptStruct_FRuntimeWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_DataStruct_MetaData), Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_DataStruct_MetaData) }; // 4138968257
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentArrayOverrideRef_Inner = { "AttachmentArrayOverrideRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentArrayOverrideRef_MetaData[] = {
		{ "Category", "Data Table" },
		{ "Comment", "/** The array of attachments to spawn (usually inherited, can be set by instance) */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "The array of attachments to spawn (usually inherited, can be set by instance)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentArrayOverrideRef = { "AttachmentArrayOverrideRef", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarterWeaponData, AttachmentArrayOverrideRef), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentArrayOverrideRef_MetaData), Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentArrayOverrideRef_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStarterWeaponData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponClassRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_WeaponDataTableRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentsDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_DataStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentArrayOverrideRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewProp_AttachmentArrayOverrideRef,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStarterWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		&NewStructOps,
		"StarterWeaponData",
		Z_Construct_UScriptStruct_FStarterWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::PropPointers),
		sizeof(FStarterWeaponData),
		alignof(FStarterWeaponData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStarterWeaponData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarterWeaponData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStarterWeaponData()
	{
		if (!Z_Registration_Info_UScriptStruct_StarterWeaponData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StarterWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FStarterWeaponData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StarterWeaponData.InnerSingleton;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeaponDisplayImage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetCurrentWeaponDisplayImage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeaponDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentWeaponDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeaponRemainingAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCurrentWeaponRemainingAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeaponLoadedAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCurrentWeaponLoadedAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetWeaponByID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WeaponID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetWeaponByID(Z_Param_WeaponID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetEquippedWeapons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,AWeaponBase*>*)Z_Param__Result=P_THIS->GetEquippedWeapons();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeaponSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentWeaponSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetNumberOfWeaponSlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfWeaponSlots();
		P_NATIVE_END;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWeapon", &UInventoryComponent::execGetCurrentWeapon },
			{ "GetCurrentWeaponDisplayImage", &UInventoryComponent::execGetCurrentWeaponDisplayImage },
			{ "GetCurrentWeaponDisplayName", &UInventoryComponent::execGetCurrentWeaponDisplayName },
			{ "GetCurrentWeaponLoadedAmmo", &UInventoryComponent::execGetCurrentWeaponLoadedAmmo },
			{ "GetCurrentWeaponRemainingAmmo", &UInventoryComponent::execGetCurrentWeaponRemainingAmmo },
			{ "GetCurrentWeaponSlot", &UInventoryComponent::execGetCurrentWeaponSlot },
			{ "GetEquippedWeapons", &UInventoryComponent::execGetEquippedWeapons },
			{ "GetNumberOfWeaponSlots", &UInventoryComponent::execGetNumberOfWeaponSlots },
			{ "GetWeaponByID", &UInventoryComponent::execGetWeaponByID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics
	{
		struct InventoryComponent_eventGetCurrentWeapon_Parms
		{
			AWeaponBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "Comment", "/** Returns the current weapon equipped by the player */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the current weapon equipped by the player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeapon", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::InventoryComponent_eventGetCurrentWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::InventoryComponent_eventGetCurrentWeapon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics
	{
		struct InventoryComponent_eventGetCurrentWeaponDisplayImage_Parms
		{
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeaponDisplayImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeaponDisplayImage", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::InventoryComponent_eventGetCurrentWeaponDisplayImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::InventoryComponent_eventGetCurrentWeaponDisplayImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics
	{
		struct InventoryComponent_eventGetCurrentWeaponDisplayName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeaponDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeaponDisplayName", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::InventoryComponent_eventGetCurrentWeaponDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::InventoryComponent_eventGetCurrentWeaponDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics
	{
		struct InventoryComponent_eventGetCurrentWeaponLoadedAmmo_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeaponLoadedAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "Comment", "/**  Returns the amount of ammunition currently loaded into the weapon */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the amount of ammunition currently loaded into the weapon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeaponLoadedAmmo", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::InventoryComponent_eventGetCurrentWeaponLoadedAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::InventoryComponent_eventGetCurrentWeaponLoadedAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics
	{
		struct InventoryComponent_eventGetCurrentWeaponRemainingAmmo_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeaponRemainingAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "Comment", "/** Returns the amount of ammunition remaining for the current weapon */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the amount of ammunition remaining for the current weapon" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeaponRemainingAmmo", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::InventoryComponent_eventGetCurrentWeaponRemainingAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::InventoryComponent_eventGetCurrentWeaponRemainingAmmo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics
	{
		struct InventoryComponent_eventGetCurrentWeaponSlot_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeaponSlot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "Comment", "/** Returns the currently equipped weapon slot */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the currently equipped weapon slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeaponSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::InventoryComponent_eventGetCurrentWeaponSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::InventoryComponent_eventGetCurrentWeaponSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics
	{
		struct InventoryComponent_eventGetEquippedWeapons_Parms
		{
			TMap<int32,AWeaponBase*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetEquippedWeapons_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "Comment", "/** Returns the map of currently equipped weapons */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the map of currently equipped weapons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetEquippedWeapons", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::InventoryComponent_eventGetEquippedWeapons_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::InventoryComponent_eventGetEquippedWeapons_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics
	{
		struct InventoryComponent_eventGetNumberOfWeaponSlots_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetNumberOfWeaponSlots_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "Comment", "/** Returns the number of weapon slots */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the number of weapon slots" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetNumberOfWeaponSlots", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::InventoryComponent_eventGetNumberOfWeaponSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::InventoryComponent_eventGetNumberOfWeaponSlots_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics
	{
		struct InventoryComponent_eventGetWeaponByID_Parms
		{
			int32 WeaponID;
			AWeaponBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WeaponID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::NewProp_WeaponID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::NewProp_WeaponID = { "WeaponID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetWeaponByID_Parms, WeaponID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::NewProp_WeaponID_MetaData), Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::NewProp_WeaponID_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetWeaponByID_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::NewProp_WeaponID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory Component" },
		{ "Comment", "/** Returns an equipped weapon\n\x09 *\x09@param WeaponID The ID of the weapon to get\n\x09 *\x09@return The weapon with the given ID\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns an equipped weapon\n    @param WeaponID The ID of the weapon to get\n    @return The weapon with the given ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetWeaponByID", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::InventoryComponent_eventGetWeaponByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::InventoryComponent_eventGetWeaponByID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetWeaponByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetWeaponByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHitActor_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventHitActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventFailedToReload_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventFailedToReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiringAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FiringAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeaponAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeaponAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectWeaponAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectWeaponAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponSpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfWeaponSlots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfWeaponSlots;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarterWeapons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarterWeapons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StarterWeapons;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReloadFailedBehaviour_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadFailedBehaviour_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReloadFailedBehaviour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRetryAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetryAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetryInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RetryInterval;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetMovementState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponSwapBehaviour_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponSwapBehaviour_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponSwapBehaviour;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapons_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquippedWeapons_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapons_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EquippedWeapons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon, "GetCurrentWeapon" }, // 2936412181
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayImage, "GetCurrentWeaponDisplayImage" }, // 3791869971
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponDisplayName, "GetCurrentWeaponDisplayName" }, // 3859438919
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo, "GetCurrentWeaponLoadedAmmo" }, // 3808648239
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo, "GetCurrentWeaponRemainingAmmo" }, // 2929899115
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponSlot, "GetCurrentWeaponSlot" }, // 903540883
		{ &Z_Construct_UFunction_UInventoryComponent_GetEquippedWeapons, "GetEquippedWeapons" }, // 3542575919
		{ &Z_Construct_UFunction_UInventoryComponent_GetNumberOfWeaponSlots, "GetNumberOfWeaponSlots" }, // 3146247897
		{ &Z_Construct_UFunction_UInventoryComponent_GetWeaponByID, "GetWeaponByID" }, // 3870561907
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventHitActor_MetaData[] = {
		{ "Category", "Inventory Component" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventHitActor = { "EventHitActor", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, EventHitActor), Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventHitActor_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventHitActor_MetaData) }; // 2860462357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventFailedToReload_MetaData[] = {
		{ "Category", "Inventory Component" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventFailedToReload = { "EventFailedToReload", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, EventFailedToReload), Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventFailedToReload_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventFailedToReload_MetaData) }; // 2069722128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction_MetaData[] = {
		{ "Comment", "/** The input actions implemented by this component */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "The input actions implemented by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction = { "FiringAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, FiringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction = { "PrimaryWeaponAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, PrimaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction = { "SecondaryWeaponAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, SecondaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction = { "ScrollAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, ScrollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InspectWeaponAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InspectWeaponAction = { "InspectWeaponAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, InspectWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InspectWeaponAction_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InspectWeaponAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Whether to print debug statements to the screen */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Whether to print debug statements to the screen" },
	};
#endif
	void Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UInventoryComponent*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInventoryComponent), &Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bDrawDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance_MetaData[] = {
		{ "Category", "Camera | Interaction" },
		{ "Comment", "/** The distance at which pickups for old weapons spawn during a weapon swap */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "The distance at which pickups for old weapons spawn during a weapon swap" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance = { "WeaponSpawnDistance", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, WeaponSpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots_MetaData[] = {
		{ "Category", "Weapons | Inventory" },
		{ "Comment", "/** THe Number of slots for Weapons that this player has */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "THe Number of slots for Weapons that this player has" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots = { "NumberOfWeaponSlots", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, NumberOfWeaponSlots), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_StarterWeapons_Inner = { "StarterWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStarterWeaponData, METADATA_PARAMS(0, nullptr) }; // 3612658119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_StarterWeapons_MetaData[] = {
		{ "Category", "Weapons | Inventory" },
		{ "Comment", "/** An array of starter weapons. Only weapons within the range of NumberOfWeaponSlots will be spawned */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "An array of starter weapons. Only weapons within the range of NumberOfWeaponSlots will be spawned" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_StarterWeapons = { "StarterWeapons", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, StarterWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_StarterWeapons_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_StarterWeapons_MetaData) }; // 3612658119
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadFailedBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadFailedBehaviour_MetaData[] = {
		{ "Category", "Weapons | Behaviour" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadFailedBehaviour = { "ReloadFailedBehaviour", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, ReloadFailedBehaviour), Z_Construct_UEnum_FPSCore_EReloadFailedBehaviour, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadFailedBehaviour_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadFailedBehaviour_MetaData) }; // 1746177472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxRetryAmount_MetaData[] = {
		{ "Category", "Weapons | Behaviour" },
		{ "Comment", "/** How many times we should retry the reload before cancelling it. Set to 0 for unlimited. */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "How many times we should retry the reload before cancelling it. Set to 0 for unlimited." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxRetryAmount = { "MaxRetryAmount", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, MaxRetryAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxRetryAmount_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxRetryAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RetryInterval_MetaData[] = {
		{ "Category", "Weapons | Behaviour" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RetryInterval = { "RetryInterval", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, RetryInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RetryInterval_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RetryInterval_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_TargetMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_TargetMovementState_MetaData[] = {
		{ "Category", "Weapons | Behaviour" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_TargetMovementState = { "TargetMovementState", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, TargetMovementState), Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_TargetMovementState_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_TargetMovementState_MetaData) }; // 2276025123
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSwapBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSwapBehaviour_MetaData[] = {
		{ "Category", "Weapons | Behaviour" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSwapBehaviour = { "WeaponSwapBehaviour", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, WeaponSwapBehaviour), Z_Construct_UEnum_FPSCore_EWeaponSwapBehaviour, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSwapBehaviour_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSwapBehaviour_MetaData) }; // 620657871
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_ValueProp = { "EquippedWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_Key_KeyProp = { "EquippedWeapons_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_MetaData[] = {
		{ "Comment", "/** A Map storing the player's current weapons and the slot that they correspond to */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "A Map storing the player's current weapons and the slot that they correspond to" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons = { "EquippedWeapons", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, EquippedWeapons), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Comment", "/** The player's currently equipped weapon */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "The player's currently equipped weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData), Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventHitActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EventFailedToReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_InspectWeaponAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_StarterWeapons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_StarterWeapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadFailedBehaviour_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadFailedBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_MaxRetryAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_RetryInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_TargetMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_TargetMovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSwapBehaviour_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSwapBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
	UInventoryComponent::~UInventoryComponent() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::EnumInfo[] = {
		{ EReloadFailedBehaviour_StaticEnum, TEXT("EReloadFailedBehaviour"), &Z_Registration_Info_UEnum_EReloadFailedBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1746177472U) },
		{ EWeaponSwapBehaviour_StaticEnum, TEXT("EWeaponSwapBehaviour"), &Z_Registration_Info_UEnum_EWeaponSwapBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 620657871U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo[] = {
		{ FStarterWeaponData::StaticStruct, Z_Construct_UScriptStruct_FStarterWeaponData_Statics::NewStructOps, TEXT("StarterWeaponData"), &Z_Registration_Info_UScriptStruct_StarterWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStarterWeaponData), 3612658119U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 1096319510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_3476494835(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
