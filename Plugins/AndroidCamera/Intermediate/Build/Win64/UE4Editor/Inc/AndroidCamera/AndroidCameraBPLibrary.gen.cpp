// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AndroidCameraPrivatePCH.h"
#include "Public/AndroidCameraBPLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidCameraBPLibrary() {}
// Cross Module References
	ANDROIDCAMERA_API UFunction* Z_Construct_UFunction_UAndroidCameraBPLibrary_AndroidCameraSampleFunction();
	ANDROIDCAMERA_API UClass* Z_Construct_UClass_UAndroidCameraBPLibrary();
	ANDROIDCAMERA_API UClass* Z_Construct_UClass_UAndroidCameraBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AndroidCamera();
// End Cross Module References
	void UAndroidCameraBPLibrary::StaticRegisterNativesUAndroidCameraBPLibrary()
	{
		UClass* Class = UAndroidCameraBPLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AndroidCameraSampleFunction", (Native)&UAndroidCameraBPLibrary::execAndroidCameraSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAndroidCameraBPLibrary_AndroidCameraSampleFunction()
	{
		struct AndroidCameraBPLibrary_eventAndroidCameraSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAndroidCameraBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AndroidCameraSampleFunction"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AndroidCameraBPLibrary_eventAndroidCameraSampleFunction_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AndroidCameraBPLibrary_eventAndroidCameraSampleFunction_Parms), 0x0010000000000580);
			UProperty* NewProp_Param = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Param"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Param, AndroidCameraBPLibrary_eventAndroidCameraSampleFunction_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("AndroidCameraTesting"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Execute Sample function"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("AndroidCamera sample test testing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AndroidCameraBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAndroidCameraBPLibrary_NoRegister()
	{
		return UAndroidCameraBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAndroidCameraBPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_AndroidCamera();
			OuterClass = UAndroidCameraBPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAndroidCameraBPLibrary_AndroidCameraSampleFunction());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAndroidCameraBPLibrary_AndroidCameraSampleFunction(), "AndroidCameraSampleFunction"); // 571508819
				static TCppClassTypeInfo<TCppClassTypeTraits<UAndroidCameraBPLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AndroidCameraBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AndroidCameraBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidCameraBPLibrary, 4068913512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidCameraBPLibrary(Z_Construct_UClass_UAndroidCameraBPLibrary, &UAndroidCameraBPLibrary::StaticClass, TEXT("/Script/AndroidCamera"), TEXT("UAndroidCameraBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidCameraBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
