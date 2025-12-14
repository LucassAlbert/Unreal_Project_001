// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovingPlatform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMovingPlatform **********************************************************
void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMovingPlatform;
UClass* AMovingPlatform::GetPrivateStaticClass()
{
	using TClass = AMovingPlatform;
	if (!Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovingPlatform"),
			Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton,
			StaticRegisterNativesAMovingPlatform,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
{
	return AMovingPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberFloat_MetaData[] = {
		{ "Category", "MovingPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Show and edit value in editor\n" },
#endif
		{ "ModuleRelativePath", "MovingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show and edit value in editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemberInt_MetaData[] = {
		{ "Category", "MovingPlatform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Only show value in editor but not editing\n" },
#endif
		{ "ModuleRelativePath", "MovingPlatform.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only show value in editor but not editing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyVector_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MemberFloat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemberInt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MemberFloat = { "MemberFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, MemberFloat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberFloat_MetaData), NewProp_MemberFloat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MemberInt = { "MemberInt", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, MemberInt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemberInt_MetaData), NewProp_MemberInt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyVector = { "MyVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, MyVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyVector_MetaData), NewProp_MyVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MemberFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MemberInt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MyVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
	&AMovingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
AMovingPlatform::~AMovingPlatform() {}
// ********** End Class AMovingPlatform ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h__Script_ObstacleAssault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 2023849012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h__Script_ObstacleAssault_1062650054(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h__Script_ObstacleAssault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_GitProjects_Unreal_Project_001_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h__Script_ObstacleAssault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
