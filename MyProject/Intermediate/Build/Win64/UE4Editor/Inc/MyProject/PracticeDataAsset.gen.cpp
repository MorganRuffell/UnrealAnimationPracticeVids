// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/PracticeDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticeDataAsset() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UPracticeDataAsset_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UPracticeDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UPracticeDataAsset::StaticRegisterNativesUPracticeDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UPracticeDataAsset_NoRegister()
	{
		return UPracticeDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPracticeDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPracticeDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPracticeDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PracticeDataAsset.h" },
		{ "ModuleRelativePath", "PracticeDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPracticeDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPracticeDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPracticeDataAsset_Statics::ClassParams = {
		&UPracticeDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPracticeDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPracticeDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPracticeDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPracticeDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPracticeDataAsset, 2326671216);
	template<> MYPROJECT_API UClass* StaticClass<UPracticeDataAsset>()
	{
		return UPracticeDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPracticeDataAsset(Z_Construct_UClass_UPracticeDataAsset, &UPracticeDataAsset::StaticClass, TEXT("/Script/MyProject"), TEXT("UPracticeDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPracticeDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
