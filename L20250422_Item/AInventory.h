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
	//void Close(); 아직 띄울 이미지가 없으니 이건 패스,, 원래는 용칭이 맞는듯?
	
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

//추상화 (부모 클래스)

