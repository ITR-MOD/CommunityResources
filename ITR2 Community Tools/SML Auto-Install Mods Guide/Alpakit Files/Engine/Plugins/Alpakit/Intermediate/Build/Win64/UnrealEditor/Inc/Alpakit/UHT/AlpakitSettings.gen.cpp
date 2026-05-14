// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alpakit/Public/AlpakitSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlpakitSettings() {}

// Begin Cross Module References
ALPAKIT_API UClass* Z_Construct_UClass_UAlpakitSettings();
ALPAKIT_API UClass* Z_Construct_UClass_UAlpakitSettings_NoRegister();
ALPAKIT_API UEnum* Z_Construct_UEnum_Alpakit_EAlpakitStartGameType();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
UPackage* Z_Construct_UPackage__Script_Alpakit();
// End Cross Module References

// Begin Enum EAlpakitStartGameType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlpakitStartGameType;
static UEnum* EAlpakitStartGameType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlpakitStartGameType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlpakitStartGameType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Alpakit_EAlpakitStartGameType, (UObject*)Z_Construct_UPackage__Script_Alpakit(), TEXT("EAlpakitStartGameType"));
	}
	return Z_Registration_Info_UEnum_EAlpakitStartGameType.OuterSingleton;
}
template<> ALPAKIT_API UEnum* StaticEnum<EAlpakitStartGameType>()
{
	return EAlpakitStartGameType_StaticEnum();
}
struct Z_Construct_UEnum_Alpakit_EAlpakitStartGameType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
		{ "NONE.DisplayName", "Do not launch" },
		{ "NONE.Name", "EAlpakitStartGameType::NONE" },
		{ "STEAM.DisplayName", "Steam" },
		{ "STEAM.Name", "EAlpakitStartGameType::STEAM" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAlpakitStartGameType::NONE", (int64)EAlpakitStartGameType::NONE },
		{ "EAlpakitStartGameType::STEAM", (int64)EAlpakitStartGameType::STEAM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Alpakit_EAlpakitStartGameType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Alpakit,
	nullptr,
	"EAlpakitStartGameType",
	"EAlpakitStartGameType",
	Z_Construct_UEnum_Alpakit_EAlpakitStartGameType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Alpakit_EAlpakitStartGameType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Alpakit_EAlpakitStartGameType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Alpakit_EAlpakitStartGameType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Alpakit_EAlpakitStartGameType()
{
	if (!Z_Registration_Info_UEnum_EAlpakitStartGameType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlpakitStartGameType.InnerSingleton, Z_Construct_UEnum_Alpakit_EAlpakitStartGameType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlpakitStartGameType.InnerSingleton;
}
// End Enum EAlpakitStartGameType

// Begin Class UAlpakitSettings
void UAlpakitSettings::StaticRegisterNativesUAlpakitSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlpakitSettings);
UClass* Z_Construct_UClass_UAlpakitSettings_NoRegister()
{
	return UAlpakitSettings::StaticClass();
}
struct Z_Construct_UClass_UAlpakitSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AlpakitSettings.h" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparkingZEROGamePath_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchGameAfterPacking_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopyModsToGame_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModSelection_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AlpakitSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SparkingZEROGamePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaunchGameAfterPacking_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LaunchGameAfterPacking;
	static void NewProp_bCopyModsToGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyModsToGame;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ModSelection_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModSelection_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ModSelection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlpakitSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_SparkingZEROGamePath = { "SparkingZEROGamePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlpakitSettings, SparkingZEROGamePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparkingZEROGamePath_MetaData), NewProp_SparkingZEROGamePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_LaunchGameAfterPacking_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_LaunchGameAfterPacking = { "LaunchGameAfterPacking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlpakitSettings, LaunchGameAfterPacking), Z_Construct_UEnum_Alpakit_EAlpakitStartGameType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchGameAfterPacking_MetaData), NewProp_LaunchGameAfterPacking_MetaData) }; // 1826835797
void Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_bCopyModsToGame_SetBit(void* Obj)
{
	((UAlpakitSettings*)Obj)->bCopyModsToGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_bCopyModsToGame = { "bCopyModsToGame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAlpakitSettings), &Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_bCopyModsToGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopyModsToGame_MetaData), NewProp_bCopyModsToGame_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_ModSelection_ValueProp = { "ModSelection", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_ModSelection_Key_KeyProp = { "ModSelection_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_ModSelection = { "ModSelection", nullptr, (EPropertyFlags)0x0010000000004014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAlpakitSettings, ModSelection), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModSelection_MetaData), NewProp_ModSelection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlpakitSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_SparkingZEROGamePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_LaunchGameAfterPacking_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_LaunchGameAfterPacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_bCopyModsToGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_ModSelection_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_ModSelection_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlpakitSettings_Statics::NewProp_ModSelection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAlpakitSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Alpakit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlpakitSettings_Statics::ClassParams = {
	&UAlpakitSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAlpakitSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAlpakitSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAlpakitSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAlpakitSettings()
{
	if (!Z_Registration_Info_UClass_UAlpakitSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlpakitSettings.OuterSingleton, Z_Construct_UClass_UAlpakitSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAlpakitSettings.OuterSingleton;
}
template<> ALPAKIT_API UClass* StaticClass<UAlpakitSettings>()
{
	return UAlpakitSettings::StaticClass();
}
UAlpakitSettings::UAlpakitSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAlpakitSettings);
UAlpakitSettings::~UAlpakitSettings() {}
// End Class UAlpakitSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAlpakitStartGameType_StaticEnum, TEXT("EAlpakitStartGameType"), &Z_Registration_Info_UEnum_EAlpakitStartGameType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1826835797U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAlpakitSettings, UAlpakitSettings::StaticClass, TEXT("UAlpakitSettings"), &Z_Registration_Info_UClass_UAlpakitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlpakitSettings), 2270113760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_655210883(TEXT("/Script/Alpakit"),
	Z_CompiledInDeferFile_FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_micha_Documents_Unreal_Projects_ChucksSDK_5_5_beta_4_Plugins_Alpakit_Source_Alpakit_Public_AlpakitSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
