// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPFunLib/GKitFileFunLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef GKIT_GKitFileFunLib_generated_h
#error "GKitFileFunLib.generated.h already included, missing '#pragma once' in GKitFileFunLib.h"
#endif
#define GKIT_GKitFileFunLib_generated_h

#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFilesFromDir); \
	DECLARE_FUNCTION(execGetAllSubdirectories); \
	DECLARE_FUNCTION(execLoadImg2TextureFromFile); \
	DECLARE_FUNCTION(execSaveStringToFile); \
	DECLARE_FUNCTION(execReadFileToArray); \
	DECLARE_FUNCTION(execReadFileToString);


#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGKitFileFunLib(); \
	friend struct Z_Construct_UClass_UGKitFileFunLib_Statics; \
public: \
	DECLARE_CLASS(UGKitFileFunLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GKit"), NO_API) \
	DECLARE_SERIALIZER(UGKitFileFunLib)


#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGKitFileFunLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGKitFileFunLib(UGKitFileFunLib&&); \
	UGKitFileFunLib(const UGKitFileFunLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGKitFileFunLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGKitFileFunLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGKitFileFunLib) \
	NO_API virtual ~UGKitFileFunLib();


#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_9_PROLOG
#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GKIT_API UClass* StaticClass<class UGKitFileFunLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitFileFunLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
