// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALPROJECT_KeyCard_generated_h
#error "KeyCard.generated.h already included, missing '#pragma once' in KeyCard.h"
#endif
#define UNREALPROJECT_KeyCard_generated_h

#define unrealproject_Source_unrealproject_KeyCard_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_overlappedComponent,Z_Param_actor,Z_Param_otherComponent,Z_Param_bodyIndex,Z_Param_fromSweep,Z_Param_Out_result); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_KeyCard_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bodyIndex); \
		P_GET_UBOOL(Z_Param_fromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_overlappedComponent,Z_Param_actor,Z_Param_otherComponent,Z_Param_bodyIndex,Z_Param_fromSweep,Z_Param_Out_result); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_KeyCard_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeyCard(); \
	friend struct Z_Construct_UClass_AKeyCard_Statics; \
public: \
	DECLARE_CLASS(AKeyCard, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AKeyCard)


#define unrealproject_Source_unrealproject_KeyCard_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAKeyCard(); \
	friend struct Z_Construct_UClass_AKeyCard_Statics; \
public: \
	DECLARE_CLASS(AKeyCard, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AKeyCard)


#define unrealproject_Source_unrealproject_KeyCard_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeyCard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeyCard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyCard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyCard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyCard(AKeyCard&&); \
	NO_API AKeyCard(const AKeyCard&); \
public:


#define unrealproject_Source_unrealproject_KeyCard_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyCard(AKeyCard&&); \
	NO_API AKeyCard(const AKeyCard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyCard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyCard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeyCard)


#define unrealproject_Source_unrealproject_KeyCard_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sceneComponent() { return STRUCT_OFFSET(AKeyCard, sceneComponent); } \
	FORCEINLINE static uint32 __PPO__trigger() { return STRUCT_OFFSET(AKeyCard, trigger); } \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(AKeyCard, mesh); }


#define unrealproject_Source_unrealproject_KeyCard_h_11_PROLOG
#define unrealproject_Source_unrealproject_KeyCard_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_KeyCard_h_14_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_KeyCard_h_14_RPC_WRAPPERS \
	unrealproject_Source_unrealproject_KeyCard_h_14_INCLASS \
	unrealproject_Source_unrealproject_KeyCard_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealproject_Source_unrealproject_KeyCard_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_KeyCard_h_14_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_KeyCard_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_KeyCard_h_14_INCLASS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_KeyCard_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealproject_Source_unrealproject_KeyCard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
