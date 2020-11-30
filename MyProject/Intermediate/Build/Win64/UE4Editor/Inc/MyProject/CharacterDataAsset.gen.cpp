// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/CharacterDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDataAsset() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UCharacterDataAsset_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UCharacterDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UCharacterDataAsset::StaticRegisterNativesUCharacterDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UCharacterDataAsset_NoRegister()
	{
		return UCharacterDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSprintSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSprintSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterDataAsset.h" },
		{ "ModuleRelativePath", "CharacterDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentSprintSpeed_MetaData[] = {
		{ "Category", "PlayerMovementRates" },
		{ "ModuleRelativePath", "CharacterDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentSprintSpeed = { "CurrentSprintSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataAsset, CurrentSprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentSprintSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentSprintSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentWalkSpeed_MetaData[] = {
		{ "Category", "PlayerMovementRates" },
		{ "ModuleRelativePath", "CharacterDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentWalkSpeed = { "CurrentWalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataAsset, CurrentWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentWalkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "CameraMovementRates" },
		{ "ModuleRelativePath", "CharacterDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataAsset, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "CameraMovementRates" },
		{ "ModuleRelativePath", "CharacterDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterDataAsset, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseTurnRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentSprintSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_CurrentWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataAsset_Statics::NewProp_BaseTurnRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterDataAsset_Statics::ClassParams = {
		&UCharacterDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterDataAsset_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterDataAsset_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharacterDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterDataAsset, 3854541332);
	template<> MYPROJECT_API UClass* StaticClass<UCharacterDataAsset>()
	{
		return UCharacterDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterDataAsset(Z_Construct_UClass_UCharacterDataAsset, &UCharacterDataAsset::StaticClass, TEXT("/Script/MyProject"), TEXT("UCharacterDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
