#include "APlayer.h"
#include "PlayerStat.h"

APlayer::APlayer(PlayerStat* Stat) : AActor(Shape)
{
	this->Shape = Shape;
	this->Stat = Stat;
}
APlayer::~APlayer()
{

}

void APlayer::Attack(AEnemy* Enemy)
{
	Enemy->OnHit(Stat);
}

void APlayer::OnHit(BaseStat* Attacker)
{

}