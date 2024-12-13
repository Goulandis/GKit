// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPFunLib/GKitWebSocketFunLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GKIT_GKitWebSocketFunLib_generated_h
#error "GKitWebSocketFunLib.generated.h already included, missing '#pragma once' in GKitWebSocketFunLib.h"
#endif
#define GKIT_GKitWebSocketFunLib_generated_h

#define FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execConnect);


#define FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGKitWebSocketFunLib(); \
	friend struct Z_Construct_UClass_UGKitWebSocketFunLib_Statics; \
public: \
	DECLARE_CLASS(UGKitWebSocketFunLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GKit"), NO_API) \
	DECLARE_SERIALIZER(UGKitWebSocketFunLib)


#define FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGKitWebSocketFunLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGKitWebSocketFunLib(UGKitWebSocketFunLib&&); \
	UGKitWebSocketFunLib(const UGKitWebSocketFunLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGKitWebSocketFunLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGKitWebSocketFunLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGKitWebSocketFunLib) \
	NO_API virtual ~UGKitWebSocketFunLib();


#define FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_9_PROLOG
#define FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_12_INCLASS_NO_PURE_DECLS \
	FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GKIT_API UClass* StaticClass<class UGKitWebSocketFunLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject_Plugins_GKit_UnrealEngine_GKit_Source_GKit_BPFunLib_GKitWebSocketFunLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
