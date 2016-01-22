// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "TheBeginning.h"
#include "Avatar.h"
#include "MyHUD.h"
#include "PickUpItem.h"
#include "FirstPersonProjectile.h"



// Sets default values
AAvatar::AAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAvatar::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AAvatar::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	//Super::SetupPlayerInputComponent(InputComponent);
	check(InputComponent);
	InputComponent->BindAxis("Forward", this, &AAvatar::MoveForward);
	InputComponent->BindAxis("Strafe", this, &AAvatar::MoveRight);
	InputComponent->BindAxis("Yaw", this, &AAvatar::Yaw);
	InputComponent->BindAxis("Pitch", this, &AAvatar::Pitch);
	InputComponent->BindAction("Inventory", IE_Pressed, this, &AAvatar::ToggleInventory);
	InputComponent->BindAction("MouseClickedLMB", IE_Pressed, this,&AAvatar::MouseClicked);
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	GetCharacterMovement()->GetNavAgentPropertiesRef().bCanCrouch = true;
	InputComponent->BindAction("Crouch", IE_Pressed, this, &AAvatar::StartCrouch);
	InputComponent->BindAction("Crouch", IE_Released, this, &AAvatar::StopCrouch);
	InputComponent->BindAction("Fire", IE_Pressed, this, &AAvatar::OnFire);
	
	
	

}
void AAvatar::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		const FRotator SpawnRotation = GetControlRotation();
		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		const FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			// spawn the projectile at the muzzle
			World->SpawnActor<AFirstPersonProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		}
	}

	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	/*if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
	*/
}


void AAvatar::StartCrouch(){
	Crouch();
}
void AAvatar::StopCrouch(){
	UnCrouch();
}
void AAvatar::MoveRight(float amount)
{

		FVector right = GetActorRightVector();
		AddMovementInput(right, amount);
	
}

void AAvatar::MoveForward(float amount){
	   
	   
	   FVector fwd = GetActorForwardVector();
	   AddMovementInput(fwd, amount);
} 

void AAvatar::MoveBackward(float amount){
	FVector bwd = -GetActorForwardVector();
	AddMovementInput(bwd, amount);

}
void AAvatar::Yaw(float amount)
{
	
	if (inventoryShowing)
	{// pass the input to the HUD
		APlayerController* PController = GetWorld() ->GetFirstPlayerController();
		AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());
		hud->MouseMoved();
		return;
		// when my inventory is showing,
		// player can't move
	}else
	{
		AddControllerYawInput(200.f*amount * GetWorld()->GetDeltaSeconds());
	}
}
void AAvatar::Pitch(float amount){
	if (inventoryShowing)
	{// pass the input to the HUD
		APlayerController* PController = GetWorld()->GetFirstPlayerController();
		AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());
		hud->MouseMoved();
		return;
		// when my inventory is showing,
		// player can't move
	}
	else
	{
		AddControllerPitchInput(200.f*amount * GetWorld()->GetDeltaSeconds());
	}
}
void AAvatar::ToggleInventory()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 10.f, FColor::Red, "Showing inventory…" );
	}
	// Get the controller & hud
	APlayerController* PController = GetWorld() ->GetFirstPlayerController();
	AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());
	// If inventory is displayed, undisplay it.
	if (inventoryShowing)
	{
		hud->clearWidgets();
		inventoryShowing = false;
		PController->bShowMouseCursor = false;
		return;
	}
	// Otherwise, display the player's inventory
	inventoryShowing = true;
	PController->bShowMouseCursor = true;
	for (TMap<FString, int>::TIterator it = Backpack.CreateIterator(); it;
		++it)
	{
		// Combine string name of the item, with qty eg Cow x 5
		FString fs = it->Key + FString::Printf(TEXT(" x %d"), it ->Value);
		
		UTexture2D* tex;
		if (Icons.Find(it->Key))
		{
			tex = Icons[it->Key];
			hud->addWidget(Widget(Icon(fs, tex)));
		}
		}
}
void AAvatar::Pickup(APickUpItem *item)
{
	if (Backpack.Find(item->Name))
	{
		// the item was already in the pack.. increase qty of it
		Backpack[item->Name] += item->Quantity;
	}
	else
	{
		// the item wasn't in the pack before, add it in now
		Backpack.Add(item->Name, item->Quantity);
		// record ref to the tex the first time it is picked up
		Icons.Add(item->Name, item->Icon);
	}
}
void AAvatar::MouseClicked()
{
	APlayerController* PController = GetWorld() ->GetFirstPlayerController();
	AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());
	hud->MouseClicked();
}

void AAvatar::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust){

}

void AAvatar::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust){

}