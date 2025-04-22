#include "PlayerStat.h"
#include "EnemyStat.h"
#include <iostream>

PlayerStat::PlayerStat() : BaseStat(HP, MP, Level,AttackPoint, DefensePoint, MoveSpeed)
{
	Gold = 0;
	Exp = 0.0f;
}

PlayerStat::~PlayerStat()
{

}

void PlayerStat::GainReward(int Gold, float Exp)
{
	this->Gold += Gold;
	this->Exp += Exp;
}

void PlayerStat::OnDead(BaseStat* Attacker)
{
	std::cout << "Player »ç¸Á!" << std::endl;
}