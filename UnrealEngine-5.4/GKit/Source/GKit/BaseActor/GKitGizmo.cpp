#include "GKitGizmo.h"

AGKitGizmo::AGKitGizmo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	
	USceneComponent* SceneComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this,TEXT("SceneComp"));
	RootComponent = SceneComponent;
	RootComponent->Mobility = EComponentMobility::Static;

#if WITH_EDITORONLY_DATA
	SpriteComponent = ObjectInitializer.CreateDefaultSubobject<UBillboardComponent>(this,TEXT("Sprite"));
	if(SpriteComponent)
	{
		FString TextureResource;
		FString Temp;
		GetPathName().Split(".",&TextureResource,&Temp);
		TextureResource = TextureResource + TEXT("_Sprite");
		FSoftObjectPath ObjectPath(TextureResource);
		if(ObjectPath.IsValid())
		{
			SpriteComponent->Sprite = ConstructorHelpers::FObjectFinderOptional<UTexture2D>(*TextureResource).Get();
		}
		else
		{
			SpriteComponent->Sprite = ConstructorHelpers::FObjectFinderOptional<UTexture2D>(TEXT("/Engine/EditorResources/EmptyActor")).Get();
		}
		SpriteComponent->SpriteInfo.Category = "Notes";
		SpriteComponent->AttachToComponent(RootComponent,FAttachmentTransformRules::KeepWorldTransform);
		SpriteComponent->Mobility = EComponentMobility::Static;
	}
#endif
}

void AGKitGizmo::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGKitGizmo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

