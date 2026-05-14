// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AlpakitSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALPAKIT_AlpakitSettings_generated_h
#error "AlpakitSettings.generated.h already included, missing '#pragma once' in AlpakitSettings.h"
#endif
#define ALPAKIT_AlpakitSettings_generated_h

#define FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAlpakitSettings(); \
	friend struct Z_Construct_UClass_UAlpakitSettings_Statics; \
public: \
	DECLARE_CLASS(UAlpakitSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alpakit"), NO_API) \
	DECLARE_SERIALIZER(UAlpakitSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAlpakitSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAlpakitSettings(UAlpakitSettings&&); \
	UAlpakitSettings(const UAlpakitSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAlpakitSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAlpakitSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAlpakitSettings) \
	NO_API virtual ~UAlpakitSettings();


#define FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_13_PROLOG
#define FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALPAKIT_API UClass* StaticClass<class UAlpakitSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h


#define FOREACH_ENUM_EALPAKITSTARTGAMETYPE(op) \
	op(EAlpakitStartGameType::NONE) \
	op(EAlpakitStartGameType::STEAM) 

enum class EAlpakitStartGameType : uint8;
template<> struct TIsUEnumClass<EAlpakitStartGameType> { enum { Value = true }; };
template<> ALPAKIT_API UEnum* StaticEnum<EAlpakitStartGameType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
