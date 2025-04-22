#include "PlayerStat.h"


PlayerStat::PlayerStat()
{
	Gold = 0;
	Exp = 0.0f;
}
PlayerStat::~PlayerStat()
{

}

void PlayerStat::KilledEnemy(Stat* Enemy)
{
	Exp += 1.1f;
	Gold += 10;
}