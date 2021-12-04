// Fill out your copyright notice in the Description page of Project Settings.


#include "PaintProjectile.h"

// Sets default values
APaintProjectile::APaintProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
	}
	if (!CollisionComponent)
	{
		//Créé un collider en forme de sphère
		CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
		// Change la valeur du rayon
		CollisionComponent->InitSphereRadius(15.0f);
		RootComponent = CollisionComponent;

		if (!ProjectileMovementComponent)
		{
			//Assigne les valeurs initiales du composant ProjectileMovement
			ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
			ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
			ProjectileMovementComponent->InitialSpeed = 3000.0f;
			ProjectileMovementComponent->MaxSpeed = 3000.0f;
			ProjectileMovementComponent->bRotationFollowsVelocity = true;
			ProjectileMovementComponent->bShouldBounce = true;
			ProjectileMovementComponent->Bounciness = 0.3f;
			ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
		}
	}

}

// Called when the game starts or when spawned
void APaintProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaintProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}