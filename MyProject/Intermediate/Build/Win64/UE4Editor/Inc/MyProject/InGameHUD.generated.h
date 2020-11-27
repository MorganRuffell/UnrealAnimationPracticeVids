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

#define MyProject_Source_MyProject_UI_InGameHUD_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateComboCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateComboCount(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawHUD(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_UI_InGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginPlay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateComboCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateComboCount(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(Z_Param_DeltaSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawHUD(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_UI_InGameHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInGameHUD(); \
	friend struct Z_Construct_UClass_AInGameHUD_Statics; \
public: \
	DECLARE_CLASS(AInGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AInGameHUD)


#define MyProject_Source_MyProject_UI_InGameHUD_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAInGameHUD(); \
	friend struct Z_Construct_UClass_AInGameHUD_Statics; \
public: \
	DECLARE_CLASS(AInGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AInGameHUD)


#define MyProject_Source_MyProject_UI_InGameHUD_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInGameHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInGameHUD(AInGameHUD&&); \
	NO_API AInGameHUD(const AInGameHUD&); \
public:


#define MyProject_Source_MyProject_UI_InGameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInGameHUD(AInGameHUD&&); \
	NO_API AInGameHUD(const AInGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInGameHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInGameHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInGameHUD)


#define MyProject_Source_MyProject_UI_InGameHUD_h_18_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_UI_InGameHUD_h_15_PROLOG
#define MyProject_Source_MyProject_UI_InGameHUD_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_RPC_WRAPPERS \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_INCLASS \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_UI_InGameHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_UI_InGameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AInGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_UI_InGameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
