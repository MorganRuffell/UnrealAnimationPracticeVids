// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/MyAnimNotifyState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimNotifyState() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UMyAnimNotifyState_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UMyAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UMyAnimNotifyState::StaticRegisterNativesUMyAnimNotifyState()
	{
	}
	UClass* Z_Construct_UClass_UMyAnimNotifyState_NoRegister()
	{
		return UMyAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UMyAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyAnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MyAnimNotifyState.h" },
		{ "ModuleRelativePath", "MyAnimNotifyState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAnimNotifyState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyAnimNotifyState_Statics::ClassParams = {
		&UMyAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyAnimNotifyState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyAnimNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyAnimNotifyState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyAnimNotifyState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyAnimNotifyState, 2197781959);
	template<> MYPROJECT_API UClass* StaticClass<UMyAnimNotifyState>()
	{
		return UMyAnimNotifyState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyAnimNotifyState(Z_Construct_UClass_UMyAnimNotifyState, &UMyAnimNotifyState::StaticClass, TEXT("/Script/MyProject"), TEXT("UMyAnimNotifyState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAnimNotifyState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
