#pragma once
#include <string>
#include <vector>
#include "AActor.h"

class UWorld
{
public:
	UWorld();
	virtual ~UWorld();
	void Load(std::string fileName = "level01.map");
	void Tick();
	void Render();
	void SpawnActor(AActor* NewActor);
	void DestroyActor(AActor* DestroyedActor);
	std::vector<AActor*>& GetAllActors();
	//vector 전체복사해서 주지말고, reference 참조해서 쓰라고... vector<AActor*>& 붙임
protected:
	//[][][][][][][][][][]
	std::vector<AActor*> Actors;
};

