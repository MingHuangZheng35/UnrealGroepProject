// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrealproject/KeyCard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyCard() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_AKeyCard_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AKeyCard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_unrealproject();
	UNREALPROJECT_API UFunction* Z_Construct_UFunction_AKeyCard_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AKeyCard::StaticRegisterNativesAKeyCard()
	{
		UClass* Class = AKeyCard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AKeyCard::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics
	{
		struct KeyCard_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overlappedComponent;
			AActor* actor;
			UPrimitiveComponent* otherComponent;
			int32 bodyIndex;
			bool fromSweep;
			FHitResult result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_result;
		static void NewProp_fromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_fromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_overlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_overlappedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_result = { UE4CodeGen_Private::EPropertyClass::Struct, "result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(KeyCard_eventOnOverlapBegin_Parms, result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_result_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_result_MetaData)) };
	void Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_fromSweep_SetBit(void* Obj)
	{
		((KeyCard_eventOnOverlapBegin_Parms*)Obj)->fromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_fromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "fromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KeyCard_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_fromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_bodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "bodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KeyCard_eventOnOverlapBegin_Parms, bodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_otherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_otherComponent = { UE4CodeGen_Private::EPropertyClass::Object, "otherComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(KeyCard_eventOnOverlapBegin_Parms, otherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_otherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_otherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_actor = { UE4CodeGen_Private::EPropertyClass::Object, "actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KeyCard_eventOnOverlapBegin_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_overlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_overlappedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "overlappedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(KeyCard_eventOnOverlapBegin_Parms, overlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_overlappedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_overlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_fromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_bodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_otherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::NewProp_overlappedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyAndLock" },
		{ "ModuleRelativePath", "KeyCard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKeyCard, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(KeyCard_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKeyCard_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKeyCard_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKeyCard_NoRegister()
	{
		return AKeyCard::StaticClass();
	}
	struct Z_Construct_UClass_AKeyCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeyCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_unrealproject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKeyCard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKeyCard_OnOverlapBegin, "OnOverlapBegin" }, // 128515757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KeyCard.h" },
		{ "ModuleRelativePath", "KeyCard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCard_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "KeyCard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyCard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyCard_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AKeyCard, mesh), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyCard_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyCard_Statics::NewProp_mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCard_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "KeyCard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyCard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyCard_Statics::NewProp_trigger = { UE4CodeGen_Private::EPropertyClass::Object, "trigger", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AKeyCard, trigger), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyCard_Statics::NewProp_trigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyCard_Statics::NewProp_trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyCard_Statics::NewProp_sceneComponent_MetaData[] = {
		{ "Category", "KeyCard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KeyCard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKeyCard_Statics::NewProp_sceneComponent = { UE4CodeGen_Private::EPropertyClass::Object, "sceneComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080009, 1, nullptr, STRUCT_OFFSET(AKeyCard, sceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKeyCard_Statics::NewProp_sceneComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AKeyCard_Statics::NewProp_sceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKeyCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCard_Statics::NewProp_mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCard_Statics::NewProp_trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKeyCard_Statics::NewProp_sceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeyCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyCard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKeyCard_Statics::ClassParams = {
		&AKeyCard::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AKeyCard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AKeyCard_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AKeyCard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AKeyCard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeyCard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKeyCard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKeyCard, 745871001);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKeyCard(Z_Construct_UClass_AKeyCard, &AKeyCard::StaticClass, TEXT("/Script/unrealproject"), TEXT("AKeyCard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyCard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
