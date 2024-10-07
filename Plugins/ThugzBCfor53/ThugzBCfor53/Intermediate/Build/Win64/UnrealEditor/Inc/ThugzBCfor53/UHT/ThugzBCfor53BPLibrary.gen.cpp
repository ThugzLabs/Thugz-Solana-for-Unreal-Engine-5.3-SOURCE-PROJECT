// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../ThugzBCfor53/Public/ThugzBCfor53BPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThugzBCfor53BPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	THUGZBCFOR53_API UClass* Z_Construct_UClass_UThugzBCBPLibrary();
	THUGZBCFOR53_API UClass* Z_Construct_UClass_UThugzBCBPLibrary_NoRegister();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FCreator();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTData();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTMetadata();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FEVMFNFTResponse();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataJson();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FNFTData();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FRootJson();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FSolMoralisMetaplex();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FSolMoralisNFTMetadata();
	THUGZBCFOR53_API UScriptStruct* Z_Construct_UScriptStruct_FThugzNFTData();
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
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, Image), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Image_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description = { "description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url = { "external_url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTMetadata, external_url), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url_MetaData), Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewProp_external_url_MetaData) };
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
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId = { "TokenId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, TokenId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress = { "TokenAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, TokenAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_TokenAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType = { "ContractType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, ContractType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_ContractType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf = { "OwnerOf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, OwnerOf), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_OwnerOf_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync = { "last_metadata_sync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, last_metadata_sync), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_metadata_sync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync = { "last_token_uri_sync", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, last_token_uri_sync), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_last_token_uri_sync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number = { "block_number", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, block_number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_block_number_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol = { "symbol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, symbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_symbol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash = { "token_hash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, token_hash), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_hash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri = { "token_uri", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, token_uri), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_token_uri_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address = { "minter_address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, minter_address), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_minter_address_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection = { "verified_collection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, verified_collection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_verified_collection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTData, Metadata), Z_Construct_UScriptStruct_FEVMFNFTMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata_MetaData), Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewProp_Metadata_MetaData) }; // 4139019150
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
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, Status), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Status_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, Page), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Page_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, PageSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_PageSize_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEVMFNFTData, METADATA_PARAMS(0, nullptr) }; // 381650043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEVMFNFTResponse, Result), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_MetaData), Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewProp_Result_MetaData) }; // 381650043
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ThugzNFTData;
class UScriptStruct* FThugzNFTData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ThugzNFTData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ThugzNFTData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FThugzNFTData, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("ThugzNFTData"));
	}
	return Z_Registration_Info_UScriptStruct_ThugzNFTData.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FThugzNFTData>()
{
	return FThugzNFTData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FThugzNFTData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedTokenAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssociatedTokenAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Symbol;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThugzNFTData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////STRUCTURE POUR SOLANA MORALIS/////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STRUCTURE POUR SOLANA MORALIS" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FThugzNFTData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_AssociatedTokenAddress_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_AssociatedTokenAddress = { "AssociatedTokenAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThugzNFTData, AssociatedTokenAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_AssociatedTokenAddress_MetaData), Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_AssociatedTokenAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Mint_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Mint = { "Mint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThugzNFTData, Mint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Mint_MetaData), Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Mint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThugzNFTData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Symbol_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FThugzNFTData, Symbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Symbol_MetaData), Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Symbol_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FThugzNFTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_AssociatedTokenAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Mint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewProp_Symbol,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FThugzNFTData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"ThugzNFTData",
		Z_Construct_UScriptStruct_FThugzNFTData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThugzNFTData_Statics::PropPointers),
		sizeof(FThugzNFTData),
		alignof(FThugzNFTData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThugzNFTData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FThugzNFTData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FThugzNFTData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FThugzNFTData()
	{
		if (!Z_Registration_Info_UScriptStruct_ThugzNFTData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ThugzNFTData.InnerSingleton, Z_Construct_UScriptStruct_FThugzNFTData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ThugzNFTData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolMoralisMetaplex;
class UScriptStruct* FSolMoralisMetaplex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolMoralisMetaplex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolMoralisMetaplex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolMoralisMetaplex, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("SolMoralisMetaplex"));
	}
	return Z_Registration_Info_UScriptStruct_SolMoralisMetaplex.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FSolMoralisMetaplex>()
{
	return FSolMoralisMetaplex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataUri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataUri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateAuthority_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UpdateAuthority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellerFeeBasisPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SellerFeeBasisPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySaleHappened_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimarySaleHappened;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsMutable_MetaData[];
#endif
		static void NewProp_IsMutable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMutable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterEdition_MetaData[];
#endif
		static void NewProp_MasterEdition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MasterEdition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolMoralisMetaplex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MetadataUri_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MetadataUri = { "MetadataUri", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisMetaplex, MetadataUri), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MetadataUri_MetaData), Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MetadataUri_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_UpdateAuthority_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_UpdateAuthority = { "UpdateAuthority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisMetaplex, UpdateAuthority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_UpdateAuthority_MetaData), Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_UpdateAuthority_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_SellerFeeBasisPoints_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_SellerFeeBasisPoints = { "SellerFeeBasisPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisMetaplex, SellerFeeBasisPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_SellerFeeBasisPoints_MetaData), Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_SellerFeeBasisPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_PrimarySaleHappened_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_PrimarySaleHappened = { "PrimarySaleHappened", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisMetaplex, PrimarySaleHappened), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_PrimarySaleHappened_MetaData), Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_PrimarySaleHappened_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_IsMutable_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_IsMutable_SetBit(void* Obj)
	{
		((FSolMoralisMetaplex*)Obj)->IsMutable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_IsMutable = { "IsMutable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSolMoralisMetaplex), &Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_IsMutable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_IsMutable_MetaData), Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_IsMutable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MasterEdition_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MasterEdition_SetBit(void* Obj)
	{
		((FSolMoralisMetaplex*)Obj)->MasterEdition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MasterEdition = { "MasterEdition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSolMoralisMetaplex), &Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MasterEdition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MasterEdition_MetaData), Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MasterEdition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MetadataUri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_UpdateAuthority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_SellerFeeBasisPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_PrimarySaleHappened,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_IsMutable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewProp_MasterEdition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"SolMoralisMetaplex",
		Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::PropPointers),
		sizeof(FSolMoralisMetaplex),
		alignof(FSolMoralisMetaplex),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSolMoralisMetaplex()
	{
		if (!Z_Registration_Info_UScriptStruct_SolMoralisMetaplex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolMoralisMetaplex.InnerSingleton, Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolMoralisMetaplex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata;
class UScriptStruct* FSolMoralisNFTMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata, (UObject*)Z_Construct_UPackage__Script_ThugzBCfor53(), TEXT("SolMoralisNFTMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata.OuterSingleton;
}
template<> THUGZBCFOR53_API UScriptStruct* StaticStruct<FSolMoralisNFTMetadata>()
{
	return FSolMoralisNFTMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Standard_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Standard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Symbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metaplex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metaplex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolMoralisNFTMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Mint_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Mint = { "Mint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisNFTMetadata, Mint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Mint_MetaData), Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Mint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Standard_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Standard = { "Standard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisNFTMetadata, Standard), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Standard_MetaData), Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Standard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisNFTMetadata, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Symbol_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisNFTMetadata, Symbol), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Symbol_MetaData), Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Symbol_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Metaplex_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Metaplex = { "Metaplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSolMoralisNFTMetadata, Metaplex), Z_Construct_UScriptStruct_FSolMoralisMetaplex, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Metaplex_MetaData), Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Metaplex_MetaData) }; // 3510946044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Mint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Standard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Symbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewProp_Metaplex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCfor53,
		nullptr,
		&NewStructOps,
		"SolMoralisNFTMetadata",
		Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::PropPointers),
		sizeof(FSolMoralisNFTMetadata),
		alignof(FSolMoralisNFTMetadata),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSolMoralisNFTMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata.InnerSingleton, Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata.InnerSingleton;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execCopyToClipboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextToCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::CopyToClipboard(Z_Param_TextToCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execParseNFTMetadataFromJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSolMoralisNFTMetadata*)Z_Param__Result=UThugzBCBPLibrary::ParseNFTMetadataFromJSON(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execMakeMoralisNFTMetadataRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NFTMintAddress);
		P_GET_PROPERTY(FStrProperty,Z_Param_APIKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::MakeMoralisNFTMetadataRequest(Z_Param_NFTMintAddress,Z_Param_APIKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execParseNFTDataFromMoralisJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FThugzNFTData>*)Z_Param__Result=UThugzBCBPLibrary::ParseNFTDataFromMoralisJSON(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execMakeMoralisAPIRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OwnerAccount);
		P_GET_PROPERTY(FStrProperty,Z_Param_APIKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::MakeMoralisAPIRequest(Z_Param_OwnerAccount,Z_Param_APIKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execGetSolanaAddressFromPrivateKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrivateKey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PublicKeyHex);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PublicKeyBase58);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::GetSolanaAddressFromPrivateKey(Z_Param_PrivateKey,Z_Param_Out_PublicKeyHex,Z_Param_Out_PublicKeyBase58);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execHexToBytes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HexString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UThugzBCBPLibrary::HexToBytes(Z_Param_HexString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execDecodeBase58)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Base58String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=UThugzBCBPLibrary::DecodeBase58(Z_Param_Base58String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execEncodeBase58)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UThugzBCBPLibrary::EncodeBase58(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execGenerateSolanaKeyPair)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPublicKey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPrivateKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::GenerateSolanaKeyPair(Z_Param_Out_OutPublicKey,Z_Param_Out_OutPrivateKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execDownloadImageAndCreateTexture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_OBJECT_REF(UTexture2D,Z_Param_Out_OutTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::DownloadImageAndCreateTexture(Z_Param_URL,Z_Param_Out_OutTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execParseImageURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutImageURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UThugzBCBPLibrary::ParseImageURL(Z_Param_JsonString,Z_Param_Out_OutImageURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execMakeURIRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::MakeURIRequest(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execGetTokenBamanceFromJsonMoralis)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutSolanaValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::GetTokenBamanceFromJsonMoralis(Z_Param_JsonString,Z_Param_Out_OutSolanaValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execMakeMoraliseRequestForSOLBalance)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Pkey);
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::MakeMoraliseRequestForSOLBalance(Z_Param_Pkey,Z_Param_ApiKey,Z_Param_Out_OutResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execGetTokenBamanceFromJsonHelloMoon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::GetTokenBamanceFromJsonHelloMoon(Z_Param_JsonString,Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execGetLastTokenJsonResponse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UThugzBCBPLibrary::GetLastTokenJsonResponse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execHelloMoonRequestForTokenBalance)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Param);
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::HelloMoonRequestForTokenBalance(Z_Param_Param,Z_Param_ApiKey,Z_Param_Out_OutResponse);
		P_NATIVE_END;
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
			{ "CopyToClipboard", &UThugzBCBPLibrary::execCopyToClipboard },
			{ "DecodeBase58", &UThugzBCBPLibrary::execDecodeBase58 },
			{ "DownloadImageAndCreateTexture", &UThugzBCBPLibrary::execDownloadImageAndCreateTexture },
			{ "EncodeBase58", &UThugzBCBPLibrary::execEncodeBase58 },
			{ "GenerateSolanaKeyPair", &UThugzBCBPLibrary::execGenerateSolanaKeyPair },
			{ "GetLastJsonResponse", &UThugzBCBPLibrary::execGetLastJsonResponse },
			{ "GetLastTokenJsonResponse", &UThugzBCBPLibrary::execGetLastTokenJsonResponse },
			{ "GetSolanaAddressFromPrivateKey", &UThugzBCBPLibrary::execGetSolanaAddressFromPrivateKey },
			{ "GetTokenBamanceFromJsonHelloMoon", &UThugzBCBPLibrary::execGetTokenBamanceFromJsonHelloMoon },
			{ "GetTokenBamanceFromJsonMoralis", &UThugzBCBPLibrary::execGetTokenBamanceFromJsonMoralis },
			{ "HelloMoonRequestForTokenBalance", &UThugzBCBPLibrary::execHelloMoonRequestForTokenBalance },
			{ "HexToBytes", &UThugzBCBPLibrary::execHexToBytes },
			{ "MakeHelloMoonAPIRequest", &UThugzBCBPLibrary::execMakeHelloMoonAPIRequest },
			{ "MakeMoralisAPIRequest", &UThugzBCBPLibrary::execMakeMoralisAPIRequest },
			{ "MakeMoraliseRequestForSOLBalance", &UThugzBCBPLibrary::execMakeMoraliseRequestForSOLBalance },
			{ "MakeMoralisNFTMetadataRequest", &UThugzBCBPLibrary::execMakeMoralisNFTMetadataRequest },
			{ "MakeURIRequest", &UThugzBCBPLibrary::execMakeURIRequest },
			{ "MoralisAPIRequest", &UThugzBCBPLibrary::execMoralisAPIRequest },
			{ "ParseImageURL", &UThugzBCBPLibrary::execParseImageURL },
			{ "ParseNFTDataFromMoralisJSON", &UThugzBCBPLibrary::execParseNFTDataFromMoralisJSON },
			{ "ParseNFTMetadataFromJSON", &UThugzBCBPLibrary::execParseNFTMetadataFromJSON },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventConvertEVMJSONtoStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FEVMFNFTResponse, METADATA_PARAMS(0, nullptr) }; // 2612339847
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
	struct Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics
	{
		struct ThugzBCBPLibrary_eventCopyToClipboard_Parms
		{
			FString TextToCopy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::NewProp_TextToCopy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::NewProp_TextToCopy = { "TextToCopy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventCopyToClipboard_Parms, TextToCopy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::NewProp_TextToCopy_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::NewProp_TextToCopy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::NewProp_TextToCopy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Fonction pour copier dans le presse papier/\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fonction pour copier dans le presse papier/" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "CopyToClipboard", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::ThugzBCBPLibrary_eventCopyToClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::ThugzBCBPLibrary_eventCopyToClipboard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics
	{
		struct ThugzBCBPLibrary_eventDecodeBase58_Parms
		{
			FString Base58String;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base58String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Base58String;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_Base58String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_Base58String = { "Base58String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventDecodeBase58_Parms, Base58String), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_Base58String_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_Base58String_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventDecodeBase58_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_Base58String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "DecodeBase58", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::ThugzBCBPLibrary_eventDecodeBase58_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::ThugzBCBPLibrary_eventDecodeBase58_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics
	{
		struct ThugzBCBPLibrary_eventDownloadImageAndCreateTexture_Parms
		{
			FString URL;
			UTexture2D* OutTexture;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventDownloadImageAndCreateTexture_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventDownloadImageAndCreateTexture_Parms, OutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::NewProp_OutTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "DownloadImageAndCreateTexture", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::ThugzBCBPLibrary_eventDownloadImageAndCreateTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::ThugzBCBPLibrary_eventDownloadImageAndCreateTexture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics
	{
		struct ThugzBCBPLibrary_eventEncodeBase58_Parms
		{
			TArray<uint8> Data;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventEncodeBase58_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventEncodeBase58_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Code base 58 pour encodage et decodage 58 + Hexadecimal vers Bytes / Base 58 code for encoding and decoding 58 + Hexadecimal to Bytes\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Code base 58 pour encodage et decodage 58 + Hexadecimal vers Bytes / Base 58 code for encoding and decoding 58 + Hexadecimal to Bytes" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "EncodeBase58", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::ThugzBCBPLibrary_eventEncodeBase58_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::ThugzBCBPLibrary_eventEncodeBase58_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics
	{
		struct ThugzBCBPLibrary_eventGenerateSolanaKeyPair_Parms
		{
			FString OutPublicKey;
			FString OutPrivateKey;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPublicKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPrivateKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::NewProp_OutPublicKey = { "OutPublicKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGenerateSolanaKeyPair_Parms, OutPublicKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::NewProp_OutPrivateKey = { "OutPrivateKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGenerateSolanaKeyPair_Parms, OutPrivateKey), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::NewProp_OutPublicKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::NewProp_OutPrivateKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ajout de la fonction pour g\xef\xbf\xbdn\xef\xbf\xbdrer une paire de cl\xef\xbf\xbds Solana / Addition of the function for generating a pair of Solana keys\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ajout de la fonction pour g\xef\xbf\xbdn\xef\xbf\xbdrer une paire de cl\xef\xbf\xbds Solana / Addition of the function for generating a pair of Solana keys" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "GenerateSolanaKeyPair", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::ThugzBCBPLibrary_eventGenerateSolanaKeyPair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::ThugzBCBPLibrary_eventGenerateSolanaKeyPair_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics
	{
		struct ThugzBCBPLibrary_eventGetLastTokenJsonResponse_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetLastTokenJsonResponse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "GetLastTokenJsonResponse", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::ThugzBCBPLibrary_eventGetLastTokenJsonResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::ThugzBCBPLibrary_eventGetLastTokenJsonResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics
	{
		struct ThugzBCBPLibrary_eventGetSolanaAddressFromPrivateKey_Parms
		{
			FString PrivateKey;
			FString PublicKeyHex;
			FString PublicKeyBase58;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrivateKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKeyHex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublicKeyBase58;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PrivateKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PrivateKey = { "PrivateKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetSolanaAddressFromPrivateKey_Parms, PrivateKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PrivateKey_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PrivateKey_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PublicKeyHex = { "PublicKeyHex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetSolanaAddressFromPrivateKey_Parms, PublicKeyHex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PublicKeyBase58 = { "PublicKeyBase58", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetSolanaAddressFromPrivateKey_Parms, PublicKeyBase58), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PrivateKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PublicKeyHex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::NewProp_PublicKeyBase58,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//R\xef\xbf\xbd""cuperation de l'adresse publique SOlana depuis la cl\xef\xbf\xbd priv\xef\xbf\xbd""e / Retrieving the SOlana public address from the private key\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "R\xef\xbf\xbd""cuperation de l'adresse publique SOlana depuis la cl\xef\xbf\xbd priv\xef\xbf\xbd""e / Retrieving the SOlana public address from the private key" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "GetSolanaAddressFromPrivateKey", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::ThugzBCBPLibrary_eventGetSolanaAddressFromPrivateKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::ThugzBCBPLibrary_eventGetSolanaAddressFromPrivateKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics
	{
		struct ThugzBCBPLibrary_eventGetTokenBamanceFromJsonHelloMoon_Parms
		{
			FString JsonString;
			double OutValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetTokenBamanceFromJsonHelloMoon_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetTokenBamanceFromJsonHelloMoon_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "GetTokenBamanceFromJsonHelloMoon", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::ThugzBCBPLibrary_eventGetTokenBamanceFromJsonHelloMoon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::ThugzBCBPLibrary_eventGetTokenBamanceFromJsonHelloMoon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics
	{
		struct ThugzBCBPLibrary_eventGetTokenBamanceFromJsonMoralis_Parms
		{
			FString JsonString;
			double OutSolanaValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OutSolanaValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetTokenBamanceFromJsonMoralis_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::NewProp_OutSolanaValue = { "OutSolanaValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetTokenBamanceFromJsonMoralis_Parms, OutSolanaValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::NewProp_OutSolanaValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "GetTokenBamanceFromJsonMoralis", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::ThugzBCBPLibrary_eventGetTokenBamanceFromJsonMoralis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::ThugzBCBPLibrary_eventGetTokenBamanceFromJsonMoralis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics
	{
		struct ThugzBCBPLibrary_eventHelloMoonRequestForTokenBalance_Parms
		{
			FString Param;
			FString ApiKey;
			FString OutResponse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventHelloMoonRequestForTokenBalance_Parms, Param), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_Param_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_Param_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventHelloMoonRequestForTokenBalance_Parms, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_ApiKey_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_ApiKey_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_OutResponse = { "OutResponse", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventHelloMoonRequestForTokenBalance_Parms, OutResponse), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_Param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::NewProp_OutResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "HelloMoonRequestForTokenBalance", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::ThugzBCBPLibrary_eventHelloMoonRequestForTokenBalance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::ThugzBCBPLibrary_eventHelloMoonRequestForTokenBalance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics
	{
		struct ThugzBCBPLibrary_eventHexToBytes_Parms
		{
			FString HexString;
			TArray<uint8> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HexString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HexString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_HexString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_HexString = { "HexString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventHexToBytes_Parms, HexString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_HexString_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_HexString_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventHexToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_HexString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "HexToBytes", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::ThugzBCBPLibrary_eventHexToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::ThugzBCBPLibrary_eventHexToBytes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics
	{
		struct ThugzBCBPLibrary_eventMakeMoralisAPIRequest_Parms
		{
			FString OwnerAccount;
			FString APIKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAccount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerAccount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_OwnerAccount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_OwnerAccount = { "OwnerAccount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeMoralisAPIRequest_Parms, OwnerAccount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_OwnerAccount_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_OwnerAccount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_APIKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeMoralisAPIRequest_Parms, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_APIKey_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_APIKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_OwnerAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::NewProp_APIKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Requ\xef\xbf\xbdte Moralis pour r\xef\xbf\xbd""cup\xef\xbf\xbdrer les NFTs d'un wallet / Moralis request to retrieve NFTs from a wallet\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requ\xef\xbf\xbdte Moralis pour r\xef\xbf\xbd""cup\xef\xbf\xbdrer les NFTs d'un wallet / Moralis request to retrieve NFTs from a wallet" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "MakeMoralisAPIRequest", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::ThugzBCBPLibrary_eventMakeMoralisAPIRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::ThugzBCBPLibrary_eventMakeMoralisAPIRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics
	{
		struct ThugzBCBPLibrary_eventMakeMoraliseRequestForSOLBalance_Parms
		{
			FString Pkey;
			FString ApiKey;
			FString OutResponse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pkey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pkey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_Pkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_Pkey = { "Pkey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeMoraliseRequestForSOLBalance_Parms, Pkey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_Pkey_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_Pkey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeMoraliseRequestForSOLBalance_Parms, ApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_ApiKey_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_ApiKey_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_OutResponse = { "OutResponse", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeMoraliseRequestForSOLBalance_Parms, OutResponse), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_Pkey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::NewProp_OutResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "MakeMoraliseRequestForSOLBalance", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::ThugzBCBPLibrary_eventMakeMoraliseRequestForSOLBalance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::ThugzBCBPLibrary_eventMakeMoraliseRequestForSOLBalance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics
	{
		struct ThugzBCBPLibrary_eventMakeMoralisNFTMetadataRequest_Parms
		{
			FString NFTMintAddress;
			FString APIKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NFTMintAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NFTMintAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_NFTMintAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_NFTMintAddress = { "NFTMintAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeMoralisNFTMetadataRequest_Parms, NFTMintAddress), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_NFTMintAddress_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_NFTMintAddress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_APIKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeMoralisNFTMetadataRequest_Parms, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_APIKey_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_APIKey_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_NFTMintAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::NewProp_APIKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Requ\xef\xbf\xbdte pour r\xef\xbf\xbd""cuperer les metadata d'un NFT par Moralis / Request to retrieve the metadata of an NFT by Moralis\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requ\xef\xbf\xbdte pour r\xef\xbf\xbd""cuperer les metadata d'un NFT par Moralis / Request to retrieve the metadata of an NFT by Moralis" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "MakeMoralisNFTMetadataRequest", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::ThugzBCBPLibrary_eventMakeMoralisNFTMetadataRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::ThugzBCBPLibrary_eventMakeMoralisNFTMetadataRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics
	{
		struct ThugzBCBPLibrary_eventMakeURIRequest_Parms
		{
			FString URL;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeURIRequest_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::NewProp_URL_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::NewProp_URL_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "MakeURIRequest", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::ThugzBCBPLibrary_eventMakeURIRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::ThugzBCBPLibrary_eventMakeURIRequest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics
	{
		struct ThugzBCBPLibrary_eventParseImageURL_Parms
		{
			FString JsonString;
			FString OutImageURL;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutImageURL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventParseImageURL_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_OutImageURL = { "OutImageURL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventParseImageURL_Parms, OutImageURL), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ThugzBCBPLibrary_eventParseImageURL_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ThugzBCBPLibrary_eventParseImageURL_Parms), &Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_OutImageURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "ParseImageURL", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::ThugzBCBPLibrary_eventParseImageURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::ThugzBCBPLibrary_eventParseImageURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics
	{
		struct ThugzBCBPLibrary_eventParseNFTDataFromMoralisJSON_Parms
		{
			FString JsonString;
			TArray<FThugzNFTData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventParseNFTDataFromMoralisJSON_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FThugzNFTData, METADATA_PARAMS(0, nullptr) }; // 2642511416
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventParseNFTDataFromMoralisJSON_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2642511416
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Parsing de la r\xef\xbf\xbdponse de la requ\xef\xbf\xbdte Moralis / Parsing the response to the Moralis request\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parsing de la r\xef\xbf\xbdponse de la requ\xef\xbf\xbdte Moralis / Parsing the response to the Moralis request" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "ParseNFTDataFromMoralisJSON", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::ThugzBCBPLibrary_eventParseNFTDataFromMoralisJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::ThugzBCBPLibrary_eventParseNFTDataFromMoralisJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics
	{
		struct ThugzBCBPLibrary_eventParseNFTMetadataFromJSON_Parms
		{
			FString JsonString;
			FSolMoralisNFTMetadata ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventParseNFTMetadataFromJSON_Parms, JsonString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::NewProp_JsonString_MetaData), Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::NewProp_JsonString_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventParseNFTMetadataFromJSON_Parms, ReturnValue), Z_Construct_UScriptStruct_FSolMoralisNFTMetadata, METADATA_PARAMS(0, nullptr) }; // 2213736777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Requ\xef\xbf\xbdte pour parser la r\xef\xbf\xbdponse de la fonction: MakeMoralisNFTMetadataRequest / Request to parse the function response: MakeMoralisNFTMetadataRequest\n" },
#endif
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requ\xef\xbf\xbdte pour parser la r\xef\xbf\xbdponse de la fonction: MakeMoralisNFTMetadataRequest / Request to parse the function response: MakeMoralisNFTMetadataRequest" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "ParseNFTMetadataFromJSON", nullptr, nullptr, Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::ThugzBCBPLibrary_eventParseNFTMetadataFromJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::ThugzBCBPLibrary_eventParseNFTMetadataFromJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ConvertEVMJSONtoStruct, "ConvertEVMJSONtoStruct" }, // 3916066939
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ConvertSOLJSONtoStruct, "ConvertSOLJSONtoStruct" }, // 136729762
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_CopyToClipboard, "CopyToClipboard" }, // 1392779672
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_DecodeBase58, "DecodeBase58" }, // 3725165274
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_DownloadImageAndCreateTexture, "DownloadImageAndCreateTexture" }, // 3072356045
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_EncodeBase58, "EncodeBase58" }, // 3614623052
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GenerateSolanaKeyPair, "GenerateSolanaKeyPair" }, // 1405763918
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse, "GetLastJsonResponse" }, // 2250083252
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GetLastTokenJsonResponse, "GetLastTokenJsonResponse" }, // 2953185741
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GetSolanaAddressFromPrivateKey, "GetSolanaAddressFromPrivateKey" }, // 3827425509
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonHelloMoon, "GetTokenBamanceFromJsonHelloMoon" }, // 483967262
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GetTokenBamanceFromJsonMoralis, "GetTokenBamanceFromJsonMoralis" }, // 2640294557
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_HelloMoonRequestForTokenBalance, "HelloMoonRequestForTokenBalance" }, // 496770825
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_HexToBytes, "HexToBytes" }, // 767219743
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest, "MakeHelloMoonAPIRequest" }, // 2031654314
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisAPIRequest, "MakeMoralisAPIRequest" }, // 1238904245
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoraliseRequestForSOLBalance, "MakeMoraliseRequestForSOLBalance" }, // 2800415329
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MakeMoralisNFTMetadataRequest, "MakeMoralisNFTMetadataRequest" }, // 583633027
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MakeURIRequest, "MakeURIRequest" }, // 3114282993
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MoralisAPIRequest, "MoralisAPIRequest" }, // 2149846132
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ParseImageURL, "ParseImageURL" }, // 1859555092
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTDataFromMoralisJSON, "ParseNFTDataFromMoralisJSON" }, // 1914530683
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ParseNFTMetadataFromJSON, "ParseNFTMetadataFromJSON" }, // 2408321806
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThugzBCBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThugzBCBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// D\xef\xbf\xbd""finition des fonctions pour exposition au Blueprint / Defining functions for Blueprint exposure\n" },
#endif
		{ "IncludePath", "ThugzBCfor53BPLibrary.h" },
		{ "ModuleRelativePath", "Public/ThugzBCfor53BPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xef\xbf\xbd""finition des fonctions pour exposition au Blueprint / Defining functions for Blueprint exposure" },
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
	struct Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FCreator::StaticStruct, Z_Construct_UScriptStruct_FCreator_Statics::NewStructOps, TEXT("Creator"), &Z_Registration_Info_UScriptStruct_Creator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreator), 3574071333U) },
		{ FMetadataJson::StaticStruct, Z_Construct_UScriptStruct_FMetadataJson_Statics::NewStructOps, TEXT("MetadataJson"), &Z_Registration_Info_UScriptStruct_MetadataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataJson), 3681335539U) },
		{ FNFTData::StaticStruct, Z_Construct_UScriptStruct_FNFTData_Statics::NewStructOps, TEXT("NFTData"), &Z_Registration_Info_UScriptStruct_NFTData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNFTData), 1724773423U) },
		{ FRootJson::StaticStruct, Z_Construct_UScriptStruct_FRootJson_Statics::NewStructOps, TEXT("RootJson"), &Z_Registration_Info_UScriptStruct_RootJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootJson), 3598655817U) },
		{ FEVMFNFTMetadata::StaticStruct, Z_Construct_UScriptStruct_FEVMFNFTMetadata_Statics::NewStructOps, TEXT("EVMFNFTMetadata"), &Z_Registration_Info_UScriptStruct_EVMFNFTMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVMFNFTMetadata), 4139019150U) },
		{ FEVMFNFTData::StaticStruct, Z_Construct_UScriptStruct_FEVMFNFTData_Statics::NewStructOps, TEXT("EVMFNFTData"), &Z_Registration_Info_UScriptStruct_EVMFNFTData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVMFNFTData), 381650043U) },
		{ FEVMFNFTResponse::StaticStruct, Z_Construct_UScriptStruct_FEVMFNFTResponse_Statics::NewStructOps, TEXT("EVMFNFTResponse"), &Z_Registration_Info_UScriptStruct_EVMFNFTResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVMFNFTResponse), 2612339847U) },
		{ FThugzNFTData::StaticStruct, Z_Construct_UScriptStruct_FThugzNFTData_Statics::NewStructOps, TEXT("ThugzNFTData"), &Z_Registration_Info_UScriptStruct_ThugzNFTData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FThugzNFTData), 2642511416U) },
		{ FSolMoralisMetaplex::StaticStruct, Z_Construct_UScriptStruct_FSolMoralisMetaplex_Statics::NewStructOps, TEXT("SolMoralisMetaplex"), &Z_Registration_Info_UScriptStruct_SolMoralisMetaplex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolMoralisMetaplex), 3510946044U) },
		{ FSolMoralisNFTMetadata::StaticStruct, Z_Construct_UScriptStruct_FSolMoralisNFTMetadata_Statics::NewStructOps, TEXT("SolMoralisNFTMetadata"), &Z_Registration_Info_UScriptStruct_SolMoralisNFTMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolMoralisNFTMetadata), 2213736777U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThugzBCBPLibrary, UThugzBCBPLibrary::StaticClass, TEXT("UThugzBCBPLibrary"), &Z_Registration_Info_UClass_UThugzBCBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThugzBCBPLibrary), 55525628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_92791743(TEXT("/Script/ThugzBCfor53"),
		Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ronan_Documents_Unreal_Projects_ThugzBCPlugin53___Source_Plugins_ThugzBCfor53_ThugzBCfor53_Source_ThugzBCfor53_Public_ThugzBCfor53BPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
