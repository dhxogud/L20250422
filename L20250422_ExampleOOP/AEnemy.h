#pragma once
#include "AActor.h"
#include "EnemyStat.h"
#include "APlayer.h"
class AEnemy : public AActor
{
public:
	AEnemy(EnemyStat* Stat);
	virtual ~AEnemy();
	void Attack(APlayer* Player);

protected:
	EnemyStat* Stat;
};

