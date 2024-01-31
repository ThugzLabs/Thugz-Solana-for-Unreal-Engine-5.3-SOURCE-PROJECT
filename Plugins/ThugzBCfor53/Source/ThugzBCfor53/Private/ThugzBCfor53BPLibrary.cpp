// Created in 2024. Copyright Thugz Labs SAS, all rights reserved.

#include "ThugzBCfor53BPLibrary.h"
#include "ThugzBCfor53.h"




FString UThugzBCBPLibrary::LastJsonResponse = FString("");

// requête pour HelloMoon API
void UThugzBCBPLibrary::MakeHelloMoonAPIRequest(const FString& Account, const FString& Barear)
{
    FString HelloMoonURL = TEXT("https://rest-api.hellomoon.io/v0/nft/mints-by-owner"); // Remplacez par l'URL de votre endpoint HelloMoon

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();

    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetURL(HelloMoonURL);
    HttpRequest->SetHeader(TEXT("Accept"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *Barear));
    //HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer 84fc727a-66fd-4f4c-a723-17adb50ce7ca"));

    FString JsonPayload = FString::Printf(TEXT("{\"ownerAccount\":\"%s\"}"), *Account);
    HttpRequest->SetContentAsString(JsonPayload);

    HttpRequest->OnProcessRequestComplete().BindStatic(&UThugzBCBPLibrary::HandleHelloMoonAPIResponse);

    HttpRequest->ProcessRequest();
}

// Traitement de la requête pour HelloMoon API
void UThugzBCBPLibrary::HandleHelloMoonAPIResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful)
    {
        // Gérer l'erreur de la requête ici
        LastJsonResponse = FString(""); // Réinitialisez la réponse JSON en cas d'erreur
        return;
    }

    if (Response.IsValid() && Response->GetResponseCode() == 200)
    {
        FString JsonResponse = Response->GetContentAsString();
        LastJsonResponse = JsonResponse; // Stockez la réponse JSON

        // Vous pouvez maintenant utiliser JsonResponse qui contient la réponse JSON

        // Par exemple, vous pouvez désérialiser la chaîne JSON en une structure Unreal Engine
    }
    else
    {
        // Gérer l'erreur de réponse HTTP ici
        LastJsonResponse = FString("ERREUR"); // Réinitialisez la réponse JSON en cas d'erreur
    }

}

// requête pour Etherscan API
void UThugzBCBPLibrary::MoralisAPIRequest(const FString& AccountAddress, const FString& ApiKey, const FString& Blockchain) {

    FString Url = FString::Printf(TEXT("https://deep-index.moralis.io/api/v2/%s/nft?chain=%s&format=decimal"), *AccountAddress, *Blockchain);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Url);
    Request->SetVerb(TEXT("GET"));
    Request->SetHeader(TEXT("Accept"), TEXT("application/json"));
    Request->SetHeader(TEXT("X-API-Key"), *ApiKey);
    Request->ProcessRequest();

    Request->OnProcessRequestComplete().BindStatic(&UThugzBCBPLibrary::HandleHelloMoonAPIResponse);

    Request->ProcessRequest();

}


//requête récupéant la réponse de n'importe quel API pour la mettre dans un FSTRING à parser
FString UThugzBCBPLibrary::GetLastJsonResponse()
{
    return LastJsonResponse;
}

//Parsing en structure UE du JSON de HelloMoon API
FRootJson UThugzBCBPLibrary::ConvertSOLJSONtoStruct(FString JsonString)
{

    FString YourJsonFString; // Votre JSON ici
    TSharedPtr<FJsonObject> JsonObject;
    FRootJson RootStruct;

    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {

        TArray<TSharedPtr<FJsonValue>> DataArray = JsonObject->GetArrayField("data");

        for (int32 i = 0; i < DataArray.Num(); i++)
        {
            TSharedPtr<FJsonObject> DataObject = DataArray[i]->AsObject();

            FNFTData NFTData;
            NFTData.NftMint = DataObject->GetStringField("nftMint");
            NFTData.OwnerAccount = DataObject->GetStringField("ownerAccount");
            NFTData.MetadataAddress = DataObject->GetStringField("metadataAddress");

            // Désérialiser MetadataJson
            TSharedPtr<FJsonObject> MetadataJsonObject = DataObject->GetObjectField("metadataJson");
            NFTData.MetadataJson.Name = MetadataJsonObject->GetStringField("name");
            NFTData.MetadataJson.Symbol = MetadataJsonObject->GetStringField("symbol");
            NFTData.MetadataJson.Uri = MetadataJsonObject->GetStringField("uri");
            NFTData.MetadataJson.SellerFeeBasisPoints = MetadataJsonObject->GetNumberField("sellerFeeBasisPoints");
            // Répéter pour d'autres champs
            // Désérialiser le tableau des créateurs
            TArray<TSharedPtr<FJsonValue>> CreatorsArray = MetadataJsonObject->GetArrayField("creators");
            for (int32 j = 0; j < CreatorsArray.Num(); j++)
            {
                TSharedPtr<FJsonObject> CreatorObject = CreatorsArray[j]->AsObject();

                FCreator Creator;
                Creator.Address = CreatorObject->GetStringField("address");
                Creator.Verified = CreatorObject->GetBoolField("verified");
                Creator.Share = CreatorObject->GetIntegerField("share");

                NFTData.MetadataJson.Creators.Add(Creator);
            }

            // Ajouter l'objet NFTData à la structure racine
            RootStruct.Data.Add(NFTData);
        }
    }
    return RootStruct;
}

FEVMFNFTResponse UThugzBCBPLibrary::ConvertEVMJSONtoStruct(FString JsonString)
{

    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
    FEVMFNFTResponse NFTResponse;

    if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
    {
       

        NFTResponse.Status = JsonObject->GetStringField("status");
        NFTResponse.Page = JsonObject->GetIntegerField("page");
        NFTResponse.PageSize = JsonObject->GetIntegerField("page_size");

        TArray<TSharedPtr<FJsonValue>> ResultsArray = JsonObject->GetArrayField("result");
        for (TSharedPtr<FJsonValue> Value : ResultsArray)
        {
            TSharedPtr<FJsonObject> ResultObject = Value->AsObject();
            FEVMFNFTData NFTData;

            NFTData.Amount = ResultObject->GetStringField("amount");
            NFTData.TokenId = ResultObject->GetStringField("token_id");
            NFTData.TokenAddress = ResultObject->GetStringField("token_address");
            NFTData.ContractType = ResultObject->GetStringField("contract_type");
            NFTData.OwnerOf = ResultObject->GetStringField("owner_of");
            NFTData.last_metadata_sync = ResultObject->GetStringField("last_metadata_sync");
            NFTData.last_token_uri_sync = ResultObject->GetStringField("last_token_uri_sync");
            NFTData.block_number = ResultObject->GetStringField("block_number");
            NFTData.name = ResultObject->GetStringField("name");
            NFTData.symbol = ResultObject->GetStringField("symbol");
            NFTData.token_hash = ResultObject->GetStringField("token_hash");
            NFTData.token_uri = ResultObject->GetStringField("token_uri");
            NFTData.minter_address = ResultObject->GetStringField("minter_address");
            NFTData.verified_collection = ResultObject->GetStringField("verified_collection");


            FString MetadataString = ResultObject->GetStringField("metadata");
            TSharedPtr<FJsonObject> MetadataObject;
            TSharedRef<TJsonReader<>> MetadataReader = TJsonReaderFactory<>::Create(MetadataString);
            if (FJsonSerializer::Deserialize(MetadataReader, MetadataObject) && MetadataObject.IsValid())
            {
                FEVMFNFTMetadata Metadata;
                Metadata.Image = MetadataObject->GetStringField("image");
                Metadata.Name = MetadataObject->GetStringField("name");
                Metadata.description = MetadataObject->GetStringField("description");
                Metadata.external_url = MetadataObject->GetStringField("external_url");

                NFTData.Metadata = Metadata;
            }

            NFTResponse.Result.Add(NFTData);
        }

       
    }
    return NFTResponse;
}

