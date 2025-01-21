// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GKit/BaseActor/GKitGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKitGizmo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
GKIT_API UClass* Z_Construct_UClass_AGKitGizmo();
GKIT_API UClass* Z_Construct_UClass_AGKitGizmo_NoRegister();
UPackage* Z_Construct_UPackage__Script_GKit();
// End Cross Module References

// Begin Class AGKitGizmo
void AGKitGizmo::StaticRegisterNativesAGKitGizmo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGKitGizmo);
UClass* Z_Construct_UClass_AGKitGizmo_NoRegister()
{
	return AGKitGizmo::StaticClass();
}
struct Z_Construct_UClass_AGKitGizmo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseActor/GKitGizmo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseActor/GKitGizmo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseActor/GKitGizmo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGKitGizmo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGKitGizmo_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGKitGizmo, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGKitGizmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGKitGizmo_Statics::NewProp_SpriteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGKitGizmo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGKitGizmo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGKitGizmo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGKitGizmo_Statics::ClassParams = {
	&AGKitGizmo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGKitGizmo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGKitGizmo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGKitGizmo_Statics::Class_MetaDataParams), Z_Construct_UClass_AGKitGizmo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGKitGizmo()
{
	if (!Z_Registration_Info_UClass_AGKitGizmo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGKitGizmo.OuterSingleton, Z_Construct_UClass_AGKitGizmo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGKitGizmo.OuterSingleton;
}
template<> GKIT_API UClass* StaticClass<AGKitGizmo>()
{
	return AGKitGizmo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGKitGizmo);
AGKitGizmo::~AGKitGizmo() {}
// End Class AGKitGizmo

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BaseActor_GKitGizmo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGKitGizmo, AGKitGizmo::StaticClass, TEXT("AGKitGizmo"), &Z_Registration_Info_UClass_AGKitGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGKitGizmo), 954091218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BaseActor_GKitGizmo_h_1247578127(TEXT("/Script/GKit"),
	Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BaseActor_GKitGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BaseActor_GKitGizmo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
