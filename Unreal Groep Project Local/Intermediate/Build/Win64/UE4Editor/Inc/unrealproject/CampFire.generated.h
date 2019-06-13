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
#ifdef UNREALPROJECT_CampFire_generated_h
#error "CampFire.generated.h already included, missing '#pragma once' in CampFire.h"
#endif
#define UNREALPROJECT_CampFire_generated_h

#define unrealproject_Source_unrealproject_CampFire_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyFireDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyFireDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_CampFire_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyFireDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyFireDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_CampFire_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACampFire(); \
	friend struct Z_Construct_UClass_ACampFire_Statics; \
public: \
	DECLARE_CLASS(ACampFire, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(ACampFire)


#define unrealproject_Source_unrealproject_CampFire_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACampFire(); \
	friend struct Z_Construct_UClass_ACampFire_Statics; \
public: \
	DECLARE_CLASS(ACampFire, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(ACampFire)


#define unrealproject_Source_unrealproject_CampFire_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACampFire(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACampFire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACampFire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACampFire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACampFire(ACampFire&&); \
	NO_API ACampFire(const ACampFire&); \
public:


#define unrealproject_Source_unrealproject_CampFire_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACampFire(ACampFire&&); \
	NO_API ACampFire(const ACampFire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACampFire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACampFire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACampFire)


#define unrealproject_Source_unrealproject_CampFire_h_14_PRIVATE_PROPERTY_OFFSET
#define unrealproject_Source_unrealproject_CampFire_h_11_PROLOG
#define unrealproject_Source_unrealproject_CampFire_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_CampFire_h_14_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_CampFire_h_14_RPC_WRAPPERS \
	unrealproject_Source_unrealproject_CampFire_h_14_INCLASS \
	unrealproject_Source_unrealproject_CampFire_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealproject_Source_unrealproject_CampFire_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_CampFire_h_14_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_CampFire_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_CampFire_h_14_INCLASS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_CampFire_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealproject_Source_unrealproject_CampFire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
