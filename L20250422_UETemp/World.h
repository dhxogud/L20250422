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
	//vector ��ü�����ؼ� ��������, reference �����ؼ� �����... vector<AActor*>& ����
protected:
	//[][][][][][][][][][]
	std::vector<AActor*> Actors;
};

