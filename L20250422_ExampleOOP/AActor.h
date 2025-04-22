#pragma once
#include "FVector2D.h"

class AActor
{
protected:
	char Shape;
	FVector2D Location;

public:
	AActor();
	virtual ~AActor();
	void Tick();
	void AddRelativeLocation(FVector2D Delta);

};

