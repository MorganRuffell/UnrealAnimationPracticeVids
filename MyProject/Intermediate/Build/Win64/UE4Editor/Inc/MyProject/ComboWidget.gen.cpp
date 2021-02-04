// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/UI/ComboWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboWidget() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UComboWidget_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UComboWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComboWidget::execCountResetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CountResetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComboWidget::execUpdateComboCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateComboCount(Z_Param_Value);
		P_NATIVE_END;
	}
	void UComboWidget::StaticRegisterNativesUComboWidget()
	{
		UClass* Class = UComboWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CountResetCombo", &UComboWidget::execCountResetCombo },
			{ "UpdateComboCount", &UComboWidget::execUpdateComboCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboWidget_CountResetCombo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboWidget_CountResetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ComboWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboWidget_CountResetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboWidget, nullptr, "CountResetCombo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboWidget_CountResetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboWidget_CountResetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboWidget_CountResetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboWidget_CountResetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics
	{
		struct ComboWidget_eventUpdateComboCount_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComboWidget_eventUpdateComboCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ComboWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboWidget, nullptr, "UpdateComboCount", nullptr, nullptr, sizeof(ComboWidget_eventUpdateComboCount_Parms), Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboWidget_UpdateComboCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboWidget_UpdateComboCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComboWidget_NoRegister()
	{
		return UComboWidget::StaticClass();
	}
	struct Z_Construct_UClass_UComboWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TxtBoxCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TxtBoxCombo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboWidget_CountResetCombo, "CountResetCombo" }, // 379193499
		{ &Z_Construct_UFunction_UComboWidget_UpdateComboCount, "UpdateComboCount" }, // 1805477858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ComboWidget.h" },
		{ "ModuleRelativePath", "UI/ComboWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboWidget_Statics::NewProp_TxtBoxCombo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ComboWidget" },
		{ "Comment", "//This meta tag, bind widget\n//This allows you to bind it directly to the derieved widget class. It does \n//it automatically for you, if that is what you'd like.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ComboWidget.h" },
		{ "ToolTip", "This meta tag, bind widget\nThis allows you to bind it directly to the derieved widget class. It does\nit automatically for you, if that is what you'd like." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboWidget_Statics::NewProp_TxtBoxCombo = { "TxtBoxCombo", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComboWidget, TxtBoxCombo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComboWidget_Statics::NewProp_TxtBoxCombo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboWidget_Statics::NewProp_TxtBoxCombo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboWidget_Statics::NewProp_TxtBoxCombo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComboWidget_Statics::ClassParams = {
		&UComboWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComboWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComboWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComboWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboWidget, 2171608285);
	template<> MYPROJECT_API UClass* StaticClass<UComboWidget>()
	{
		return UComboWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboWidget(Z_Construct_UClass_UComboWidget, &UComboWidget::StaticClass, TEXT("/Script/MyProject"), TEXT("UComboWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
