#include "AInventory.h"


AInventory::AInventory()
{

}
AInventory::~AInventory()
{

}
void AInventory::AddItem(AItem* InItem)
{
	if (InItem)
	{
		Items.push_back(InItem);
	}
}