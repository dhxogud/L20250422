#include "UWorld.h"
#include <iostream>
UWorld::UWorld()
{
	std::cout << "Hello World" << std::endl;
}

UWorld::~UWorld()
{
	std::cout << "Close World" << std::endl;
}

void UWorld::SpawnActor(AActor* SpawnedActor)
{
	Actors.push_back(SpawnedActor);
}

void UWorld::Run()
{
	for (auto Actor : Actors)
	{
		//Actor.Tick();
	}
}