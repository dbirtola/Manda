// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MandaUtilitiesLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MANDA_API UMandaUtilitiesLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "File I/0")
		static FString LoadFileToString(FString Filename);

	UFUNCTION(BlueprintCallable, Category = "File I/0")
		static TArray<FString> LoadFileToStringArray(FString Filename);

	UFUNCTION(BlueprintCallable, Category = "File I/0")
		static void SaveStringToFile(FString Filename, FString input);

	UFUNCTION(BlueprintCallable, Category = "File I/0")
		static void SaveStringArrayToFile(FString Filename, TArray<FString> input);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext, Keywords = "log print to channel", AdvancedDisplay = "3", DevelopmentOnly), Category = "Utilities|String")
		static void PrintStringToChannel(UObject* WorldContextObject, const FString& InString = FString(TEXT("Hello")), const int channel = 7777, bool bPrintToScreen = true, bool bPrintToLog = true, FLinearColor TextColor = FLinearColor(0.0, 0.33, 1.0), float Duration = 2.f);
};
