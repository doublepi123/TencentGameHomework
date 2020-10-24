// Fill out your copyright notice in the Description page of Project Settings.


#include "TPSProject.h"

// Sets default values
ATPSProject::ATPSProject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComppmemt"));

	CollisionComponent->InitSphereRadius(15.0f);

	RootComponent = CollisionComponent;


	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementcomponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 3000.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bRotationRemainsVertical = true;
	ProjectileMovementComponent->Bounciness = 0.3f;
}

// Called when the game starts or when spawned
void ATPSProject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATPSProject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATPSProject::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

