// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CarSlotWidget.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class DEDICATED_API UCarSlotWidget : public UUserWidget
{
	GENERATED_BODY()
	
	UPROPERTY(meta = (BindWidget))
	UImage* IMG_Car;
	
	
};
