// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROOMESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
	UPROPERTY(EditAnywhere)
		float OpenTime;
	UPROPERTY(EditAnywhere)
		AActor* PressurePlate;
	UPROPERTY(EditAnywhere)
		float OpenAngle;
	UPROPERTY(EditAnywhere)
		float MassThreshold;

	float OpenDoorTimer = 0.f;
	void OpenDoor();
	void CloseDoor();
	float CheckPressurePlateWeight();
		
	
};
