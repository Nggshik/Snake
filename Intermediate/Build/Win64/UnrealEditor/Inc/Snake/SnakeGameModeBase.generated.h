// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKE_SnakeGameModeBase_generated_h
#error "SnakeGameModeBase.generated.h already included, missing '#pragma once' in SnakeGameModeBase.h"
#endif
#define SNAKE_SnakeGameModeBase_generated_h

#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_SPARSE_DATA
#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_RPC_WRAPPERS
#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeGameModeBase(); \
	friend struct Z_Construct_UClass_ASnakeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameModeBase)


#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASnakeGameModeBase(); \
	friend struct Z_Construct_UClass_ASnakeGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeGameModeBase)


#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeGameModeBase(ASnakeGameModeBase&&); \
	NO_API ASnakeGameModeBase(const ASnakeGameModeBase&); \
public:


#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeGameModeBase(ASnakeGameModeBase&&); \
	NO_API ASnakeGameModeBase(const ASnakeGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeGameModeBase)


#define FID_Snake_Source_Snake_SnakeGameModeBase_h_12_PROLOG
#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_SPARSE_DATA \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_RPC_WRAPPERS \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_INCLASS \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Snake_Source_Snake_SnakeGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_SPARSE_DATA \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Snake_Source_Snake_SnakeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_API UClass* StaticClass<class ASnakeGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Snake_Source_Snake_SnakeGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
