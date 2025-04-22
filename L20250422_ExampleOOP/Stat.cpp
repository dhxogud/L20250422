#include "Stat.h"
#include "PlayerStat.h"
#include <iostream>

Stat::Stat()
{
	this->HP = 0;
	this->MP = 0;
	this->Level = 0;
	this->AttackPoint = 0;
	this->DefensePoint = 0;
	this->MoveSpeed = 0;
}
Stat::~Stat()
{

}

void Stat::OnHit(Stat* Attacker)
{
	HP -= (int) ((Attacker->AttackPoint) - DefensePoint);
	if (HP <= 0)
	{
		OnDead(Attacker);
	}
}
void Stat::OnDead(Stat* Attacker)
{
	PlayerStat* Player = dynamic_cast<PlayerStat*>(Attacker);
	if (Player != nullptr)
	{
		//this.Drop();
		Player->KilledEnemy(this);
	}
	else
	{
		std::cout << "Player »ç¸Á!" << std::endl;
	}
}