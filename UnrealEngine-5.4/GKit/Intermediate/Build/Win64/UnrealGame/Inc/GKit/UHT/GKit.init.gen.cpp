// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGKit_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GKit;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GKit()
	{
		if (!Z_Registration_Info_UPackage__Script_GKit.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GKit",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9359F805,
				0xEEE0FA55,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GKit.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GKit.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GKit(Z_Construct_UPackage__Script_GKit, TEXT("/Script/GKit"), Z_Registration_Info_UPackage__Script_GKit, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9359F805, 0xEEE0FA55));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
