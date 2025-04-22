#pragma once
#include "AActor.h"
#include "PlayerStat.h"

class APlayer : public AActor
{
public:
	APlayer();
	virtual ~APlayer();
	void Initialize(PlayerStat* Stat);

protected:
	PlayerStat* Stat;
};

