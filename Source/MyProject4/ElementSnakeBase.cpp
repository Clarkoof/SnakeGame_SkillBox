// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementSnakeBase.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
AElementSnakeBase::AElementSnakeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}

// Called when the game starts or when spawned
void AElementSnakeBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElementSnakeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

