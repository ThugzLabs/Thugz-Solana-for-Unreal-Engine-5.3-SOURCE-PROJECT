// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThugzBCfor53/Public/ThugzBCfor53BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThugzBCfor53BPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	THUGZBCFOR53_API UClass* Z_Construct_UClass_UThugzBCBPLibrary();
	THUGZBCFOR53_API UClass* Z_Construct_UClass_UThugzBCBPLibrary_NoRegister();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FCreator();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTData();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTMetadata();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTResponse();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataJson();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FNFTData();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FRootJson();
	UPackage* Z_Construct_UPackage__Script_ThugzBCfor53();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Creator;
class UScriptStruct* FCreator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Creator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Creator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreator, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("Creator"));
	}
	return Z_Registration_Info_UScriptStruct_Creator.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FCreator>()
{
	return FCreator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verified_MetaData[];
#endif
		static void NewProp_Verified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Verified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Share_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Share;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////STRUCTURE POUR SOLANA HELLOMOON/////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STRUCTURE POUR SOLANA HELLOMOON" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCreator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreator, Address), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address_MetaData), Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_SetBit(void* Obj)
	{
		((FCreator*)Obj)->Verified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified = { "Verified", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCreator), &Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_MetaData), Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share = { "Share", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCreator, Share), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share_MetaData), Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"Creator",
		Z_Construct_UScriptStruct_FCreator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::PropPointers),
		sizeof(FCreator),
		alignof(FCreator),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCreator_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCreator()
	{
		if (!Z_Registration_Info_UScriptStruct_Creator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Creator.InnerSingleton, Z_Construct_UScriptStruct_FCreator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Creator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetadataJson;
class UScriptStruct* FMetadataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetadataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetadataJson, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("MetadataJson"));
	}
	return Z_Registration_Info_UScriptStruct_MetadataJson.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FMetadataJson>()
{
	return FMetadataJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetadataJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Symbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellerFeeBasisPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SellerFeeBasisPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Creators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Creators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Creators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetadataJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetadataJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataJson, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataJson, Symbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol_MetaData), Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataJson, Uri), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri_MetaData), Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints = { "SellerFeeBasisPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataJson, SellerFeeBasisPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints_MetaData), Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_Inner = { "Creators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCreator, METADATA_PARAMS(0, nullptr) }; // 3574071333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators = { "Creators", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetadataJson, Creators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_MetaData), Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_MetaData) }; // 3574071333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetadataJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetadataJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"MetadataJson",
		Z_Construct_UScriptStruct_FMetadataJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::PropPointers),
		sizeof(FMetadataJson),
		alignof(FMetadataJson),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetadataJson_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMetadataJson()
	{
		if (!Z_Registration_Info_UScriptStruct_MetadataJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetadataJson.InnerSingleton, Z_Construct_UScriptStruct_FMetadataJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetadataJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NFTData;
class UScriptStruct* FNFTData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NFTData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NFTData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNFTData, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("NFTData"));
	}
	return Z_Registration_Info_UScriptStruct_NFTData.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FNFTData>()
{
	return FNFTData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNFTData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NftMint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NftMint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAccount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerAccount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataJson_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetadataJson;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNFTData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNFTData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint = { "NftMint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNFTData, NftMint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint_MetaData), Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount = { "OwnerAccount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNFTData, OwnerAccount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount_MetaData), Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress = { "MetadataAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNFTData, MetadataAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress_MetaData), Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson = { "MetadataJson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNFTData, MetadataJson), Z_Construct_UScriptStruct_FMetadataJson, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson_MetaData), Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson_MetaData) }; // 3681335539
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNFTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNFTData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"NFTData",
		Z_Construct_UScriptStruct_FNFTData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::PropPointers),
		sizeof(FNFTData),
		alignof(FNFTData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNFTData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNFTData()
	{
		if (!Z_Registration_Info_UScriptStruct_NFTData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NFTData.InnerSingleton, Z_Construct_UScriptStruct_FNFTData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NFTData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootJson;
class UScriptStruct* FRootJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootJson, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("RootJson"));
	}
	return Z_Registration_Info_UScriptStruct_RootJson.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FRootJson>()
{
	return FRootJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRootJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootJson>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNFTData, METADATA_PARAMS(0, nullptr) }; // 1724773423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRootJson, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_MetaData) }; // 1724773423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"RootJson",
		Z_Construct_UScriptStruct_FRootJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootJson_Statics::PropPointers),
		sizeof(FRootJson),
		alignof(FRootJson),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootJson_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRootJson_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootJson_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRootJson()
	{
		if (!Z_Registration_Info_UScriptStruct_RootJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootJson.InnerSingleton, Z_Construct_UScriptStruct_FRootJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RootJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EVMFNFTMetadata;
class UScriptStruct* FEVMFNFTMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EVMFNFTMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EVMFNFTMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEVMFNFTMetadata, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("EVMFNFTMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_EVMFNFTMetadata.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FEVMFNFTMetadata>()
{
	return FEVMFNFTMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_external_url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_external_url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////STRUCTURE POUR EVM MORALIS/////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STRUCTURE POUR EVM MORALIS" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEVMFNFTMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "EVMFNFTMetadata" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, Image), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "EVMFNFTMetadata" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description_MetaData[] = {
		{ "Category", "EVMFNFTMetadata" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url_MetaData[] = {
		{ "Category", "EVMFNFTMetadata" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url = { "external_url", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, external_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"EVMFNFTMetadata",
		Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::PropPointers),
		sizeof(FEVMFNFTMetadata),
		alignof(FEVMFNFTMetadata),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_EVMFNFTMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EVMFNFTMetadata.InnerSingleton, Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EVMFNFTMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EVMFNFTData;
class UScriptStruct* FEVMFNFTData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EVMFNFTData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EVMFNFTData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEVMFNFTData, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("EVMFNFTData"));
	}
	return Z_Registration_Info_UScriptStruct_EVMFNFTData.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FEVMFNFTData>()
{
	return FEVMFNFTData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEVMFNFTData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TokenId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TokenAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContractType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContractType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerOf_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerOf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_last_metadata_sync_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_last_metadata_sync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_last_token_uri_sync_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_last_token_uri_sync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_block_number_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_block_number;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_symbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_symbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_token_hash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_token_hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_token_uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_token_uri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minter_address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_minter_address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_verified_collection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_verified_collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEVMFNFTData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId = { "TokenId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, TokenId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress = { "TokenAddress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, TokenAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType = { "ContractType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, ContractType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf = { "OwnerOf", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, OwnerOf), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync = { "last_metadata_sync", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, last_metadata_sync), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync = { "last_token_uri_sync", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, last_token_uri_sync), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number = { "block_number", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, block_number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol = { "symbol", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, symbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash = { "token_hash", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, token_hash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri = { "token_uri", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, token_uri), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address = { "minter_address", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, minter_address), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection = { "verified_collection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, verified_collection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "EVMFNFTData" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, Metadata), Z_Construct_UScriptStruct_FEVMFNFTMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata_MetaData) }; // 3488245615
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEVMFNFTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"EVMFNFTData",
		Z_Construct_UScriptStruct_FEVMFNFTData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::PropPointers),
		sizeof(FEVMFNFTData),
		alignof(FEVMFNFTData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTData()
	{
		if (!Z_Registration_Info_UScriptStruct_EVMFNFTData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EVMFNFTData.InnerSingleton, Z_Construct_UScriptStruct_FEVMFNFTData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EVMFNFTData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EVMFNFTResponse;
class UScriptStruct* FEVMFNFTResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EVMFNFTResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EVMFNFTResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEVMFNFTResponse, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("EVMFNFTResponse"));
	}
	return Z_Registration_Info_UScriptStruct_EVMFNFTResponse.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FEVMFNFTResponse>()
{
	return FEVMFNFTResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Page_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEVMFNFTResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "EVMFNFTResponse" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, Status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page_MetaData[] = {
		{ "Category", "EVMFNFTResponse" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, Page), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize_MetaData[] = {
		{ "Category", "EVMFNFTResponse" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, PageSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEVMFNFTData, METADATA_PARAMS(0, nullptr) }; // 2506184109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "EVMFNFTResponse" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, Result), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_MetaData) }; // 2506184109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"EVMFNFTResponse",
		Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::PropPointers),
		sizeof(FEVMFNFTResponse),
		alignof(FEVMFNFTResponse),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_EVMFNFTResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EVMFNFTResponse.InnerSingleton, Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EVMFNFTResponse.InnerSingleton;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execConvertEVMJSONtoStruct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEVMFNFTResponse*)Z_Param__Result=UThugzBCBPLibrary::ConvertEVMJSONtoStruct(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execConvertSOLJSONtoStruct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRootJson*)Z_Param__Result=UThugzBCBPLibrary::ConvertSOLJSONtoStruct(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execGetLastJsonResponse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UThugzBCBPLibrary::GetLastJsonResponse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execMoralisAPIRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AccountAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Blockchain);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::MoralisAPIRequest(Z_Param_AccountAddress,Z_Param_ApiKey,Z_Param_Blockchain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execMakeHelloMoonAPIRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Account);
		P_GET_PROPERTY(FStrProperty,Z_Param_Barear);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::MakeHelloMoonAPIRequest(Z_Param_Account,Z_Param_Barear);
		P_NATIVE_END;
	}
	void UThugzBCBPLibrary::StaticRegisterNativesUThugzBCBPLibrary()
	{
		UClass* Class = UThugzBCBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertEVMJSONtoStruct", &UThugzBCBPLibrary::execConvertEVMJSONtoStruct },
			{ "ConvertSOLJSONtoStruct", &UThugzBCBPLibrary::execConvertSOLJSONtoStruct },
			{ "GetLastJsonResponse", &UThugzBCBPLibrary::execGetLastJsonResponse },
			{ "MakeHelloMoonAPIRequest", &UThugzBCBPLibrary::execMakeHelloMoonAPIRequest },
			{ "MoralisAPIRequest", &UThugzBCBPLibrary::execMoralisAPIRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics
	{
		struct ThugzBCBPLibrary_eventConvertEVMJSONtoStruct_Parms
		{
			FString JsonString;
			FEVMFNFTResponse ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventConvertEVMJSONtoStruct_Parms, JsonString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventConvertEVMJSONtoStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FEVMFNFTResponse, METADATA_PARAMS(0, nullptr) }; // 2878852333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "ConvertEVMJSONtoStruct", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::ThugzBCBPLibrary_eventConvertEVMJSONtoStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::ThugzBCBPLibrary_eventConvertEVMJSONtoStruct_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics
	{
		struct ThugzBCBPLibrary_eventConvertSOLJSONtoStruct_Parms
		{
			FString JsonString;
			FRootJson ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventConvertSOLJSONtoStruct_Parms, JsonString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventConvertSOLJSONtoStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FRootJson, METADATA_PARAMS(0, nullptr) }; // 3598655817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "ConvertSOLJSONtoStruct", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::ThugzBCBPLibrary_eventConvertSOLJSONtoStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::ThugzBCBPLibrary_eventConvertSOLJSONtoStruct_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics
	{
		struct ThugzBCBPLibrary_eventGetLastJsonResponse_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetLastJsonResponse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "GetLastJsonResponse", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::ThugzBCBPLibrary_eventGetLastJsonResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::ThugzBCBPLibrary_eventGetLastJsonResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics
	{
		struct ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms
		{
			FString Account;
			FString Barear;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Account_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Account;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Barear_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Barear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account = { "Account", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms, Account), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear = { "Barear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms, Barear), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "MakeHelloMoonAPIRequest", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics
	{
		struct ThugzBCBPLibrary_eventMoralisAPIRequest_Parms
		{
			FString AccountAddress;
			FString ApiKey;
			FString Blockchain;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blockchain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Blockchain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_AccountAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_AccountAddress = { "AccountAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMoralisAPIRequest_Parms, AccountAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_AccountAddress_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_AccountAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMoralisAPIRequest_Parms, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_ApiKey_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_ApiKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_Blockchain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_Blockchain = { "Blockchain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMoralisAPIRequest_Parms, Blockchain), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_Blockchain_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_Blockchain_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_AccountAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::NewProp_Blockchain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "MoralisAPIRequest", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::ThugzBCBPLibrary_eventMoralisAPIRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::ThugzBCBPLibrary_eventMoralisAPIRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThugzBCBPLibrary);
	UClass* Z_Construct_UClass_UThugzBCBPLibrary_NoRegister()
	{
		return UThugzBCBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UThugzBCBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThugzBCBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThugzBCBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UThugzBCBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct, "ConvertEVMJSONtoStruct" }, // 1198694010
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct, "ConvertSOLJSONtoStruct" }, // 136729762
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse, "GetLastJsonResponse" }, // 2250083252
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest, "MakeHelloMoonAPIRequest" }, // 2031654314
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest, "MoralisAPIRequest" }, // 2149846132
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThugzBCBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThugzBCBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// D\xef\xbf\xbd""finition des fonctions Blueprint\n" },
#endif
		{ "IncludePath", "ThugzBCfor53BPLibrary.h" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xef\xbf\xbd""finition des fonctions Blueprint" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThugzBCBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThugzBCBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThugzBCBPLibrary_Statics::ClassParams = {
		&UThugzBCBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThugzBCBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UThugzBCBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UThugzBCBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UThugzBCBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThugzBCBPLibrary.OuterSingleton, Z_Construct_UClass_UThugzBCBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThugzBCBPLibrary.OuterSingleton;
	}
	template<> THUGZBCFOR53_API UClass* StaticClass<UThugzBCBPLibrary>()
	{
		return UThugzBCBPLibrary::StaticClass();
	}
	UThugzBCBPLibrary::UThugzBCBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThugzBCBPLibrary);
	UThugzBCBPLibrary::~UThugzBCBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FCreator::StaticStruct, Z_Construct_UScriptStruct_FCreator_Statics::NewStructOps, TEXT("Creator"), &Z_Registration_Info_UScriptStruct_Creator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreator), 3574071333U) },
		{ FMetadataJson::StaticStruct, Z_Construct_UScriptStruct_FMetadataJson_Statics::NewStructOps, TEXT("MetadataJson"), &Z_Registration_Info_UScriptStruct_MetadataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataJson), 3681335539U) },
		{ FNFTData::StaticStruct, Z_Construct_UScriptStruct_FNFTData_Statics::NewStructOps, TEXT("NFTData"), &Z_Registration_Info_UScriptStruct_NFTData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNFTData), 1724773423U) },
		{ FRootJson::StaticStruct, Z_Construct_UScriptStruct_FRootJson_Statics::NewStructOps, TEXT("RootJson"), &Z_Registration_Info_UScriptStruct_RootJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootJson), 3598655817U) },
		{ FEVMFNFTMetadata::StaticStruct, Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewStructOps, TEXT("EVMFNFTMetadata"), &Z_Registration_Info_UScriptStruct_EVMFNFTMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVMFNFTMetadata), 3488245615U) },
		{ FEVMFNFTData::StaticStruct, Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewStructOps, TEXT("EVMFNFTData"), &Z_Registration_Info_UScriptStruct_EVMFNFTData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVMFNFTData), 2506184109U) },
		{ FEVMFNFTResponse::StaticStruct, Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewStructOps, TEXT("EVMFNFTResponse"), &Z_Registration_Info_UScriptStruct_EVMFNFTResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVMFNFTResponse), 2878852333U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThugzBCBPLibrary, UThugzBCBPLibrary::StaticClass, TEXT("UThugzBCBPLibrary"), &Z_Registration_Info_UClass_UThugzBCBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThugzBCBPLibrary), 240006718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_434262162(TEXT("/Script/ThugzBCfor53"),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_ThugzBCPlugin53___Copie_Plugins_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
