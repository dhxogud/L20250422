#include <iostream>

#include "AEnemy.h"
#include "EnemyStat.h"

AEnemy::AEnemy(EnemyStat* Stat) : AActor(Shape)
{
	this->Shape = Shape;
	this->Stat = Stat;
}

AEnemy::~AEnemy()
{
	
}

void AEnemy::Attack(APlayer* Player)
{

}

void AEnemy::OnHit(BaseStat* Attacker)
{

}