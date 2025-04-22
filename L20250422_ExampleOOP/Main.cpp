#include <iostream>

#include "UWorld.h"
#include "AActor.h"


using namespace std;

int main()
{
	UWorld* MyWorld = new UWorld();

	
	delete MyWorld;
	MyWorld = nullptr;

	return 0;
}