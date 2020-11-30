// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MYPROJECT_MyProjectCharacter_generated_h
#error "MyProjectCharacter.generated.h already included, missing '#pragma once' in MyProjectCharacter.h"
#endif
#define MYPROJECT_MyProjectCharacter_generated_h

#define MyProject_Source_MyProject_MyProjectCharacter_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FMeleeCollisionProfile>();

#define MyProject_Source_MyProject_MyProjectCharacter_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FPlayerAttackMontage>();

#define MyProject_Source_MyProject_MyProjectCharacter_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackInput(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyProjectCharacter_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetCombo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetCombo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopSprinting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopSprinting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSprint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Sprint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnAttackHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnAttackHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttackInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttackInput(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_MyProjectCharacter_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define MyProject_Source_MyProject_MyProjectCharacter_h_89_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define MyProject_Source_MyProject_MyProjectCharacter_h_89_STANDARD_CONSTRUCTORS \
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


#define MyProject_Source_MyProject_MyProjectCharacter_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCharacter)


#define MyProject_Source_MyProject_MyProjectCharacter_h_89_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProjectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MeleeFistAttackMontage() { return STRUCT_OFFSET(AMyProjectCharacter, MeleeFistAttackMontage); } \
	FORCEINLINE static uint32 __PPO__PlayerAttackDataTable() { return STRUCT_OFFSET(AMyProjectCharacter, PlayerAttackDataTable); } \
	FORCEINLINE static uint32 __PPO__CharacterDataAsset() { return STRUCT_OFFSET(AMyProjectCharacter, CharacterDataAsset); } \
	FORCEINLINE static uint32 __PPO__PunchSoundCue() { return STRUCT_OFFSET(AMyProjectCharacter, PunchSoundCue); } \
	FORCEINLINE static uint32 __PPO__PunchThrowSoundCue() { return STRUCT_OFFSET(AMyProjectCharacter, PunchThrowSoundCue); } \
	FORCEINLINE static uint32 __PPO__LeftFistCollisionBox() { return STRUCT_OFFSET(AMyProjectCharacter, LeftFistCollisionBox); } \
	FORCEINLINE static uint32 __PPO__RightFistCollisionBox() { return STRUCT_OFFSET(AMyProjectCharacter, RightFistCollisionBox); }


#define MyProject_Source_MyProject_MyProjectCharacter_h_86_PROLOG
#define MyProject_Source_MyProject_MyProjectCharacter_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_INCLASS \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_MyProjectCharacter_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_89_ENHANCED_CONSTRUCTORS \
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
