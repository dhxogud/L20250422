#include <iostream>

#include "Singleton.h"

using namespace std;

int main()
{
	Singleton* S = Singleton::GetInstance();

	S->Tick();

	return 0;
}