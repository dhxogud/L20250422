#include <iostream>
#include "AInventory.h"
#include "AItem.h"
#include "ASweetFish.h"
#include "ABranch.h"
#include "AMilk.h"
#include "AHerb.h"
#include "AGalric.h"
#include "AGalricMilk.h"


using namespace std;

int main()
{
	AInventory* Inventory = new AInventory();

	Inventory->AddItem(new ASweetFish());
	Inventory->AddItem(new ABranch());
	Inventory->AddItem(new AMilk());
	Inventory->AddItem(new AHerb());

	/*AGalricMilk GalricMilk;
	Milk.Use(); ���� ����� �� �������� �����ִ� �ڵ�*/


	Inventory->GetAllItems();

	delete Inventory;
	Inventory = nullptr;

	return 0;
}