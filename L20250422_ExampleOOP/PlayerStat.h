#pragma once
#include "Stat.h"
class PlayerStat : public Stat
{
public:
	PlayerStat();
	virtual ~PlayerStat();
	void KilledEnemy(Stat* Enemy);

protected:
	int Gold;
	float Exp;
};

