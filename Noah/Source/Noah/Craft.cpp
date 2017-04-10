// Fill out your copyright notice in the Description page of Project Settings.

#include "Noah.h"
#include "Craft.h"


// Sets default values
ACraft::ACraft()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//xml추출 후 목록 생성

}

// Called when the game starts or when spawned
void ACraft::BeginPlay()
{
	Super::BeginPlay();

	//------------------------------ 임시 목록
	FCraftItemStruct _craft;
	FSimpleItemStruct _simple;
	_craft.itemIndex = 5;
	_craft.requireItemNum = 2;
	for (int i = 0; i < _craft.requireItemNum; i++) {
		_simple.itemIndex = 1+i;
		_simple.number = 3+i;
		_craft.requireItem.Add(_simple);
	}

	FCraftItemStruct _craft2;
	FSimpleItemStruct _simple2;
	_craft2.itemIndex = 6;
	_craft2.requireItemNum = 3;
	for (int i = 0; i < _craft2.requireItemNum; i++) {
		_simple2.itemIndex = 1 + i;
		_simple2.number = 3 + i;
		_craft2.requireItem.Add(_simple2);
	}

	FCraftItemStruct _craft3;
	FSimpleItemStruct _simple3;
	_craft3.itemIndex = 7;
	_craft3.requireItemNum = 4;
	for (int i = 0; i < _craft3.requireItemNum; i++) {
		_simple3.itemIndex = 2 + i;
		_simple3.number = 3 + i;
		_craft3.requireItem.Add(_simple3);
	}

	FCraftItemStruct _craft4;
	FSimpleItemStruct _simple4;
	_craft4.itemIndex = 8;
	_craft4.requireItemNum = 1;
	for (int i = 0; i < _craft4.requireItemNum; i++) {
		_simple4.itemIndex = 1 + i;
		_simple4.number = 10 + i;
		_craft4.requireItem.Add(_simple4);
	}

	FCraftItemStruct _craft5;
	FSimpleItemStruct _simple5;
	_craft5.itemIndex = 9;
	_craft5.requireItemNum = 5;
	for (int i = 0; i < _craft5.requireItemNum; i++) {
		_simple5.itemIndex = 2 + i;
		_simple5.number = 7 + i;
		_craft5.requireItem.Add(_simple5);
	}

	craftList.Add(_craft);
	craftList.Add(_craft2);
	craftList.Add(_craft3);
	craftList.Add(_craft4);
	craftList.Add(_craft5);
	//------------------------------------
}

// Called every frame
void ACraft::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

