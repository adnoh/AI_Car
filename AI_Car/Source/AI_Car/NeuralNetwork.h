// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"

/**
 * 
 */
class AI_CAR_API NeuralNetwork
{
public:
	NeuralNetwork();
	NeuralNetwork(TArray<int> topology);
	~NeuralNetwork();

	TArray<float> forward(TArray<float> data);

private:
	TArray<TArray<TArray<float>>> NN;
};