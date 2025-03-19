// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FPSCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UBlendSpace;
class UInputMappingContext;
enum class EMovementState : uint8;
struct FHandsAnimSet;
struct FMovementVariables;
#ifdef FPSCORE_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPSCORE_FPSCharacter_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementVariables_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FMovementVariables>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execSetMovementState); \
	DECLARE_FUNCTION(execRuntimeUpdateMovementValues); \
	DECLARE_FUNCTION(execUpdateFOVOffset); \
	DECLARE_FUNCTION(execGetBaseMappingContext); \
	DECLARE_FUNCTION(execGetPlayerAnimations); \
	DECLARE_FUNCTION(execGetWeaponAnimations); \
	DECLARE_FUNCTION(execGetEmptyIdleAnim); \
	DECLARE_FUNCTION(execGetEmptyWalkBlendSpace); \
	DECLARE_FUNCTION(execGetMovementState); \
	DECLARE_FUNCTION(execIsPlayerAiming); \
	DECLARE_FUNCTION(execSetCrosshairVisibility); \
	DECLARE_FUNCTION(execIsCrosshairVisible); \
	DECLARE_FUNCTION(execSetBaseFOV); \
	DECLARE_FUNCTION(execGetMouseX); \
	DECLARE_FUNCTION(execGetMouseY); \
	DECLARE_FUNCTION(execGetRightMovement); \
	DECLARE_FUNCTION(execGetForwardMovement);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter) \
	NO_API virtual ~AFPSCharacter();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_74_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::State_Walk) \
	op(EMovementState::State_Sprint) \
	op(EMovementState::State_Crouch) \
	op(EMovementState::State_Slide) \
	op(EMovementState::State_Vault) \
	op(EMovementState::State_Mantle) 

enum class EMovementState : uint8;
template<> struct TIsUEnumClass<EMovementState> { enum { Value = true }; };
template<> FPSCORE_API UEnum* StaticEnum<EMovementState>();

#define FOREACH_ENUM_ELANDINGBEHAVIOUR(op) \
	op(ELandingBehaviour::Slide) \
	op(ELandingBehaviour::Crouch) \
	op(ELandingBehaviour::Ignore) 

enum class ELandingBehaviour : uint8;
template<> struct TIsUEnumClass<ELandingBehaviour> { enum { Value = true }; };
template<> FPSCORE_API UEnum* StaticEnum<ELandingBehaviour>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
