// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <queue>
#include "GameFramework/Actor.h"
#include "Inventory.generated.h"


USTRUCT(BlueprintType)
struct FItemStruct { //������ ����ü
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int itemIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		int number;//����

	char namecode[100];
	char name[100];//�̸�
	char info[500];//����
	int lapseType;//�Ҹ�Ÿ��
	int itemType;//�Ϲ�/����
	int durability;//������
	int price;//����

	int att;//���ݷ�
	int hp;//ä����
	int weight;//�߷�
			//���� ������ �Ӽ� �߰�.
};

UCLASS(BlueprintType)
class NOAH_API AInventory : public AActor
{
	GENERATED_BODY(BlueprintType)
public:
	// Sets default values for this actor's properties
	AInventory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//=========================== �κ��丮 ==============================
	//����
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	TArray<FItemStruct> m_myInventory;	//�������� ���� �κ��丮 �迭
private:
	//GENERATED_BODY()

	int m_maxInvenSize;		//�ִ� ������ ������
	int m_currentInvenSize;	//���� ������ ������

	//�Լ�
public:
	//input
	UFUNCTION(BlueprintCallable, Category = "Inventory")
		bool AddItem(FItemStruct _item); //������ �߰�

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		bool RemoveItem(int _arrayIndex); //������ ����

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		bool SwapItemIndex(int _index, int _swapIndex); //������ ��ġ��ȯ

	UFUNCTION(BlueprintCallable, Category = "Inventory")
		void SortInventory();

private:
	void InitItem(FItemStruct *_item);
	//output
	//=========================== �κ��丮 ==============================
};
