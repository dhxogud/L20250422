#pragma once

#include "BaseStat.h"

class EnemyStat : BaseStat
{
public:
	EnemyStat();
	virtual ~EnemyStat();
	void OnDead(BaseStat* Attacker) override;
	void Drop();
protected:
	int Gold;
	float Exp;
};

