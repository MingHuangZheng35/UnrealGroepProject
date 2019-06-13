// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unrealproject/Lock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLock() {}
// Cross Module References
	UNREALPROJECT_API UClass* Z_Construct_UClass_ALock_NoRegister();
	UNREALPROJECT_API UClass* Z_Construct_UClass_ALock();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_unrealproject();
	UNREALPROJECT_API UFunction* Z_Construct_UFunction_ALock_GetAllKeys();
	UNREALPROJECT_API UClass* Z_Construct_UClass_AKeyCard_NoRegister();
	UNREALPROJECT_API UFunction* Z_Construct_UFunction_ALock_Lock();
	UNREALPROJECT_API UFunction* Z_Construct_UFunction_ALock_MultipleLocks();
	UNREALPROJECT_API UFunction* Z_Construct_UFunction_ALock_Unlock();
// End Cross Module References
	void ALock::StaticRegisterNativesALock()
	{
		UClass* Class = ALock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllKeys", &ALock::execGetAllKeys },
			{ "Lock", &ALock::execLock },
			{ "MultipleLocks", &ALock::execMultipleLocks },
			{ "Unlock", &ALock::execUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALock_GetAllKeys_Statics
	{
		struct Lock_eventGetAllKeys_Parms
		{
			TArray<AKeyCard*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALock_GetAllKeys_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Lock_eventGetAllKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALock_GetAllKeys_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AKeyCard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALock_GetAllKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALock_GetAllKeys_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALock_GetAllKeys_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALock_GetAllKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locks" },
		{ "ModuleRelativePath", "Lock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALock_GetAllKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALock, "GetAllKeys", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Lock_eventGetAllKeys_Parms), Z_Construct_UFunction_ALock_GetAllKeys_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALock_GetAllKeys_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALock_GetAllKeys_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALock_GetAllKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALock_GetAllKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALock_GetAllKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALock_Lock_Statics
	{
		struct Lock_eventLock_Parms
		{
			AKeyCard* key;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALock_Lock_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Object, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Lock_eventLock_Parms, key), Z_Construct_UClass_AKeyCard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALock_Lock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALock_Lock_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALock_Lock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locks" },
		{ "ModuleRelativePath", "Lock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALock_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALock, "Lock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Lock_eventLock_Parms), Z_Construct_UFunction_ALock_Lock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALock_Lock_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALock_Lock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALock_Lock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALock_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALock_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALock_MultipleLocks_Statics
	{
		struct Lock_eventMultipleLocks_Parms
		{
			TArray<AKeyCard*> newKeys;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_newKeys;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newKeys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALock_MultipleLocks_Statics::NewProp_newKeys = { UE4CodeGen_Private::EPropertyClass::Array, "newKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Lock_eventMultipleLocks_Parms, newKeys), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALock_MultipleLocks_Statics::NewProp_newKeys_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "newKeys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AKeyCard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALock_MultipleLocks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALock_MultipleLocks_Statics::NewProp_newKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALock_MultipleLocks_Statics::NewProp_newKeys_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALock_MultipleLocks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locks" },
		{ "ModuleRelativePath", "Lock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALock_MultipleLocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALock, "MultipleLocks", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Lock_eventMultipleLocks_Parms), Z_Construct_UFunction_ALock_MultipleLocks_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALock_MultipleLocks_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALock_MultipleLocks_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALock_MultipleLocks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALock_MultipleLocks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALock_MultipleLocks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALock_Unlock_Statics
	{
		struct Lock_eventUnlock_Parms
		{
			AKeyCard* key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALock_Unlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Lock_eventUnlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALock_Unlock_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Lock_eventUnlock_Parms), &Z_Construct_UFunction_ALock_Unlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALock_Unlock_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Object, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Lock_eventUnlock_Parms, key), Z_Construct_UClass_AKeyCard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALock_Unlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALock_Unlock_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALock_Unlock_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALock_Unlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Locks" },
		{ "ModuleRelativePath", "Lock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALock_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALock, "Unlock", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Lock_eventUnlock_Parms), Z_Construct_UFunction_ALock_Unlock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALock_Unlock_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALock_Unlock_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALock_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALock_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALock_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALock_NoRegister()
	{
		return ALock::StaticClass();
	}
	struct Z_Construct_UClass_ALock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_keys;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_keys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_unrealproject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALock_GetAllKeys, "GetAllKeys" }, // 3569779370
		{ &Z_Construct_UFunction_ALock_Lock, "Lock" }, // 417550494
		{ &Z_Construct_UFunction_ALock_MultipleLocks, "MultipleLocks" }, // 3088171157
		{ &Z_Construct_UFunction_ALock_Unlock, "Unlock" }, // 340004176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Lock.h" },
		{ "ModuleRelativePath", "Lock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALock_Statics::NewProp_keys_MetaData[] = {
		{ "ModuleRelativePath", "Lock.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALock_Statics::NewProp_keys = { UE4CodeGen_Private::EPropertyClass::Array, "keys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ALock, keys), METADATA_PARAMS(Z_Construct_UClass_ALock_Statics::NewProp_keys_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::NewProp_keys_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALock_Statics::NewProp_keys_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "keys", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AKeyCard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALock_Statics::NewProp_keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALock_Statics::NewProp_keys_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALock_Statics::ClassParams = {
		&ALock::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ALock_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALock_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALock, 1274019716);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALock(Z_Construct_UClass_ALock, &ALock::StaticClass, TEXT("/Script/unrealproject"), TEXT("ALock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
