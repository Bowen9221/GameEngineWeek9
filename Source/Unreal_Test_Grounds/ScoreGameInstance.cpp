// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Texture.h"
#include "TextureResource.h"
#include "Engine/Texture2D.h"

void UScoreGameInstance::AddScore(int32 Points) {
	TotalScore += Points;
	UE_LOG(LogTemp, Log, TEXT("Score Updated: %d"), TotalScore);
}

int32 UScoreGameInstance::GetScore() {
	return TotalScore;
}

void UScoreGameInstance::ResetScore() {
	TotalScore = 0;
}

