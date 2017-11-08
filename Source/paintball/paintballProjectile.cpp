// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "paintballProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

ApaintballProjectile::ApaintballProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &ApaintballProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 1000.f;
	ProjectileMovement->MaxSpeed = 1000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void ApaintballProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		Destroy();
	}
}
TArray<int> ApaintballProjectile::setArray(TArray<int> IntArray, float size, int index)
{
	
	IntArray[index] = 1;
	if (size > 1) {
		
		IntArray[index - 1] = 1;
		IntArray[index + 1] = 1;
		if(index+32<1024){ 
			IntArray[index + 32] = 1; 
		}
		if(index-32>=0){
			IntArray[index - 32] = 1; }
	}
	if (size > 2) {
		if (index + 31<1024) {
			IntArray[index + 31] = 1; }
		if (index + 33 <1024) {
			IntArray[index + 33] = 1; }
		if (index - 31>=0) {
			IntArray[index - 31] = 1; }
		if (index - 33 >= 0) {
			IntArray[index - 33] = 1; }
	}
	return IntArray;
}
float ApaintballProjectile::setProgress(TArray<int> IntArray) {
	float progress = 0.0f;
	for (int i = 0; i < 1024; i++) {
		if (IntArray[i] == 1) {
			progress += 0.14f;
		}
	}
	return progress;
}
