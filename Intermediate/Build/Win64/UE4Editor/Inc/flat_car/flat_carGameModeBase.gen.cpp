// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "flat_car/flat_carGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeflat_carGameModeBase() {}
// Cross Module References
	FLAT_CAR_API UClass* Z_Construct_UClass_Aflat_carGameModeBase_NoRegister();
	FLAT_CAR_API UClass* Z_Construct_UClass_Aflat_carGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_flat_car();
// End Cross Module References
	void Aflat_carGameModeBase::StaticRegisterNativesAflat_carGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aflat_carGameModeBase_NoRegister()
	{
		return Aflat_carGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aflat_carGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aflat_carGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_flat_car,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aflat_carGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "flat_carGameModeBase.h" },
		{ "ModuleRelativePath", "flat_carGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aflat_carGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aflat_carGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aflat_carGameModeBase_Statics::ClassParams = {
		&Aflat_carGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aflat_carGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aflat_carGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aflat_carGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aflat_carGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aflat_carGameModeBase, 2824552693);
	template<> FLAT_CAR_API UClass* StaticClass<Aflat_carGameModeBase>()
	{
		return Aflat_carGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aflat_carGameModeBase(Z_Construct_UClass_Aflat_carGameModeBase, &Aflat_carGameModeBase::StaticClass, TEXT("/Script/flat_car"), TEXT("Aflat_carGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aflat_carGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
