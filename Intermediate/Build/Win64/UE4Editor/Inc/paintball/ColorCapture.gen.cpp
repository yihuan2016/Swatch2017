// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ColorCapture.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorCapture() {}
// Cross Module References
	PAINTBALL_API UClass* Z_Construct_UClass_AColorCapture_NoRegister();
	PAINTBALL_API UClass* Z_Construct_UClass_AColorCapture();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_paintball();
// End Cross Module References
	void AColorCapture::StaticRegisterNativesAColorCapture()
	{
	}
	UClass* Z_Construct_UClass_AColorCapture_NoRegister()
	{
		return AColorCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_AColorCapture()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_paintball();
			OuterClass = AColorCapture::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AColorCapture> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ColorCapture.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ColorCapture.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AColorCapture, 3963706534);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AColorCapture(Z_Construct_UClass_AColorCapture, &AColorCapture::StaticClass, TEXT("/Script/paintball"), TEXT("AColorCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
