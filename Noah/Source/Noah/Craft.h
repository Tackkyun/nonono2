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
struct FCraftItemStruct { //���� ����ü
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int itemIndex;//������

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int requireItemNum;//�䱸 ���� ����

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		TArray<FSimpleItemStruct> requireItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int price;//����
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

	//����
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		TArray<FCraftItemStruct> craftList;
};
