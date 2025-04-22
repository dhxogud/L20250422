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

//c++ style
void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}


int main()
{
	/*int A = 10;
	int B = 20;
	Swap(A, B);
	cout << A << endl;
	cout << B << endl;*/

	AInventory* Inventory = new AInventory();

	Inventory->AddItem(new ASweetFish());
	Inventory->AddItem(new ABranch());
	Inventory->AddItem(new AMilk());
	Inventory->AddItem(new AHerb());

	Inventory->GetAllItems();
	/*AGalricMilk GalricMilk;
	//Milk.Use(); ���� ����� �� �������� �����ִ� �ڵ�*/

	// ���̳��� ĳ����
	AItem* MyItem = new ABranch();

	AGalric* Galric = dynamic_cast<AGalric*>(MyItem); // ĳ���� �����ϸ� Galric�� �Ҵ��� ���°�, �ƴϸ� nullptr���� �Ҵ��
	if (Galric)
	{
		Galric->Smell();
	}
	else
	{
		cout << "���� ĳ���� ����!" << endl;
		cout << Galric << endl;
	}

	// C++ + define language => UHT -> UE + C++ -> VS (�߰��� ��Ʈ��ũ�� �ʿ�)
	// ���÷����� C#, Java ���� �⺻������ ������������
	// C++�� ���÷����� ����. �׷��� C++�� ����� �𸮾� ������ �׷�?
	// ���� �����, �׷��� �����
	// �� �����̴�. ��Ÿ ������, C++
	delete Inventory;
	Inventory = nullptr;

	return 0;
}