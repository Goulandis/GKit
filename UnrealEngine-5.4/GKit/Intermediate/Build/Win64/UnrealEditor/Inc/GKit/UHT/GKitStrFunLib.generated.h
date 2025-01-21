// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPFunLib/GKitStrFunLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GKIT_GKitStrFunLib_generated_h
#error "GKitStrFunLib.generated.h already included, missing '#pragma once' in GKitStrFunLib.h"
#endif
#define GKIT_GKitStrFunLib_generated_h

#define FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAESDecrypt); \
	DECLARE_FUNCTION(execAESEncrypt);


#define FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGKitStrFunLib(); \
	friend struct Z_Construct_UClass_UGKitStrFunLib_Statics; \
public: \
	DECLARE_CLASS(UGKitStrFunLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GKit"), NO_API) \
	DECLARE_SERIALIZER(UGKitStrFunLib)


#define FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGKitStrFunLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGKitStrFunLib(UGKitStrFunLib&&); \
	UGKitStrFunLib(const UGKitStrFunLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGKitStrFunLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGKitStrFunLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGKitStrFunLib) \
	NO_API virtual ~UGKitStrFunLib();


#define FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_6_PROLOG
#define FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_9_INCLASS_NO_PURE_DECLS \
	FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GKIT_API UClass* StaticClass<class UGKitStrFunLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LearnPCG54_Plugins_GKit_UnrealEngine_5_4_GKit_Source_GKit_BPFunLib_GKitStrFunLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
