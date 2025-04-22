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
	//Milk.Use(); 다중 상속이 왜 문제인지 보여주는 코드*/

	// 다이나믹 캐스팅
	AItem* MyItem = new ABranch();

	AGalric* Galric = dynamic_cast<AGalric*>(MyItem); // 캐스팅 성공하면 Galric에 할당이 될태고, 아니면 nullptr값이 할당됨
	if (Galric)
	{
		Galric->Smell();
	}
	else
	{
		cout << "갈릭 캐스팅 실패!" << endl;
		cout << Galric << endl;
	}

	// C++ + define language => UHT -> UE + C++ -> VS (중간에 네트워크도 필요)
	// 리플렉션은 C#, Java 에선 기본적으로 제공해주지만
	// C++은 리플렉션이 없다. 그런데 C++이 기반인 언리얼 엔진은 그럼?
	// 직접 만들어, 그래서 어려움
	// 넌 마늘이다. 메타 데이터, C++
	delete Inventory;
	Inventory = nullptr;

	return 0;
}