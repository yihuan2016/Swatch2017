// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAINTBALL_paintballCharacter_generated_h
#error "paintballCharacter.generated.h already included, missing '#pragma once' in paintballCharacter.h"
#endif
#define PAINTBALL_paintballCharacter_generated_h

#define Swatch2017_Source_paintball_paintballCharacter_h_14_RPC_WRAPPERS
#define Swatch2017_Source_paintball_paintballCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Swatch2017_Source_paintball_paintballCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesApaintballCharacter(); \
	friend PAINTBALL_API class UClass* Z_Construct_UClass_ApaintballCharacter(); \
public: \
	DECLARE_CLASS(ApaintballCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/paintball"), NO_API) \
	DECLARE_SERIALIZER(ApaintballCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Swatch2017_Source_paintball_paintballCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesApaintballCharacter(); \
	friend PAINTBALL_API class UClass* Z_Construct_UClass_ApaintballCharacter(); \
public: \
	DECLARE_CLASS(ApaintballCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/paintball"), NO_API) \
	DECLARE_SERIALIZER(ApaintballCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Swatch2017_Source_paintball_paintballCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ApaintballCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ApaintballCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ApaintballCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ApaintballCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ApaintballCharacter(ApaintballCharacter&&); \
	NO_API ApaintballCharacter(const ApaintballCharacter&); \
public:


#define Swatch2017_Source_paintball_paintballCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ApaintballCharacter(ApaintballCharacter&&); \
	NO_API ApaintballCharacter(const ApaintballCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ApaintballCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ApaintballCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ApaintballCharacter)


#define Swatch2017_Source_paintball_paintballCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ApaintballCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ApaintballCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ApaintballCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ApaintballCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ApaintballCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ApaintballCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ApaintballCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ApaintballCharacter, L_MotionController); }


#define Swatch2017_Source_paintball_paintballCharacter_h_11_PROLOG
#define Swatch2017_Source_paintball_paintballCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_Source_paintball_paintballCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_Source_paintball_paintballCharacter_h_14_RPC_WRAPPERS \
	Swatch2017_Source_paintball_paintballCharacter_h_14_INCLASS \
	Swatch2017_Source_paintball_paintballCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Swatch2017_Source_paintball_paintballCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_Source_paintball_paintballCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_Source_paintball_paintballCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Swatch2017_Source_paintball_paintballCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Swatch2017_Source_paintball_paintballCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Swatch2017_Source_paintball_paintballCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
