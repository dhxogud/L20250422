#include <iostream>

#include "UWorld.h"
#include "AActor.h"
#include "APlayer.h"
#include "AEnemy.h"
#include "BaseStat.h"
#include "EnemyStat.h"
#include "PlayerStat.h"

using namespace std;

int main()
{
	UWorld* MyWorld = new UWorld();


	/*APlayer* Player = new APlayer();
	AEnemy* Enemy = new AEnemy();*/


	

	/*MyWorld->SpawnActor(Player);
	MyWorld->SpawnActor(Enemy);*/

	while (true)
	{
		MyWorld->Run();
	}

	delete MyWorld;
	MyWorld = nullptr;

	return 0;
}