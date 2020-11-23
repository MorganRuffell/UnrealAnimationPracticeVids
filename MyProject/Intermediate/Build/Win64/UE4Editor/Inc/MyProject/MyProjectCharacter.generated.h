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

<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FMeleeCollisionProfile>();

#define MyProject_Source_MyProject_MyProjectCharacter_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics; \
	MYPROJECT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MYPROJECT_API UScriptStruct* StaticStruct<struct FPlayerAttackMontage>();

#define MyProject_Source_MyProject_MyProjectCharacter_h_86_RPC_WRAPPERS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_RPC_WRAPPERS \
>>>>>>> AudioImplementation
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


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> AudioImplementation
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


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_INCLASS_NO_PURE_DECLS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_INCLASS_NO_PURE_DECLS \
>>>>>>> AudioImplementation
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_INCLASS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_INCLASS \
>>>>>>> AudioImplementation
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_STANDARD_CONSTRUCTORS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_STANDARD_CONSTRUCTORS \
>>>>>>> AudioImplementation
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


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_ENHANCED_CONSTRUCTORS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_ENHANCED_CONSTRUCTORS \
>>>>>>> AudioImplementation
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCharacter)


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProjectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MeleeFistAttackMontage() { return STRUCT_OFFSET(AMyProjectCharacter, MeleeFistAttackMontage); } \
	FORCEINLINE static uint32 __PPO__PlayerAttackDataTable() { return STRUCT_OFFSET(AMyProjectCharacter, PlayerAttackDataTable); } \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProjectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__MeleeFistAttackMontage() { return STRUCT_OFFSET(AMyProjectCharacter, MeleeFistAttackMontage); } \
	FORCEINLINE static uint32 __PPO__PunchSoundCue() { return STRUCT_OFFSET(AMyProjectCharacter, PunchSoundCue); } \
>>>>>>> AudioImplementation
	FORCEINLINE static uint32 __PPO__LeftFistCollisionBox() { return STRUCT_OFFSET(AMyProjectCharacter, LeftFistCollisionBox); } \
	FORCEINLINE static uint32 __PPO__RightFistCollisionBox() { return STRUCT_OFFSET(AMyProjectCharacter, RightFistCollisionBox); }


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_83_PROLOG
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_INCLASS \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_STANDARD_CONSTRUCTORS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_40_PROLOG
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_RPC_WRAPPERS \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_INCLASS \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_STANDARD_CONSTRUCTORS \
>>>>>>> AudioImplementation
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
#define MyProject_Source_MyProject_MyProjectCharacter_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_86_ENHANCED_CONSTRUCTORS \
=======
#define MyProject_Source_MyProject_MyProjectCharacter_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_MyProjectCharacter_h_43_ENHANCED_CONSTRUCTORS \
>>>>>>> AudioImplementation
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
