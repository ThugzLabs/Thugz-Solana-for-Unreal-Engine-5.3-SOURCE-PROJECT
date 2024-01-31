// Created in 2024. Copyright Thugz Labs SAS, all rights reserved.

#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Serialization/JsonSerializer.h"
#include "Dom/JsonObject.h"
#include "JsonObjectConverter.h"
#include "ThugzBCfor53BPLibrary.generated.h"

class FJsonObject;

// Définition des structures UE qui acceuilleront les réponses JSON

//////////////////STRUCTURE POUR SOLANA HELLOMOON/////////////////////////////////

USTRUCT(BlueprintType)
struct FCreator
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FString Address;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    bool Verified;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    int32 Share;
};

USTRUCT(BlueprintType)
struct FMetadataJson
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FString Symbol;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FString Uri;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    int32 SellerFeeBasisPoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    TArray<FCreator> Creators;
};

USTRUCT(BlueprintType)
struct FNFTData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FString NftMint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FString OwnerAccount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FString MetadataAddress;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    FMetadataJson MetadataJson;

    // Ajouter les autres champs selon le JSON
};

USTRUCT(BlueprintType)
struct FRootJson
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Thugz Labs JSON")
    TArray<FNFTData> Data;
};
//////////////////STRUCTURE POUR SOLANA HELLOMOON/////////////////////////////////



//////////////////STRUCTURE POUR EVM MORALIS/////////////////////////////////

USTRUCT(BlueprintType)
struct FEVMFNFTMetadata
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString Image;

    UPROPERTY(BlueprintReadOnly)
    FString Name;

    UPROPERTY(BlueprintReadOnly)
    FString description;

    UPROPERTY(BlueprintReadOnly)
    FString external_url;

};

USTRUCT(BlueprintType)
struct FEVMFNFTData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString Amount;

    UPROPERTY(BlueprintReadOnly)
    FString TokenId;

    UPROPERTY(BlueprintReadOnly)
    FString TokenAddress;

    UPROPERTY(BlueprintReadOnly)
    FString ContractType;

    UPROPERTY(BlueprintReadOnly)
    FString OwnerOf;

    UPROPERTY(BlueprintReadOnly)
    FString last_metadata_sync;

    UPROPERTY(BlueprintReadOnly)
    FString last_token_uri_sync;

    UPROPERTY(BlueprintReadOnly)
    FString block_number;

    UPROPERTY(BlueprintReadOnly)
    FString name;

    UPROPERTY(BlueprintReadOnly)
    FString symbol;

    UPROPERTY(BlueprintReadOnly)
    FString token_hash;

    UPROPERTY(BlueprintReadOnly)
    FString token_uri;

    UPROPERTY(BlueprintReadOnly)
    FString minter_address;

    UPROPERTY(BlueprintReadOnly)
    FString verified_collection;

    UPROPERTY(BlueprintReadOnly)
    FEVMFNFTMetadata Metadata;
};

USTRUCT(BlueprintType)
struct FEVMFNFTResponse
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    FString Status;

    UPROPERTY(BlueprintReadOnly)
    int32 Page;

    UPROPERTY(BlueprintReadOnly)
    int32 PageSize;

    UPROPERTY(BlueprintReadOnly)
    TArray<FEVMFNFTData> Result;

};


//////////////////STRUCTURE POUR EVM MORALIS/////////////////////////////////

// Définition des fonctions Blueprint
UCLASS()
class UThugzBCBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Web3 Thugz Labs Plugin")
    static void MakeHelloMoonAPIRequest(const FString& Account, const FString& Barear);

    UFUNCTION(BlueprintCallable, Category = "Web3 Thugz Labs Plugin")
    static void MoralisAPIRequest(const FString& AccountAddress, const FString& ApiKey, const FString& Blockchain);

    UFUNCTION(BlueprintCallable, Category = "Web3 Thugz Labs Plugin")
    static FString GetLastJsonResponse();

    UFUNCTION(BlueprintCallable, Category = "Web3 Thugz Labs Plugin")
    static FRootJson ConvertSOLJSONtoStruct(FString JsonString);

    UFUNCTION(BlueprintCallable, Category = "Web3 Thugz Labs Plugin")
    static FEVMFNFTResponse ConvertEVMJSONtoStruct(FString JsonString);

private:
    static FString LastJsonResponse;

    static void HandleHelloMoonAPIResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);


};



