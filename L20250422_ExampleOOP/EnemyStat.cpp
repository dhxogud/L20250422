#include "EnemyStat.h"
#include "BaseStat.h"
#include "PlayerStat.h"
#include <iostream>

EnemyStat::EnemyStat() : BaseStat(HP, MP, Level, AttackPoint, DefensePoint, MoveSpeed)
{
	Gold = 0;
	Exp = 0.0f;
}
EnemyStat::~EnemyStat()
{

}

void EnemyStat::OnDead(BaseStat* Attacker)
{
	PlayerStat* Player = dynamic_cast<PlayerStat*>(Attacker);
	Player->GainReward(this->Gold, this->Exp);
}
