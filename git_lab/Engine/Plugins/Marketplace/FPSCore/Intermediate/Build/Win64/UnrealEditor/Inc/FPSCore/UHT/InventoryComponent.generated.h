// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class AWeaponBase;
class AWeaponBase;
class UTexture2D;
struct FHitResult;
#ifdef FPSCORE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define FPSCORE_InventoryComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_16_DELEGATE \
FPSCORE_API void FHitActor_DelegateWrapper(const FMulticastScriptDelegate& HitActor, FHitResult HitResult);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_DELEGATE \
FPSCORE_API void FFailedToReload_DelegateWrapper(const FMulticastScriptDelegate& FailedToReload);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStarterWeaponData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FStarterWeaponData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWeaponDisplayImage); \
	DECLARE_FUNCTION(execGetCurrentWeaponDisplayName); \
	DECLARE_FUNCTION(execGetCurrentWeaponRemainingAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeaponLoadedAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetWeaponByID); \
	DECLARE_FUNCTION(execGetEquippedWeapons); \
	DECLARE_FUNCTION(execGetCurrentWeaponSlot); \
	DECLARE_FUNCTION(execGetNumberOfWeaponSlots);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_59_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h


#define FOREACH_ENUM_ERELOADFAILEDBEHAVIOUR(op) \
	op(EReloadFailedBehaviour::Retry) \
	op(EReloadFailedBehaviour::ChangeState) \
	op(EReloadFailedBehaviour::HandleInBP) \
	op(EReloadFailedBehaviour::Ignore) 

enum class EReloadFailedBehaviour : uint8;
template<> struct TIsUEnumClass<EReloadFailedBehaviour> { enum { Value = true }; };
template<> FPSCORE_API UEnum* StaticEnum<EReloadFailedBehaviour>();

#define FOREACH_ENUM_EWEAPONSWAPBEHAVIOUR(op) \
	op(EWeaponSwapBehaviour::UseNewValue) \
	op(EWeaponSwapBehaviour::Ignore) 

enum class EWeaponSwapBehaviour : uint8;
template<> struct TIsUEnumClass<EWeaponSwapBehaviour> { enum { Value = true }; };
template<> FPSCORE_API UEnum* StaticEnum<EWeaponSwapBehaviour>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
