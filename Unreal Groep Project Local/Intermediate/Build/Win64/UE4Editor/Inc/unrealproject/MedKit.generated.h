// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALPROJECT_MedKit_generated_h
#error "MedKit.generated.h already included, missing '#pragma once' in MedKit.h"
#endif
#define UNREALPROJECT_MedKit_generated_h

#define unrealproject_Source_unrealproject_MedKit_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_MedKit_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_MedKit_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMedKit(); \
	friend struct Z_Construct_UClass_AMedKit_Statics; \
public: \
	DECLARE_CLASS(AMedKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AMedKit)


#define unrealproject_Source_unrealproject_MedKit_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMedKit(); \
	friend struct Z_Construct_UClass_AMedKit_Statics; \
public: \
	DECLARE_CLASS(AMedKit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AMedKit)


#define unrealproject_Source_unrealproject_MedKit_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMedKit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMedKit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedKit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedKit(AMedKit&&); \
	NO_API AMedKit(const AMedKit&); \
public:


#define unrealproject_Source_unrealproject_MedKit_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedKit(AMedKit&&); \
	NO_API AMedKit(const AMedKit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedKit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedKit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMedKit)


#define unrealproject_Source_unrealproject_MedKit_h_13_PRIVATE_PROPERTY_OFFSET
#define unrealproject_Source_unrealproject_MedKit_h_10_PROLOG
#define unrealproject_Source_unrealproject_MedKit_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_MedKit_h_13_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_MedKit_h_13_RPC_WRAPPERS \
	unrealproject_Source_unrealproject_MedKit_h_13_INCLASS \
	unrealproject_Source_unrealproject_MedKit_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealproject_Source_unrealproject_MedKit_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_MedKit_h_13_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_MedKit_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_MedKit_h_13_INCLASS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_MedKit_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealproject_Source_unrealproject_MedKit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
