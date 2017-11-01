// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ReadFileFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadFileFunctionLibrary() {}
// Cross Module References
	PAINTBALL_API UFunction* Z_Construct_UFunction_UReadFileFunctionLibrary_FileLoadString();
	PAINTBALL_API UClass* Z_Construct_UClass_UReadFileFunctionLibrary();
	PAINTBALL_API UFunction* Z_Construct_UFunction_UReadFileFunctionLibrary_FileSaveString();
	PAINTBALL_API UClass* Z_Construct_UClass_UReadFileFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_paintball();
// End Cross Module References
	void UReadFileFunctionLibrary::StaticRegisterNativesUReadFileFunctionLibrary()
	{
		UClass* Class = UReadFileFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "FileLoadString", (Native)&UReadFileFunctionLibrary::execFileLoadString },
			{ "FileSaveString", (Native)&UReadFileFunctionLibrary::execFileSaveString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UReadFileFunctionLibrary_FileLoadString()
	{
		struct ReadFileFunctionLibrary_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UReadFileFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FileLoadString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14442401, 65535, sizeof(ReadFileFunctionLibrary_eventFileLoadString_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ReadFileFunctionLibrary_eventFileLoadString_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ReadFileFunctionLibrary_eventFileLoadString_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ReadFileFunctionLibrary_eventFileLoadString_Parms), sizeof(bool), true);
			UProperty* NewProp_SaveTextA = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveTextA"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SaveTextA, ReadFileFunctionLibrary_eventFileLoadString_Parms), 0x0010000000000180);
			UProperty* NewProp_FileNameA = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FileNameA"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FileNameA, ReadFileFunctionLibrary_eventFileLoadString_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("save"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ReadFileFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UReadFileFunctionLibrary_FileSaveString()
	{
		struct ReadFileFunctionLibrary_eventFileSaveString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UReadFileFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FileSaveString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04042401, 65535, sizeof(ReadFileFunctionLibrary_eventFileSaveString_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ReadFileFunctionLibrary_eventFileSaveString_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ReadFileFunctionLibrary_eventFileSaveString_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ReadFileFunctionLibrary_eventFileSaveString_Parms), sizeof(bool), true);
			UProperty* NewProp_FileNameB = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FileNameB"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FileNameB, ReadFileFunctionLibrary_eventFileSaveString_Parms), 0x0010000000000080);
			UProperty* NewProp_SaveTextB = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SaveTextB"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SaveTextB, ReadFileFunctionLibrary_eventFileSaveString_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("save"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/ReadFileFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReadFileFunctionLibrary_NoRegister()
	{
		return UReadFileFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UReadFileFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_paintball();
			OuterClass = UReadFileFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UReadFileFunctionLibrary_FileLoadString());
				OuterClass->LinkChild(Z_Construct_UFunction_UReadFileFunctionLibrary_FileSaveString());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UReadFileFunctionLibrary_FileLoadString(), "FileLoadString"); // 15947436
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UReadFileFunctionLibrary_FileSaveString(), "FileSaveString"); // 2355255724
				static TCppClassTypeInfo<TCppClassTypeTraits<UReadFileFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ReadFileFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ReadFileFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReadFileFunctionLibrary, 963574873);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReadFileFunctionLibrary(Z_Construct_UClass_UReadFileFunctionLibrary, &UReadFileFunctionLibrary::StaticClass, TEXT("/Script/paintball"), TEXT("UReadFileFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadFileFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
