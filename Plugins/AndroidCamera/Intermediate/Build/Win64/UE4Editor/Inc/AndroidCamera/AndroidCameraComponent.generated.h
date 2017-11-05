// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef ANDROIDCAMERA_AndroidCameraComponent_generated_h
#error "AndroidCameraComponent.generated.h already included, missing '#pragma once' in AndroidCameraComponent.h"
#endif
#define ANDROIDCAMERA_AndroidCameraComponent_generated_h

#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execshutDownCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->shutDownCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetAndroidCameraTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=this->getAndroidCameraTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execupdateCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->updateCamera(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execshutDownCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->shutDownCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetAndroidCameraTexture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=this->getAndroidCameraTexture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execupdateCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->updateCamera(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidCameraComponent(); \
	friend ANDROIDCAMERA_API class UClass* Z_Construct_UClass_UAndroidCameraComponent(); \
public: \
	DECLARE_CLASS(UAndroidCameraComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AndroidCamera"), NO_API) \
	DECLARE_SERIALIZER(UAndroidCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidCameraComponent(); \
	friend ANDROIDCAMERA_API class UClass* Z_Construct_UClass_UAndroidCameraComponent(); \
public: \
	DECLARE_CLASS(UAndroidCameraComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AndroidCamera"), NO_API) \
	DECLARE_SERIALIZER(UAndroidCameraComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidCameraComponent(UAndroidCameraComponent&&); \
	NO_API UAndroidCameraComponent(const UAndroidCameraComponent&); \
public:


#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidCameraComponent(UAndroidCameraComponent&&); \
	NO_API UAndroidCameraComponent(const UAndroidCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidCameraComponent)


#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_PRIVATE_PROPERTY_OFFSET
#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_5_PROLOG
#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_RPC_WRAPPERS \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_INCLASS \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_INCLASS_NO_PURE_DECLS \
	Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Swatch2017_CombineLevelsBranch_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
