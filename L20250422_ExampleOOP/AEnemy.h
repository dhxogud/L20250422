#pragma once
#include "AActor.h"
#include "Stat.h"

class AEnemy : public AActor
{
public:
	AEnemy();
	virtual ~AEnemy();
	void Initialize(Stat* Stat);
	void Drop();

protected:
	Stat* Stat;
};

