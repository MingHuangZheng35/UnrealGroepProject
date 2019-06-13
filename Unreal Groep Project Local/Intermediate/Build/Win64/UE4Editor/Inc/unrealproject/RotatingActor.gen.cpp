// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrealproject/RotatingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatingActor() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_ARotatingActor_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_ARotatingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_unrealproject();
// End Cross Module References
	void ARotatingActor::StaticRegisterNativesARotatingActor()
	{
	}
	UClass* Z_Construct_UClass_ARotatingActor_NoRegister()
	{
		return ARotatingActor::StaticClass();
	}
	struct Z_Construct_UClass_ARotatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThisObjectHasTheRightPositon_MetaData[];
#endif
		static void NewProp_ThisObjectHasTheRightPositon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ThisObjectHasTheRightPositon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheCorrectPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TheCorrectPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmountToRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmountToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorIntializeRotate_MetaData[];
#endif
		static void NewProp_ActorIntializeRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActorIntializeRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARotatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_unrealproject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RotatingActor.h" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_ThisObjectHasTheRightPositon_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	void Z_Construct_UClass_ARotatingActor_Statics::NewProp_ThisObjectHasTheRightPositon_SetBit(void* Obj)
	{
		((ARotatingActor*)Obj)->ThisObjectHasTheRightPositon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_ThisObjectHasTheRightPositon = { UE4CodeGen_Private::EPropertyClass::Bool, "ThisObjectHasTheRightPositon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARotatingActor), &Z_Construct_UClass_ARotatingActor_Statics::NewProp_ThisObjectHasTheRightPositon_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_ThisObjectHasTheRightPositon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_ThisObjectHasTheRightPositon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_TheCorrectPosition_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_TheCorrectPosition = { UE4CodeGen_Private::EPropertyClass::Float, "TheCorrectPosition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotatingActor, TheCorrectPosition), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_TheCorrectPosition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_TheCorrectPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_Timer = { UE4CodeGen_Private::EPropertyClass::Float, "Timer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotatingActor, Timer), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_Timer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_AmountToRotate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_AmountToRotate = { UE4CodeGen_Private::EPropertyClass::Float, "AmountToRotate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotatingActor, AmountToRotate), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_AmountToRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_AmountToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_ActorIntializeRotate_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	void Z_Construct_UClass_ARotatingActor_Statics::NewProp_ActorIntializeRotate_SetBit(void* Obj)
	{
		((ARotatingActor*)Obj)->ActorIntializeRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_ActorIntializeRotate = { UE4CodeGen_Private::EPropertyClass::Bool, "ActorIntializeRotate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARotatingActor), &Z_Construct_UClass_ARotatingActor_Statics::NewProp_ActorIntializeRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_ActorIntializeRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_ActorIntializeRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_RollValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_RollValue = { UE4CodeGen_Private::EPropertyClass::Float, "RollValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotatingActor, RollValue), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RollValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_RollValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_YawValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_YawValue = { UE4CodeGen_Private::EPropertyClass::Float, "YawValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotatingActor, YawValue), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_YawValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_YawValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARotatingActor_Statics::NewProp_PitchValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "RotatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARotatingActor_Statics::NewProp_PitchValue = { UE4CodeGen_Private::EPropertyClass::Float, "PitchValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotatingActor, PitchValue), METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::NewProp_PitchValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::NewProp_PitchValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARotatingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_ThisObjectHasTheRightPositon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_TheCorrectPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_AmountToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_ActorIntializeRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_RollValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_YawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARotatingActor_Statics::NewProp_PitchValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARotatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARotatingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARotatingActor_Statics::ClassParams = {
		&ARotatingActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ARotatingActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARotatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARotatingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARotatingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARotatingActor, 2840203271);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotatingActor(Z_Construct_UClass_ARotatingActor, &ARotatingActor::StaticClass, TEXT("/Script/unrealproject"), TEXT("ARotatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
