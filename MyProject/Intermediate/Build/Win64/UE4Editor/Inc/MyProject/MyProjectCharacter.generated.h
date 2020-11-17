// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectCharacter_generated_h
#error "MyProjectCharacter.generated.h already included, missing '#pragma once' in MyProjectCharacter.h"
#endif
#define MYPROJECT_MyProjectCharacter_generated_h

#define MyProject_Source_MyProject_MyProjectCharacter_h_40_RPC_WRAPPERS
#define MyProject_Source_MyProject_MyProjectCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_MyProjectCharacter_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define MyProject_Source_MyProject_MyProjectCharacter_h_40_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define MyProject_Source_MyProject_MyProjectCharacter_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public:


#define MyProject_Source_MyProject_MyProjectCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCharacter)


#define MyProject_Source_MyProject_MyProjectCharacter_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProjectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MeleeFistAttackMontage() { return STRUCT_OFFSET(AMyProjectCharacter, MeleeFistAttackMontage); }


#define MyProject_Source_MyProject_MyProjectCharacter_h_37_PROLOG
#define MyProject_Source_MyProject_MyProjectCharacter_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_INCLASS \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectCharacter_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_MyProjectCharacter_h


#define FOREACH_ENUM_EATTACKTYPE(op) \
	op(EAttackType::MELEE_FIST) 

enum class EAttackType : uint8;
template<> MYPROJECT_API UEnum* StaticEnum<EAttackType>();

#define FOREACH_ENUM_ELOGOUTPUT(op) \
	op(ELogOutput::ALL) \
	op(ELogOutput::OUTPUT_LOG) \
	op(ELogOutput::SCREEN) 

enum class ELogOutput : uint8;
template<> MYPROJECT_API UEnum* StaticEnum<ELogOutput>();

#define FOREACH_ENUM_ELOGLEVEL(op) \
	op(ELogLevel::TRACE) \
	op(ELogLevel::DEBUG) \
	op(ELogLevel::INFO) \
	op(ELogLevel::WARNING) \
	op(ELogLevel::ERROR) 

enum class ELogLevel : uint8;
template<> MYPROJECT_API UEnum* StaticEnum<ELogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
