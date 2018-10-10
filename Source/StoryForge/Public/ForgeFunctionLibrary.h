// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ForgeFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class STORYFORGE_API UForgeFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "ForgeFunctions")
	void UsefulFunction();
	
	
};
