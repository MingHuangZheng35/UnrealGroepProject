// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AKeyCard;
#ifdef UNREALPROJECT_Lock_generated_h
#error "Lock.generated.h already included, missing '#pragma once' in Lock.h"
#endif
#define UNREALPROJECT_Lock_generated_h

#define unrealproject_Source_unrealproject_Lock_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AKeyCard*>*)Z_Param__Result=P_THIS->GetAllKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultipleLocks) \
	{ \
		P_GET_TARRAY(AKeyCard*,Z_Param_newKeys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MultipleLocks(Z_Param_newKeys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLock) \
	{ \
		P_GET_OBJECT(AKeyCard,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Lock(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlock) \
	{ \
		P_GET_OBJECT(AKeyCard,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Unlock(Z_Param_key); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_Lock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllKeys) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AKeyCard*>*)Z_Param__Result=P_THIS->GetAllKeys(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMultipleLocks) \
	{ \
		P_GET_TARRAY(AKeyCard*,Z_Param_newKeys); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MultipleLocks(Z_Param_newKeys); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLock) \
	{ \
		P_GET_OBJECT(AKeyCard,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Lock(Z_Param_key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlock) \
	{ \
		P_GET_OBJECT(AKeyCard,Z_Param_key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Unlock(Z_Param_key); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_Lock_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALock(); \
	friend struct Z_Construct_UClass_ALock_Statics; \
public: \
	DECLARE_CLASS(ALock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(ALock)


#define unrealproject_Source_unrealproject_Lock_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALock(); \
	friend struct Z_Construct_UClass_ALock_Statics; \
public: \
	DECLARE_CLASS(ALock, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(ALock)


#define unrealproject_Source_unrealproject_Lock_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALock(ALock&&); \
	NO_API ALock(const ALock&); \
public:


#define unrealproject_Source_unrealproject_Lock_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALock(ALock&&); \
	NO_API ALock(const ALock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALock)


#define unrealproject_Source_unrealproject_Lock_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__keys() { return STRUCT_OFFSET(ALock, keys); }


#define unrealproject_Source_unrealproject_Lock_h_11_PROLOG
#define unrealproject_Source_unrealproject_Lock_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_Lock_h_14_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_Lock_h_14_RPC_WRAPPERS \
	unrealproject_Source_unrealproject_Lock_h_14_INCLASS \
	unrealproject_Source_unrealproject_Lock_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealproject_Source_unrealproject_Lock_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_Lock_h_14_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_Lock_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_Lock_h_14_INCLASS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_Lock_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealproject_Source_unrealproject_Lock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
