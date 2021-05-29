// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rescue_the_humans/rescue_the_humansGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderescue_the_humansGameModeBase() {}
// Cross Module References
	RESCUE_THE_HUMANS_API UClass* Z_Construct_UClass_Arescue_the_humansGameModeBase_NoRegister();
	RESCUE_THE_HUMANS_API UClass* Z_Construct_UClass_Arescue_the_humansGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_rescue_the_humans();
// End Cross Module References
	void Arescue_the_humansGameModeBase::StaticRegisterNativesArescue_the_humansGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Arescue_the_humansGameModeBase_NoRegister()
	{
		return Arescue_the_humansGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_rescue_the_humans,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "rescue_the_humansGameModeBase.h" },
		{ "ModuleRelativePath", "rescue_the_humansGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Arescue_the_humansGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics::ClassParams = {
		&Arescue_the_humansGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Arescue_the_humansGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Arescue_the_humansGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Arescue_the_humansGameModeBase, 2553107875);
	template<> RESCUE_THE_HUMANS_API UClass* StaticClass<Arescue_the_humansGameModeBase>()
	{
		return Arescue_the_humansGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Arescue_the_humansGameModeBase(Z_Construct_UClass_Arescue_the_humansGameModeBase, &Arescue_the_humansGameModeBase::StaticClass, TEXT("/Script/rescue_the_humans"), TEXT("Arescue_the_humansGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Arescue_the_humansGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
