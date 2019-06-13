// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamePlayState : int32;
#ifdef UNREALPROJECT_unrealprojectGameModeBase_generated_h
#error "unrealprojectGameModeBase.generated.h already included, missing '#pragma once' in unrealprojectGameModeBase.h"
#endif
#define UNREALPROJECT_unrealprojectGameModeBase_generated_h

#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAunrealprojectGameModeBase(); \
	friend struct Z_Construct_UClass_AunrealprojectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AunrealprojectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AunrealprojectGameModeBase)


#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAunrealprojectGameModeBase(); \
	friend struct Z_Construct_UClass_AunrealprojectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AunrealprojectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/unrealproject"), NO_API) \
	DECLARE_SERIALIZER(AunrealprojectGameModeBase)


#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AunrealprojectGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AunrealprojectGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AunrealprojectGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AunrealprojectGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AunrealprojectGameModeBase(AunrealprojectGameModeBase&&); \
	NO_API AunrealprojectGameModeBase(const AunrealprojectGameModeBase&); \
public:


#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AunrealprojectGameModeBase(AunrealprojectGameModeBase&&); \
	NO_API AunrealprojectGameModeBase(const AunrealprojectGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AunrealprojectGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AunrealprojectGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AunrealprojectGameModeBase)


#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET
#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_18_PROLOG
#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_RPC_WRAPPERS \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_INCLASS \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
	unrealproject_Source_unrealproject_unrealprojectGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealproject_Source_unrealproject_unrealprojectGameModeBase_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EGamePlayState::EPlaying) \
	op(EGamePlayState::EGameOver) \
	op(EGamePlayState::EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
