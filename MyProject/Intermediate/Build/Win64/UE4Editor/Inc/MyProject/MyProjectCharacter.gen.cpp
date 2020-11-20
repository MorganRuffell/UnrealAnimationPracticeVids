// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectCharacter() {}
// Cross Module References
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_EAttackType();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_ELogOutput();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_ELogLevel();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeCollisionProfile();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttackMontage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectCharacter_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_AttackEnd();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_AttackInput();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_AttackStart();
	MYPROJECT_API UFunction* Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static UEnum* EAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_EAttackType, Z_Construct_UPackage__Script_MyProject(), TEXT("EAttackType"));
		}
		return Singleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<EAttackType>()
	{
		return EAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttackType(EAttackType_StaticEnum, TEXT("/Script/MyProject"), TEXT("EAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_EAttackType_Hash() { return 3374615514U; }
	UEnum* Z_Construct_UEnum_MyProject_EAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttackType"), 0, Get_Z_Construct_UEnum_MyProject_EAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttackType::MELEE_FIST", (int64)EAttackType::MELEE_FIST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MELEE_FIST.DisplayName", "Melee - Fist" },
				{ "ModuleRelativePath", "MyProjectCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				"EAttackType",
				"EAttackType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELogOutput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_ELogOutput, Z_Construct_UPackage__Script_MyProject(), TEXT("ELogOutput"));
		}
		return Singleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<ELogOutput>()
	{
		return ELogOutput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELogOutput(ELogOutput_StaticEnum, TEXT("/Script/MyProject"), TEXT("ELogOutput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_ELogOutput_Hash() { return 1346012621U; }
	UEnum* Z_Construct_UEnum_MyProject_ELogOutput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELogOutput"), 0, Get_Z_Construct_UEnum_MyProject_ELogOutput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELogOutput::ALL", (int64)ELogOutput::ALL },
				{ "ELogOutput::OUTPUT_LOG", (int64)ELogOutput::OUTPUT_LOG },
				{ "ELogOutput::SCREEN", (int64)ELogOutput::SCREEN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ALL.DisplayName", "All Levels" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MyProjectCharacter.h" },
				{ "OUTPUT_LOG.DisplayName", "Output Log" },
				{ "SCREEN.DisplayName", "Screen" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				"ELogOutput",
				"ELogOutput",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELogLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject_ELogLevel, Z_Construct_UPackage__Script_MyProject(), TEXT("ELogLevel"));
		}
		return Singleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<ELogLevel>()
	{
		return ELogLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELogLevel(ELogLevel_StaticEnum, TEXT("/Script/MyProject"), TEXT("ELogLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject_ELogLevel_Hash() { return 1383815404U; }
	UEnum* Z_Construct_UEnum_MyProject_ELogLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELogLevel"), 0, Get_Z_Construct_UEnum_MyProject_ELogLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELogLevel::TRACE", (int64)ELogLevel::TRACE },
				{ "ELogLevel::DEBUG", (int64)ELogLevel::DEBUG },
				{ "ELogLevel::INFO", (int64)ELogLevel::INFO },
				{ "ELogLevel::WARNING", (int64)ELogLevel::WARNING },
				{ "ELogLevel::ERROR", (int64)ELogLevel::ERROR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DEBUG.DisplayName", "Debug" },
				{ "ERROR.DisplayName", "Error" },
				{ "INFO.DisplayName", "Info" },
				{ "ModuleRelativePath", "MyProjectCharacter.h" },
				{ "TRACE.DisplayName", "Trace" },
				{ "WARNING.DisplayName", "Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
				nullptr,
				"ELogLevel",
				"ELogLevel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMeleeCollisionProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FMeleeCollisionProfile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeCollisionProfile, Z_Construct_UPackage__Script_MyProject(), TEXT("MeleeCollisionProfile"), sizeof(FMeleeCollisionProfile), Get_Z_Construct_UScriptStruct_FMeleeCollisionProfile_Hash());
	}
	return Singleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FMeleeCollisionProfile>()
{
	return FMeleeCollisionProfile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeleeCollisionProfile(FMeleeCollisionProfile::StaticStruct, TEXT("/Script/MyProject"), TEXT("MeleeCollisionProfile"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject_StaticRegisterNativesFMeleeCollisionProfile
{
	FScriptStruct_MyProject_StaticRegisterNativesFMeleeCollisionProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeleeCollisionProfile")),new UScriptStruct::TCppStructOps<FMeleeCollisionProfile>);
	}
} ScriptStruct_MyProject_StaticRegisterNativesFMeleeCollisionProfile;
	struct Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeCollisionProfile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Disabled_MetaData[] = {
		{ "Category", "MeleeCollisionProfile" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeCollisionProfile, Disabled), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Disabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Disabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "MeleeCollisionProfile" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeCollisionProfile, Enabled), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Enabled_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Disabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::NewProp_Enabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"MeleeCollisionProfile",
		sizeof(FMeleeCollisionProfile),
		alignof(FMeleeCollisionProfile),
		Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeleeCollisionProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeleeCollisionProfile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeleeCollisionProfile"), sizeof(FMeleeCollisionProfile), Get_Z_Construct_UScriptStruct_FMeleeCollisionProfile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeleeCollisionProfile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeleeCollisionProfile_Hash() { return 3471415192U; }
class UScriptStruct* FPlayerAttackMontage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerAttackMontage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAttackMontage, Z_Construct_UPackage__Script_MyProject(), TEXT("PlayerAttackMontage"), sizeof(FPlayerAttackMontage), Get_Z_Construct_UScriptStruct_FPlayerAttackMontage_Hash());
	}
	return Singleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FPlayerAttackMontage>()
{
	return FPlayerAttackMontage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerAttackMontage(FPlayerAttackMontage::StaticStruct, TEXT("/Script/MyProject"), TEXT("PlayerAttackMontage"), false, nullptr, nullptr);
static struct FScriptStruct_MyProject_StaticRegisterNativesFPlayerAttackMontage
{
	FScriptStruct_MyProject_StaticRegisterNativesFPlayerAttackMontage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerAttackMontage")),new UScriptStruct::TCppStructOps<FPlayerAttackMontage>);
	}
} ScriptStruct_MyProject_StaticRegisterNativesFPlayerAttackMontage;
	struct Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimSectionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AnimSectionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Data Tables are essentially structs with more stuff, and they inherit from FTableRowBase.\nThe combonation of these allow unreal to get this infomation from the base implementation and the FTable struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAttackMontage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "PlayerAttackMontage" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Description." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAttackMontage, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_Description_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimSectionCount_MetaData[] = {
		{ "Category", "PlayerAttackMontage" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Amount of sections marked start in our montage" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimSectionCount = { "AnimSectionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAttackMontage, AnimSectionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimSectionCount_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimSectionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "PlayerAttackMontage" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Attack Animation Montage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerAttackMontage, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimMontage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimSectionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::NewProp_AnimMontage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PlayerAttackMontage",
		sizeof(FPlayerAttackMontage),
		alignof(FPlayerAttackMontage),
		Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerAttackMontage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerAttackMontage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerAttackMontage"), sizeof(FPlayerAttackMontage), Get_Z_Construct_UScriptStruct_FPlayerAttackMontage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerAttackMontage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerAttackMontage_Hash() { return 2983487078U; }
	void AMyProjectCharacter::StaticRegisterNativesAMyProjectCharacter()
	{
		UClass* Class = AMyProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackEnd", &AMyProjectCharacter::execAttackEnd },
			{ "AttackInput", &AMyProjectCharacter::execAttackInput },
			{ "AttackStart", &AMyProjectCharacter::execAttackStart },
			{ "OnAttackHit", &AMyProjectCharacter::execOnAttackHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyProjectCharacter_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectCharacter_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Called when the player ends an attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectCharacter_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectCharacter, nullptr, "AttackEnd", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectCharacter_AttackEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectCharacter_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectCharacter_AttackInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectCharacter_AttackInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Triggers attack animation based on user input/." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectCharacter_AttackInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectCharacter, nullptr, "AttackInput", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectCharacter_AttackInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_AttackInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_AttackInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectCharacter_AttackInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectCharacter_AttackStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectCharacter_AttackStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Triggered when the player intiates an attack" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectCharacter_AttackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectCharacter, nullptr, "AttackStart", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectCharacter_AttackStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_AttackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_AttackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectCharacter_AttackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics
	{
		struct MyProjectCharacter_eventOnAttackHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectCharacter_eventOnAttackHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectCharacter_eventOnAttackHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectCharacter_eventOnAttackHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectCharacter_eventOnAttackHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProjectCharacter_eventOnAttackHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Triggers when the collider hits an enemy entity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProjectCharacter, nullptr, "OnAttackHit", sizeof(MyProjectCharacter_eventOnAttackHit_Parms), Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProjectCharacter_NoRegister()
	{
		return AMyProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationMontageSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationMontageSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFistCollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightFistCollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFistCollisionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftFistCollisionBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAttackDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerAttackDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeFistAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeFistAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyProjectCharacter_AttackEnd, "AttackEnd" }, // 575287497
		{ &Z_Construct_UFunction_AMyProjectCharacter_AttackInput, "AttackInput" }, // 1257899537
		{ &Z_Construct_UFunction_AMyProjectCharacter_AttackStart, "AttackStart" }, // 789878311
		{ &Z_Construct_UFunction_AMyProjectCharacter_OnAttackHit, "OnAttackHit" }, // 1747191310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyProjectCharacter.h" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_AnimationMontageSpeed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_AnimationMontageSpeed = { "AnimationMontageSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, AnimationMontageSpeed), METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_AnimationMontageSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_AnimationMontageSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_RightFistCollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_RightFistCollisionBox = { "RightFistCollisionBox", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, RightFistCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_RightFistCollisionBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_RightFistCollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_LeftFistCollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_LeftFistCollisionBox = { "LeftFistCollisionBox", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, LeftFistCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_LeftFistCollisionBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_LeftFistCollisionBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_PlayerAttackDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DataTable" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_PlayerAttackDataTable = { "PlayerAttackDataTable", nullptr, (EPropertyFlags)0x0040000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, PlayerAttackDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_PlayerAttackDataTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_PlayerAttackDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_MeleeFistAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Attack Animation Montage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_MeleeFistAttackMontage = { "MeleeFistAttackMontage", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, MeleeFistAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_MeleeFistAttackMontage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_MeleeFistAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_FollowCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_AnimationMontageSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_RightFistCollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_LeftFistCollisionBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_PlayerAttackDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_MeleeFistAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectCharacter_Statics::ClassParams = {
		&AMyProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyProjectCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectCharacter, 2440064383);
	template<> MYPROJECT_API UClass* StaticClass<AMyProjectCharacter>()
	{
		return AMyProjectCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectCharacter(Z_Construct_UClass_AMyProjectCharacter, &AMyProjectCharacter::StaticClass, TEXT("/Script/MyProject"), TEXT("AMyProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
