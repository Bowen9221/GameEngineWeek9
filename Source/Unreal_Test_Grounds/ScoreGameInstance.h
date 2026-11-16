// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ScoreGameInstance.generated.h"


UCLASS()
class UNREAL_TEST_GROUNDS_API UScoreGameInstance : public UGameInstance
{
	GENERATED_BODY()

public: 

	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Points);

	UFUNCTION(BlueprintCallable, Category = "Score")
	int32 GetScore();

	UFUNCTION(BlueprintCallable, Category = "Score")
	void ResetScore();

private:

	int32 TotalScore = 0;

};
