// Fill out your copyright notice in the Description page of Project Settings.

#include "Noah.h"
#include "Inventory.h"

// Sets default values
AInventory::AInventory()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_maxInvenSize = 24;
	m_currentInvenSize = 0;


	//�κ��丮 �ʱ�ȭ
	//�ʱ�ȭ ������
	FItemStruct item;
	InitItem(&item);
	
	//�κ��丮 ������ ���� ����
	for (int i = 0; i < m_maxInvenSize; i++) {
		m_myInventory.Add(item);
	}

}

void AInventory::InitItem(FItemStruct *_item) {
	_item->itemIndex = -1;
	_item->number = -1;
}

// Called when the game starts or when spawned
void AInventory::BeginPlay()
{

	Super::BeginPlay();

}

// Called every frame
void AInventory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//������ �߰�
bool AInventory::AddItem(FItemStruct _item)
{
	//���� �������� ������ ���� �߰�. 99�� �̻��̸� ���θ���
	for (int i = 0; i < m_maxInvenSize; i++) {
		if (m_myInventory[i].itemIndex == _item.itemIndex) {
			m_myInventory[i].number += _item.number;
			return true;
		}
	}

	//�������� ������� ��� �߰�. �׷��� ������ return false
	for (int i = 0; i < m_maxInvenSize; i++) {
		if (m_myInventory[i].itemIndex == -1) {
			m_myInventory[i] = _item;
			return true;
		}
	}

	return false;
}

//������ ����
bool AInventory::RemoveItem(int _arrayIndex)
{
	//����ó��
	if (_arrayIndex < 0 || _arrayIndex >= m_maxInvenSize) return false;

	//�ʱ�ȭ
	m_myInventory[_arrayIndex].itemIndex = -1;

	return true;
}

bool AInventory::SwapItemIndex(int _arrayIndex, int _swapIndex)
{
	//����ó��
	if (_arrayIndex < 0 || _arrayIndex >= m_maxInvenSize ||
		_swapIndex < 0 || _swapIndex >= m_maxInvenSize) return false;

	FItemStruct tempItem;

	tempItem = m_myInventory[_arrayIndex];
	m_myInventory[_arrayIndex] = m_myInventory[_swapIndex];
	m_myInventory[_swapIndex] = tempItem;

	//UE_LOG(LogTemp, Warning, TEXT("%d"), m_myInventory.Max());

	return true;
}

//�κ��丮 ����
void AInventory::SortInventory()
{
	//C++ STL Queue http://www.cplusplus.com/reference/queue/queue/
	std::queue<int> tempSlot;
	
	for (int i = 0; i < m_maxInvenSize; i++) {
		if (m_myInventory[i].itemIndex == -1) {
			tempSlot.push(i);
		}
		else if(!tempSlot.empty()){
			SwapItemIndex(i, tempSlot.front());
			tempSlot.pop();
			tempSlot.push(i);
		}
	}
}