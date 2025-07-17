// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/Public/AxisActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
GKIT_API UClass* Z_Construct_UClass_AAxisActor();
GKIT_API UClass* Z_Construct_UClass_AAxisActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References

// Begin Class AAxisActor
void AAxisActor::StaticRegisterNativesAAxisActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAxisActor);
UClass* Z_Construct_UClass_AAxisActor_NoRegister()
{
	return AAxisActor::StaticClass();
}
struct Z_Construct_UClass_AAxisActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AxisActor.h" },
		{ "ModuleRelativePath", "Public/AxisActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisLength_MetaData[] = {
		{ "Category", "AxisActor" },
		{ "ModuleRelativePath", "Public/AxisActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "Category", "AxisActor" },
		{ "ModuleRelativePath", "Public/AxisActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "AxisActor" },
		{ "ModuleRelativePath", "Public/AxisActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[] = {
		{ "Category", "AxisActor" },
		{ "ModuleRelativePath", "Public/AxisActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAxisActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAxisActor_Statics::NewProp_AxisLength = { "AxisLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAxisActor, AxisLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisLength_MetaData), NewProp_AxisLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAxisActor_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAxisActor, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAxisActor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAxisActor, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAxisActor_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAxisActor, ArrowSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowSize_MetaData), NewProp_ArrowSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAxisActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxisActor_Statics::NewProp_AxisLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxisActor_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxisActor_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAxisActor_Statics::NewProp_ArrowSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAxisActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAxisActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAxisActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAxisActor_Statics::ClassParams = {
	&AAxisActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAxisActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAxisActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAxisActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAxisActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAxisActor()
{
	if (!Z_Registration_Info_UClass_AAxisActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAxisActor.OuterSingleton, Z_Construct_UClass_AAxisActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAxisActor.OuterSingleton;
}
template<> GKIT_API UClass* StaticClass<AAxisActor>()
{
	return AAxisActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAxisActor);
AAxisActor::~AAxisActor() {}
// End Class AAxisActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_spacei_shoubo_plugins_GKit_GKit_Source_GKit_Public_AxisActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAxisActor, AAxisActor::StaticClass, TEXT("AAxisActor"), &Z_Registration_Info_UClass_AAxisActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAxisActor), 189878409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_spacei_shoubo_plugins_GKit_GKit_Source_GKit_Public_AxisActor_h_9596511(TEXT("/Script/GKit"),
	Z_CompiledInDeferFile_FID_spacei_shoubo_plugins_GKit_GKit_Source_GKit_Public_AxisActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_spacei_shoubo_plugins_GKit_GKit_Source_GKit_Public_AxisActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
