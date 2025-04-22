#include <iostream>

#include "UWorld.h"
#include "AActor.h"
#include "APlayer.h"
#include "AEnemy.h"
#include "Stat.h"
#include "PlayerStat.h"

using namespace std;

int main()
{
	UWorld* MyWorld = new UWorld();

	APlayer* Player = new APlayer();
	AEnemy* Enemy = new AEnemy();


	Player->Initialize(new PlayerStat());
	Enemy->Initialize(new Stat());

	MyWorld->SpawnActor(Player);
	MyWorld->SpawnActor(Enemy);

	while (true)
	{
		MyWorld->Run();
	}

	delete MyWorld;
	MyWorld = nullptr;

	return 0;
}