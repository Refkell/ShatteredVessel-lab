// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/FPSCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "FPSCore/Public/WeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacter();
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_ELandingBehaviour();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EMovementState();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHandsAnimSet();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementVariables();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovementState;
	static UEnum* EMovementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EMovementState, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("EMovementState"));
		}
		return Z_Registration_Info_UEnum_EMovementState.OuterSingleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EMovementState>()
	{
		return EMovementState_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSCore_EMovementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSCore_EMovementState_Statics::Enumerators[] = {
		{ "EMovementState::State_Walk", (int64)EMovementState::State_Walk },
		{ "EMovementState::State_Sprint", (int64)EMovementState::State_Sprint },
		{ "EMovementState::State_Crouch", (int64)EMovementState::State_Crouch },
		{ "EMovementState::State_Slide", (int64)EMovementState::State_Slide },
		{ "EMovementState::State_Vault", (int64)EMovementState::State_Vault },
		{ "EMovementState::State_Mantle", (int64)EMovementState::State_Mantle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSCore_EMovementState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Movement state enumerator holding all possible movement states */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "State_Crouch.DisplayName", "Crouching" },
		{ "State_Crouch.Name", "EMovementState::State_Crouch" },
		{ "State_Mantle.DisplayName", "Mantling" },
		{ "State_Mantle.Name", "EMovementState::State_Mantle" },
		{ "State_Slide.DisplayName", "Sliding" },
		{ "State_Slide.Name", "EMovementState::State_Slide" },
		{ "State_Sprint.DisplayName", "Sprinting" },
		{ "State_Sprint.Name", "EMovementState::State_Sprint" },
		{ "State_Vault.DisplayName", "Vaulting" },
		{ "State_Vault.Name", "EMovementState::State_Vault" },
		{ "State_Walk.DisplayName", "Walking" },
		{ "State_Walk.Name", "EMovementState::State_Walk" },
		{ "ToolTip", "Movement state enumerator holding all possible movement states" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSCore_EMovementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		"EMovementState",
		"EMovementState",
		Z_Construct_UEnum_FPSCore_EMovementState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EMovementState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_EMovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSCore_EMovementState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FPSCore_EMovementState()
	{
		if (!Z_Registration_Info_UEnum_EMovementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovementState.InnerSingleton, Z_Construct_UEnum_FPSCore_EMovementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovementState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandingBehaviour;
	static UEnum* ELandingBehaviour_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandingBehaviour.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandingBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_ELandingBehaviour, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("ELandingBehaviour"));
		}
		return Z_Registration_Info_UEnum_ELandingBehaviour.OuterSingleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<ELandingBehaviour>()
	{
		return ELandingBehaviour_StaticEnum();
	}
	struct Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::Enumerators[] = {
		{ "ELandingBehaviour::Slide", (int64)ELandingBehaviour::Slide },
		{ "ELandingBehaviour::Crouch", (int64)ELandingBehaviour::Crouch },
		{ "ELandingBehaviour::Ignore", (int64)ELandingBehaviour::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Landing behaviour options */" },
		{ "Crouch.Name", "ELandingBehaviour::Crouch" },
		{ "Ignore.Name", "ELandingBehaviour::Ignore" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "Slide.Name", "ELandingBehaviour::Slide" },
		{ "ToolTip", "Landing behaviour options" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		"ELandingBehaviour",
		"ELandingBehaviour",
		Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FPSCore_ELandingBehaviour()
	{
		if (!Z_Registration_Info_UEnum_ELandingBehaviour.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandingBehaviour.InnerSingleton, Z_Construct_UEnum_FPSCore_ELandingBehaviour_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandingBehaviour.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovementVariables;
class UScriptStruct* FMovementVariables::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovementVariables.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovementVariables.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementVariables, (UObject*)Z_Construct_UPackage__Script_FPSCore(), TEXT("MovementVariables"));
	}
	return Z_Registration_Info_UScriptStruct_MovementVariables.OuterSingleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FMovementVariables>()
{
	return FMovementVariables::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovementVariables_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanFire_MetaData[];
#endif
		static void NewProp_bCanFire_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanReload_MetaData[];
#endif
		static void NewProp_bCanReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAim_MetaData[];
#endif
		static void NewProp_bCanAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakingDecelerationWalking_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakingDecelerationWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Variables associated with each movement state */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Variables associated with each movement state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovementVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementVariables>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_SetBit(void* Obj)
	{
		((FMovementVariables*)Obj)->bCanFire = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire = { "bCanFire", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovementVariables), &Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_MetaData), Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanReload_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanReload_SetBit(void* Obj)
	{
		((FMovementVariables*)Obj)->bCanReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanReload = { "bCanReload", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovementVariables), &Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanReload_MetaData), Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanAim_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanAim_SetBit(void* Obj)
	{
		((FMovementVariables*)Obj)->bCanAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanAim = { "bCanAim", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovementVariables), &Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanAim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanAim_MetaData), Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanAim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementVariables, MaxAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration_MetaData), Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking = { "BreakingDecelerationWalking", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementVariables, BreakingDecelerationWalking), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking_MetaData), Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementVariables, GroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction_MetaData), Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementVariables, MaxWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed_MetaData), Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		&NewStructOps,
		"MovementVariables",
		Z_Construct_UScriptStruct_FMovementVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::PropPointers),
		sizeof(FMovementVariables),
		alignof(FMovementVariables),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementVariables_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMovementVariables()
	{
		if (!Z_Registration_Info_UScriptStruct_MovementVariables.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovementVariables.InnerSingleton, Z_Construct_UScriptStruct_FMovementVariables_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovementVariables.InnerSingleton;
	}
	DEFINE_FUNCTION(AFPSCharacter::execTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execSetMovementState)
	{
		P_GET_ENUM(EMovementState,Z_Param_NewMovementState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMovementState(EMovementState(Z_Param_NewMovementState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execRuntimeUpdateMovementValues)
	{
		P_GET_ENUM(EMovementState,Z_Param_MovementStateToUpdate);
		P_GET_STRUCT(FMovementVariables,Z_Param_NewMovementVariables);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RuntimeUpdateMovementValues(EMovementState(Z_Param_MovementStateToUpdate),Z_Param_NewMovementVariables);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execUpdateFOVOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFOVOffset(Z_Param_NewOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetBaseMappingContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputMappingContext**)Z_Param__Result=P_THIS->GetBaseMappingContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetPlayerAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHandsAnimSet*)Z_Param__Result=P_THIS->GetPlayerAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetWeaponAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHandsAnimSet*)Z_Param__Result=P_THIS->GetWeaponAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetEmptyIdleAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetEmptyIdleAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetEmptyWalkBlendSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetEmptyWalkBlendSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetMovementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovementState*)Z_Param__Result=P_THIS->GetMovementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execIsPlayerAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execSetCrosshairVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairVisibility(Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execIsCrosshairVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrosshairVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execSetBaseFOV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseFOV(Z_Param_NewFOV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetMouseX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetMouseY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetRightMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRightMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetForwardMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForwardMovement();
		P_NATIVE_END;
	}
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseMappingContext", &AFPSCharacter::execGetBaseMappingContext },
			{ "GetEmptyIdleAnim", &AFPSCharacter::execGetEmptyIdleAnim },
			{ "GetEmptyWalkBlendSpace", &AFPSCharacter::execGetEmptyWalkBlendSpace },
			{ "GetForwardMovement", &AFPSCharacter::execGetForwardMovement },
			{ "GetMouseX", &AFPSCharacter::execGetMouseX },
			{ "GetMouseY", &AFPSCharacter::execGetMouseY },
			{ "GetMovementState", &AFPSCharacter::execGetMovementState },
			{ "GetPlayerAnimations", &AFPSCharacter::execGetPlayerAnimations },
			{ "GetRightMovement", &AFPSCharacter::execGetRightMovement },
			{ "GetWeaponAnimations", &AFPSCharacter::execGetWeaponAnimations },
			{ "IsCrosshairVisible", &AFPSCharacter::execIsCrosshairVisible },
			{ "IsPlayerAiming", &AFPSCharacter::execIsPlayerAiming },
			{ "RuntimeUpdateMovementValues", &AFPSCharacter::execRuntimeUpdateMovementValues },
			{ "SetBaseFOV", &AFPSCharacter::execSetBaseFOV },
			{ "SetCrosshairVisibility", &AFPSCharacter::execSetCrosshairVisibility },
			{ "SetMovementState", &AFPSCharacter::execSetMovementState },
			{ "TimelineProgress", &AFPSCharacter::execTimelineProgress },
			{ "UpdateFOVOffset", &AFPSCharacter::execUpdateFOVOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics
	{
		struct FPSCharacter_eventGetBaseMappingContext_Parms
		{
			UInputMappingContext* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetBaseMappingContext_Parms, ReturnValue), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's current input mapping context */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's current input mapping context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetBaseMappingContext", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::FPSCharacter_eventGetBaseMappingContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::FPSCharacter_eventGetBaseMappingContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics
	{
		struct FPSCharacter_eventGetEmptyIdleAnim_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetEmptyIdleAnim_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's empty-handed idle animation */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's empty-handed idle animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetEmptyIdleAnim", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::FPSCharacter_eventGetEmptyIdleAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::FPSCharacter_eventGetEmptyIdleAnim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics
	{
		struct FPSCharacter_eventGetEmptyWalkBlendSpace_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetEmptyWalkBlendSpace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's empty-handed walking blend space */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's empty-handed walking blend space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetEmptyWalkBlendSpace", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::FPSCharacter_eventGetEmptyWalkBlendSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::FPSCharacter_eventGetEmptyWalkBlendSpace_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics
	{
		struct FPSCharacter_eventGetForwardMovement_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetForwardMovement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's forward movement (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's forward movement (from 0 to 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetForwardMovement", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::FPSCharacter_eventGetForwardMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::FPSCharacter_eventGetForwardMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetForwardMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics
	{
		struct FPSCharacter_eventGetMouseX_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetMouseX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's horizontal mouse position (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's horizontal mouse position (from 0 to 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetMouseX", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::FPSCharacter_eventGetMouseX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::FPSCharacter_eventGetMouseX_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetMouseX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics
	{
		struct FPSCharacter_eventGetMouseY_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetMouseY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's vertical mouse position (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's vertical mouse position (from 0 to 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetMouseY", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::FPSCharacter_eventGetMouseY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::FPSCharacter_eventGetMouseY_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetMouseY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics
	{
		struct FPSCharacter_eventGetMovementState_Parms
		{
			EMovementState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetMovementState_Parms, ReturnValue), Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2276025123
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's current movement state */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's current movement state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetMovementState", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::FPSCharacter_eventGetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::FPSCharacter_eventGetMovementState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics
	{
		struct FPSCharacter_eventGetPlayerAnimations_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetPlayerAnimations_Parms, ReturnValue), Z_Construct_UScriptStruct_FHandsAnimSet, METADATA_PARAMS(0, nullptr) }; // 4236425574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "Comment", "/** Returns the character's set of animations */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's set of animations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetPlayerAnimations", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::FPSCharacter_eventGetPlayerAnimations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::FPSCharacter_eventGetPlayerAnimations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics
	{
		struct FPSCharacter_eventGetRightMovement_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetRightMovement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's sideways movement (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's sideways movement (from 0 to 1)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetRightMovement", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::FPSCharacter_eventGetRightMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::FPSCharacter_eventGetRightMovement_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetRightMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics
	{
		struct FPSCharacter_eventGetWeaponAnimations_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventGetWeaponAnimations_Parms, ReturnValue), Z_Construct_UScriptStruct_FHandsAnimSet, METADATA_PARAMS(0, nullptr) }; // 4236425574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Base" },
		{ "Comment", "/** Returns the character's set of animations */" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's set of animations" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetWeaponAnimations", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::FPSCharacter_eventGetWeaponAnimations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::FPSCharacter_eventGetWeaponAnimations_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics
	{
		struct FPSCharacter_eventIsCrosshairVisible_Parms
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
	void Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventIsCrosshairVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSCharacter_eventIsCrosshairVisible_Parms), &Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the current visibility of the crosshair */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the current visibility of the crosshair" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "IsCrosshairVisible", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::FPSCharacter_eventIsCrosshairVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::FPSCharacter_eventIsCrosshairVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics
	{
		struct FPSCharacter_eventIsPlayerAiming_Parms
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
	void Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventIsPlayerAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSCharacter_eventIsPlayerAiming_Parms), &Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns whether the player is currently aiming or not */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns whether the player is currently aiming or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "IsPlayerAiming", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::FPSCharacter_eventIsPlayerAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::FPSCharacter_eventIsPlayerAiming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics
	{
		struct FPSCharacter_eventRuntimeUpdateMovementValues_Parms
		{
			EMovementState MovementStateToUpdate;
			FMovementVariables NewMovementVariables;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementStateToUpdate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementStateToUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementStateToUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMovementVariables_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewMovementVariables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_MovementStateToUpdate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_MovementStateToUpdate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_MovementStateToUpdate = { "MovementStateToUpdate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventRuntimeUpdateMovementValues_Parms, MovementStateToUpdate), Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_MovementStateToUpdate_MetaData), Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_MovementStateToUpdate_MetaData) }; // 2276025123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_NewMovementVariables_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_NewMovementVariables = { "NewMovementVariables", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventRuntimeUpdateMovementValues_Parms, NewMovementVariables), Z_Construct_UScriptStruct_FMovementVariables, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_NewMovementVariables_MetaData), Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_NewMovementVariables_MetaData) }; // 3538036192
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_MovementStateToUpdate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_MovementStateToUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::NewProp_NewMovementVariables,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "RuntimeUpdateMovementValues", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::FPSCharacter_eventRuntimeUpdateMovementValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::FPSCharacter_eventRuntimeUpdateMovementValues_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics
	{
		struct FPSCharacter_eventSetBaseFOV_Parms
		{
			float NewFOV;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventSetBaseFOV_Parms, NewFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV_MetaData), Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Update the base FOV\n\x09 * @param NewFOV The FOV to use as a new BaseFOV\n\x09 */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Update the base FOV\n@param NewFOV The FOV to use as a new BaseFOV" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SetBaseFOV", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::FPSCharacter_eventSetBaseFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::FPSCharacter_eventSetBaseFOV_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_SetBaseFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics
	{
		struct FPSCharacter_eventSetCrosshairVisibility_Parms
		{
			bool bVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FPSCharacter_eventSetCrosshairVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPSCharacter_eventSetCrosshairVisibility_Parms), &Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_MetaData), Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Update the visibility of the crosshair in HUD UI component\n\x09 * @param bVisible The new visibility of the crosshair\n\x09 */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Update the visibility of the crosshair in HUD UI component\n@param bVisible The new visibility of the crosshair" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SetCrosshairVisibility", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::FPSCharacter_eventSetCrosshairVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::FPSCharacter_eventSetCrosshairVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics
	{
		struct FPSCharacter_eventSetMovementState_Parms
		{
			EMovementState NewMovementState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMovementState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMovementState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::NewProp_NewMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::NewProp_NewMovementState = { "NewMovementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventSetMovementState_Parms, NewMovementState), Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2276025123
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::NewProp_NewMovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::NewProp_NewMovementState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** A global system that handles updates to the movement state and changes relevant values accordingly\n\x09*\x09@param NewMovementState The new movement state of the player\n\x09*/" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "A global system that handles updates to the movement state and changes relevant values accordingly\n     @param NewMovementState The new movement state of the player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SetMovementState", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::FPSCharacter_eventSetMovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::FPSCharacter_eventSetMovementState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_SetMovementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SetMovementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics
	{
		struct FPSCharacter_eventTimelineProgress_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventTimelineProgress_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Ticks the timeline */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Ticks the timeline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "TimelineProgress", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::FPSCharacter_eventTimelineProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::FPSCharacter_eventTimelineProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_TimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics
	{
		struct FPSCharacter_eventUpdateFOVOffset_Parms
		{
			float NewOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::NewProp_NewOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::NewProp_NewOffset = { "NewOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventUpdateFOVOffset_Parms, NewOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::NewProp_NewOffset_MetaData), Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::NewProp_NewOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::NewProp_NewOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "UpdateFOVOffset", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::FPSCharacter_eventUpdateFOVOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::FPSCharacter_eventUpdateFOVOffset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCharacter);
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandsMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HandsMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BS_Walk_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BS_Walk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anim_Idle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Anim_Idle;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedCapsuleHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchedCapsuleHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchIsToggle_MetaData[];
#endif
		static void NewProp_bCrouchIsToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchIsToggle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandingBehaviour_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandingBehaviour_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandingBehaviour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictSprintAngle_MetaData[];
#endif
		static void NewProp_bRestrictSprintAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictSprintAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAngleLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintAngleLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSlideFromStand_MetaData[];
#endif
		static void NewProp_bCanSlideFromStand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSlideFromStand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideContinueAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideContinueAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireVelocityToSlide_MetaData[];
#endif
		static void NewProp_bRequireVelocityToSlide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireVelocityToSlide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumSlideVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumSlideVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanVault_MetaData[];
#endif
		static void NewProp_bCanVault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanVault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMantleHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMantleHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultTraceAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VaultTraceAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultSpaceHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VaultSpaceHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultTimelineCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VaultTimelineCurve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDataMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementDataMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MovementDataMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVChangeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVChangeSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedFOVChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedFOVChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VaultTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VaultTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectWeaponAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InspectWeaponAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseMappingPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext, "GetBaseMappingContext" }, // 758055146
		{ &Z_Construct_UFunction_AFPSCharacter_GetEmptyIdleAnim, "GetEmptyIdleAnim" }, // 4078283153
		{ &Z_Construct_UFunction_AFPSCharacter_GetEmptyWalkBlendSpace, "GetEmptyWalkBlendSpace" }, // 3874498804
		{ &Z_Construct_UFunction_AFPSCharacter_GetForwardMovement, "GetForwardMovement" }, // 336996841
		{ &Z_Construct_UFunction_AFPSCharacter_GetMouseX, "GetMouseX" }, // 3276715314
		{ &Z_Construct_UFunction_AFPSCharacter_GetMouseY, "GetMouseY" }, // 618638881
		{ &Z_Construct_UFunction_AFPSCharacter_GetMovementState, "GetMovementState" }, // 2221062305
		{ &Z_Construct_UFunction_AFPSCharacter_GetPlayerAnimations, "GetPlayerAnimations" }, // 2284310273
		{ &Z_Construct_UFunction_AFPSCharacter_GetRightMovement, "GetRightMovement" }, // 230610557
		{ &Z_Construct_UFunction_AFPSCharacter_GetWeaponAnimations, "GetWeaponAnimations" }, // 3094077068
		{ &Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible, "IsCrosshairVisible" }, // 3272244414
		{ &Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming, "IsPlayerAiming" }, // 100294779
		{ &Z_Construct_UFunction_AFPSCharacter_RuntimeUpdateMovementValues, "RuntimeUpdateMovementValues" }, // 644104573
		{ &Z_Construct_UFunction_AFPSCharacter_SetBaseFOV, "SetBaseFOV" }, // 3094529603
		{ &Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility, "SetCrosshairVisibility" }, // 3969097505
		{ &Z_Construct_UFunction_AFPSCharacter_SetMovementState, "SetMovementState" }, // 2976236747
		{ &Z_Construct_UFunction_AFPSCharacter_TimelineProgress, "TimelineProgress" }, // 292925996
		{ &Z_Construct_UFunction_AFPSCharacter_UpdateFOVOffset, "UpdateFOVOffset" }, // 2361048164
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The character's FPS camera component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The character's FPS camera component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The character's hands mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The character's hands mesh component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp = { "HandsMeshComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, HandsMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The spring arm component, which is required to enable 'use control rotation' */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The spring arm component, which is required to enable 'use control rotation'" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComponent_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk_MetaData[] = {
		{ "Category", "Animations | Blend Spaces" },
		{ "Comment", "/** Hand animation blend space for when the player has no weapon  */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation blend space for when the player has no weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk = { "BS_Walk", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, BS_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon and is idle */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon and is idle" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle = { "Anim_Idle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_Start_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon and starts to jump */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon and starts to jump" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_Start = { "Anim_Jump_Start", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Jump_Start), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_Start_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_Start_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_End_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon and stops jumping */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon and stops jumping" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_End = { "Anim_Jump_End", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Jump_End), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_End_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_End_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Fall_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon and is falling */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon and is falling" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Fall = { "Anim_Fall", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Fall), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Fall_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Fall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon and is sprinting */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon and is sprinting" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint = { "Anim_Sprint", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Sprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage_MetaData[] = {
		{ "Category", "Animations | Montages" },
		{ "Comment", "/** Hand montage, played during vault */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand montage, played during vault" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage = { "VaultMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, VaultMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Prints debug variables if true */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Prints debug variables if true" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight_MetaData[] = {
		{ "Category", "Movement | Crouch" },
		{ "Comment", "/** Sets the height of the player's capsule component when crouched */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Sets the height of the player's capsule component when crouched" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight = { "CrouchedCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, CrouchedCapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Movement | Crouch" },
		{ "Comment", "/** The rate at which the character crouches */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The rate at which the character crouches" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, CrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCrouchIsToggle_MetaData[] = {
		{ "Category", "Movement | Crouch" },
		{ "Comment", "/** Whether crouching has to be held or can be toggled */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Whether crouching has to be held or can be toggled" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCrouchIsToggle_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bCrouchIsToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCrouchIsToggle = { "bCrouchIsToggle", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCrouchIsToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCrouchIsToggle_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCrouchIsToggle_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LandingBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LandingBehaviour_MetaData[] = {
		{ "Category", "Movement | Crouch" },
		{ "Comment", "/** What behaviour the player should take when landing after pressing the crouch key in mid-air */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "What behaviour the player should take when landing after pressing the crouch key in mid-air" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LandingBehaviour = { "LandingBehaviour", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, LandingBehaviour), Z_Construct_UEnum_FPSCore_ELandingBehaviour, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LandingBehaviour_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LandingBehaviour_MetaData) }; // 3358877106
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRestrictSprintAngle_MetaData[] = {
		{ "Category", "Movement | Sprint" },
		{ "Comment", "/** Whether to prevent the user from sprinting past a specific angle */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Whether to prevent the user from sprinting past a specific angle" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRestrictSprintAngle_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bRestrictSprintAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRestrictSprintAngle = { "bRestrictSprintAngle", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRestrictSprintAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRestrictSprintAngle_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRestrictSprintAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAngleLimit_MetaData[] = {
		{ "Category", "Movement | Sprint" },
		{ "Comment", "/** The maximum angle at which the player can sprint before returning to a walk */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The maximum angle at which the player can sprint before returning to a walk" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAngleLimit = { "SprintAngleLimit", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SprintAngleLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAngleLimit_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAngleLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanSlideFromStand_MetaData[] = {
		{ "Category", "Movement | Slide" },
		{ "Comment", "/** Whether the character is allowed to slide */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Whether the character is allowed to slide" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanSlideFromStand_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bCanSlideFromStand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanSlideFromStand = { "bCanSlideFromStand", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanSlideFromStand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanSlideFromStand_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanSlideFromStand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime_MetaData[] = {
		{ "Category", "Movement | Slide" },
		{ "Comment", "/** The time in seconds between the beginning of a slide and when it is ended */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The time in seconds between the beginning of a slide and when it is ended" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime = { "SlideTime", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SlideTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideContinueAngle_MetaData[] = {
		{ "Category", "Movement | Slide" },
		{ "Comment", "/** The angle that the floor has to be at in order for sliding to not be cancelled after SlideTime has passed */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The angle that the floor has to be at in order for sliding to not be cancelled after SlideTime has passed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideContinueAngle = { "SlideContinueAngle", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SlideContinueAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideContinueAngle_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideContinueAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRequireVelocityToSlide_MetaData[] = {
		{ "Category", "Movement | Slide" },
		{ "Comment", "/** Whether to require a velocity (MinimumSlideVelocity) in order to be able to slide */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Whether to require a velocity (MinimumSlideVelocity) in order to be able to slide" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRequireVelocityToSlide_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bRequireVelocityToSlide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRequireVelocityToSlide = { "bRequireVelocityToSlide", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRequireVelocityToSlide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRequireVelocityToSlide_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRequireVelocityToSlide_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MinimumSlideVelocity_MetaData[] = {
		{ "Category", "Movement | Slide" },
		{ "Comment", "/** The minimum velocity required to slide if RequireVelocityToSlide is true */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The minimum velocity required to slide if RequireVelocityToSlide is true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MinimumSlideVelocity = { "MinimumSlideVelocity", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MinimumSlideVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MinimumSlideVelocity_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MinimumSlideVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanVault_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** Whether the character is allowed to vault */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Whether the character is allowed to vault" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanVault_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bCanVault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanVault = { "bCanVault", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanVault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanVault_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanVault_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** The height of the highest surface that the player can mantle up onto */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The height of the highest surface that the player can mantle up onto" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight = { "MaxMantleHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MaxMantleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** The amount of traces to draw for vault collision checks, to get distance in unreal units, multiply by 5 */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The amount of traces to draw for vault collision checks, to get distance in unreal units, multiply by 5" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount = { "VaultTraceAmount", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, VaultTraceAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultSpaceHeight_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** The amount of unreal units that need to be free above an obstacle for the player to be able to vault over it */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The amount of unreal units that need to be free above an obstacle for the player to be able to vault over it" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultSpaceHeight = { "VaultSpaceHeight", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, VaultSpaceHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultSpaceHeight_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultSpaceHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** Curve that controls motion during vault */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Curve that controls motion during vault" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve = { "VaultTimelineCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, VaultTimelineCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_ValueProp = { "MovementDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovementVariables, METADATA_PARAMS(0, nullptr) }; // 3538036192
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp = { "MovementDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(0, nullptr) }; // 2276025123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_MetaData[] = {
		{ "Category", "Movement | Data" },
		{ "Comment", "/** A map holding data for each movement state */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "A map holding data for each movement state" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap = { "MovementDataMap", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MovementDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_MetaData) }; // 2276025123 3538036192
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV_MetaData[] = {
		{ "Category", "Camera | FOV" },
		{ "Comment", "/** The game's default FOV */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The game's default FOV" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, BaseFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed_MetaData[] = {
		{ "Category", "Camera | FOV" },
		{ "Comment", "/** The speed at which FOV changes occur */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The speed at which FOV changes occur" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed = { "FOVChangeSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FOVChangeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange_MetaData[] = {
		{ "Category", "Camera | FOV" },
		{ "Comment", "/** The increase in FOV during fast actions, such as sprinting and sliding */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The increase in FOV during fast actions, such as sprinting and sliding" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange = { "SpeedFOVChange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SpeedFOVChange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_MetaData[] = {
		{ "Comment", "/** Enumerator holding the 5 possible movement states defined by EMovementState */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Enumerator holding the 5 possible movement states defined by EMovementState" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MovementState), Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_MetaData) }; // 2276025123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline_MetaData[] = {
		{ "Comment", "/** The timeline for vaulting (generated from the curve) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The timeline for vaulting (generated from the curve)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline = { "VaultTimeline", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, VaultTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline_MetaData) }; // 2173395903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Comment", "/** A reference to the player's Inventory Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "A reference to the player's Inventory Component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "Comment", "/** Input actions */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Input actions" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction = { "FiringAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FiringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction = { "PrimaryWeaponAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, PrimaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction = { "SecondaryWeaponAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, SecondaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction = { "ScrollAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, ScrollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InspectWeaponAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InspectWeaponAction = { "InspectWeaponAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, InspectWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InspectWeaponAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InspectWeaponAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext_MetaData[] = {
		{ "Category", "Input | Mappings" },
		{ "Comment", "/** Input Mappings */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Input Mappings" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext = { "BaseMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, BaseMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority_MetaData[] = {
		{ "Category", "Input | Mappings" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority = { "BaseMappingPriority", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, BaseMappingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Jump_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Fall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCrouchIsToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LandingBehaviour_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LandingBehaviour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRestrictSprintAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAngleLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanSlideFromStand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideContinueAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bRequireVelocityToSlide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MinimumSlideVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bCanVault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultSpaceHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InspectWeaponAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		if (!Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton;
	}
	template<> FPSCORE_API UClass* StaticClass<AFPSCharacter>()
	{
		return AFPSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
	AFPSCharacter::~AFPSCharacter() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::EnumInfo[] = {
		{ EMovementState_StaticEnum, TEXT("EMovementState"), &Z_Registration_Info_UEnum_EMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2276025123U) },
		{ ELandingBehaviour_StaticEnum, TEXT("ELandingBehaviour"), &Z_Registration_Info_UEnum_ELandingBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3358877106U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::ScriptStructInfo[] = {
		{ FMovementVariables::StaticStruct, Z_Construct_UScriptStruct_FMovementVariables_Statics::NewStructOps, TEXT("MovementVariables"), &Z_Registration_Info_UScriptStruct_MovementVariables, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementVariables), 3538036192U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 3821320851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_3816856098(TEXT("/Script/FPSCore"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
