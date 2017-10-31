// Fill out your copyright notice in the Description page of Project Settings.

#include "ColorCapture.h"


// Sets default values
AColorCapture::AColorCapture()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AColorCapture::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AColorCapture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AColorCapture::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AColorCapture::Shoot() {
	FVector target = FVector(0.0f, 0.0f, 0.0f);
	FVector currPos = GetActorLocation();
	// Attempt to fire a projectile.
	//if (ProjectileClass)
	//{
	//	// Get the camera transform.
	//	FVector CameraLocation;
	//	FRotator CameraRotation;
	//	GetActorEyesViewPoint(CameraLocation, CameraRotation);

	//	// Transform MuzzleOffset from camera space to world space.
	//	//FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
	//	//FRotator MuzzleRotation = CameraRotation;
	//	// Skew the aim to be slightly upwards.
	//	//MuzzleRotation.Pitch += 10.0f;
	//	UWorld* World = GetWorld();
	//	if (World)
	//	{
	//		FActorSpawnParameters SpawnParams;
	//		SpawnParams.Owner = this;
	//		SpawnParams.Instigator = Instigator;
	//		// Spawn the projectile at the muzzle.
	//		AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, CameraLocation, CameraRotation, SpawnParams);
	//		if (Projectile)
	//		{
	//			// Set the projectile's initial trajectory.
	//			FVector LaunchDirection = CameraRotation.Vector();
	//			Projectile->FireInDirection(LaunchDirection);
	//		}
	//	}
	//}
	/*
	FTexture2DMipMap* mipMap0 = &Texture->PlatformData->Mips[0];
	FByteBulkData* raw = &mipMap0->BulkData;
	auto mipData = static_cast<FColor*>(raw->Lock(LOCK_READ_ONLY));

	INT32 TextureWidth = mipMap0->SizeX, TextureHeight = mipMap0->SizeY;
	for (int y = 0; y < TextureHeight; ++y)
	{
		for (int x = 0; x < TextureWidth; ++x)
		{
			auto str = mipData[y*TextureWidth + x].ToString();
			UE_LOG(BabylonLog, Display, _T("%s"), *str);
		}
	}
	raw->Unlock();
	*/
	
}

