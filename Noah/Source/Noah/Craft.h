// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Craft.generated.h"

USTRUCT(BlueprintType)
struct FSimpleItemStruct {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftSimpleItem")
		int itemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CraftSimpleItem")
		int number;
};

USTRUCT(BlueprintType)
struct FCraftItemStruct { //제작 구조체
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int itemIndex;//아이템

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int requireItemNum;//요구 종류 갯수

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		TArray<FSimpleItemStruct> requireItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int price;//가격
};

UCLASS()
class NOAH_API ACraft : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACraft();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//제작
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		TArray<FCraftItemStruct> craftList;
};
