#include "BaseStat.h"
#include "PlayerStat.h"
#include "EnemyStat.h"

BaseStat::BaseStat(int HP, int MP, int Level, float AttackPoint, float DefensePoit, float MoveSpeed)
{
	this->HP = 0;
	this->MP = 0;
	this->Level = 0;
	this->AttackPoint = 0;
	this->DefensePoint = 0;
	this->MoveSpeed = 0;
}

BaseStat::~BaseStat()
{

}

void BaseStat::OnHit(BaseStat* Attacker)
{
	HP -= (int) ((Attacker->AttackPoint) - DefensePoint);
	if (HP <= 0)
	{
		OnDead(Attacker);
	}
}

void BaseStat::OnDead(BaseStat* Attacker)
{

}