#pragma once
#include "AActor.h"
#include "PlayerStat.h"
#include "AEnemy.h"

class APlayer : public AActor
{
public:
	APlayer(PlayerStat* Stat);
	virtual ~APlayer();
	void Attack(AEnemy* Enemy);
	void OnHit(BaseStat* Attacker);

protected:
	PlayerStat* Stat;
};

