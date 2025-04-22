#include <iostream>

#include "AEnemy.h"
#include "Stat.h"


AEnemy::AEnemy()
{
	Shape = 'E';
}

AEnemy::~AEnemy()
{
	
}

void AEnemy::Initialize(class Stat* Stat)
{
	this->Stat = Stat;
}