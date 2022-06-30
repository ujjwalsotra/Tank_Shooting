// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_PawnTurrents_generated_h
#error "PawnTurrents.generated.h already included, missing '#pragma once' in PawnTurrents.h"
#endif
#define TOONTANKS_PawnTurrents_generated_h

#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_RPC_WRAPPERS
#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawnTurrents(); \
	friend struct Z_Construct_UClass_APawnTurrents_Statics; \
public: \
	DECLARE_CLASS(APawnTurrents, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnTurrents)


#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPawnTurrents(); \
	friend struct Z_Construct_UClass_APawnTurrents_Statics; \
public: \
	DECLARE_CLASS(APawnTurrents, APawnBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(APawnTurrents)


#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTurrents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawnTurrents) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTurrents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTurrents); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTurrents(APawnTurrents&&); \
	NO_API APawnTurrents(const APawnTurrents&); \
public:


#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawnTurrents() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawnTurrents(APawnTurrents&&); \
	NO_API APawnTurrents(const APawnTurrents&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawnTurrents); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawnTurrents); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APawnTurrents)


#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireRate() { return STRUCT_OFFSET(APawnTurrents, FireRate); } \
	FORCEINLINE static uint32 __PPO__FireRange() { return STRUCT_OFFSET(APawnTurrents, FireRange); }


#define ToonTanks_Source_ToonTanks_PawnTurrents_h_10_PROLOG
#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_INCLASS \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_PawnTurrents_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_PawnTurrents_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class APawnTurrents>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_PawnTurrents_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
