// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCore_init() {}
	FPSCORE_API UFunction* Z_Construct_UDelegateFunction_FPSCore_OnHealthChangedSignature__DelegateSignature();
	FPSCORE_API UFunction* Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature();
	FPSCORE_API UFunction* Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature();
	FPSCORE_API UFunction* Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPSCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPSCore()
	{
		if (!Z_Registration_Info_UPackage__Script_FPSCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSCore_OnHealthChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_FPSCore_FailedToReload__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_FPSCore_GetCurrentHitActorSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_USparseDelegateFunction_FPSCore_HitActor__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPSCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5E684933,
				0xD3021D64,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPSCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPSCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPSCore(Z_Construct_UPackage__Script_FPSCore, TEXT("/Script/FPSCore"), Z_Registration_Info_UPackage__Script_FPSCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5E684933, 0xD3021D64));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
