// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TOONTANKS_ProjectileBase_generated_h
#error "ProjectileBase.generated.h already included, missing '#pragma once' in ProjectileBase.h"
#endif
#define TOONTANKS_ProjectileBase_generated_h

#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_SPARSE_DATA
#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileBase(); \
	friend struct Z_Construct_UClass_AProjectileBase_Statics; \
public: \
	DECLARE_CLASS(AProjectileBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AProjectileBase)


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public:


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileBase(AProjectileBase&&); \
	NO_API AProjectileBase(const AProjectileBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileBase)


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__projectileMovement() { return STRUCT_OFFSET(AProjectileBase, projectileMovement); } \
	FORCEINLINE static uint32 __PPO__projectileMesh() { return STRUCT_OFFSET(AProjectileBase, projectileMesh); } \
	FORCEINLINE static uint32 __PPO__trailComponent() { return STRUCT_OFFSET(AProjectileBase, trailComponent); } \
	FORCEINLINE static uint32 __PPO__damageType() { return STRUCT_OFFSET(AProjectileBase, damageType); } \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AProjectileBase, damage); } \
	FORCEINLINE static uint32 __PPO__projectileSpeed() { return STRUCT_OFFSET(AProjectileBase, projectileSpeed); } \
	FORCEINLINE static uint32 __PPO__hitParticle() { return STRUCT_OFFSET(AProjectileBase, hitParticle); } \
	FORCEINLINE static uint32 __PPO__hitSound() { return STRUCT_OFFSET(AProjectileBase, hitSound); } \
	FORCEINLINE static uint32 __PPO__launchSound() { return STRUCT_OFFSET(AProjectileBase, launchSound); }


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_11_PROLOG
#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_RPC_WRAPPERS \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_INCLASS \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_Source_ToonTanks_ProjectileBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_SPARSE_DATA \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_INCLASS_NO_PURE_DECLS \
	ToonTanks_Source_ToonTanks_ProjectileBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AProjectileBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_Source_ToonTanks_ProjectileBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
