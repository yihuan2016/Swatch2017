// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDCAMERA_AndroidCameraBPLibrary_generated_h
#error "AndroidCameraBPLibrary.generated.h already included, missing '#pragma once' in AndroidCameraBPLibrary.h"
#endif
#define ANDROIDCAMERA_AndroidCameraBPLibrary_generated_h

#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAndroidCameraSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAndroidCameraBPLibrary::AndroidCameraSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAndroidCameraSampleFunction) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UAndroidCameraBPLibrary::AndroidCameraSampleFunction(Z_Param_Param); \
		P_NATIVE_END; \
	}


#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidCameraBPLibrary(); \
	friend ANDROIDCAMERA_API class UClass* Z_Construct_UClass_UAndroidCameraBPLibrary(); \
public: \
	DECLARE_CLASS(UAndroidCameraBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AndroidCamera"), NO_API) \
	DECLARE_SERIALIZER(UAndroidCameraBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidCameraBPLibrary(); \
	friend ANDROIDCAMERA_API class UClass* Z_Construct_UClass_UAndroidCameraBPLibrary(); \
public: \
	DECLARE_CLASS(UAndroidCameraBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AndroidCamera"), NO_API) \
	DECLARE_SERIALIZER(UAndroidCameraBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidCameraBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidCameraBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidCameraBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidCameraBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidCameraBPLibrary(UAndroidCameraBPLibrary&&); \
	NO_API UAndroidCameraBPLibrary(const UAndroidCameraBPLibrary&); \
public:


#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidCameraBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidCameraBPLibrary(UAndroidCameraBPLibrary&&); \
	NO_API UAndroidCameraBPLibrary(const UAndroidCameraBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidCameraBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidCameraBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidCameraBPLibrary)


#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET
#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_25_PROLOG
#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_RPC_WRAPPERS \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_INCLASS \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_PRIVATE_PROPERTY_OFFSET \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_INCLASS_NO_PURE_DECLS \
	paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AndroidCameraBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID paintball_Plugins_AndroidCamera_Source_AndroidCamera_Public_AndroidCameraBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
