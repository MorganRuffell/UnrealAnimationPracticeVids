// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_InGameHUD_generated_h
#error "InGameHUD.generated.h already included, missing '#pragma once' in InGameHUD.h"
#endif
#define MYPROJECT_InGameHUD_generated_h

#define MyProject_Source_MyProject_UI_InGameHUD_h_15_RPC_WRAPPERS
#define MyProject_Source_MyProject_UI_InGameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_UI_InGameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGameHUD(); \
	friend struct Z_Construct_UClass_AInGameHUD_Statics; \
public: \
	DECLARE_CLASS(AInGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AInGameHUD)


#define MyProject_Source_MyProject_UI_InGameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInGameHUD(); \
	friend struct Z_Construct_UClass_AInGameHUD_Statics; \
public: \
	DECLARE_CLASS(AInGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AInGameHUD)


#define MyProject_Source_MyProject_UI_InGameHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInGameHUD(AInGameHUD&&); \
	NO_API AInGameHUD(const AInGameHUD&); \
public:


#define MyProject_Source_MyProject_UI_InGameHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInGameHUD(AInGameHUD&&); \
	NO_API AInGameHUD(const AInGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGameHUD)


#define MyProject_Source_MyProject_UI_InGameHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_UI_InGameHUD_h_12_PROLOG
#define MyProject_Source_MyProject_UI_InGameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_RPC_WRAPPERS \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_INCLASS \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_UI_InGameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_UI_InGameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AInGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_UI_InGameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
