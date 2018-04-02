// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLESYSTEM_UText_generated_h
#error "UText.generated.h already included, missing '#pragma once' in UText.h"
#endif
#define BATTLESYSTEM_UText_generated_h

#define BattleSystem_Source_BattleSystem_Public_UText_h_15_RPC_WRAPPERS
#define BattleSystem_Source_BattleSystem_Public_UText_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BattleSystem_Source_BattleSystem_Public_UText_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText(); \
	friend BATTLESYSTEM_API class UClass* Z_Construct_UClass_UText(); \
public: \
	DECLARE_CLASS(UText, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleSystem"), NO_API) \
	DECLARE_SERIALIZER(UText) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleSystem_Source_BattleSystem_Public_UText_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUText(); \
	friend BATTLESYSTEM_API class UClass* Z_Construct_UClass_UText(); \
public: \
	DECLARE_CLASS(UText, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleSystem"), NO_API) \
	DECLARE_SERIALIZER(UText) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleSystem_Source_BattleSystem_Public_UText_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UText) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UText(UText&&); \
	NO_API UText(const UText&); \
public:


#define BattleSystem_Source_BattleSystem_Public_UText_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UText(UText&&); \
	NO_API UText(const UText&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UText)


#define BattleSystem_Source_BattleSystem_Public_UText_h_15_PRIVATE_PROPERTY_OFFSET
#define BattleSystem_Source_BattleSystem_Public_UText_h_12_PROLOG
#define BattleSystem_Source_BattleSystem_Public_UText_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_RPC_WRAPPERS \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_INCLASS \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleSystem_Source_BattleSystem_Public_UText_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_INCLASS_NO_PURE_DECLS \
	BattleSystem_Source_BattleSystem_Public_UText_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleSystem_Source_BattleSystem_Public_UText_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
