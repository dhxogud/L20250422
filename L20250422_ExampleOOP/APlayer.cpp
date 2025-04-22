#include "APlayer.h"
#include "PlayerStat.h"

APlayer::APlayer()
{
	Shape = 'P';
}
APlayer::~APlayer()
{

}
void APlayer::Initialize(PlayerStat* Stat)
{
	this->Stat = Stat;
}