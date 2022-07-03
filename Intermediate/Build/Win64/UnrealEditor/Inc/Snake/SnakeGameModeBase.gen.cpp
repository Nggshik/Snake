// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake/SnakeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeGameModeBase() {}
// Cross Module References
	SNAKE_API UClass* Z_Construct_UClass_ASnakeGameModeBase_NoRegister();
	SNAKE_API UClass* Z_Construct_UClass_ASnakeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Snake();
// End Cross Module References
	void ASnakeGameModeBase::StaticRegisterNativesASnakeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeGameModeBase);
	UClass* Z_Construct_UClass_ASnakeGameModeBase_NoRegister()
	{
		return ASnakeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Snake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SnakeGameModeBase.h" },
		{ "ModuleRelativePath", "SnakeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeGameModeBase_Statics::ClassParams = {
		&ASnakeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASnakeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeGameModeBase.OuterSingleton, Z_Construct_UClass_ASnakeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakeGameModeBase.OuterSingleton;
	}
	template<> SNAKE_API UClass* StaticClass<ASnakeGameModeBase>()
	{
		return ASnakeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeGameModeBase);
	struct Z_CompiledInDeferFile_FID_Snake_Source_Snake_SnakeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Snake_Source_Snake_SnakeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeGameModeBase, ASnakeGameModeBase::StaticClass, TEXT("ASnakeGameModeBase"), &Z_Registration_Info_UClass_ASnakeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeGameModeBase), 1052400482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Snake_Source_Snake_SnakeGameModeBase_h_21715577(TEXT("/Script/Snake"),
		Z_CompiledInDeferFile_FID_Snake_Source_Snake_SnakeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Snake_Source_Snake_SnakeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
