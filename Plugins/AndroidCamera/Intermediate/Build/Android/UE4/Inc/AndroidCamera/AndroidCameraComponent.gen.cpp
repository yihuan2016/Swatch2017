// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/AndroidCameraPrivatePCH.h"
#include "Public/AndroidCameraComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidCameraComponent() {}
// Cross Module References
	ANDROIDCAMERA_API UFunction* Z_Construct_UFunction_UAndroidCameraComponent_getAndroidCameraTexture();
	ANDROIDCAMERA_API UClass* Z_Construct_UClass_UAndroidCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ANDROIDCAMERA_API UFunction* Z_Construct_UFunction_UAndroidCameraComponent_shutDownCamera();
	ANDROIDCAMERA_API UFunction* Z_Construct_UFunction_UAndroidCameraComponent_updateCamera();
	ANDROIDCAMERA_API UClass* Z_Construct_UClass_UAndroidCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AndroidCamera();
// End Cross Module References
	void UAndroidCameraComponent::StaticRegisterNativesUAndroidCameraComponent()
	{
		UClass* Class = UAndroidCameraComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "getAndroidCameraTexture", (Native)&UAndroidCameraComponent::execgetAndroidCameraTexture },
			{ "shutDownCamera", (Native)&UAndroidCameraComponent::execshutDownCamera },
			{ "updateCamera", (Native)&UAndroidCameraComponent::execupdateCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAndroidCameraComponent_getAndroidCameraTexture()
	{
		struct AndroidCameraComponent_eventgetAndroidCameraTexture_Parms
		{
			UTexture2D* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAndroidCameraComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("getAndroidCameraTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AndroidCameraComponent_eventgetAndroidCameraTexture_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, AndroidCameraComponent_eventgetAndroidCameraTexture_Parms), 0x0010000000000580, Z_Construct_UClass_UTexture2D_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Android"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AndroidCameraComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAndroidCameraComponent_shutDownCamera()
	{
		UObject* Outer = Z_Construct_UClass_UAndroidCameraComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("shutDownCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Android"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AndroidCameraComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAndroidCameraComponent_updateCamera()
	{
		struct AndroidCameraComponent_eventupdateCamera_Parms
		{
			float delta;
		};
		UObject* Outer = Z_Construct_UClass_UAndroidCameraComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("updateCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(AndroidCameraComponent_eventupdateCamera_Parms));
			UProperty* NewProp_delta = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("delta"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(delta, AndroidCameraComponent_eventupdateCamera_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Android"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AndroidCameraComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAndroidCameraComponent_NoRegister()
	{
		return UAndroidCameraComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAndroidCameraComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_AndroidCamera();
			OuterClass = UAndroidCameraComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20A00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAndroidCameraComponent_getAndroidCameraTexture());
				OuterClass->LinkChild(Z_Construct_UFunction_UAndroidCameraComponent_shutDownCamera());
				OuterClass->LinkChild(Z_Construct_UFunction_UAndroidCameraComponent_updateCamera());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAndroidCameraComponent_getAndroidCameraTexture(), "getAndroidCameraTexture"); // 870066656
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAndroidCameraComponent_shutDownCamera(), "shutDownCamera"); // 2665537454
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAndroidCameraComponent_updateCamera(), "updateCamera"); // 3876937807
				static TCppClassTypeInfo<TCppClassTypeTraits<UAndroidCameraComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Android"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AndroidCameraComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AndroidCameraComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAndroidCameraComponent, 766889968);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAndroidCameraComponent(Z_Construct_UClass_UAndroidCameraComponent, &UAndroidCameraComponent::StaticClass, TEXT("/Script/AndroidCamera"), TEXT("UAndroidCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
