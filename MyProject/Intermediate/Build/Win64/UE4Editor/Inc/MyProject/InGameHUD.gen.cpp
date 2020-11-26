// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/UI/InGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHUD() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_AInGameHUD_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AInGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void AInGameHUD::StaticRegisterNativesAInGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AInGameHUD_NoRegister()
	{
		return AInGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/InGameHUD.h" },
		{ "ModuleRelativePath", "UI/InGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInGameHUD_Statics::ClassParams = {
		&AInGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInGameHUD, 160517765);
	template<> MYPROJECT_API UClass* StaticClass<AInGameHUD>()
	{
		return AInGameHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInGameHUD(Z_Construct_UClass_AInGameHUD, &AInGameHUD::StaticClass, TEXT("/Script/MyProject"), TEXT("AInGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
