// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
struct FVector;
class UPrimitiveComponent;
class AController;
class AActor;
struct FHitResult;
#ifdef UNREALPROJECT_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define UNREALPROJECT_FPSCharacter_generated_h

#define unrealproject_Source_unrealproject_FPSCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRecievePointDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecievePointDamage(Z_Param_Damage,Z_Param_DamageType,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_Out_HitInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Use(Z_Param_actor,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickUp) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickUp(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInInventory) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InInventory(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_FPSCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRecievePointDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RecievePointDamage(Z_Param_Damage,Z_Param_DamageType,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_Out_HitInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUse) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_GET_OBJECT(AActor,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Use(Z_Param_actor,Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickUp) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickUp(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInInventory) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->InInventory(Z_Param_actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_FPSCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define unrealproject_Source_unrealproject_FPSCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define unrealproject_Source_unrealproject_FPSCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define unrealproject_Source_unrealproject_FPSCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define unrealproject_Source_unrealproject_FPSCharacter_h_16_PRIVATE_PROPERTY_OFFSET
#define unrealproject_Source_unrealproject_FPSCharacter_h_13_PROLOG
#define unrealproject_Source_unrealproject_FPSCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_RPC_WRAPPERS \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_INCLASS \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealproject_Source_unrealproject_FPSCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_INCLASS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_FPSCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealproject_Source_unrealproject_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
