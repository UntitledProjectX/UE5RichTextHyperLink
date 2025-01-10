// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperLinkPlugin/Public/HyperLinkPluginBPLibrary.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHyperLinkPluginBPLibrary() {}

// Begin Cross Module References
HYPERLINKPLUGIN_API UClass* Z_Construct_UClass_UHyperLinkPluginBPLibrary();
HYPERLINKPLUGIN_API UClass* Z_Construct_UClass_UHyperLinkPluginBPLibrary_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FHyperlinkStyle();
UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
UPackage* Z_Construct_UPackage__Script_HyperLinkPlugin();
// End Cross Module References

// Begin Class UHyperLinkPluginBPLibrary Function ClickFun
struct HyperLinkPluginBPLibrary_eventClickFun_Parms
{
	FString LinkID;
	FString Content;
};
static const FName NAME_UHyperLinkPluginBPLibrary_ClickFun = FName(TEXT("ClickFun"));
void UHyperLinkPluginBPLibrary::ClickFun(const FString& LinkID, const FString& Content)
{
	UFunction* Func = FindFunctionChecked(NAME_UHyperLinkPluginBPLibrary_ClickFun);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		HyperLinkPluginBPLibrary_eventClickFun_Parms Parms;
		Parms.LinkID=LinkID;
		Parms.Content=Content;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ClickFun_Implementation(LinkID, Content);
	}
}
struct Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hyperlink" },
		{ "ModuleRelativePath", "Public/HyperLinkPluginBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LinkID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::NewProp_LinkID = { "LinkID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HyperLinkPluginBPLibrary_eventClickFun_Parms, LinkID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkID_MetaData), NewProp_LinkID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HyperLinkPluginBPLibrary_eventClickFun_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::NewProp_LinkID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::NewProp_Content,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHyperLinkPluginBPLibrary, nullptr, "ClickFun", nullptr, nullptr, Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::PropPointers), sizeof(HyperLinkPluginBPLibrary_eventClickFun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::Function_MetaDataParams) };
static_assert(sizeof(HyperLinkPluginBPLibrary_eventClickFun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHyperLinkPluginBPLibrary::execClickFun)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LinkID);
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClickFun_Implementation(Z_Param_LinkID,Z_Param_Content);
	P_NATIVE_END;
}
// End Class UHyperLinkPluginBPLibrary Function ClickFun

// Begin Class UHyperLinkPluginBPLibrary
void UHyperLinkPluginBPLibrary::StaticRegisterNativesUHyperLinkPluginBPLibrary()
{
	UClass* Class = UHyperLinkPluginBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClickFun", &UHyperLinkPluginBPLibrary::execClickFun },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHyperLinkPluginBPLibrary);
UClass* Z_Construct_UClass_UHyperLinkPluginBPLibrary_NoRegister()
{
	return UHyperLinkPluginBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HyperLink Decorator" },
		{ "IncludePath", "HyperLinkPluginBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HyperLinkPluginBPLibrary.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/HyperLinkPluginBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHyperLinkPluginBPLibrary_ClickFun, "ClickFun" }, // 2250130584
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHyperLinkPluginBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHyperLinkPluginBPLibrary, Style), Z_Construct_UScriptStruct_FHyperlinkStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 3254820155
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::NewProp_Style,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_HyperLinkPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::ClassParams = {
	&UHyperLinkPluginBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHyperLinkPluginBPLibrary()
{
	if (!Z_Registration_Info_UClass_UHyperLinkPluginBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHyperLinkPluginBPLibrary.OuterSingleton, Z_Construct_UClass_UHyperLinkPluginBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHyperLinkPluginBPLibrary.OuterSingleton;
}
template<> HYPERLINKPLUGIN_API UClass* StaticClass<UHyperLinkPluginBPLibrary>()
{
	return UHyperLinkPluginBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHyperLinkPluginBPLibrary);
UHyperLinkPluginBPLibrary::~UHyperLinkPluginBPLibrary() {}
// End Class UHyperLinkPluginBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Plugins_HyperLinkPlugin_Package_HyperLinkRelease1_0_HyperLinkPlugin_HostProject_Plugins_HyperLinkPlugin_Source_HyperLinkPlugin_Public_HyperLinkPluginBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHyperLinkPluginBPLibrary, UHyperLinkPluginBPLibrary::StaticClass, TEXT("UHyperLinkPluginBPLibrary"), &Z_Registration_Info_UClass_UHyperLinkPluginBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHyperLinkPluginBPLibrary), 424999436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Plugins_HyperLinkPlugin_Package_HyperLinkRelease1_0_HyperLinkPlugin_HostProject_Plugins_HyperLinkPlugin_Source_HyperLinkPlugin_Public_HyperLinkPluginBPLibrary_h_2557813906(TEXT("/Script/HyperLinkPlugin"),
	Z_CompiledInDeferFile_FID_Unreal_Plugins_HyperLinkPlugin_Package_HyperLinkRelease1_0_HyperLinkPlugin_HostProject_Plugins_HyperLinkPlugin_Source_HyperLinkPlugin_Public_HyperLinkPluginBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Plugins_HyperLinkPlugin_Package_HyperLinkRelease1_0_HyperLinkPlugin_HostProject_Plugins_HyperLinkPlugin_Source_HyperLinkPlugin_Public_HyperLinkPluginBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
