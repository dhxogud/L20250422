#pragma once

#include <vector>

class AActor;

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();
	void SpawnActor(AActor* SpawnedActor);
	void Run();

protected:
	std::vector<AActor*> Actors;
};

