// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAINTBALL_ReadFileFunctionLibrary_generated_h
#error "ReadFileFunctionLibrary.generated.h already included, missing '#pragma once' in ReadFileFunctionLibrary.h"
#endif
#define PAINTBALL_ReadFileFunctionLibrary_generated_h

#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFileFunctionLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFileFunctionLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFileFunctionLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UReadFileFunctionLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadFileFunctionLibrary(); \
	friend PAINTBALL_API class UClass* Z_Construct_UClass_UReadFileFunctionLibrary(); \
public: \
	DECLARE_CLASS(UReadFileFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/paintball"), NO_API) \
	DECLARE_SERIALIZER(UReadFileFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUReadFileFunctionLibrary(); \
	friend PAINTBALL_API class UClass* Z_Construct_UClass_UReadFileFunctionLibrary(); \
public: \
	DECLARE_CLASS(UReadFileFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/paintball"), NO_API) \
	DECLARE_SERIALIZER(UReadFileFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadFileFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadFileFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadFileFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadFileFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadFileFunctionLibrary(UReadFileFunctionLibrary&&); \
	NO_API UReadFileFunctionLibrary(const UReadFileFunctionLibrary&); \
public:


#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadFileFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadFileFunctionLibrary(UReadFileFunctionLibrary&&); \
	NO_API UReadFileFunctionLibrary(const UReadFileFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadFileFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadFileFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadFileFunctionLibrary)


#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_12_PROLOG
#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_RPC_WRAPPERS \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_INCLASS \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Swatch2017_Source_paintball_Public_ReadFileFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
