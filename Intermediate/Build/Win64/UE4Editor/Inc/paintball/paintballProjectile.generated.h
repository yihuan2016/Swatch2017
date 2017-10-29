// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PAINTBALL_paintballProjectile_generated_h
#error "paintballProjectile.generated.h already included, missing '#pragma once' in paintballProjectile.h"
#endif
#define PAINTBALL_paintballProjectile_generated_h

#define Swatch2017_Source_paintball_paintballProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Swatch2017_Source_paintball_paintballProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Swatch2017_Source_paintball_paintballProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesApaintballProjectile(); \
	friend PAINTBALL_API class UClass* Z_Construct_UClass_ApaintballProjectile(); \
public: \
	DECLARE_CLASS(ApaintballProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/paintball"), NO_API) \
	DECLARE_SERIALIZER(ApaintballProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Swatch2017_Source_paintball_paintballProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesApaintballProjectile(); \
	friend PAINTBALL_API class UClass* Z_Construct_UClass_ApaintballProjectile(); \
public: \
	DECLARE_CLASS(ApaintballProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/paintball"), NO_API) \
	DECLARE_SERIALIZER(ApaintballProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Swatch2017_Source_paintball_paintballProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ApaintballProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ApaintballProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ApaintballProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ApaintballProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ApaintballProjectile(ApaintballProjectile&&); \
	NO_API ApaintballProjectile(const ApaintballProjectile&); \
public:


#define Swatch2017_Source_paintball_paintballProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ApaintballProjectile(ApaintballProjectile&&); \
	NO_API ApaintballProjectile(const ApaintballProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ApaintballProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ApaintballProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ApaintballProjectile)


#define Swatch2017_Source_paintball_paintballProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ApaintballProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ApaintballProjectile, ProjectileMovement); }


#define Swatch2017_Source_paintball_paintballProjectile_h_9_PROLOG
#define Swatch2017_Source_paintball_paintballProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_Source_paintball_paintballProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_Source_paintball_paintballProjectile_h_12_RPC_WRAPPERS \
	Swatch2017_Source_paintball_paintballProjectile_h_12_INCLASS \
	Swatch2017_Source_paintball_paintballProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Swatch2017_Source_paintball_paintballProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_Source_paintball_paintballProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_Source_paintball_paintballProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Swatch2017_Source_paintball_paintballProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Swatch2017_Source_paintball_paintballProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Swatch2017_Source_paintball_paintballProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
