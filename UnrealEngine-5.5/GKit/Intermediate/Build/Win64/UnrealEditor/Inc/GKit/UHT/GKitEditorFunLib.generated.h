// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPFunLib/GKitEditorFunLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EGkitImgFormat : uint8;
struct FAssetData;
#ifdef GKIT_GKitEditorFunLib_generated_h
#error "GKitEditorFunLib.generated.h already included, missing '#pragma once' in GKitEditorFunLib.h"
#endif
#define GKIT_GKitEditorFunLib_generated_h

#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPasteContentFromClipboard); \
	DECLARE_FUNCTION(execSaveAssetThumbnailByObject); \
	DECLARE_FUNCTION(execSaveAssetThumbnailByClass); \
	DECLARE_FUNCTION(execSaveAssetThumbnail);


#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGKitEditorFunLib(); \
	friend struct Z_Construct_UClass_UGKitEditorFunLib_Statics; \
public: \
	DECLARE_CLASS(UGKitEditorFunLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GKit"), NO_API) \
	DECLARE_SERIALIZER(UGKitEditorFunLib)


#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGKitEditorFunLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGKitEditorFunLib(UGKitEditorFunLib&&); \
	UGKitEditorFunLib(const UGKitEditorFunLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGKitEditorFunLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGKitEditorFunLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGKitEditorFunLib) \
	NO_API virtual ~UGKitEditorFunLib();


#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_34_PROLOG
#define FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_37_INCLASS_NO_PURE_DECLS \
	FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GKIT_API UClass* StaticClass<class UGKitEditorFunLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject2_Plugins_GKit_UnrealEngine_5_5_GKit_Source_GKit_BPFunLib_GKitEditorFunLib_h


#define FOREACH_ENUM_EGKITIMGFORMAT(op) \
	op(EGkitImgFormat::PNG) \
	op(EGkitImgFormat::JPEG) \
	op(EGkitImgFormat::GrayscaleJPEG) \
	op(EGkitImgFormat::BMP) \
	op(EGkitImgFormat::ICO) \
	op(EGkitImgFormat::EXR) \
	op(EGkitImgFormat::ICNS) \
	op(EGkitImgFormat::TGA) \
	op(EGkitImgFormat::HDR) \
	op(EGkitImgFormat::TIFF) \
	op(EGkitImgFormat::DDS) 

enum class EGkitImgFormat : uint8;
template<> struct TIsUEnumClass<EGkitImgFormat> { enum { Value = true }; };
template<> GKIT_API UEnum* StaticEnum<EGkitImgFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
