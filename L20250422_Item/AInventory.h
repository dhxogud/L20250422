#pragma once
#include <vector>
#include "AItem.h"

class AItem;

class AInventory
{
public:
	AInventory();
	virtual ~AInventory();

	inline std::vector<AItem*> GetAllItems()
	{
		return Items;
	}

	//void Open();
	//void Close(); ���� ��� �̹����� ������ �̰� �н�,, ������ ��Ī�� �´µ�?
	
	void AddItem(AItem* InItem);

	void UseItem(int Index)
	{
		Items[Index]->Use();
	}

protected:
	std::vector<AItem*> Items;

};

//Inventory has a Milk;
//Inventory has a SweetFish;
//Inventory has a Herb;
//Inventory has a Branch;

//�߻�ȭ (�θ� Ŭ����)

