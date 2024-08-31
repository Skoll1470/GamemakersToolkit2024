// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuiltToScale/BuiltToScaleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltToScaleGameMode() {}

// Begin Cross Module References
BUILTTOSCALE_API UClass* Z_Construct_UClass_ABuiltToScaleGameMode();
BUILTTOSCALE_API UClass* Z_Construct_UClass_ABuiltToScaleGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BuiltToScale();
// End Cross Module References

// Begin Class ABuiltToScaleGameMode
void ABuiltToScaleGameMode::StaticRegisterNativesABuiltToScaleGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuiltToScaleGameMode);
UClass* Z_Construct_UClass_ABuiltToScaleGameMode_NoRegister()
{
	return ABuiltToScaleGameMode::StaticClass();
}
struct Z_Construct_UClass_ABuiltToScaleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BuiltToScaleGameMode.h" },
		{ "ModuleRelativePath", "BuiltToScaleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuiltToScaleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABuiltToScaleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BuiltToScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuiltToScaleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuiltToScaleGameMode_Statics::ClassParams = {
	&ABuiltToScaleGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuiltToScaleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuiltToScaleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuiltToScaleGameMode()
{
	if (!Z_Registration_Info_UClass_ABuiltToScaleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuiltToScaleGameMode.OuterSingleton, Z_Construct_UClass_ABuiltToScaleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuiltToScaleGameMode.OuterSingleton;
}
template<> BUILTTOSCALE_API UClass* StaticClass<ABuiltToScaleGameMode>()
{
	return ABuiltToScaleGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuiltToScaleGameMode);
ABuiltToScaleGameMode::~ABuiltToScaleGameMode() {}
// End Class ABuiltToScaleGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_GamemakersToolkit2024_BuiltToScale_Source_BuiltToScale_BuiltToScaleGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuiltToScaleGameMode, ABuiltToScaleGameMode::StaticClass, TEXT("ABuiltToScaleGameMode"), &Z_Registration_Info_UClass_ABuiltToScaleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuiltToScaleGameMode), 3044922514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_GamemakersToolkit2024_BuiltToScale_Source_BuiltToScale_BuiltToScaleGameMode_h_3779946169(TEXT("/Script/BuiltToScale"),
	Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_GamemakersToolkit2024_BuiltToScale_Source_BuiltToScale_BuiltToScaleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_thoma_OneDrive_Bureau_Work_GamemakersToolkit2024_BuiltToScale_Source_BuiltToScale_BuiltToScaleGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
