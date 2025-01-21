#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "GKitGizmo.generated.h"

UCLASS(BlueprintType,Blueprintable)
class GKIT_API AGKitGizmo : public AActor
{
	GENERATED_BODY()
	
public:	
	AGKitGizmo(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY()
	UBillboardComponent* SpriteComponent;
};
