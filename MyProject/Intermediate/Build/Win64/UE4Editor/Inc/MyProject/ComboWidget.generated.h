// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_ComboWidget_generated_h
#error "ComboWidget.generated.h already included, missing '#pragma once' in ComboWidget.h"
#endif
#define MYPROJECT_ComboWidget_generated_h

#define MyProject_Source_MyProject_UI_ComboWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCountResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CountResetCombo(); \
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
	}


#define MyProject_Source_MyProject_UI_ComboWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCountResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CountResetCombo(); \
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
	}


#define MyProject_Source_MyProject_UI_ComboWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboWidget(); \
	friend struct Z_Construct_UClass_UComboWidget_Statics; \
public: \
	DECLARE_CLASS(UComboWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UComboWidget)


#define MyProject_Source_MyProject_UI_ComboWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUComboWidget(); \
	friend struct Z_Construct_UClass_UComboWidget_Statics; \
public: \
	DECLARE_CLASS(UComboWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UComboWidget)


#define MyProject_Source_MyProject_UI_ComboWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboWidget(UComboWidget&&); \
	NO_API UComboWidget(const UComboWidget&); \
public:


#define MyProject_Source_MyProject_UI_ComboWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboWidget(UComboWidget&&); \
	NO_API UComboWidget(const UComboWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboWidget)


#define MyProject_Source_MyProject_UI_ComboWidget_h_17_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_UI_ComboWidget_h_14_PROLOG
#define MyProject_Source_MyProject_UI_ComboWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_RPC_WRAPPERS \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_INCLASS \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_UI_ComboWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_UI_ComboWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UComboWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_UI_ComboWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
