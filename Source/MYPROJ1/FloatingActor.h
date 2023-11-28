// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class MYPROJ1_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* VisualMesh;
	//StaticMeshComponent，它将担当对象的视觉表示。使用 UProperty 宏，这使它在虚幻编辑器中可见

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
