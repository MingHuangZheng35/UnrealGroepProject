// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrealproject/UnrealGameHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGameHUD() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUnrealGameHUD_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AUnrealGameHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_unrealproject();
// End Cross Module References
	void AUnrealGameHUD::StaticRegisterNativesAUnrealGameHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnrealGameHUD_NoRegister()
	{
		return AUnrealGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_unrealproject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealGameHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnrealGameHUD.h" },
		{ "ModuleRelativePath", "UnrealGameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealGameHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealGameHUD_Statics::ClassParams = {
		&AUnrealGameHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealGameHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealGameHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealGameHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealGameHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealGameHUD, 2596300593);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealGameHUD(Z_Construct_UClass_AUnrealGameHUD, &AUnrealGameHUD::StaticClass, TEXT("/Script/unrealproject"), TEXT("AUnrealGameHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealGameHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
